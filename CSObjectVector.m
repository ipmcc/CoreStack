/*
 
 CoreStack v1.0 : CSObjectVector.m
 
 Copyright (c) 2010 Adam Wright
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 
 */

#import "CoreStackConstants.h"
#import "CSObjectVector.h"
#import "CSSite.h"
#import "CSObject.h"

@implementation CSObjectVector

- (id)initWithObjectClass:(Class)clss forVectorKey:(NSString*)key
{
    self = [super init];
    
    if (self)
    {
        objectClass = clss;
        vectorKey = [key retain];
        
        contents = [[NSMutableArray alloc] init];
    }
    
    return self;
}

- (id)initWithCoder:(NSCoder *)aDecoder
{
    self = [super init];
    
    if (self)
    {
        objectClass = *((Class *)[aDecoder decodeBytesForKey:@"class" returnedLength:nil]);
        vectorKey = [[aDecoder decodeObjectForKey:@"vectorKey"] retain];
        contents = [[aDecoder decodeObjectForKey:@"contents"] retain];
    }
    
    return self;
}

- (id)initWithObjectVector:(CSObjectVector*)other throughFilterObject:(id)filterObject withFilter:(SEL)filterSelector
{
    self = [super init];
    
    if (self)
    {
        objectClass = other->objectClass;
        vectorKey = [other->vectorKey retain];
        contents = [[NSMutableArray alloc] init];
        
        for (id obj in other->contents)
        {
            if ([[filterObject performSelector:filterSelector withObject:obj] boolValue])
                [contents addObject:obj];
        }
    }
    
    return self;
}

- (id)initAsEmpty
{
    self = [super init];
    
    if (self)
        contents = [[NSMutableArray alloc] init];
    
    return self;
}

- (void)dealloc
{
    [vectorKey release];
    [contents release];
    
    [super dealloc];
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeBytes:(const void *)&objectClass length:sizeof(Class) forKey:@"class"];
    [aCoder encodeObject:vectorKey forKey:@"vectorKey"];
    [aCoder encodeObject:contents forKey:@"contents"];   
}

- (BOOL)fillWithJSON:(id)json error:(NSError**)error
{
    [contents removeAllObjects];
    
    NSArray *jsonElements = [json objectForKey:vectorKey];
    
    if (!jsonElements)
    {
        if (*error)
            *error = [NSError errorWithDomain:CS_ERROR_DOMAIN code:CS_ERROR_FORMAT_ERROR userInfo:nil];
        
        return FALSE;
    }
    
    for (id elementJson in jsonElements)
    {
        id element = [[[objectClass alloc] init] autorelease];
        [element updateFromJSON:elementJson error:error];
        
        if (!element)
            return FALSE;
        
        [contents addObject:element];
    }
    
    return TRUE;
}

- (id)first
{
    if ([contents count] > 0)
        return [contents objectAtIndex:0];
    return nil;
}

- (id)objectAtIndex:(int)index
{
    return [contents objectAtIndex:index];
}

- (int)count
{
    return [contents count];
}

- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state objects:(id *)stackbuf count:(NSUInteger)len
{
    return [contents countByEnumeratingWithState:state objects:stackbuf count:len];
}

- (void)sortUsingDescriptor:(NSSortDescriptor*)desc
{
    [self sortUsingDescriptors:[NSArray arrayWithObject:desc]];
}

- (void)sortUsingDescriptors:(NSArray*)descs
{
    [contents sortUsingDescriptors:descs];
}

@end

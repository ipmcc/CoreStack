/*
 
 CoreStack v1.0 : CSObject.m
 
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

#import "CSObject.h"


@implementation CSObject

// CS objects cannot provide requests, as this is the hierarchy root
+ (CSRequestParams*)requestParamsForObjectsWithIdentifiers:(NSArray*)idents
{
    return nil;
}

+ (CSRequestParams*)requestParamsForObjectWithIdentifier:(int)ident
{
    return nil;
}

- (id)initWithCoder:(NSCoder *)decoder
{
    self = [super init];
    
    return self;
}

- (void)encodeWithCoder:(NSCoder *)encoder
{
    // The root CS object has nothing to code
}

- (BOOL)updateFromJSON:(id)json error:(NSError**)error
{
    // The root CS object has nothing to decode from JSON
    return YES;
}

@end

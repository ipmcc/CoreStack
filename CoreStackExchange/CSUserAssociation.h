/*
 
 CoreStack v1.0 : CSUserAssociation.h
 
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
#import "CSUser.h"
#import "CSSiteDescriptor.h"

@interface CSUserAssociation : CSObject
{
    int user_id;
    CSUserType user_type;
    NSString *display_name;
    int reputation;
    CSSiteDescriptor *on_site;
    NSString *email_hash;
}

@property (nonatomic,readonly) int user_id;
@property (nonatomic,readonly) CSUserType user_type;
@property (nonatomic,readonly) NSString *display_name;
@property (nonatomic,readonly) int reputation;
@property (nonatomic,readonly) CSSiteDescriptor *on_site;
@property (nonatomic,readonly) NSString *email_hash;

@end

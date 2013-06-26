/*
 
 CoreStack v1.0 : CSComment.h
 
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


#import "CSIdentifiedObject.h"
#import "CSUserDescription.h"
#import "CSPost.h"

@interface CSComment : CSIdentifiedObject {
    NSDate *creation_date;
    CSUserDescription *owner;    
    CSUserDescription *reply_to_user;    
    int post_id;
    CSPostType post_type;
    int score;
    int edit_count;
    NSString *body;    
}

@property (nonatomic,readonly) NSDate *creation_date;
@property (nonatomic,readonly) CSUserDescription *owner;    
@property (nonatomic,readonly) CSUserDescription *reply_to_user;    
@property (nonatomic,readonly) int post_id;
@property (nonatomic,readonly) CSPostType post_type;
@property (nonatomic,readonly) int score;
@property (nonatomic,readonly) int edit_count;
@property (nonatomic,readonly) NSString *body;

- (NSString*)decodedBody;

@end

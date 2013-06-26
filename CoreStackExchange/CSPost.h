/*
 
 CoreStack v1.0 : CSPost.h
 
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
#import "CSObjectVector.h"

typedef enum
{
    CSPostTypeUnknown,
    CSPostTypeQuestion,
    CSPostTypeAnswer
} CSPostType;

@interface CSPost : CSIdentifiedObject
{
    NSDate *locked_date;
    CSUserDescription *owner;
    NSDate *creation_date;
    NSDate *last_edit_date;
    NSDate *last_activity_date;
    int up_vote_count;
    int down_vote_count;
    int view_count;
    int score;
    BOOL community_owned;
    NSString *title;
    NSString *body;
    CSObjectVector *comments;
}

@property (nonatomic,readonly) NSDate *locked_date;
@property (nonatomic,readonly) CSUserDescription *owner;
@property (nonatomic,readonly) NSDate *creation_date;
@property (nonatomic,readonly) NSDate *last_edit_date;
@property (nonatomic,readonly) NSDate *last_activity_date;
@property (nonatomic,readonly) int up_vote_count;
@property (nonatomic,readonly) int down_vote_count;
@property (nonatomic,readonly) int view_count;
@property (nonatomic,readonly) int score;
@property (nonatomic,readonly) BOOL community_owned;
@property (nonatomic,readonly) NSString *title;
@property (nonatomic,readonly) NSString *body;
@property (nonatomic,readonly) CSObjectVector *comments;

- (CSPostType)post_type;

@end

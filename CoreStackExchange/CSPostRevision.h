/*
 
 CoreStack v1.0 : CSPostRevision.h
 
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
#import "CSUserDescription.h"

typedef enum
{
    CSPostRevisionSingleUser,
    CSPostRevisionVoteBased,
    CSPostRevisionUnknown
} CSPostRevisionType;

@interface CSPostRevision : CSObject
{
    NSString *body; // Optional
    NSString *comment; // Not optional
    NSDate *creation_date; // Not optional
    BOOL is_question; // Not optional    
    BOOL is_rollback; // Not optional
    NSString *last_body; // Optional
    NSString *last_title; // Optional
    NSArray *last_tags; // Optional
    NSString *revision_guid; // Not optional
    int revision_number; // Optional
    NSArray *tags; // Optional
    NSString *title; // Optional
    CSPostRevisionType revision_type; // Not optional
    BOOL set_community_wiki; // Not optional
    CSUserDescription *user; // Optional
    int post_id; // Not optional
}

@property (nonatomic,readonly) NSString *body; // Optional
@property (nonatomic,readonly) NSString *comment; // Not optional
@property (nonatomic,readonly) NSDate *creation_date; // Not optional
@property (nonatomic,readonly) BOOL is_question; // Not optional    
@property (nonatomic,readonly) BOOL is_rollback; // Not optional
@property (nonatomic,readonly) NSString *last_body; // Optional
@property (nonatomic,readonly) NSString *last_title; // Optional
@property (nonatomic,readonly) NSArray *last_tags; // Optional
@property (nonatomic,readonly) NSString *revision_guid; // Not optional
@property (nonatomic,readonly) int revision_number; // Optional
@property (nonatomic,readonly) NSArray *tags; // Optional
@property (nonatomic,readonly) NSString *title; // Optional
@property (nonatomic,readonly) CSPostRevisionType revision_type; // Not optional
@property (nonatomic,readonly) BOOL set_community_wiki; // Not optional
@property (nonatomic,readonly) CSUserDescription *user; // Optional
@property (nonatomic,readonly) int post_id; // Not optional

@end

/*
 
 CoreStack v1.0 : CSQuestion.h
 
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


#import "CSPost.h"
#import "CSPostMigrationInfo.h"
#import "CSObjectVector.h"

@interface CSQuestion : CSPost {
    NSArray *tags;
    int answer_count;
    CSObjectVector *answers;
    int accepted_answer_id;
    int favorite_count;
    NSDate *bounty_closes_date;
    int bounty_amount;
    NSDate *closed_date;
    NSString *closed_reason;
    NSDate *protected_date;
    CSPostMigrationInfo *migrated;
    NSString *question_timeline_url;
    NSString *question_comments_url;
    NSString *question_answers_url;
}

+ (CSRequestParams*)requestParamsForUserFavorites:(int)userID;
+ (CSRequestParams*)requestParamsForQuestions;
+ (CSRequestParams*)requestParamsForQuestionsWithSortOrder:(CSQuestionSortOrder)sortOrder;

@property (nonatomic,readonly) NSArray *tags;
@property (nonatomic,readonly) int answer_count;
@property (nonatomic,readonly) CSObjectVector *answers;
@property (nonatomic,readonly) int accepted_answer_id;
@property (nonatomic,readonly) int favorite_count;
@property (nonatomic,readonly) NSDate *bounty_closes_date;
@property (nonatomic,readonly) int bounty_amount;
@property (nonatomic,readonly) NSDate *closed_date;
@property (nonatomic,readonly) NSString *closed_reason;
@property (nonatomic,readonly) NSDate *protected_date;
@property (nonatomic,readonly) CSPostMigrationInfo *migrated;
@property (nonatomic,readonly) NSString *question_timeline_url;
@property (nonatomic,readonly) NSString *question_comments_url;
@property (nonatomic,readonly) NSString *question_answers_url;

- (CSRequestParams*)requestParamsForAnswers;
- (CSRequestParams*)requestParamsForComments;
- (CSRequestParams*)requestParamsForTimeline;

@end

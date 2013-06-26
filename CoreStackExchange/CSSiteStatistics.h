/*
 
 CoreStack v1.0 : CSSiteStatistics.h
 
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
#import "CSSiteDescriptor.h"

@interface CSSiteStatistics : CSObject
{
    // No fields are optional in this object
    int total_questions;
    int total_unanswered;
    int total_accepted;
    int total_answers;
    int total_comments;
    int total_votes;
    int total_badges;
    int total_users;
    double questions_per_minute;
    double answers_per_minute;
    double badges_per_minute;
    double views_per_day;
    NSString *api_version;
    NSString *api_revision;
    CSSiteDescriptor *site;
}

@property (nonatomic,readonly) int total_questions;
@property (nonatomic,readonly) int total_unanswered;
@property (nonatomic,readonly) int total_accepted;
@property (nonatomic,readonly) int total_answers;
@property (nonatomic,readonly) int total_comments;
@property (nonatomic,readonly) int total_votes;
@property (nonatomic,readonly) int total_badges;
@property (nonatomic,readonly) int total_users;
@property (nonatomic,readonly) double questions_per_minute;
@property (nonatomic,readonly) double answers_per_minute;
@property (nonatomic,readonly) double badges_per_minute;
@property (nonatomic,readonly) double views_per_day;
@property (nonatomic,readonly) NSString *api_version;
@property (nonatomic,readonly) NSString *api_revision;
@property (nonatomic,readonly) CSSiteDescriptor *site;

@end

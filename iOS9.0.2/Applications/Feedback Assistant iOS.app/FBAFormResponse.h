/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAManagedFeedbackObject.h>
#import <Feedback Assistant iOS/FBAMailboxContent.h>
#import <Feedback Assistant iOS/FBASearchableDocument.h>
#import <Feedback Assistant iOS/FBAFilerForm.h>

@class FBAUploadTask, NSDate, NSString, NSNumber, NSSet, FBAFeedback, FBABugForm, FBAProject, NSArray, FBAAnswer, UIColor, NSURL;

@interface FBAFormResponse : FBAManagedFeedbackObject <FBAMailboxContent, FBASearchableDocument, FBAFilerForm>

@property (getter=isCompleted) char completed; 
@property (assign) char requiresAction; 
@property (retain) NSDate * createdAt; 
@property (retain) NSDate * updatedAt; 
@property (retain) NSString * largeFilePrefix; 
@property (assign) char remote; 
@property (retain) NSString * buildString; 
@property (assign) char isStub; 
@property (retain) NSNumber * feedbackID; 
@property (readonly) NSNumber * followupCount; 
@property (retain) NSString * extractedTitle; 
@property (retain) NSString * extractedProblemDescription; 
@property (retain) NSString * extractedIssueType; 
@property (retain) NSString * extractedIssueArea; 
@property (retain) NSNumber * extractedFollowupCount; 
@property (readonly) NSString * title; 
@property (readonly) NSString * problemDescription; 
@property (readonly) NSString * issueType; 
@property (readonly) NSString * issueArea; 
@property (readonly) NSString * issueAreaDisplay; 
@property (retain) NSSet * answers; 
@property (retain) FBAFeedback * feedback; 
@property (retain) FBABugForm * bugForm; 
@property (retain) FBAProject * project; 
@property (retain) FBAUploadTask * uploadTask; 
@property (retain) NSNumber * primitiveRequiresAction; 
@property (retain) NSNumber * primitiveCompleted; 
@property (retain) NSArray * titleAnswers; 
@property (readonly) FBAAnswer * titleAnswer; 
@property (retain) NSArray * problemDescriptionAnswers; 
@property (readonly) FBAAnswer * problemDescriptionAnswer; 
@property (retain) NSArray * issueTypeAnswers; 
@property (readonly) FBAAnswer * issueTypeAnswer; 
@property (retain) NSArray * issueAreaAnswers; 
@property (readonly) FBAAnswer * issueAreaAnswer; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSNumber * ID; 
@property (readonly) NSString * mailboxKind; 
@property (readonly) NSString * itemTitle; 
@property (readonly) NSString * itemSubtitle; 
@property (readonly) NSDate * mailboxSortDate; 
@property (readonly) char unread; 
@property (readonly) UIColor * itemTitleColor; 
@property (readonly) NSURL * searchURL; 
+(id)keyPathsForValuesAffectingItemTitle;
+(id)keyPathsForValuesAffectingMailboxSortDate;
+(id)keyPathsForValuesAffectingUnread;
+(id)keyPathsForValuesAffectingTitleAnswer;
+(id)keyPathsForValuesAffectingProblemDescriptionAnswer;
+(id)keyPathsForValuesAffectingProblemDescription;
+(id)keyPathsForValuesAffectingIssueTypeAnswer;
+(id)keyPathsForValuesAffectingIssueType;
+(id)keyPathsForValuesAffectingIssueAreaAnswer;
+(id)keyPathsForValuesAffectingIssueArea;
+(id)keyPathsForValuesAffectingFollowupCount;
+(id)keyPathsForValuesAffectingIssueAreaDisplay;
+(id)keyPathsForValuesAffectingItemTitleColor;
+(id)keyPathsForValuesAffectingItemSubtitle;
+(id)keyPathsForValuesAffectingSearchText;
+(id)entityName;
+(id)keyPathsForValuesAffectingTitle;
-(void)setPropertiesFromJSONObject:(id)arg1 ;
-(id)answerForQuestionID:(id)arg1 ;
-(void)updateExtractedValuesFromAnswers;
-(void)setRequiresAction:(char)arg1 ;
-(void)updateRequiresActionFromFollowups;
-(NSString *)mailboxKind;
-(NSString *)itemSubtitle;
-(NSDate *)mailboxSortDate;
-(UIColor *)itemTitleColor;
-(id)generateSearchText;
-(char)isAnswerExpectedForQuestion:(id)arg1 ;
-(id)fileRequirements;
-(char)allowUnsolicitedFollowup;
-(NSNumber *)followupCount;
-(char)requiresAction;
-(id)valueForQuestionID:(id)arg1 ;
-(FBAAnswer *)titleAnswer;
-(FBAAnswer *)problemDescriptionAnswer;
-(FBAAnswer *)issueTypeAnswer;
-(FBAAnswer *)issueAreaAnswer;
-(NSString *)issueArea;
-(NSString *)issueAreaDisplay;
-(NSString *)problemDescription;
-(NSString *)issueType;
-(id)answersDictionary;
-(id)valuesForQuestionID:(id)arg1 ;
-(void)setValue:(id)arg1 forQuestionID:(id)arg2 ;
-(char)evaluateConditional:(id)arg1 ;
-(id)findAnswerForRole:(id)arg1 ;
-(char)mandatorySysdiagnose;
-(NSString *)title;
-(void)setCompleted:(char)arg1 ;
-(char)isCompleted;
-(NSString *)itemTitle;
-(NSURL *)searchURL;
-(char)unread;
@end


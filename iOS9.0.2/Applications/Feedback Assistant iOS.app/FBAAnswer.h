/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAManagedFeedbackObject.h>

@class FBAFormResponse, FBAQuestion, NSNumber, NSArray;

@interface FBAAnswer : FBAManagedFeedbackObject

@property (retain) FBAFormResponse * formResponse; 
@property (retain) FBAQuestion * question; 
@property (retain) NSNumber * questionID; 
@property (copy) NSArray * values; 
@property (retain) id value; 
@property (getter=isOptedOut) char optedOut; 
@property (assign) char resolved; 
@property (retain) NSNumber * primitiveOptedOut; 
+(id)emptyLocalAnswerForQuestionID:(id)arg1 inFormResponse:(id)arg2 ;
+(unsigned)answerTypeFromString:(id)arg1 ;
+(id)_importByQuestionIDFromJSONArray:(id)arg1 withFormResponseID:(id)arg2 intoContext:(id)arg3 ;
+(id)keyPathsForValuesAffectingValue;
+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg1 ;
-(char)isOptedOut;
-(FBAQuestion *)question;
-(void)setOptedOut:(char)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAManagedFeedbackObject.h>
#import <Feedback Assistant iOS/FBAFilerForm.h>

@class NSString, NSArray, NSSet, NSDate, FBAFeedback, FBAUploadTask, NSNumber, NSOrderedSet;

@interface FBAFeedbackFollowup : FBAManagedFeedbackObject <FBAFilerForm>

@property (assign) unsigned type; 
@property (getter=isComplete) char complete; 
@property (retain) NSString * displayText; 
@property (retain) NSArray * feedbackFollowupResponses; 
@property (retain) NSSet * fileMatchers; 
@property (retain) NSDate * createdAt; 
@property (retain) FBAFeedback * feedback; 
@property (retain) FBAUploadTask * uploadTask; 
@property (retain) NSNumber * primitiveType; 
@property (retain) NSNumber * primitiveComplete; 
@property (retain) NSOrderedSet * primitiveFeedbackFollowupResponses; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)followupTypeFromString:(id)arg1 ;
+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg1 ;
-(void)setFeedbackFollowupResponses:(NSArray *)arg1 ;
-(NSArray *)feedbackFollowupResponses;
-(id)respondedToAt;
-(char)isComplete;
-(NSString *)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(void)setComplete:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ADSharedData : NSObject {

	char _siriEnabled;
	char _dictationEnabled;
	char _activityContinuationAllowed;
	NSString* _assistantId;
	NSString* _speechId;
	NSString* _languageCode;
	NSString* _hostname;

}

@property (assign,nonatomic) char siriEnabled;                              //@synthesize siriEnabled=_siriEnabled - In the implementation block
@property (assign,nonatomic) char dictationEnabled;                         //@synthesize dictationEnabled=_dictationEnabled - In the implementation block
@property (assign,nonatomic) char activityContinuationAllowed;              //@synthesize activityContinuationAllowed=_activityContinuationAllowed - In the implementation block
@property (nonatomic,copy) NSString * assistantId;                          //@synthesize assistantId=_assistantId - In the implementation block
@property (nonatomic,copy) NSString * speechId;                             //@synthesize speechId=_speechId - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                         //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * hostname;                             //@synthesize hostname=_hostname - In the implementation block
-(void)setSiriEnabled:(char)arg1 ;
-(char)siriEnabled;
-(char)activityContinuationAllowed;
-(void)setActivityContinuationAllowed:(char)arg1 ;
-(id)description;
-(char)dictationEnabled;
-(NSString *)languageCode;
-(void)setDictationEnabled:(char)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)assistantId;
-(void)setAssistantId:(NSString *)arg1 ;
-(NSString *)speechId;
-(void)setSpeechId:(NSString *)arg1 ;
-(void)setHostname:(NSString *)arg1 ;
-(NSString *)hostname;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSMutableDictionary;

@interface EventDescription : NSObject {

	int _eventType;
	NSDate* _creationTimeStamp;
	char* _processName;
	char* _applicationId;
	int _eventLen;
	void* _eventData;
	NSMutableDictionary* _eventQualifiers;
	id _eventKey;
	unsigned long long _processId;

}

@property (nonatomic,readonly) int eventType;                                      //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSDate * creationTimeStamp;                         //@synthesize creationTimeStamp=_creationTimeStamp - In the implementation block
@property (nonatomic,readonly) unsigned long long processId;                       //@synthesize processId=_processId - In the implementation block
@property (nonatomic,readonly) char* processName;                                  //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) char* applicationId;                                //@synthesize applicationId=_applicationId - In the implementation block
@property (nonatomic,readonly) int eventLen;                                       //@synthesize eventLen=_eventLen - In the implementation block
@property (nonatomic,readonly) void* eventData;                                    //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventQualifiers;              //@synthesize eventQualifiers=_eventQualifiers - In the implementation block
@property (nonatomic,retain) id eventKey;                                          //@synthesize eventKey=_eventKey - In the implementation block
-(void)dealloc;
-(id)description;
-(char*)processName;
-(char*)applicationId;
-(id)eventKey;
-(void*)eventData;
-(id)initWithType:(int)arg1 length:(int)arg2 data:(void*)arg3 fromPid:(unsigned long long)arg4 named:(char*)arg5 application:(char*)arg6 ;
-(char*)originatorForLogging;
-(NSDate *)creationTimeStamp;
-(unsigned long long)processId;
-(int)eventLen;
-(NSMutableDictionary *)eventQualifiers;
-(void)setEventKey:(id)arg1 ;
-(int)eventType;
@end


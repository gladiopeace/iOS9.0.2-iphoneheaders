/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableString, NSData, NSArray, OTATaskingAgentConnection;

@interface OTATask : NSObject {

	int _taskType;
	NSString* _taskId;
	NSMutableString* _taskDigest;
	NSData* _rawBlob;
	NSArray* _verifiedTask;
	OTATaskingAgentConnection* _taskingAgent;
	char _isValid;

}

@property (nonatomic,readonly) int taskType;                   //@synthesize taskType=_taskType - In the implementation block
@property (nonatomic,readonly) NSString * taskId;              //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,readonly) NSData * rawBlob;               //@synthesize rawBlob=_rawBlob - In the implementation block
@property (nonatomic,readonly) char isValid;                   //@synthesize isValid=_isValid - In the implementation block
+(id)descriptionForTaskType:(int)arg1 ;
+(id)taskIdForInstalledTaskOfType:(int)arg1 ;
+(char)_taskConfigStructureIsValid:(id)arg1 ;
+(id)taskIdPathForTaskType:(int)arg1 ;
+(id)getTaskPathForType:(int)arg1 ;
+(char)_uninstallTaskOfType:(int)arg1 ;
-(id)initWithBlobData:(id)arg1 taskId:(id)arg2 type:(int)arg3 withInfo:(id)arg4 ;
-(char)_matchSelector:(id)arg1 withValue:(id)arg2 ofConfig:(id)arg3 ;
-(id)_findFirstMatchingConfig:(id)arg1 withInfo:(id)arg2 ;
-(NSData *)rawBlob;
-(char)_taskPlistStructureIsValid:(id)arg1 withInfo:(id)arg2 ;
-(char)_writeTaskingId;
-(char)_verifySignedBlobWithInfo:(id)arg1 ;
-(char)saveToPath:(id)arg1 ;
-(void)dealloc;
-(char)isValid;
-(char)install;
-(NSString *)taskId;
-(int)taskType;
-(char)defer;
@end


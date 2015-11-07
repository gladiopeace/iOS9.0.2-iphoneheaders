/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBDJobScheduler : NSObject {

	NSString* _domain;

}

@property (copy) NSString * domain;              //@synthesize domain=_domain - In the implementation block
+(void)initializeBackgroundTaskAgentWithJobRunner:(/*^block*/id)arg1 ;
+(id)jobSchedulerForDomain:(id)arg1 ;
+(void)addBackgroundJob:(id)arg1 nextJobTimeInterval:(double)arg2 ;
+(void)__initializeBackgroundTaskAgentWithJobRunner:(/*^block*/id)arg1 ;
-(void)schdeuleUpdateJobWithTimeInterval:(double)arg1 replaceExisting:(char)arg2 ;
-(char)hasScheduledJob:(double*)arg1 ;
-(void)removeScheduledJobs;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BKSSystemService, NSMutableDictionary;

@interface HDAppLauncher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BKSSystemService* _bksSystemService;
	NSMutableDictionary* _clientByBundleIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) BKSSystemService * bksSystemService;                         //@synthesize bksSystemService=_bksSystemService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clientByBundleIdentifier;              //@synthesize clientByBundleIdentifier=_clientByBundleIdentifier - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)_queue_cleanUpClients;
-(void)_queue_attemptRelaunchClient:(id)arg1 forSeconds:(double)arg2 retries:(int)arg3 ;
-(void)registerIdentifier:(id)arg1 forClientBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unregisterIdentifier:(id)arg1 forClientBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)processInvalidated:(id)arg1 ;
-(BKSSystemService *)bksSystemService;
-(void)setBksSystemService:(BKSSystemService *)arg1 ;
-(NSMutableDictionary *)clientByBundleIdentifier;
-(void)setClientByBundleIdentifier:(NSMutableDictionary *)arg1 ;
@end


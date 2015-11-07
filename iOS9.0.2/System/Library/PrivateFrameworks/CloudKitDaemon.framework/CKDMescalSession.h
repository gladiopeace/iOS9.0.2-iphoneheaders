/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class CKDClientContext, NSError, NSObject, NSOperationQueue;

@interface CKDMescalSession : NSObject {

	char _isSetup;
	char _renewing;
	CKDClientContext* _context;
	NSError* _lastSetupError;
	NSObject*<OS_dispatch_queue> _opQueue;
	NSObject*<OS_dispatch_group> _renewalGroup;
	NSOperationQueue* _renewQueue;
	FPSAPContextOpaque_Ref _mescalSession;
	FairPlayHWInfo_ _mescalHWInfo;

}

@property (nonatomic,__weak,readonly) CKDClientContext * context;                    //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char isSetup;                                           //@synthesize isSetup=_isSetup - In the implementation block
@property (assign) char renewing;                                                    //@synthesize renewing=_renewing - In the implementation block
@property (nonatomic,retain) NSError * lastSetupError;                               //@synthesize lastSetupError=_lastSetupError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> opQueue;                   //@synthesize opQueue=_opQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> renewalGroup;              //@synthesize renewalGroup=_renewalGroup - In the implementation block
@property (nonatomic,retain) NSOperationQueue * renewQueue;                          //@synthesize renewQueue=_renewQueue - In the implementation block
@property (assign,nonatomic) FPSAPContextOpaque_Ref mescalSession;                   //@synthesize mescalSession=_mescalSession - In the implementation block
@property (assign,nonatomic) FairPlayHWInfo_ mescalHWInfo;                           //@synthesize mescalHWInfo=_mescalHWInfo - In the implementation block
-(void)dealloc;
-(id)init;
-(CKDClientContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)setMescalSession:(FPSAPContextOpaque_Ref)arg1 ;
-(void)exchangeData:(id)arg1 serverVersion:(int)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)resetMescalSession;
-(char)isSetup;
-(void)signData:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)processSignedData:(id)arg1 signature:(id)arg2 forRequest:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)renewMescalSessionForRequest:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)setIsSetup:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)opQueue;
-(void)_teardownLocked;
-(void)_getHardwareInfo:(FairPlayHWInfo_*)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_reallyExchangeData:(id)arg1 serverVersion:(int)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_setUpWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)renewing;
-(void)setRenewing:(char)arg1 ;
-(NSObject*<OS_dispatch_group>)renewalGroup;
-(void)setLastSetupError:(NSError *)arg1 ;
-(NSOperationQueue *)renewQueue;
-(NSError *)lastSetupError;
-(void)_renewMescalSessionForRequestLocked:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)_reallySignData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_reallyProcessSignedData:(id)arg1 signature:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setOpQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRenewalGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setRenewQueue:(NSOperationQueue *)arg1 ;
-(FairPlayHWInfo_)mescalHWInfo;
-(void)setMescalHWInfo:(FairPlayHWInfo_)arg1 ;
-(void)_teardown;
-(FPSAPContextOpaque_Ref)mescalSession;
@end


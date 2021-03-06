/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PUUnlockClient <NSObject>
@required
-(void)didPairForUnlock:(char)arg1 error:(id)arg2;
-(void)didUnpairForUnlock:(char)arg1 error:(id)arg2;
-(void)didEnableOnlyRemoteUnlock:(char)arg1 error:(id)arg2;
-(void)didDisableOnlyRemoteUnlock:(char)arg1 error:(id)arg2;
-(void)remoteDeviceDidCompletePasscodeAction:(char)arg1 error:(id)arg2;
-(void)remoteDeviceDidUnlock;
-(void)remoteDeviceDidRemoveLockout:(char)arg1 error:(id)arg2;
-(void)didGetRemoteDeviceHasPasscode:(char)arg1 isLocked:(char)arg2 isUnlockOnly:(char)arg3 error:(id)arg4;

@end


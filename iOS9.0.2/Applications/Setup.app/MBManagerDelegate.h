/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MBManagerDelegate
@optional
-(void)manager:(id)arg1 didSetBackupEnabled:(char)arg2;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned)arg3;
-(void)managerDidFinishBackup:(id)arg1;
-(void)managerDidFinishScan:(id)arg1;
-(void)managerDidFinishRestore:(id)arg1;
-(void)managerDidCancelRestore:(id)arg1;
-(void)managerDidFinishVerification:(id)arg1;
-(void)manager:(id)arg1 didFailBackupWithError:(id)arg2;
-(void)manager:(id)arg1 didFailScanWithError:(id)arg2;
-(void)manager:(id)arg1 didFailRestoreWithError:(id)arg2;
-(void)manager:(id)arg1 didFailVerificationWithError:(id)arg2;
-(void)managerDidLoseConnectionToService:(id)arg1;

@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUManagerDelegate <NSObject>
@optional
-(void)scanRequestDidStartForOptions:(id)arg1;
-(void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3;
-(void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2;
-(void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2;
-(void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1;
-(void)downloadDidStart:(id)arg1;
-(void)downloadProgressDidChange:(id)arg1;
-(void)downloadDidFail:(id)arg1 withError:(id)arg2;
-(void)installDidStart:(id)arg1;
-(void)installDidFail:(id)arg1 withError:(id)arg2;
-(void)installDidFinish:(id)arg1;
-(void)downloadDidFinish:(id)arg1;

@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/Support/mobactivationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MobileActivationProtocol <NSObject>
@required
-(void)destorySession:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)createSessionRequestWithCompletionBlock:(/*^block*/id)arg1;
-(void)handleSessionResponse:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)createActivationInfoWithSession:(id)arg1 CompletionBlock:(/*^block*/id)arg2;
-(void)handleActivationInfoWithSession:(id)arg1 CompletionBlock:(/*^block*/id)arg2;
-(void)createActivationInfoWithCompletionBlock:(/*^block*/id)arg1;
-(void)handleActivationInfo:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)getTicketStatusWithCompletionBlock:(/*^block*/id)arg1;
-(void)isDeviceBrickedWithCompletionBlock:(/*^block*/id)arg1;
-(void)deactivateDeviceWithCompletionBlock:(/*^block*/id)arg1;
-(void)requestDeviceReactivationWithCompletionBlock:(/*^block*/id)arg1;
-(void)getActivationStateWithCompletionBlock:(/*^block*/id)arg1;
-(void)getActivationBuildWithCompletionBlock:(/*^block*/id)arg1;
-(void)createReCertInfoWithCompletionBlock:(/*^block*/id)arg1;
-(void)handleReCertInfo:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)copyRegulatoryImagesWithCompletionBlock:(/*^block*/id)arg1;
-(void)copyActivationRecordWithCompletionBlock:(/*^block*/id)arg1;
-(void)unbrickDeviceWithCompletionBlock:(/*^block*/id)arg1;
-(void)recertifyDevice:(id)arg1 WithCompletionBlock:(/*^block*/id)arg2;

@end


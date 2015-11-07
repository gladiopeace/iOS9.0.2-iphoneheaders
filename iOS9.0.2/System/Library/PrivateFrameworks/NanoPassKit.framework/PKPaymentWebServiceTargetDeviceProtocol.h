/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPaymentWebServiceTargetDeviceProtocol <NSObject>
@optional
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(/*^block*/id)arg3;

@required
-(char)supportsAutomaticPassPresentation;
-(void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(/*^block*/id)arg2;
-(void)noteProvisioningInProgress:(char)arg1;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
-(void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
-(id)deviceDescriptionForPaymentWebService:(id)arg1;
-(void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(id)deviceName;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
-(void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2;
-(id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
-(id)bridgedClientInfo;
-(id)deviceRegion;
-(void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessary:(/*^block*/id)arg2;
-(char)paymentWebService:(id)arg1 hasPassesOfType:(unsigned)arg2;
-(char)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;

@end


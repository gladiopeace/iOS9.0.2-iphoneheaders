/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PDInAppPaymentServiceExportedInterface <PDXPCServiceExportedInterface>
@required
-(void)registerPaymentListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 handler:(/*^block*/id)arg3;
-(void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg1 handler:(/*^block*/id)arg2;
-(void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostIdentifier:(id)arg2 orientation:(id)arg3 handler:(/*^block*/id)arg4;

@end


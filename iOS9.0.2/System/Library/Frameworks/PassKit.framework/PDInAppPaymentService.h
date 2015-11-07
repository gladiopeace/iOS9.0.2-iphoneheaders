/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PDXPCService.h>
#import <libobjc.A.dylib/PDInAppPaymentServiceExportedInterface.h>

@protocol PDInAppPaymentServiceDelegate;
@class PKEntitlementWhitelist, PDRemoteInterfacePresenter, NSString;

@interface PDInAppPaymentService : PDXPCService <PDInAppPaymentServiceExportedInterface> {

	PKEntitlementWhitelist* _whitelist;
	PDRemoteInterfacePresenter* _remoteInterfacePresenter;
	id<PDInAppPaymentServiceDelegate> _delegate;

}

@property (nonatomic,retain) PDRemoteInterfacePresenter * remoteInterfacePresenter;              //@synthesize remoteInterfacePresenter=_remoteInterfacePresenter - In the implementation block
@property (assign,nonatomic) id<PDInAppPaymentServiceDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRemoteInterfacePresenter:(PDRemoteInterfacePresenter *)arg1 ;
-(PDRemoteInterfacePresenter *)remoteInterfacePresenter;
-(void)setDelegate:(id<PDInAppPaymentServiceDelegate>)arg1 ;
-(void)dealloc;
-(id<PDInAppPaymentServiceDelegate>)delegate;
-(id)initWithConnection:(id)arg1 ;
-(void)registerPaymentListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostIdentifier:(id)arg2 orientation:(id)arg3 handler:(/*^block*/id)arg4 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKAppleIDAuthenticationClientProtocol.h>

@protocol OS_dispatch_queue, AKAppleIDAuthenticationDelegate;
@class NSMutableDictionary, AKAppleIDAuthenticationController, NSObject, NSString;

@interface _AKAppleIDAuthenticationContextManager : NSObject <AKAppleIDAuthenticationClientProtocol> {

	NSMutableDictionary* _authContextsByUUID;
	AKAppleIDAuthenticationController* _authController;
	NSObject*<OS_dispatch_queue> _authContextsQueue;
	id<AKAppleIDAuthenticationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AKAppleIDAuthenticationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<AKAppleIDAuthenticationDelegate>)arg1 ;
-(id<AKAppleIDAuthenticationDelegate>)delegate;
-(id)initWithAuthenticationController:(id)arg1 ;
-(void)registerContext:(id)arg1 ;
-(void)unregisterContext:(id)arg1 ;
-(id)_clientSideContextForServerContext:(id)arg1 ;
-(void)presentKeepUsingUIForContext:(id)arg1 appleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissKeepUsingUIForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)presentBasicLoginUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissBasicLoginUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentLoginAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)presentSecondFactorUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissSecondFactorUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentSecondFactorAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)presentServerProvidedUIForContext:(id)arg1 URLRequest:(id)arg2 delegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissServerProvidedUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContextID:(id)arg3 completion:(/*^block*/id)arg4 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <libobjc.A.dylib/RMSTouchRemoteSocketDelegate.h>

@protocol RMSDAAPTouchRemoteManagerDelegate;
@class RMSDAAPRequestManager, RMSTouchRemoteSocket, NSString;

@interface RMSDAAPTouchRemoteManager : NSObject <RMSTouchRemoteSocketDelegate> {

	RMSDAAPRequestManager* _requestManager;
	RMSTouchRemoteSocket* _socket;
	int _controlPromptRevision;
	int _encryptionKey;
	int _portSecret;
	int _port;
	float _touchDistanceMin;
	float _touchDistanceMax;
	unsigned long _touchTimeMin;
	unsigned long _touchTimeMax;
	id<RMSDAAPTouchRemoteManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RMSDAAPTouchRemoteManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<RMSDAAPTouchRemoteManagerDelegate>)arg1 ;
-(id<RMSDAAPTouchRemoteManagerDelegate>)delegate;
-(void)touchRemoteSocketDidConnect:(id)arg1 ;
-(void)touchRemoteSocketDidDisconnect:(id)arg1 ;
-(id)initWithRequestManager:(id)arg1 ;
-(void)sendTouchMoveWithDirection:(int)arg1 repeatCount:(int)arg2 ;
-(void)sendTouchEndWithDirection:(int)arg1 repeatCount:(int)arg2 ;
-(void)sendNavigationCommand:(int)arg1 ;
-(void)initiateControlWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_createSocket;
-(void)_requestPromptUpdate:(/*^block*/id)arg1 ;
-(CGPoint)_locationForDirection:(int)arg1 repeatCount:(int)arg2 ;
-(unsigned long)_timeForDirection:(int)arg1 repeatCount:(int)arg2 ;
-(void)_parsePortInfoItems:(id)arg1 ;
-(void)_requestPortInfo;
@end


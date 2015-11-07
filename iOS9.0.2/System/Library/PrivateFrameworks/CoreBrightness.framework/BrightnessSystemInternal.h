/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSThread.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSTimer, BLControl, NSMutableDictionary, NSRunLoop, NSString;

@interface BrightnessSystemInternal : NSThread <NSXPCListenerDelegate> {

	BOOL _shouldKeepRunning;
	BOOL _initializationComplete;
	NSTimer* _timer;
	BLControl* bl;
	/*^block*/id _callback;
	NSMutableDictionary* _clients;
	NSMutableDictionary* _clientsProps;
	NSRunLoop* _NS_rl;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)main;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)timerFire:(id)arg1 ;
-(void)clientConnectedWithExpObj:(id)arg1 ;
-(void)clientDisconnectedWithExpObj:(id)arg1 ;
-(void)initializationCompleted;
-(void)stopRL;
-(void)notifyClientsForProperty:(id)arg1 key:(id)arg2 ;
-(void)runXPCServer;
-(id)copyPropertyForKey:(id)arg1 client:(id)arg2 ;
-(void)destroyServer;
-(char)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3 ;
-(char)isAlsSupported;
@end


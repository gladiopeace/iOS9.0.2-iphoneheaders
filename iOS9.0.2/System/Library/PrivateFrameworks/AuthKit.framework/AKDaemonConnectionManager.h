/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/akd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface AKDaemonConnectionManager : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _authServicelistener;
	NSXPCListener* _anisetteServiceListener;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_monitorXPCEvents;
-(void)_cleanUpUnusedAccounts;
-(void)dealloc;
-(void)start;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_beginObservingLanguageChangeNotfication;
-(void)_stopObservingLanguageChangeNotification;
@end


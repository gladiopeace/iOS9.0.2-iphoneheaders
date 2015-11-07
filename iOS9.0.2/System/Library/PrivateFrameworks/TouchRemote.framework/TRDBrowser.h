/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNetServiceBrowser, NSMapTable, NSArray, NSString;

@interface TRDBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSNetServiceBrowser* _browser;
	unsigned _browsingCount;
	NSMapTable* _netServiceToService;
	NSMapTable* _netServiceToResolvingCompletionHandlers;
	NSMapTable* _XPCConnectionToBrowsingCount;

}

@property (getter=isBrowsing,nonatomic,readonly) char browsing; 
@property (nonatomic,copy,readonly) NSArray * services; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBrowser;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(char)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(char)arg3 ;
-(char)isBrowsing;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)stopBrowsing;
-(NSArray *)services;
-(void)startBrowsing;
-(void)TRXPCD_stopBrowsing;
-(void)TRXPCD_getServicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)TRXPCD_startBrowsing;
-(char)_isXPCConnectionBrowsing:(id)arg1 ;
-(void)_callResolvingCompletionHandlersForNetService:(id)arg1 withError:(id)arg2 ;
-(id)_netServiceForService:(id)arg1 ;
-(void)_resolveNetService:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_serviceForNetService:(id)arg1 ;
@end


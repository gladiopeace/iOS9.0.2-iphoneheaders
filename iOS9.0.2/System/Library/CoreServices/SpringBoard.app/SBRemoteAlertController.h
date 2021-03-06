/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBRemoteAlertAdapterDelegate.h>

@protocol OS_dispatch_queue, SBRemoteAlertControllerDelegate;
@class SBSRemoteAlertConfiguration, NSObject, SBRemoteAlertAdapter, NSMutableArray, NSString;

@interface SBRemoteAlertController : NSObject <SBRemoteAlertAdapterDelegate> {

	SBSRemoteAlertConfiguration* _configuration;
	unsigned _tokenPort;
	NSObject*<OS_dispatch_queue> _queue;
	id<SBRemoteAlertControllerDelegate> _delegate;
	SBRemoteAlertAdapter* _alert;
	NSMutableArray* _pendedActivations;
	char _active;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isConfiguration:(id)arg1 allowedForAuditToken:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 tokenPort:(unsigned)arg2 queue:(id)arg3 delegate:(id)arg4 ;
-(char)queue_matchesConfiguration:(id)arg1 ;
-(unsigned)queue_tokenPort;
-(char)queue_isActive;
-(void)queue_activateWithOptions:(id)arg1 ;
-(void)_queue_setActive:(char)arg1 ;
-(void)remoteAlertAdapterDidActivate:(id)arg1 ;
-(void)remoteAlertAdapterDidDeactivate:(id)arg1 ;
-(void)remoteAlertAdapterDidRequestDismissal:(id)arg1 ;
-(void)remoteAlertAdapter:(id)arg1 didTerminateWithError:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)queue_invalidate;
@end


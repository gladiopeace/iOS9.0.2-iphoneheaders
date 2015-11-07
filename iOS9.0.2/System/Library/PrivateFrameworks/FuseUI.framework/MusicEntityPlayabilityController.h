/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MusicEntityPlayabilityController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _cellularNetworkAllowed;
	char _showCloudMediaEnabled;
	char _hasValidNetworkType;
	int _networkType;

}
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_cellularNetworkAllowedDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEntityValueContextPlayable:(id)arg1 ;
-(void)_musicDefaultsDidChangeNotification:(id)arg1 ;
-(void)_fairPlaySubscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)_allowsExplicitContentDidChangeNotification:(id)arg1 ;
-(int)_networkType;
-(char)_isCellularNetworkAllowed;
@end


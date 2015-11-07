/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iCloudDriveApp.app/iCloudDriveApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iCloudDriveApp/iCloudDriveApp-Structs.h>
@class NSObject;

@interface NetworkWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	SCNetworkReachabilityRef _reachability;
	unsigned _reachabilityFlags;
	unsigned _networkState;

}

@property (nonatomic,readonly) unsigned networkState;              //@synthesize networkState=_networkState - In the implementation block
+(id)sharedNetworkWatcher;
+(id)_descriptionForNetworkState:(unsigned)arg1 ;
-(id)init;
-(void)stop;
-(void)start;
-(char)isConnected;
-(void)_updateState:(unsigned)arg1 ;
-(unsigned)networkState;
@end


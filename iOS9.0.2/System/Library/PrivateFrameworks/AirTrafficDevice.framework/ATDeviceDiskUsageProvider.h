/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, ATUserDefaults, NSObject, ATClientController;

@interface ATDeviceDiskUsageProvider : NSObject {

	NSMutableDictionary* _diskUsageInfo;
	ATUserDefaults* _defaults;
	NSObject*<OS_dispatch_queue> _queue;
	ATClientController* _clientController;

}
+(id)sharedInstance;
-(id)init;
-(void)getUpdatedUsageWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadCurrentDiskUsage;
-(void)getCurrentUsageWithUpdatedDataClasses:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_diskUsageForDataClass:(id)arg1 ;
-(void)_updatePurgeableStorageUsage;
-(id)getCurrentUsage;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSArray;

@interface WBSCloudTabStore : NSObject {

	NSMutableArray* _syncedCloudTabDevices;
	NSMutableDictionary* _deviceUUIDsToCloseRequests;

}

@property (nonatomic,copy,readonly) NSArray * syncedCloudTabDevices; 
-(void)createSyncedCloudTabDevicesAndCloseRequests;
-(id)_keyValueStoreDictionaryRepresentation:(int)arg1 ;
-(void)_addDeviceDictionary:(id)arg1 deviceUUID:(id)arg2 ;
-(void)_addCloseRequestDictionary:(id)arg1 requestUUID:(id)arg2 ;
-(void)_pruneOrphanedCloseRequests;
-(void)_removeSyncedCloudTabsWithOutstandingCloseRequests;
-(void)_removeObjectFromKeyValueStore:(int)arg1 forKey:(id)arg2 ;
-(char)_writeCloseRequestForTab:(id)arg1 onDevice:(id)arg2 ;
-(char)_closeTabs:(id)arg1 onDevice:(id)arg2 ;
-(id)_currentDeviceUUID;
-(void)_closeRequestedTabIfPossible:(id)arg1 ;
-(id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)arg1 ;
-(void)_setDictionaryInKeyValueStore:(int)arg1 dictionary:(id)arg2 forKey:(id)arg3 ;
-(NSArray *)syncedCloudTabDevices;
-(void)resetSyncedCloudTabDevicesAndCloseRequests;
-(void)pruneExpiredDevices;
-(char)closeTab:(id)arg1 onDevice:(id)arg2 ;
-(char)closeTabs:(id)arg1 onDevice:(id)arg2 ;
-(char)closeAllTabsOnDevice:(id)arg1 ;
-(void)handleCloseTabRequests;
@end


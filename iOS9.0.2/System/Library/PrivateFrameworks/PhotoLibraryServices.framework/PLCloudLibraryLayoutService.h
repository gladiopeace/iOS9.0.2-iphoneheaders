/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLCloudService.h>

@class PLPhotoLibrary, PLCloudCoalescingQueue, PLCloudLibraryLayoutStore, PLCloudPhotoLibraryManager, PLCloudLibraryDistribution;

@interface PLCloudLibraryLayoutService : PLCloudService {

	unsigned long long _version;
	unsigned _lastBudgetUpdate;
	PLPhotoLibrary* _localLibrary;
	PLCloudCoalescingQueue* _messageQueue;
	PLCloudLibraryLayoutStore* _layoutStore;
	unsigned _layoutMode;
	PLCloudPhotoLibraryManager* _remoteLibrary;
	PLCloudLibraryDistribution* _currentDistribution;

}
-(void)tearDown;
-(void)dealloc;
-(void)activate;
-(char)agentRunning;
-(void)enqueueSyncStepsBetween:(id)arg1 and:(id)arg2 ;
-(id)newLibraryDistribution;
-(void)enqueueSyncStepsBetween:(id)arg1 and:(id)arg2 forAssetChange:(SCD_Struct_PL0)arg3 ;
-(unsigned long long)availableBudget;
-(void)resetPersistedLibraryDistribution;
-(void)systemStarted:(id)arg1 ;
-(void)assetInserted:(id)arg1 ;
-(void)assetRemoved:(id)arg1 ;
-(void)assetsStable:(id)arg1 ;
-(void)spaceBudgetUpdated:(id)arg1 ;
-(void)resetSync:(id)arg1 ;
-(void)layoutStoreChanged:(SCD_Struct_PL0)arg1 ;
-(id)newLoadOrCreateLibraryDistribution;
@end


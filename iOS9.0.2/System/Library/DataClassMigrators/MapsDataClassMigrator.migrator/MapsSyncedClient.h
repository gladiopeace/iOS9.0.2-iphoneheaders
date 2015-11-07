/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MapsSyncedClient <NSObject>
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSArray * syncedItems; 
@property (nonatomic,readonly) char syncSupportsKVO; 
@property (nonatomic,readonly) char syncInvertedOrdering; 
@property (nonatomic,readonly) char syncShouldUseItemPositions; 
@property (nonatomic,readonly) char syncShouldUseCustomStore; 
@optional
-(char)syncInvertedOrdering;
-(void)syncManagerDidUpdateSyncedItems:(id)arg1;
-(char)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned)arg2;
-(void)updateSyncedItemAtIndexes:(id)arg1;
-(char)syncShouldUseCustomStore;
-(void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2;
-(char)syncShouldUseItemPositions;
-(void)removeSyncedItemsAtIndexes:(id)arg1;

@required
-(NSString *)syncIdentifier;
-(char)syncSupportsKVO;
-(NSArray *)syncedItems;
-(id)newSyncedItemForSyncData:(id)arg1;

@end


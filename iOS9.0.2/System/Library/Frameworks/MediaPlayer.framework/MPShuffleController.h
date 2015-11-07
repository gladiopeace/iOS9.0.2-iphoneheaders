/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MPShuffleControllerDataSource;
@class NSMutableIndexSet, NSMapTable, MPSparseArray, NSMutableArray;

@interface MPShuffleController : NSObject <NSSecureCoding> {

	NSMutableIndexSet* _availableShuffleIndexSet;
	char _isPendingFineGrainedInvalidation;
	char _isPendingGlobalInvalidation;
	unsigned _itemCount;
	NSMapTable* _itemIdentifierToKnownCount;
	MPSparseArray* _originalIndexToItemIdentifier;
	MPSparseArray* _originalIndexToShuffledIndex;
	NSMutableArray* _pendingInvalidationRemovedIdentifiers;
	id<MPShuffleControllerDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<MPShuffleControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(char)supportsSecureCoding;
-(void)shuffle;
-(void)_commitPendingInvalidations;
-(void)_replaceItemIdentifierAtOriginalIndex:(unsigned)arg1 withItemIdentifier:(id)arg2 ;
-(void)_loadItemCountIfPendingInvalidation;
-(void)_clearPendingInvalidationInformation;
-(void)_removeAllItemIdentifiers;
-(unsigned)_generateShuffleIndexFromAvailableIndexSet;
-(void)_removeItemIdentifierAtOriginalIndex:(unsigned)arg1 ;
-(void)_loadItemCount;
-(void)invalidateWithRemovedIdentifiers:(id)arg1 ;
-(unsigned)itemIndexForShuffledIndex:(unsigned)arg1 ;
-(void)shuffleWithStartingIndex:(unsigned)arg1 ;
-(unsigned)shuffledIndexForItemIndex:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataSource:(id<MPShuffleControllerDataSource>)arg1 ;
-(id)init;
-(id<MPShuffleControllerDataSource>)dataSource;
-(void)invalidate;
@end


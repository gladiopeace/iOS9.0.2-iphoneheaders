/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <CoreFoundation/NSArray.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol PHBatchFetchingArrayDataSource;
@class NSArray, NSSet, NSCache, NSMutableDictionary, NSRecursiveLock, PHPhotoLibrary, NSString;

@interface PHBatchFetchingArray : NSArray <NSCacheDelegate> {

	NSArray* _oids;
	NSSet* _oidsSet;
	id<PHBatchFetchingArrayDataSource> _dataSource;
	unsigned _count;
	NSCache* _cache;
	unsigned _firstBatchIndex;
	NSArray* _firstBatch;
	NSMutableDictionary* _uuidsByOIDs;
	NSRecursiveLock* _firstBatchLock;
	unsigned _batchSize;
	unsigned _propertyHint;

}

@property (readonly) PHPhotoLibrary * photoLibrary; 
@property (readonly) NSArray * oids;                                //@synthesize oids=_oids - In the implementation block
@property (readonly) NSSet * oidsSet; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)accessInstanceVariablesDirectly;
-(void)min:(id*)arg1 andMax:(id*)arg2 forKeypath:(id)arg3 ;
-(id)initWithOIDs:(id)arg1 options:(id)arg2 dataSource:(id)arg3 ;
-(id)_phObjectAtIndex:(unsigned)arg1 ;
-(unsigned)_populateObjectBuffer:(id*)arg1 range:(NSRange)arg2 ;
-(NSArray *)oids;
-(id)__batchHelper:(unsigned)arg1 ;
-(id)_phObjectsForOIDs:(id)arg1 ;
-(void)_rememberUUIDsForBatch:(id)arg1 ;
-(id)initWithOIDs:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3 ;
-(void)_evictBatchNumber:(int)arg1 ;
-(void)_invalidateUUIDCache;
-(NSSet *)oidsSet;
-(unsigned)batchSize;
-(PHPhotoLibrary *)photoLibrary;
-(unsigned)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_PH8*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfObject:(id)arg1 ;
-(NSString *)description;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
@end


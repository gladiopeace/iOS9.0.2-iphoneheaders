/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBooks/iBooks-Structs.h>
@class IMDatabaseHandle, IMAdminTable, NSMutableSet, NSTimer, NSString;

@interface IMPersistentCache : NSObject {

	IMDatabaseHandle* _db;
	IMAdminTable* _adminTable;
	NSMutableSet* _accessedIds;
	unsigned _cacheSize;
	unsigned _maxSize;
	unsigned _count;
	NSMutableSet* _unknownKeys;
	NSTimer* _scanTimer;
	NSString* _path;
	int _accessedIdsLock;
	int _unknownKeysLock;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(char)hasItemForKey:(id)arg1 ;
-(CGImageRef)copyCGImageForKey:(id)arg1 resourceSize:(int*)arg2 ;
-(char)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 ;
-(char)insertCGImages:(id)arg1 forKey:(id)arg2 mimeType:(id)arg3 baseSize:(CGSize)arg4 properties:(id)arg5 ;
-(void)deleteItemForKey:(id)arg1 ;
-(void)deleteItemsWithKeyLike:(id)arg1 ;
-(id)firstImageKeyWithRootKey:(id)arg1 ;
-(unsigned)resourceSizeForKey:(id)arg1 ;
-(id)metadataForKey:(id)arg1 ;
-(id)CGImagesForKey:(id)arg1 size:(CGSize*)arg2 resourceSize:(int*)arg3 ;
-(char)_createStorageForDb:(id)arg1 ;
-(unsigned)_cacheSize;
-(void)setLastAccessDate:(id)arg1 ;
-(void)_updateCaches:(id)arg1 ;
-(void)_createCacheTable:(id)arg1 ;
-(void)_setCacheSize:(int)arg1 ;
-(void)_unknownKeysRemoveObject:(id)arg1 ;
-(void)_scheduleSizeCleanup;
-(char)_insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 scale:(float)arg4 properties:(id)arg5 ;
-(char)_insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 ;
-(char)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 scale:(float)arg4 properties:(id)arg5 ;
-(char)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 properties:(id)arg4 ;
-(void)_accessedIdsAddObject:(id)arg1 ;
-(char)_unknownKeysContainsObject:(id)arg1 ;
-(void)_unknownKeysAddObject:(id)arg1 ;
-(CGImageRef)_copyCGImageForRow:(id)arg1 size:(CGSize*)arg2 resourceSize:(int*)arg3 scale:(float*)arg4 ;
-(CGImageRef)copyCGImageForKey:(id)arg1 resourceSize:(int*)arg2 scale:(float*)arg3 ;
-(void)deleteItemsWithAllKeysContaining:(id)arg1 ;
-(void)insertData:(id)arg1 forKey:(id)arg2 mimeType:(id)arg3 ;
-(void)_accessedIdsRemoveAllObjects;
-(void)_sizeCleanup;
-(void)_LRUCleanupForMimeType:(id)arg1 ;
-(id)initWithPath:(id)arg1 maxSize:(unsigned)arg2 ;
-(char)enableCaseSensitiveLike;
-(char)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 ;
-(CGImageRef)copyCGImageForKey:(id)arg1 ;
-(id)itemsForMimeType:(id)arg1 ;
-(id)deleteItemsForMimeType:(id)arg1 ;
-(void)replaceDataForKey:(id)arg1 withData:(id)arg2 mimeType:(id)arg3 ;
-(id)dataForKey:(id)arg1 mimeType:(id)arg2 ;
-(id)allKeys;
-(NSString *)path;
-(void)clear;
-(int)version;
-(id)dataForKey:(id)arg1 ;
@end

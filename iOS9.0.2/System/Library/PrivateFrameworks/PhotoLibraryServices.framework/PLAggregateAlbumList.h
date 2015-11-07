/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLAssetContainerListChangeObserver.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer> {

	NSMutableOrderedSet* _allAlbums;
	NSMutableOrderedSet* _childAlbumLists;
	int _filter;

}

@property (assign,nonatomic) int filter;                                          //@synthesize filter=_filter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned containersCount; 
@property (nonatomic,readonly) unsigned albumsCount; 
@property (nonatomic,readonly) char isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) unsigned unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
+(NSObject*)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(id)containers;
-(char)isFolder;
-(unsigned)containersCount;
-(int)filter;
-(void)assetContainerListDidChange:(id)arg1 ;
-(id)albums;
-(unsigned)unreadAlbumsCount;
-(id)photoLibrary;
-(char)canEditContainers;
-(id)containersRelationshipName;
-(short)albumListType;
-(char)hasAtLeastOneAlbum;
-(char)canEditAlbums;
-(char)albumHasFixedOrder:(NSObject*)arg1 ;
-(void)setNeedsReordering;
-(char)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(unsigned)albumsCount;
-(id)albumsSortingComparator;
-(NSString *)_prettyDescription;
-(NSString *)_typeDescription;
-(void)dealloc;
-(id)identifier;
-(char)isEmpty;
-(void)setFilter:(int)arg1 ;
-(id)managedObjectContext;
-(id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(void)_invalidateAllAlbums;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSURLCompletionDatabase.h>
#import <libobjc.A.dylib/WBSURLCompletionDataSource.h>

@protocol OS_dispatch_queue;
@class CloudTabStore, NSArray, NSObject, NSCache, WebBookmarkCollection, NSString;

@interface URLCompletionDatabase : WBSURLCompletionDatabase <WBSURLCompletionDataSource> {

	CloudTabStore* _cloudTabStore;
	NSArray* _cloudDevices;
	NSObject*<OS_dispatch_queue> _cloudTabsAccessQueue;
	NSCache* _bookmarksCache;
	WebBookmarkCollection* _bookmarkCollection;
	int _searchableCollectionsMask;

}

@property (assign,nonatomic) int searchableCollectionsMask;              //@synthesize searchableCollectionsMask=_searchableCollectionsMask - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCloudTabStore:(id)arg1 searchableCollectionsMask:(int)arg2 bookmarkCollection:(id)arg3 ;
-(void)clearBookmarksCache;
-(void)_updateCloudDevices:(id)arg1 ;
-(int)searchableCollectionsMask;
-(void)setSearchableCollectionsMask:(int)arg1 ;
-(void)dealloc;
-(id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 ;
-(void)enumerateMatchDataForTypedStringHint:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end


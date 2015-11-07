/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface SUMediaLibraryAdamIDCache : NSObject {

	NSMutableSet* _adamIDs;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	char _isPopulated;

}
+(id)sharedCache;
-(void)dealloc;
-(id)init;
-(void)_populateCache;
-(void)getContainsAdamID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getIntersectionWithSet:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)populateCache;
@end


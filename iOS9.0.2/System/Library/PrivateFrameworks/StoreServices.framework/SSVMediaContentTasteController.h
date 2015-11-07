/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, NSMutableDictionary;

@interface SSVMediaContentTasteController : NSObject {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	NSObject*<OS_dispatch_queue> _calloutSerialQueue;
	unsigned long long _currentResponseRevisionID;
	unsigned long long _lastNotificationReceivedResponseRevisionID;
	int _itemsDidChangeNotifyToken;
	long long _pendingMutateRequestCount;
	NSMutableDictionary* _playlistGlobalIDToContentTasteItem;
	NSMutableDictionary* _playlistGlobalIDToPendingContentTasteItem;
	map<long long, SSVMediaContentTasteItem *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, SSVMediaContentTasteItem *> > >* _storeAdamIDToContentTasteItem;
	map<long long, SSVMediaContentTasteItem *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, SSVMediaContentTasteItem *> > >* _storeAdamIDToPendingContentTasteItem;

}
-(void)setContentTasteType:(unsigned)arg1 forStoreAdamID:(long long)arg2 withContentType:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setContentTasteType:(unsigned)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)_refreshContentTasteItems;
-(void)_sendUpdateWithItemUpdates:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleContentTasteItemsUpdateResponse:(id)arg1 allowNotifications:(char)arg2 ;
-(unsigned)contentTasteTypeForPlaylistGlobalID:(id)arg1 ;
-(unsigned)contentTasteTypeForStoreAdamID:(long long)arg1 ;
@end


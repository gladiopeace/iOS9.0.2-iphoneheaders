/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSDownloadHandlerDelegate.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol OS_dispatch_queue, ATAssetLinkDelegate;
@class SSDownloadManager, NSMutableDictionary, NSMapTable, NSObject, NSString;

@interface ATStoreAssetLink : NSObject <SSDownloadManagerObserver, SSDownloadHandlerDelegate, ATAssetLink> {

	SSDownloadManager* _downloadManager;
	NSMutableDictionary* _assetsByStoreID;
	NSMapTable* _downloadsByAsset;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	char _open;
	id<ATAssetLinkDelegate> _delegate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) char open;                               //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(id)init;
-(id<ATAssetLinkDelegate>)delegate;
-(unsigned)priority;
-(void)close;
-(id)enqueueAssets:(id)arg1 force:(char)arg2 ;
-(char)canEnqueueAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(unsigned)maximumBatchSize;
-(char)linkIsReady;
-(id)_assetForDownload:(id)arg1 ;
-(void)_enqueueAssets:(id)arg1 ;
-(void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(char)arg3 ;
-(id)_downloadForAsset:(id)arg1 error:(id*)arg2 ;
-(id)_storeKindForAssetType:(id)arg1 ;
-(id)_dataClassForStoreKind:(id)arg1 ;
-(id)_assetTypeForStoreKind:(id)arg1 ;
-(char)open;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(char)isOpen;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(id)downloadManager;
@end


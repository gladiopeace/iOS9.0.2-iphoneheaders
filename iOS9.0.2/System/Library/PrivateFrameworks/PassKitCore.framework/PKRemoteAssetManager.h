/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSURLSession, NSObject, NSMutableDictionary;

@interface PKRemoteAssetManager : NSObject {

	NSURL* _directoryURL;
	NSURLSession* _urlSession;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _manifestItemsByRelativeURL;

}
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithFileURL:(id)arg1 queue:(id)arg2 ;
-(id)remoteAssetManifests;
-(char)assetExistsLocally:(id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(float)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)deviceSpecificItemsForScreenScale:(float)arg1 suffix:(id)arg2 ;
-(id)itemWithRelativePath:(id)arg1 ;
-(void)_flushBundleCaches;
-(char)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id*)arg3 ;
-(id)deviceSpecificItems;
-(void)cancelDownloads;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSData, NSBundle, PKRemoteAssetManager;

@interface PKDataAccessor : NSObject {

	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (nonatomic,retain,readonly) NSData * manifestHash; 
@property (nonatomic,retain,readonly) NSData * archiveData; 
@property (nonatomic,retain,readonly) NSData * serializedFileWrapper; 
@property (nonatomic,retain,readonly) NSBundle * bundle; 
@property (nonatomic,readonly) char remoteAssetsDownloaded; 
@property (nonatomic,retain,readonly) PKRemoteAssetManager * remoteAssetManager; 
-(void)requestUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)noteShared;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(NSData *)manifestHash;
-(id)dictionary;
-(NSBundle *)bundle;
-(id)content;
-(NSData *)archiveData;
-(void)downloadRemoteAssetsWithScreenScale:(float)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)dictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(int)arg1 screenScale:(float)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(char)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)resourceValueForKey:(id)arg1 ;
-(NSData *)serializedFileWrapper;
-(char)remoteAssetsDownloaded;
-(PKRemoteAssetManager *)remoteAssetManager;
-(id)displayProfileOfType:(int)arg1 ;
-(void)updateSettings:(unsigned)arg1 ;
-(id)imageSetForType:(int)arg1 screenScale:(float)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(char)arg5 ;
-(id)imageSetForType:(int)arg1 displayProfile:(id)arg2 preheat:(char)arg3 ;
-(void)imageSetForType:(int)arg1 displayProfile:(id)arg2 preheat:(char)arg3 withCompletion:(/*^block*/id)arg4 ;
@end


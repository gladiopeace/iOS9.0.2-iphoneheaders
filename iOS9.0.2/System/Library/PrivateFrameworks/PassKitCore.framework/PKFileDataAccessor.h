/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKDataAccessor.h>

@protocol OS_dispatch_queue;
@class PKRemoteAssetManager, NSObject, NSURL;

@interface PKFileDataAccessor : PKDataAccessor {

	PKRemoteAssetManager* _remoteAssetManager;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSURL* _fileURL;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> processingQueue;              //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain,readonly) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(id)manifestHash;
-(void)dealloc;
-(id)bundle;
-(id)archiveData;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 processingQueue:(id)arg3 ;
-(void)downloadRemoteAssetsWithScreenScale:(float)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)dictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(int)arg1 screenScale:(float)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(char)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)resourceValueForKey:(id)arg1 ;
-(id)serializedFileWrapper;
-(char)remoteAssetsDownloaded;
-(id)remoteAssetManager;
-(id)displayProfileOfType:(int)arg1 ;
@end


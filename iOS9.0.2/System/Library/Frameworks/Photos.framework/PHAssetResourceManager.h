/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSOperationQueue, NSObject;

@interface PHAssetResourceManager : NSObject {

	NSMutableDictionary* _requestsById;
	NSOperationQueue* _resourceRequestQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	int _currentRequestID;

}
+(id)defaultManager;
-(void)_synchronized:(/*^block*/id)arg1 ;
-(void)cancelDataRequest:(int)arg1 ;
-(int)requestDataForAssetResource:(id)arg1 options:(id)arg2 dataReceivedHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_streamWriteDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)init;
@end


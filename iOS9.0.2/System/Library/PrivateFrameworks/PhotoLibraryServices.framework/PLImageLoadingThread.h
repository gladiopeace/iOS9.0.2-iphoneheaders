/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSMutableDictionary, NSObject, NSMutableArray, PLPhotoLibrary, PLImageCache;

@interface PLImageLoadingThread : NSObject {

	char _running;
	char _paused;
	char _canceled;
	NSMutableSet* _queues;
	NSMutableDictionary* _requestsByKey;
	NSObject*<OS_dispatch_queue> _isolation;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _highestPriorityQueue;
	NSMutableArray* _highestPriorityRequests;
	NSObject*<OS_dispatch_queue> _highPriorityQueue;
	NSMutableArray* _highPriorityRequests;
	NSObject*<OS_dispatch_queue> _normalPriorityQueue;
	NSMutableArray* _normalPriorityRequests;
	PLPhotoLibrary* _library;
	PLImageCache* _weak_cache;

}
-(id)_imageCache;
-(void)_setImageCache:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)_start;
-(void)resume;
-(void)pause;
-(id)initWithImageCache:(id)arg1 ;
-(void)cacheWasDeallocated;
-(id)loadImageFromSource:(id)arg1 asset:(id)arg2 forImageLoadingQueue:(id)arg3 synchronously:(char)arg4 priority:(int)arg5 completion:(/*^block*/id)arg6 ;
-(void)addImageLoadingQueue:(id)arg1 ;
-(void)removeImageLoadingQueue:(id)arg1 ;
-(void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3 ;
-(char)_dequeueRequest:(id)arg1 ;
-(void)_requeueRequest:(id)arg1 oldPriority:(int)arg2 ;
-(void)_enqueueRequest:(id)arg1 ;
-(void)_serviceRequestFrom:(id)arg1 ;
-(void)_serviceRequest:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVWeakReferencingDelegateStorage, NSDictionary, NSObject;

@interface AVCaptureVideoDataOutputInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReferencingDelegateStorage* delegateStorage;
	NSDictionary* videoSettings;
	SCD_Struct_CM5 deprecatedMinFrameDuration;
	char alwaysDiscardsLateVideoFrames;
	NSObject*<OS_dispatch_queue> bufferQueue;
	OpaqueFigSimpleMutexRef remoteQueueMutex;
	remoteQueueReceiverOpaqueRef remoteReceiverQueue;

}
-(void)dealloc;
-(id)init;
@end


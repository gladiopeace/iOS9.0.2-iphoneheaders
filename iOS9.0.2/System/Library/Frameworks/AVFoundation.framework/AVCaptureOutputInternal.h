/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject, AVCaptureSession, NSString, NSMutableArray;

@interface AVCaptureOutputInternal : NSObject {

	NSObject*<OS_dispatch_queue> figCaptureSessionSyncQueue;
	OpaqueFigCaptureSessionRef figCaptureSession;
	AVCaptureSession* session;
	NSString* sinkID;
	NSMutableArray* connections;
	int changeSeed;
	CGAffineTransform metadataTransform;
	float rollAdjustment;
	char physicallyMirrorsVideo;

}
-(void)dealloc;
-(id)init;
@end


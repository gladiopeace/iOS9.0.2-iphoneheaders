/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVExternalDeviceDelegate, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray, NSData, NSObject;

@interface AVExternalDeviceInternal : NSObject {

	OpaqueFigEndpointRef _figEndpoint;
	id<AVExternalDeviceDelegate> _delegate;
	AVWeakReference* _weakReference;
	NSArray* _HIDs;
	long _makeHIDsOnlyOnce;
	NSData* _MFiCertSerial;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _oemIcons;
	long _makeIconsOnlyOnce;

}
@end


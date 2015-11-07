/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol CAMVideoCaptureRequestDelegate;
@interface CAMVideoCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {

	char _timelapse;
	char _shouldGenerateVideoPreviewImage;
	double _maximumRecordedDuration;
	long long _maximumRecordedFileSize;
	long long _remainingDiskUsageThreshold;
	id<CAMVideoCaptureRequestDelegate> _delegate;
	int _torchMode;

}

@property (nonatomic,__weak,readonly) id<CAMVideoCaptureRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int torchMode;                                                   //@synthesize torchMode=_torchMode - In the implementation block
@property (nonatomic,readonly) double maximumRecordedDuration;                                  //@synthesize maximumRecordedDuration=_maximumRecordedDuration - In the implementation block
@property (nonatomic,readonly) long long maximumRecordedFileSize;                               //@synthesize maximumRecordedFileSize=_maximumRecordedFileSize - In the implementation block
@property (nonatomic,readonly) long long remainingDiskUsageThreshold;                           //@synthesize remainingDiskUsageThreshold=_remainingDiskUsageThreshold - In the implementation block
@property (nonatomic,readonly) char shouldGenerateVideoPreviewImage;                            //@synthesize shouldGenerateVideoPreviewImage=_shouldGenerateVideoPreviewImage - In the implementation block
@property (getter=isTimelapse,nonatomic,readonly) char timelapse;                               //@synthesize timelapse=_timelapse - In the implementation block
-(id)init;
-(id)description;
-(id<CAMVideoCaptureRequestDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithRequest:(id)arg1 distinctPersistence:(char)arg2 ;
-(int)torchMode;
-(double)maximumRecordedDuration;
-(long long)maximumRecordedFileSize;
-(long long)remainingDiskUsageThreshold;
-(char)shouldGenerateVideoPreviewImage;
-(char)isTimelapse;
@end


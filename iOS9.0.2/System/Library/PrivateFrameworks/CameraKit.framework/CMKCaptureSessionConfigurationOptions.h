/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CMKCaptureSessionConfigurationOptions : NSObject {

	char _HDRDetectionEnabled;
	char _use60FPSVideo;
	char _useAlternateSlomoFront;
	char _useAlternateSlomoRear;

}

@property (nonatomic,readonly) char HDRDetectionEnabled;                 //@synthesize HDRDetectionEnabled=_HDRDetectionEnabled - In the implementation block
@property (nonatomic,readonly) char use60FPSVideo;                       //@synthesize use60FPSVideo=_use60FPSVideo - In the implementation block
@property (nonatomic,readonly) char useAlternateSlomoFront;              //@synthesize useAlternateSlomoFront=_useAlternateSlomoFront - In the implementation block
@property (nonatomic,readonly) char useAlternateSlomoRear;               //@synthesize useAlternateSlomoRear=_useAlternateSlomoRear - In the implementation block
-(id)init;
-(char)useAlternateSlomoFront;
-(char)useAlternateSlomoRear;
-(char)use60FPSVideo;
-(id)initWithHDRDetectionEnabled:(char)arg1 use60FPSVideo:(char)arg2 useAlternateSlomoFront:(char)arg3 useAlternateSlomoRear:(char)arg4 ;
-(char)HDRDetectionEnabled;
@end


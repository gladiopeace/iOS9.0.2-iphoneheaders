/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CAMHDRCommand : CAMCaptureCommand <NSCopying, NSCoding> {

	char __shouldCaptureEV0;
	int __HDRMode;

}

@property (nonatomic,readonly) int _HDRMode;                        //@synthesize _HDRMode=__HDRMode - In the implementation block
@property (nonatomic,readonly) char _shouldCaptureEV0;              //@synthesize _shouldCaptureEV0=__shouldCaptureEV0 - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithHDRMode:(int)arg1 ;
-(int)_HDRMode;
-(char)_shouldCaptureEV0;
-(int)_captureHDRModeForHDRMode:(int)arg1 ;
-(id)initWithHDRMode:(int)arg1 shouldCaptureEV0:(char)arg2 ;
@end


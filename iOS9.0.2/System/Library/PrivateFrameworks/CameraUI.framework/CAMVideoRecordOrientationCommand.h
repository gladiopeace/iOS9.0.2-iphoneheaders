/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoRecordOrientationCommand : CAMCaptureCommand {

	char __enabled;

}

@property (getter=_isEnabled,nonatomic,readonly) char _enabled;              //@synthesize _enabled=__enabled - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)_isEnabled;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithEnabled:(char)arg1 ;
@end


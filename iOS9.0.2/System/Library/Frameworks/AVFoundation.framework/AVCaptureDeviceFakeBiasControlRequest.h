/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureDeviceControlRequest.h>

@interface AVCaptureDeviceFakeBiasControlRequest : AVCaptureDeviceControlRequest {

	float _fakeBias;
	SCD_Struct_CM5 _fakeBiasCompletionTime;

}

@property (assign,nonatomic) float fakeBias;                                     //@synthesize fakeBias=_fakeBias - In the implementation block
@property (assign,nonatomic) SCD_Struct_CM5 fakeBiasCompletionTime;              //@synthesize fakeBiasCompletionTime=_fakeBiasCompletionTime - In the implementation block
-(void)setFakeBias:(float)arg1 ;
-(void)setFakeBiasCompletionTime:(SCD_Struct_CM5)arg1 ;
-(float)fakeBias;
-(SCD_Struct_CM5)fakeBiasCompletionTime;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultLuminance : SCRCPhotoEvaluatorResult {

	float _darknessLevel;
	float _brightnessLevel;
	float _averageLevel;

}

@property (nonatomic,readonly) float darknessLevel;                //@synthesize darknessLevel=_darknessLevel - In the implementation block
@property (nonatomic,readonly) float brightnessLevel;              //@synthesize brightnessLevel=_brightnessLevel - In the implementation block
@property (nonatomic,readonly) float averageLevel;                 //@synthesize averageLevel=_averageLevel - In the implementation block
-(id)humanReadableResult;
-(id)initWithDarknessLevel:(float)arg1 brightnessLevel:(float)arg2 averageLevel:(float)arg3 ;
-(float)darknessLevel;
-(float)brightnessLevel;
-(float)averageLevel;
@end


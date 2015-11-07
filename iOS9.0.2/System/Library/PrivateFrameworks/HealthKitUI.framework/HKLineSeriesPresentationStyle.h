/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HKStrokeStyle, HKFillStyle, UIImage;

@interface HKLineSeriesPresentationStyle : NSObject {

	char _shouldApplyRollingAverage;
	HKStrokeStyle* _strokeStyle;
	HKFillStyle* _fillStyle;
	int _waveForm;
	UIImage* _pointMarkerImage;
	UIImage* _lineEndCap;
	float _sineWaveSmoothingFactor;

}

@property (nonatomic,retain) HKStrokeStyle * strokeStyle;                 //@synthesize strokeStyle=_strokeStyle - In the implementation block
@property (nonatomic,retain) HKFillStyle * fillStyle;                     //@synthesize fillStyle=_fillStyle - In the implementation block
@property (assign,nonatomic) int waveForm;                                //@synthesize waveForm=_waveForm - In the implementation block
@property (nonatomic,retain) UIImage * pointMarkerImage;                  //@synthesize pointMarkerImage=_pointMarkerImage - In the implementation block
@property (nonatomic,retain) UIImage * lineEndCap;                        //@synthesize lineEndCap=_lineEndCap - In the implementation block
@property (assign,nonatomic) char shouldApplyRollingAverage;              //@synthesize shouldApplyRollingAverage=_shouldApplyRollingAverage - In the implementation block
@property (assign,nonatomic) float sineWaveSmoothingFactor;               //@synthesize sineWaveSmoothingFactor=_sineWaveSmoothingFactor - In the implementation block
-(void)setWaveForm:(int)arg1 ;
-(char)shouldApplyRollingAverage;
-(int)waveForm;
-(float)sineWaveSmoothingFactor;
-(UIImage *)lineEndCap;
-(UIImage *)pointMarkerImage;
-(void)setSineWaveSmoothingFactor:(float)arg1 ;
-(void)setPointMarkerImage:(UIImage *)arg1 ;
-(void)setLineEndCap:(UIImage *)arg1 ;
-(void)setShouldApplyRollingAverage:(char)arg1 ;
-(void)setFillStyle:(HKFillStyle *)arg1 ;
-(HKFillStyle *)fillStyle;
-(void)setStrokeStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)strokeStyle;
@end


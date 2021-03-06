/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPAnimationKeyframe.h>

@interface MPAnimationKeyframe1D : MPAnimationKeyframe {

	float _scalar;

}

@property (assign,nonatomic) float scalar;              //@synthesize scalar=_scalar - In the implementation block
+(id)keyframe1DWithScalar:(float)arg1 atTime:(double)arg2 ;
+(id)keyframe1DWithScalar:(float)arg1 atTime:(double)arg2 offsetType:(unsigned)arg3 ;
-(id)keyframe;
-(void)setScalar:(float)arg1 ;
-(float)scalar;
-(id)initKeyframe1DWithScalar:(float)arg1 atTime:(double)arg2 offsetType:(unsigned)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


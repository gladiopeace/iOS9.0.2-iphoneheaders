/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PTXMotionWindow : NSObject {

	float _radius;
	float _maxIncrease;
	int _direction;
	float _effectiveRadius;
	float _center;
	float _upperLimit;
	float _lowerLimit;

}
-(void)reset;
-(float)mappedOffset:(float)arg1 ;
-(void)setIncreaseFactor:(float)arg1 fixingOffset:(float)arg2 ;
-(id)initWithRadius:(float)arg1 maxIncrease:(float)arg2 direction:(int)arg3 ;
@end


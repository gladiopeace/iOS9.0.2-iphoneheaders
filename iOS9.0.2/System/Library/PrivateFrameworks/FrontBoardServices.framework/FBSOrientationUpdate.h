/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FBSOrientationUpdate : NSObject {

	int _orientation;
	int _rotationDirection;
	double _duration;

}

@property (assign,nonatomic) int orientation;                    //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double duration;                    //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) int rotationDirection;              //@synthesize rotationDirection=_rotationDirection - In the implementation block
-(id)description;
-(double)duration;
-(void)setOrientation:(int)arg1 ;
-(void)setDuration:(double)arg1 ;
-(int)orientation;
-(id)initWithOrientation:(int)arg1 duration:(double)arg2 rotationDirection:(int)arg3 ;
-(void)setRotationDirection:(int)arg1 ;
-(int)rotationDirection;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/HNDAnimationFactory.h>

@interface HNDSpringAnimationFactory : HNDAnimationFactory {

	float _mass;
	float _stiffness;
	float _damping;

}

@property (nonatomic,readonly) float mass;                   //@synthesize mass=_mass - In the implementation block
@property (nonatomic,readonly) float stiffness;              //@synthesize stiffness=_stiffness - In the implementation block
@property (nonatomic,readonly) float damping;                //@synthesize damping=_damping - In the implementation block
+(id)factoryWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 ;
-(id)_initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 ;
-(void)_calculateDuration;
-(id)_springAnimation;
-(float)stiffness;
-(id)_animation;
-(float)damping;
-(float)mass;
@end


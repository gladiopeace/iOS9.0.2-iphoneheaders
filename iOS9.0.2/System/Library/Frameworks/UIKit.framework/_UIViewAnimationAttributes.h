/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding> {

	double _duration;
	double _delay;
	unsigned _options;
	char _hasSpringAttributes;
	float _springDamping;
	float _springVelocity;
	float _springMass;
	float _springStiffness;
	int _curve;

}

@property (getter=_duration,nonatomic,readonly) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (getter=_delay,nonatomic,readonly) double delay;                                        //@synthesize delay=_delay - In the implementation block
@property (getter=_curve,nonatomic,readonly) int curve;                                           //@synthesize curve=_curve - In the implementation block
@property (getter=_hasSpringAttributes,nonatomic,readonly) char hasSpringAttributes;              //@synthesize hasSpringAttributes=_hasSpringAttributes - In the implementation block
@property (getter=_springDamping,nonatomic,readonly) float springDamping;                         //@synthesize springDamping=_springDamping - In the implementation block
@property (getter=_springVelocity,nonatomic,readonly) float springVelocity;                       //@synthesize springVelocity=_springVelocity - In the implementation block
@property (getter=_springMass,nonatomic,readonly) float springMass;                               //@synthesize springMass=_springMass - In the implementation block
@property (getter=_springStiffness,nonatomic,readonly) float springStiffness;                     //@synthesize springStiffness=_springStiffness - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)_duration;
-(double)_delay;
-(int)_curve;
-(int)curve;
-(char)_hasSpringAttributes;
-(float)_springDamping;
-(float)_springVelocity;
-(float)_springMass;
-(float)_springStiffness;
@end


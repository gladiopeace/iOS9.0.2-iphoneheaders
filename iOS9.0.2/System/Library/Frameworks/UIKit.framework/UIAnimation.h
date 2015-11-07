/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIAnimation : NSObject {

	id _target;
	SEL _action;
	id _delegate;
	/*^block*/id _completion;
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned useNSTimer : 1;
	}  _animationFlags;
	double _startTime;
	double _duration;
	int _state;

}
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(int)state;
-(void)setDuration:(double)arg1 ;
-(int)type;
-(SEL)action;
-(id)target;
-(void)setAnimationCurve:(int)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)setUsesNSTimer:(char)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(float)fractionForTime:(double)arg1 ;
-(void)markStop;
-(/*^block*/id)completion;
-(void)setCompletion:(/*^block*/id)arg1 ;
-(void)markStart:(double)arg1 ;
-(float)progressForFraction:(float)arg1 ;
-(void)stopAnimation;
-(char)usesNSTimer;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MRAction, NSDictionary;

@interface MRAnimationTrigger : NSObject {

	MRAction* _action;
	float _startValue;
	float _lastValue;
	NSDictionary* _animationAttributes;

}

@property (nonatomic,retain) MRAction * action;                       //@synthesize action=_action - In the implementation block
@property (assign) float startValue;                                  //@synthesize startValue=_startValue - In the implementation block
@property (assign) float lastValue;                                   //@synthesize lastValue=_lastValue - In the implementation block
@property (readonly) NSDictionary * animationAttributes;              //@synthesize animationAttributes=_animationAttributes - In the implementation block
@property (readonly) char isArmed; 
-(float)lastValue;
-(char)isArmed;
-(void)setLastValue:(float)arg1 ;
-(void)disarm;
-(float)rearmIfNeededWithDefaultValue:(float)arg1 ;
-(NSDictionary *)animationAttributes;
-(id)initWithAction:(id)arg1 ;
-(float)startValue;
-(void)dealloc;
-(MRAction *)action;
-(void)setAction:(MRAction *)arg1 ;
-(void)setStartValue:(float)arg1 ;
@end

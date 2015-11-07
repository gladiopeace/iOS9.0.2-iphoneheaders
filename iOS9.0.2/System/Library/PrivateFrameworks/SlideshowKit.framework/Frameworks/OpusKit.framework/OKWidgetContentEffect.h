/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString, NSDictionary, CAAnimation, OFUIView;

@interface OKWidgetContentEffect : NSObject <OKSettingsSupport> {

	NSString* _uuid;
	NSDictionary* _settings;
	CAAnimation* _animation;
	OFUIView* _animatedView;
	char _loop;
	char _autoplay;
	char _isPaused;
	char _needsApplySettings;
	double _defaultDuration;

}

@property (nonatomic,retain) CAAnimation * animation;               //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) OFUIView * animatedView;               //@synthesize animatedView=_animatedView - In the implementation block
@property (assign,nonatomic) char loop;                             //@synthesize loop=_loop - In the implementation block
@property (assign,nonatomic) char autoplay;                         //@synthesize autoplay=_autoplay - In the implementation block
@property (assign,nonatomic) double defaultDuration;                //@synthesize defaultDuration=_defaultDuration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationKeyPrefix;
+(id)supportedSettings;
-(void)dealloc;
-(id)init;
-(CAAnimation *)animation;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)stopAnimation;
-(char)isAnimating;
-(void)startAnimation;
-(id)initWithSettings:(id)arg1 ;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(OFUIView *)animatedView;
-(void)setAnimatedView:(OFUIView *)arg1 ;
-(char)loop;
-(void)setLoop:(char)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)applySettingsIfNeeded;
-(void)applySettings;
-(void)needsApplySettings;
-(void)prepareContentEffectWithView:(id)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(void)pauseAnimation;
-(char)autoplay;
-(void)resumeAnimation;
-(double)remainingPlayDuration;
-(void)setAutoplay:(char)arg1 ;
-(double)defaultDuration;
@end

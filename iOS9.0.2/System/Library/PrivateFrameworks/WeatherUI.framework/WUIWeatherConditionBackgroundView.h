/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WeatherUI/WeatherUI-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_source;
@class WUIDynamicWeatherBackground, NSArray, WUIDynamicWeatherBackgroundInteractiveTransaction, NSObject, UIImageView, WUIWeatherCondition;

@interface WUIWeatherConditionBackgroundView : UIView {

	int _activeIndex;
	char _hidesConditions;
	WUIDynamicWeatherBackground* _background;
	float _scrollOffset;
	NSArray* _cities;
	WUIDynamicWeatherBackgroundInteractiveTransaction* _crossfadeTransaction;
	NSObject*<OS_dispatch_source> _crossfadeEffectTimer;
	UIImageView* _introductionImageView;
	WUIWeatherCondition* _leftCondition;
	WUIWeatherCondition* _rightCondition;

}

@property (nonatomic,readonly) NSArray * conditions; 
@property (nonatomic,readonly) WUIDynamicWeatherBackground * background;                                            //@synthesize background=_background - In the implementation block
@property (assign,nonatomic) char hidesConditions;                                                                  //@synthesize hidesConditions=_hidesConditions - In the implementation block
@property (assign,nonatomic) float scrollOffset;                                                                    //@synthesize scrollOffset=_scrollOffset - In the implementation block
@property (nonatomic,retain) NSArray * cities;                                                                      //@synthesize cities=_cities - In the implementation block
@property (nonatomic,retain) WUIDynamicWeatherBackgroundInteractiveTransaction * crossfadeTransaction;              //@synthesize crossfadeTransaction=_crossfadeTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> crossfadeEffectTimer;                                    //@synthesize crossfadeEffectTimer=_crossfadeEffectTimer - In the implementation block
@property (nonatomic,retain) UIImageView * introductionImageView;                                                   //@synthesize introductionImageView=_introductionImageView - In the implementation block
@property (nonatomic,retain) WUIWeatherCondition * leftCondition;                                                   //@synthesize leftCondition=_leftCondition - In the implementation block
@property (nonatomic,retain) WUIWeatherCondition * rightCondition;                                                  //@synthesize rightCondition=_rightCondition - In the implementation block
-(float)scrollOffset;
-(NSArray *)cities;
-(void)setCities:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(WUIDynamicWeatherBackground *)background;
-(NSArray *)conditions;
-(void)_cityDidUpdate:(id)arg1 ;
-(void)animateTransitionToSize:(CGSize)arg1 ;
-(id)_conditions;
-(void)setLeftCondition:(WUIWeatherCondition *)arg1 ;
-(void)setRightCondition:(WUIWeatherCondition *)arg1 ;
-(void)setCities:(id)arg1 activeCityIndex:(int)arg2 activeCityLiveConditionOnly:(char)arg3 animationDuration:(double)arg4 ;
-(void)_setCondition:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)_conditionAtIndex:(unsigned)arg1 ;
-(void)_removeSideLayers;
-(void)_addBackAllLayers;
-(void)setCities:(id)arg1 activeCityIndex:(int)arg2 ;
-(void)didTransitionToSize:(CGSize)arg1 ;
-(void)setCities:(id)arg1 activeCityIndex:(int)arg2 animationDuration:(double)arg3 ;
-(void)updateConditionsAboutCityIndex:(int)arg1 ;
-(void)setScrollEnded;
-(void)setHidesConditions:(char)arg1 ;
-(void)setScrollOffset:(float)arg1 ;
-(id)relinquishConditionViewForCityAtIndex:(int)arg1 ;
-(void)useConditionView:(id)arg1 activeCityIndex:(unsigned)arg2 ;
-(void)prepareToSuspend;
-(void)prepareToResume;
-(void)saveImageForKeyCondition;
-(char)hidesConditions;
-(WUIDynamicWeatherBackgroundInteractiveTransaction *)crossfadeTransaction;
-(void)setCrossfadeTransaction:(WUIDynamicWeatherBackgroundInteractiveTransaction *)arg1 ;
-(NSObject*<OS_dispatch_source>)crossfadeEffectTimer;
-(void)setCrossfadeEffectTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(UIImageView *)introductionImageView;
-(void)setIntroductionImageView:(UIImageView *)arg1 ;
-(WUIWeatherCondition *)leftCondition;
-(WUIWeatherCondition *)rightCondition;
@end


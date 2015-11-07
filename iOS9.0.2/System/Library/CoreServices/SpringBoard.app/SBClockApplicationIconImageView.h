/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLiveIconImageView.h>
#import <SpringBoard/SBDateTimeOverrideObserver.h>

@class CALayer, NSString;

@interface SBClockApplicationIconImageView : SBLiveIconImageView <SBDateTimeOverrideObserver> {

	CALayer* _seconds;
	CALayer* _minutes;
	CALayer* _hours;
	CALayer* _blackDot;
	CALayer* _redDot;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_iconEditingStateChanged:(id)arg1 ;
+(void)_handleTimeChange:(id)arg1 ;
+(void)_timerFired:(id)arg1 ;
+(void)initialize;
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(void)setIcon:(id)arg1 location:(int)arg2 animated:(char)arg3 ;
-(id)_generateSquareContentsImage;
-(void)updateUnanimated;
-(void)updateAnimatingState;
-(char)isAnimationAllowed;
-(void)_timerFiredWithComponents:(id)arg1 flags:(unsigned)arg2 ;
-(void)_updateUnanimatedWithComponents:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setAnimating:(char)arg1 ;
-(id)contentsImage;
@end


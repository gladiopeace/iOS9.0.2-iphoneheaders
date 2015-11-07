/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconImageView.h>
#import <SpringBoard/SBControlCenterObserver.h>

@class NSString;

@interface SBLiveIconImageView : SBIconImageView <SBControlCenterObserver> {

	unsigned _pauseCauses;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_displayWillActivate:(id)arg1 ;
+(void)_displayDidDeactivate:(id)arg1 ;
+(void)_applicationDidExit:(id)arg1 ;
+(void)initialize;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
-(void)updateImageAnimated:(char)arg1 ;
-(void)setIcon:(id)arg1 location:(int)arg2 animated:(char)arg3 ;
-(void)_activeDisplayChanged:(id)arg1 ;
-(void)_addPauseCause:(unsigned)arg1 ;
-(id)_stringForPauseCause:(unsigned)arg1 ;
-(void)updateUnanimated;
-(void)_significantAnimationWillBegin:(id)arg1 ;
-(void)_significantAnimationDidEnd:(id)arg1 ;
-(void)_removePauseCause:(unsigned)arg1 ;
-(char)_isPausedForCause:(unsigned)arg1 ;
-(void)updateAnimatingState;
-(void)_willBeginScrolling:(id)arg1 ;
-(void)_didEndScrolling:(id)arg1 ;
-(char)isAnimationAllowed;
-(void)_spotlightWillAppear:(id)arg1 ;
-(void)_spotlightWillDismiss:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(NSString *)description;
-(id)snapshot;
-(void)didMoveToSuperview;
-(void)prepareForReuse;
-(void)setPaused:(char)arg1 ;
@end


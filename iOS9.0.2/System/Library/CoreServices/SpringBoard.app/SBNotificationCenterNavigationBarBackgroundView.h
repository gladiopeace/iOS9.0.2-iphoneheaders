/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView;

@interface SBNotificationCenterNavigationBarBackgroundView : UIView {

	int _layoutMode;
	_UIBackdropView* _backdropView;
	UIView* _backgroundView;

}
-(id)initWithFrame:(CGRect)arg1 forLayoutMode:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setAppearanceStorage:(id)arg1 ;
-(id)appearanceStorage;
-(void)updateBackgroundImage;
-(void)setBarStyle:(int)arg1 ;
-(void)setBarWantsAdaptiveBackdrop:(char)arg1 ;
-(void)setTranslucent:(char)arg1 ;
-(void)setBarTintColor:(id)arg1 ;
-(void)_setIsContainedInPopover:(char)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(char)arg2 ;
@end


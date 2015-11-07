/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/DefaultMediaPlayer.qldisplay/DefaultMediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DefaultMediaPlayer/DefaultMediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, _UIBackdropView;

@interface QLOverlayPlayButton : UIView {

	UIButton* _button;
	_UIBackdropView* _backdropView;
	id _target;
	SEL _action;

}
-(void)_playButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_playButtonActivate:(id)arg1 ;
-(void)_playButtonDeactivate:(id)arg1 ;
@end


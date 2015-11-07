/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _SFNavigationBarURLButtonDelegate;
@class UIImageView, UIImage, UIGestureRecognizer, NSString;

@interface _SFNavigationBarURLButton : UIButton <UIGestureRecognizerDelegate> {

	UIImageView* _overlayImageView;
	UIImageView* _tintImageView;
	UIImage* _darkBackgroundImage;
	UIImage* _lightBackgroundImage;
	UIGestureRecognizer* _longPressGestureRecognizer;
	char _showsDarkBackground;
	char _usesLightOverlayAndTintAlpha;
	float _backgroundAlphaFactor;
	id<_SFNavigationBarURLButtonDelegate> _delegate;

}

@property (assign,nonatomic) float backgroundAlphaFactor;                                        //@synthesize backgroundAlphaFactor=_backgroundAlphaFactor - In the implementation block
@property (assign,nonatomic) char showsDarkBackground;                                           //@synthesize showsDarkBackground=_showsDarkBackground - In the implementation block
@property (assign,nonatomic) char usesLightOverlayAndTintAlpha;                                  //@synthesize usesLightOverlayAndTintAlpha=_usesLightOverlayAndTintAlpha - In the implementation block
@property (assign,nonatomic,__weak) id<_SFNavigationBarURLButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleLongPress:(id)arg1 ;
-(void)_updateBackgroundImageAnimated:(char)arg1 ;
-(void)_dismissMenu:(id)arg1 ;
-(id)pasteButtonTitle;
-(void)pasteAndNavigate:(id)arg1 ;
-(void)setShowsDarkBackground:(char)arg1 ;
-(void)setBackgroundAlphaFactor:(float)arg1 ;
-(void)setUsesLightOverlayAndTintAlpha:(char)arg1 ;
-(float)backgroundAlphaFactor;
-(char)showsDarkBackground;
-(char)usesLightOverlayAndTintAlpha;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<_SFNavigationBarURLButtonDelegate>)arg1 ;
-(void)dealloc;
-(id<_SFNavigationBarURLButtonDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(void)setHighlighted:(char)arg1 ;
-(char)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)copy:(id)arg1 ;
@end


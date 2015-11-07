/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, CALayer, UIViewController, UIColor;

@interface IMFlipViewTransition : UIControl {

	CGRect _fromFrame;
	CGRect _toFrame;
	UIView* _startView;
	UIView* _endView;
	CALayer* _backgroundBlocker;
	UIViewController* _endViewController;
	CGPoint _startPosition;
	UIView* _rootView;
	float _transitionDuration;
	char _noShadow;
	UIColor* _backgroundViewColor;
	id _delegate;

}

@property (assign,nonatomic) float transitionDuration;                          //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) CGRect fromFrame;                                  //@synthesize fromFrame=_fromFrame - In the implementation block
@property (assign,nonatomic) CGRect toFrame;                                    //@synthesize toFrame=_toFrame - In the implementation block
@property (nonatomic,retain) UIView * startView;                                //@synthesize startView=_startView - In the implementation block
@property (nonatomic,retain) UIView * endView;                                  //@synthesize endView=_endView - In the implementation block
@property (nonatomic,retain) UIViewController * endViewController;              //@synthesize endViewController=_endViewController - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char noShadow;                                     //@synthesize noShadow=_noShadow - In the implementation block
@property (nonatomic,retain) UIView * rootView;                                 //@synthesize rootView=_rootView - In the implementation block
@property (assign,nonatomic) CGPoint startPosition;                             //@synthesize startPosition=_startPosition - In the implementation block
@property (nonatomic,retain) UIColor * backgroundViewColor;                     //@synthesize backgroundViewColor=_backgroundViewColor - In the implementation block
-(void)setFromFrame:(CGRect)arg1 ;
-(char)noShadow;
-(void)setNoShadow:(char)arg1 ;
-(void)setBackgroundViewColor:(UIColor *)arg1 ;
-(id)startImage;
-(UIViewController *)endViewController;
-(void)setEndViewController:(UIViewController *)arg1 ;
-(void)flipOpen;
-(void)flipClosed;
-(CGRect)fromFrame;
-(void)updateCenterPoint:(CGPoint)arg1 ;
-(void)startOpenSecondHalf;
-(void)endOpenTransition;
-(void)startCloseSecondHalf;
-(void)endCloseTransition;
-(id)imageFromViewController:(id)arg1 ;
-(UIColor *)backgroundViewColor;
-(id)endImage;
-(void)setStartView:(UIView *)arg1 ;
-(void)setEndView:(UIView *)arg1 ;
-(UIView *)startView;
-(UIView *)endView;
-(void)setToFrame:(CGRect)arg1 ;
-(CGRect)toFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(float)transitionDuration;
-(CGPoint)startPosition;
-(void)setStartPosition:(CGPoint)arg1 ;
-(void)updateShadowPath;
-(void)setTransitionDuration:(float)arg1 ;
-(UIView *)rootView;
-(void)setRootView:(UIView *)arg1 ;
@end


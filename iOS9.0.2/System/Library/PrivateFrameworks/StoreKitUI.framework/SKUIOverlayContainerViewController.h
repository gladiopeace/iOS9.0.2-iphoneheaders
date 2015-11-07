/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SKUIOverlayContainerDelegate;
@class UIControl, UITapGestureRecognizer, NSMutableArray, NSArray, NSString;

@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate> {

	UIControl* _backstopView;
	char _isAdjustingViewsForDismiss;
	int _popViewControllerCount;
	int _selectedViewControllerIndex;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSMutableArray* _viewControllers;
	id<SKUIOverlayContainerDelegate> _delegate;

}

@property (nonatomic,readonly) UIControl * backstopControl; 
@property (nonatomic,copy,readonly) NSArray * viewControllers; 
@property (assign,nonatomic,__weak) id<SKUIOverlayContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIOverlayContainerDelegate>)arg1 ;
-(void)dealloc;
-(id<SKUIOverlayContainerDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)popViewControllerAnimated:(char)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(NSArray *)viewControllers;
-(void)_tapAction:(id)arg1 ;
-(void)showViewControllers:(id)arg1 ;
-(void)showViewController:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dismissWithFadeTransitionCompletionBlock:(/*^block*/id)arg1 ;
-(void)dismissWithFlipTransition:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(UIControl *)backstopControl;
-(void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_frameAction:(id)arg1 ;
-(void)_removeChildren;
-(void)popViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_positionViewControllersForOrientation:(int)arg1 ;
-(void)_popViewControllers;
-(void)_fadeInViewController:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_slideInViewController:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_pushViewController:(id)arg1 ;
-(CGRect)_frameToCenterViewController:(id)arg1 ;
-(id)_selectedViewController;
-(id)_viewControllerForPoint:(CGPoint)arg1 ;
-(int)_indexOfViewControllerForPoint:(CGPoint)arg1 ;
-(float)_overlaySpacingForOrientation:(int)arg1 ;
-(void)replaceViewController:(id)arg1 withViewController:(id)arg2 ;
@end


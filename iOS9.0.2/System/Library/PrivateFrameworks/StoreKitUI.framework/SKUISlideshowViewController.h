/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUISlideshowItemViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate;
@class SKUIClientContext, UIPageViewController, NSOperationQueue, NSMutableDictionary, NSString;

@interface SKUISlideshowViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, SKUISlideshowItemViewControllerDelegate, UIViewControllerTransitioningDelegate> {

	SKUIClientContext* _clientContext;
	UIPageViewController* _pageViewController;
	NSOperationQueue* _remoteLoadQueue;
	NSMutableDictionary* _itemViewControllersCache;
	char _overlayVisible;
	char _shouldCancelDelayedOverlayVisibilityChange;
	char _overlayVisibilityWillChangeWithDelay;
	char _lockOverlayControlsVisible;
	SCD_Struct_SK28 _savedStatusBarState;
	id<SKUISlideshowViewControllerDataSource> _dataSource;
	id<SKUISlideshowViewControllerDelegate> _delegate;
	int _currentIndex;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                        //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISlideshowViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISlideshowViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int currentIndex;                                                         //@synthesize currentIndex=_currentIndex - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_doneButtonTapped:(id)arg1 ;
-(void)setDataSource:(id<SKUISlideshowViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<SKUISlideshowViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id<SKUISlideshowViewControllerDataSource>)dataSource;
-(id<SKUISlideshowViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(int)currentIndex;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)animatorForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animatorForDismissedController:(id)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(char)arg2 previousViewControllers:(id)arg3 transitionCompleted:(char)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setCurrentIndex:(int)arg1 ;
-(void)slideshowItemViewControllerDidBeginPinchGesture:(id)arg1 ;
-(void)slideshowItemViewControllerDidDismissWithPinchGesture:(id)arg1 ratio:(float)arg2 ;
-(id)currentItemViewController;
-(id)_itemViewControllerForIndex:(int)arg1 ;
-(void)_updateCurrentIndex;
-(void)_contentViewTapped:(id)arg1 ;
-(void)_saveStatusBarAppearanceState;
-(void)_restoreStatusBarAppearanceState;
-(void)_setOverlayVisible:(char)arg1 animated:(char)arg2 ;
-(void)_fadeOutOverlayAfterDelay:(unsigned)arg1 ;
-(void)_updateTitleWithIndex:(int)arg1 ;
-(void)_toggleFadeOverlay;
@end


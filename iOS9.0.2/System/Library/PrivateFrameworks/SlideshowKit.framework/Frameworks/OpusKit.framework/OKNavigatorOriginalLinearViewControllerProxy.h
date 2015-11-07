/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKNavigatorViewController.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>

@class UIPageViewController, NSArray, NSString;

@interface OKNavigatorOriginalLinearViewControllerProxy : OKNavigatorViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource> {

	UIPageViewController* _pagesViewController;
	NSArray* _orderedPagesNames;
	int _transitionStyle;
	int _navigationOrientation;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)commonInit;
-(char)prepareForDisplay;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(char)arg2 previousViewControllers:(id)arg3 transitionCompleted:(char)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(char)prepareForWarmup;
-(char)prepareForUnload;
-(void)applySettings;
-(void)navigateToPageWithName:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadPagesViewController;
-(void)gotoNext:(id)arg1 ;
-(void)gotoPrevious:(id)arg1 ;
-(void)prepareAdjacentPageViewControllers;
-(void)updatePagesViewController;
-(id)nameForPageBeforePage:(id)arg1 ;
-(id)nameForPageAfterPage:(id)arg1 ;
-(void)setSettingTransition:(unsigned)arg1 ;
-(void)setSettingOrientation:(unsigned)arg1 ;
@end


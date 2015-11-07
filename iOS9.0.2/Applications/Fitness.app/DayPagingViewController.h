/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>

@class UIPageViewController, FitnessModel, NSDate, NSString;

@interface DayPagingViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate> {

	UIPageViewController* _pageController;
	FitnessModel* _model;
	NSDate* _initialDate;

}

@property (nonatomic,readonly) NSDate * initialDate;                //@synthesize initialDate=_initialDate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setBackButtonToFormattedCurrentDate;
-(void)_ringShareButtonPressed:(id)arg1 ;
-(void)currentDateChanged:(id)arg1 ;
-(void)_disablePageController;
-(void)_enablePageController;
-(id)mainActivityDayView;
-(NSDate *)initialDate;
-(void)_registerForNotifications;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)initWithModel:(id)arg1 ;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(char)arg2 previousViewControllers:(id)arg3 transitionCompleted:(char)arg4 ;
-(void)_pageViewControllerDidFinishTransitions:(id)arg1 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
@end


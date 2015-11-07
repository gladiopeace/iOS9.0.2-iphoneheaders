/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MainViewController.h>
#import <MobileCal/MainViewControllerOptionalMethods.h>
#import <UIKit/UITraitEnvironment.h>

@class UITraitCollection, MainViewController, CalendarModel, NSString;

@interface MainViewControllerContainer : MainViewController <MainViewControllerOptionalMethods, UITraitEnvironment> {

	MainViewController* _currentChildViewController;
	MainViewController* _emptyChildViewController;
	char _animatingViewTransition;
	CalendarModel* _model;

}

@property (assign,nonatomic) char animatingViewTransition;                                                 //@synthesize animatingViewTransition=_animatingViewTransition - In the implementation block
@property (nonatomic,retain) CalendarModel * model;                                                        //@synthesize model=_model - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,retain) UITraitCollection * futureTraitCollection; 
@property (nonatomic,readonly) char isTransitioningTraitCollection; 
@property (assign,nonatomic) char isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView; 
@property (nonatomic,readonly) char shouldAdaptEventViewControllers; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 showComments:(char)arg4 ;
-(void)showViewController:(id)arg1 sender:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)selectDate:(id)arg1 animated:(char)arg2 ;
-(void)updateBackButtonToDate:(id)arg1 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 ;
-(void)showNowAnimated:(char)arg1 ;
-(char)shouldPushNextLevelViewControllerWhenTodayIsVisible;
-(void)enableGestureRecognizers;
-(void)disableGestureRecognizers;
-(float)leftBarButtonBlankFixedSpaceWidth;
-(void)updatePalette:(id)arg1 ;
-(id)bestDateForNewEvent;
-(char)showEventDetailsWhenNewEventAdded;
-(id)toolBarTintColor;
-(int)supportedToggleMode;
-(id)navigationBarDisplayedDateString;
-(void)updateNavigationBarDisplayedDateString;
-(void)invalidateBackButtonDate;
-(char)shouldUpdateOwnBackButtonWhenTopViewController;
-(id)updateBackButtonWhileTopViewControllerToDate:(id)arg1 ;
-(char)shouldRespondToApplicationDidBecomeActiveStateChange;
-(void)setShouldRespondToApplicationDidBecomeActiveStateChange:(char)arg1 ;
-(char)isTodayVisible;
-(char)isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
-(char)shouldAdaptEventViewControllers;
-(char)allowsOverriddenRightNavigationBarItems;
-(char)allowsOverriddenToolbarItems;
-(id)currentChildViewController;
-(int)presentationStyleOverrideForChildViewControllers;
-(id)childViewControllerForCompactWidthRegularHeight;
-(id)pushedNextLevelMainViewControllerContainerAnimated:(char)arg1 ;
-(id)childViewControllerForUnknownTraits;
-(id)childViewControllerForRegularWidthCompactHeight;
-(id)childViewControllerForRegularWidthRegularHeight;
-(Class)childViewControllerClassForTraits:(id)arg1 ;
-(char)childViewControllerNeedsToBeInsettedFromNavigationElements;
-(void)_updateForCurrentTraits;
-(void)setupForViewAppearance;
-(char)currentChildViewControllerIsLoaded;
-(void)setupUIForTraitCollection:(id)arg1 ;
-(char)animatingViewTransition;
-(id)viewControllerToShowFrom;
-(id)_childViewControllerForTraitCollection:(id)arg1 ;
-(id)emptyChildViewController;
-(char)shouldRemoveSelfFromNavigationStackIfTraitCollectionIsUnsupported;
-(void)_removeChildViewControllerForCurrentTraits;
-(void)_addChildViewControllerForCurrentTraits;
-(id)childViewControllerForCompactWidthCompactHeight;
-(id)managedNavigationController;
-(char)shouldModallyPresentFirstShownViewController;
-(id)_todaysDate;
-(void)showTodayAnimated:(char)arg1 ;
-(void)setAnimatingViewTransition:(char)arg1 ;
-(UITraitCollection *)traitCollection;
-(char)respondsToSelector:(SEL)arg1 ;
-(NSString *)description;
-(void)viewWillLayoutSubviews;
-(CalendarModel *)model;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(CalendarModel *)arg1 ;
-(id)navigationBarTintColor;
@end


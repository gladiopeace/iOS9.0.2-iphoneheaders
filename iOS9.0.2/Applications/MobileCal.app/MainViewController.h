/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileCal/MainViewControllerOptionalMethods.h>

@class EnqueueableManagedNavigationController, UINavigationController, NSString, UITraitCollection;

@interface MainViewController : UIViewController <MainViewControllerOptionalMethods> {

	EnqueueableManagedNavigationController* _managedNavigationController;

}

@property (nonatomic,readonly) UINavigationController * managedNavigationController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,retain) UITraitCollection * futureTraitCollection; 
@property (nonatomic,readonly) char isTransitioningTraitCollection; 
@property (assign,nonatomic) char isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView; 
@property (nonatomic,readonly) char shouldAdaptEventViewControllers; 
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 showComments:(char)arg4 ;
-(void)showViewController:(id)arg1 sender:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)selectDate:(id)arg1 animated:(char)arg2 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 ;
-(char)shouldAdaptEventViewControllers;
-(char)allowsOverriddenRightNavigationBarItems;
-(char)allowsOverriddenToolbarItems;
-(void)setupUIForTraitCollection:(id)arg1 ;
-(UINavigationController *)managedNavigationController;
-(char)shouldModallyPresentFirstShownViewController;
-(id)shownEventEditViewController;
-(void)invalidateManagedNavigationController;
-(id)shownEventViewController;
-(Class)managedNavigationControllerType;
-(void)_setManagedNavigationControllerModalPresentationDelegates;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)targetViewControllerForAction:(SEL)arg1 sender:(id)arg2 ;
@end


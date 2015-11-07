/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileTimer/MTAddItemController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <MobileTimer/ChunkedGridLayoutDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <MobileTimer/AddClockViewControllerDelegate.h>
#import <MobileTimer/StateManagement.h>
#import <MobileTimer/WorldClockCollectionEditDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UINavigationController, UIPopoverController, FullScreenWorldClockCollectionController, NSTimer, UIPinchGestureRecognizer, NSIndexPath, NSUserActivity, WorldClockPadContentView, NSString;

@interface WorldClockPadViewController : UIViewController <MTAddItemController, UICollectionViewDataSource, UICollectionViewDelegate, ChunkedGridLayoutDelegate, UIPopoverControllerDelegate, AddClockViewControllerDelegate, StateManagement, WorldClockCollectionEditDelegate, UIGestureRecognizerDelegate> {

	UINavigationController* _addClockNavigationController;
	UIPopoverController* _editClocksController;
	FullScreenWorldClockCollectionController* _fullScreenClocksController;
	int _addedClockIndex;
	char _initializedCurrentPage;
	char _networkReachable;
	NSTimer* _weatherUpdateTimer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	NSIndexPath* _pinchedIndexPath;
	char _prefersStatusBarHidden;
	int _statusBarStyle;
	NSUserActivity* _userActivity;
	WorldClockPadContentView* _contentView;

}

@property (nonatomic,retain) WorldClockPadContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissFullScreenClock;
-(id)fullScreenClocksController;
-(void)showAddView;
-(void)dismissAddViewController:(id)arg1 ;
-(void)updateMapWeatherDataForAllCities;
-(void)updateMapWeatherDataForCities:(id)arg1 ;
-(void)presentFullScreenClockForIndexPath:(id)arg1 afterDelay:(double)arg2 ;
-(char)shouldPresentFullScreenClock;
-(void)presentFullScreenClockForIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addClockViewController:(id)arg1 addCity:(id)arg2 ;
-(void)weatherTemperatureUnitsDidChange;
-(void)collectionEditController:(id)arg1 removeCityAtIndex:(unsigned)arg2 ;
-(void)collectionEditController:(id)arg1 moveCityAtIndex:(unsigned)arg2 toIndex:(unsigned)arg3 ;
-(void)didSuspend;
-(char)shouldShowAddView;
-(char)shouldToggleEditView;
-(void)updatePlaceholderClocks:(unsigned)arg1 ;
-(void)toggleEditView;
-(void)setLeftBarButton:(char)arg1 animated:(char)arg2 ;
-(void)pinchAction:(id)arg1 ;
-(void)handleApplicationDidEnterBackground;
-(void)handleApplicationWillEnterForeground;
-(void)updateClocksForSize:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
-(void)updatePageIndicator;
-(void)startUpdates;
-(void)addClock:(id)arg1 ;
-(void)scrollToPageContainingIndexPath:(id)arg1 ;
-(CGSize)sizeForItemWithLayout:(id)arg1 ;
-(void)saveState;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)setStatusBarStyle:(int)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(WorldClockPadContentView *)contentView;
-(void)setContentView:(WorldClockPadContentView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)defaultPNGName;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(char)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)setPrefersStatusBarHidden:(char)arg1 ;
-(void)reachabilityChanged:(id)arg1 ;
-(void)reloadState;
-(void)stopUpdates;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/TransitRoutePickingDelegate.h>
#import <Maps/TransitAppSelectionControllerDelegate.h>
#import <Maps/RoutePickingTransitDirectionsControllerDelegate.h>
#import <Maps/MKMapViewDelegatePrivate.h>
#import <Maps/TransitRoutePreviewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Maps/RoutePickingSession.h>

@protocol RoutePickingDisplayableRoutes;
@class RoutePickingTiming, MNRoute, NSError, RoutePickingTransitDirectionsController, ModalPresenter, Presenter, TransitOptionsRootViewController, TransitAppSelectionController, RoutePickingModeController, UINavigationController, TransitRoutePickingTableViewController, TransitPickerView, TransitRoutePreviewController, ScrollableContentBarsController, NSString;

@interface RoutePickingSessionTransit : NSObject <TransitRoutePickingDelegate, TransitAppSelectionControllerDelegate, RoutePickingTransitDirectionsControllerDelegate, MKMapViewDelegatePrivate, TransitRoutePreviewControllerDelegate, UINavigationControllerDelegate, RoutePickingSession> {

	RoutePickingTiming* _timing;
	id<RoutePickingDisplayableRoutes> _displayableRoutes;
	MNRoute* _ignoringPreferencesSelectedRoute;
	NSError* _error;
	char _loading;
	char _animatingLoadingViewWithControlBar;
	char _isPerformingLayout;
	char _shouldSuppressAnimationsForPositioningDuringLayout;
	int _currentPresentationStyle;
	char _shouldCommitTransitOptionsWhenDismissed;
	RoutePickingTransitDirectionsController* _transitDirectionsPresentationController;
	ModalPresenter* _modalDirectionsListPresenter;
	Presenter* _transitIncidentPresenter;
	Presenter* _transitOptionsPresenter;
	TransitOptionsRootViewController* _transitOptionsViewController;
	TransitAppSelectionController* _appSelector;
	RoutePickingModeController* _routePickingMode;
	id<RoutePickingDisplayableRoutes> _ignoringPreferencesRoutes;
	UINavigationController* _transitRoutePickingNavigationController;
	TransitRoutePickingTableViewController* _routePickingTableViewController;
	TransitPickerView* _routePickingContainerView;
	TransitRoutePreviewController* _routePreviewViewController;

}

@property (nonatomic,readonly) UINavigationController * transitRoutePickingNavigationController;                         //@synthesize transitRoutePickingNavigationController=_transitRoutePickingNavigationController - In the implementation block
@property (nonatomic,readonly) TransitRoutePreviewController * routePreviewController; 
@property (nonatomic,readonly) ScrollableContentBarsController * sidebarScrollableContentBarsController; 
@property (nonatomic,retain) id<RoutePickingDisplayableRoutes> ignoringPreferencesRoutes;                                //@synthesize ignoringPreferencesRoutes=_ignoringPreferencesRoutes - In the implementation block
@property (nonatomic,retain) TransitRoutePickingTableViewController * routePickingTableViewController;                   //@synthesize routePickingTableViewController=_routePickingTableViewController - In the implementation block
@property (nonatomic,retain) TransitPickerView * routePickingContainerView;                                              //@synthesize routePickingContainerView=_routePickingContainerView - In the implementation block
@property (nonatomic,retain) TransitRoutePreviewController * routePreviewViewController;                                 //@synthesize routePreviewViewController=_routePreviewViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) RoutePickingModeController * routePickingMode;                                       //@synthesize routePickingMode=_routePickingMode - In the implementation block
@property (getter=isLimitingNumberOfRouteDisplayed,nonatomic,readonly) char limitingNumberOfRouteDisplayed; 
@property (getter=isSuppressingRoutesDisplay,nonatomic,readonly) char suppressingRoutesDisplay; 
@property (nonatomic,readonly) char showsOnlySelectedRouteOnMap; 
@property (nonatomic,readonly) id<PresenterPresentationSource> shareSheetPresentationSource; 
-(int)selectedVariant;
-(void)setSelectedRoute:(id)arg1 ;
-(id)_mainChrome;
-(char)placePresentationSelectionManager:(id)arg1 requiresMapsSelectionForPresentingPlacecardInContext:(id)arg2 ;
-(char)placePresentationSelectionManager:(id)arg1 shouldUseDefaultPlaceCardPresentationForViewController:(id)arg2 ;
-(void)updateBlurDisabledBackgroundColor:(id)arg1 blurViewStyle:(int)arg2 transitionToBackdropStyle:(int)arg3 ;
-(char)mapViewShouldReceiveTouch:(id)arg1 ;
-(RoutePickingModeController *)routePickingMode;
-(void)setRoutePickingMode:(RoutePickingModeController *)arg1 ;
-(void)transitAppSelectionControllerDidCancel:(id)arg1 ;
-(void)transitAppSelectionControllerDidSelectApp:(id)arg1 ;
-(void)willStartLoadingExpectingNewSession:(char)arg1 withTiming:(id)arg2 animation:(id)arg3 ;
-(ScrollableContentBarsController *)sidebarScrollableContentBarsController;
-(void)controlBarMainActionButtonTapped:(id)arg1 ;
-(void)didFinishLoading;
-(void)didFinishLoadingNewDisplayableRoutes:(id)arg1 ;
-(char)canHandleError:(id)arg1 ;
-(void)didReceiveError:(id)arg1 ;
-(char)isSuppressingRoutesDisplay;
-(char)showsOnlySelectedRouteOnMap;
-(char)isLimitingNumberOfRouteDisplayed;
-(id<PresenterPresentationSource>)shareSheetPresentationSource;
-(id)sessionActionButton;
-(void)resignCurrentWithAnimation:(id)arg1 ;
-(void)becomeCurrentWithAnimation:(id)arg1 ;
-(UIEdgeInsets)additionalInsetsForSession;
-(char)supportsFullScreenDisplayStyle;
-(int)_presentationStyle;
-(void)routeDirectionsModeDidCancel:(id)arg1 ;
-(id<RoutePickingDisplayableRoutes>)ignoringPreferencesRoutes;
-(void)setIgnoringPreferencesRoutes:(id<RoutePickingDisplayableRoutes>)arg1 ;
-(void)transitRoutePreviewCOntroller:(id)arg1 didSelectIncident:(id)arg2 ;
-(void)transitRoutePicking:(id)arg1 didSelectEditTiming:(id)arg2 ;
-(void)_updateViewControllersWithRouteSetAndTiming:(id)arg1 ;
-(void)routeDirectionsModeDidSelectShare:(id)arg1 ;
-(void)_showNoRoutesAvailableWithTransitModePreferencesWithAnimation:(id)arg1 ;
-(void)transitRoutePicking:(id)arg1 didTapInfoAccessoryForRoute:(id)arg2 ;
-(void)transitRoutePreviewControllerDidSelectMoreRoutes:(id)arg1 ;
-(TransitRoutePreviewController *)routePreviewController;
-(void)_revealRoutesIgnoringAvoidanceMode;
-(void)_setFrameSuppressingAnimationIfNeeded:(CGRect)arg1 onView:(id)arg2 ;
-(void)_showLoadingWithAnimation:(id)arg1 ;
-(void)_updateViewsWithCurrentState;
-(id)_transitIncidentDoneButton;
-(void)_commitTransitOptions;
-(void)_selectRoute:(id)arg1 sender:(id)arg2 ;
-(void)_presentTansitOptionsFromView:(id)arg1 ;
-(void)_dismissRoutePickingTableViewControllerModal:(id)arg1 ;
-(TransitRoutePreviewController *)routePreviewViewController;
-(void)_attachRoutePickingContainerWithAnimation:(id)arg1 ;
-(void)_attachSingleRoutePreviewWithAnimation:(id)arg1 ;
-(void)transitRoutePreviewController:(id)arg1 didSelectRoute:(id)arg2 ;
-(void)_showNewRoutesOnMapIfPossibleAnimated:(char)arg1 ;
-(TransitRoutePickingTableViewController *)routePickingTableViewController;
-(void)_didTapDoneBarButton:(id)arg1 ;
-(void)_showErrorViewWithAnimation:(id)arg1 ;
-(CGRect)_routePreviewFrame;
-(void)_didTapCancelBarButton:(id)arg1 ;
-(void)_presentRoutingViewsWithAnimation:(id)arg1 ;
-(void)_dismissTransitIncidentPresenter:(id)arg1 ;
-(void)_removeRoutingViewsWithAnimation:(id)arg1 group:(id)arg2 ;
-(void)setRoutePickingContainerView:(TransitPickerView *)arg1 ;
-(void)setRoutePickingTableViewController:(TransitRoutePickingTableViewController *)arg1 ;
-(void)layoutWithAnimation:(id)arg1 ;
-(void)setRoutePreviewViewController:(TransitRoutePreviewController *)arg1 ;
-(void)_showNoTransitAvailableBecauseOfIncidentWithAnimation:(id)arg1 ;
-(void)transitRoutePicking:(id)arg1 didChangeSelectedRouteWithCause:(int)arg2 ;
-(void)_presentDirectionsListViewForRoute:(id)arg1 ;
-(void)refreshSelectedRoute;
-(void)_dismissedTransitOptionsProgrammatically:(char)arg1 ;
-(void)_showTransitIncident:(id)arg1 inModalSheetFromView:(id)arg2 ;
-(void)_showTransitAppSelector;
-(void)transitRoutePicking:(id)arg1 didTapRoutingIncidentMessage:(id)arg2 inTableViewCell:(id)arg3 ;
-(UINavigationController *)transitRoutePickingNavigationController;
-(void)_presentRoutePickingModally;
-(TransitPickerView *)routePickingContainerView;
-(void)_showTransitIncidentInNavigationControllerOrPopover:(id)arg1 ;
-(void)transitRoutePickingUserDidInteract:(id)arg1 ;
-(void)layout;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)_share:(id)arg1 ;
@end


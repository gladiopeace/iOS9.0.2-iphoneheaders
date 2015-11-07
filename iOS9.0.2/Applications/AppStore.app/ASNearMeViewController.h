/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/SKUIItemListTableDelegate.h>
#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>
#import <libobjc.A.dylib/SKUIMetricsViewController.h>
#import <libobjc.A.dylib/SKUIViewControllerTesting.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol OS_dispatch_source;
@class NSArray, SKUIStorePageViewController, SKUIItemListTableViewController, SKUIItemList, SSMetricsPageEvent, SKUILoadingView, NSObject, CLLocationManager, SSLookupRequest, SKUIMetricsController, _UIContentUnavailableView, ASNearMeOptInView, SSMetricsConfiguration, NSString, UIRefreshControl;

@interface ASNearMeViewController : SKUIViewController <CLLocationManagerDelegate, SKUIItemListTableDelegate, SKUIItemStateCenterObserver, SKUIMetricsViewController, SKUIViewControllerTesting, UIAlertViewDelegate> {

	NSArray* _allItems;
	char _isMonitoring;
	SKUIStorePageViewController* _ipadViewController;
	SKUIItemListTableViewController* _iphoneViewController;
	SKUIItemList* _itemList;
	SSMetricsPageEvent* _lastPageEvent;
	SKUILoadingView* _loadingView;
	NSObject*<OS_dispatch_source> _loadingTimeoutTimer;
	CLLocationManager* _locationManager;
	int _locationTimeoutCount;
	NSObject*<OS_dispatch_source> _locationTimeoutTimer;
	SSLookupRequest* _lookupRequest;
	SKUIMetricsController* _metricsController;
	_UIContentUnavailableView* _noResultsView;
	ASNearMeOptInView* _optInView;
	SSMetricsConfiguration* _pageMetricsConfiguration;
	NSString* _performanceTestName;
	UIRefreshControl* _refreshControl;
	NSObject*<OS_dispatch_source> _refreshTimer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)_startLoadingTimer;
-(id)_platformViewController;
-(void)_setChildView:(id)arg1 ;
-(id)_optInView;
-(void)_reloadTabBarItemsForAlert:(char)arg1 ;
-(void)_showPlatformViewController;
-(void)_turnOffGenius;
-(char)_isQualityLocation:(id)arg1 ;
-(void)_fetchItemsForLocation:(id)arg1 ;
-(id)_filteredItemsWithItems:(id)arg1 ;
-(void)_reloadWithItems:(id)arg1 reason:(int)arg2 ;
-(void)_refreshResults;
-(void)_finishLookupForLocation:(id)arg1 withItems:(id)arg2 response:(id)arg3 error:(id)arg4 ;
-(void)_hideLoadingView;
-(void)_turnOnGenius:(id)arg1 ;
-(id)_ipadViewController;
-(id)_iphoneViewController;
-(void)_pullToRefreshAction:(id)arg1 ;
-(id)_noResultsViewWithReason:(int)arg1 ;
-(void)_removePlaceholderViews;
-(void)_timeoutLocation;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)dealloc;
-(void)reloadData;
-(void)alertViewCancel:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_refreshControl;
-(void)viewWillAppear:(char)arg1 ;
-(id)contentScrollView;
-(void)viewDidAppear:(char)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_startTimeoutTimer;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(void)_showLoadingView;
-(void)_setMetricsController:(id)arg1 ;
-(char)performTestWithName:(id)arg1 options:(id)arg2 ;
-(void)_metricsEnterEventNotification:(id)arg1 ;
-(id)activeMetricsController;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)itemList:(id)arg1 willDisplayCellForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)itemList:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_startRefreshTimer;
@end


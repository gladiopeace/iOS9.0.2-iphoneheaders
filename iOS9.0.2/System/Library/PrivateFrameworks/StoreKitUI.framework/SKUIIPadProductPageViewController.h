/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUIMetricsViewController.h>
#import <libobjc.A.dylib/SKUINetworkErrorDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageHeaderViewDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageChildViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIMessageBannerDelegate.h>

@protocol SKUIIPadProductPageDelegate;
@class SKUIMessageBanner, NSString, SKUIClientContext, SKUIProductPageDetailsViewController, SKUIProductPageHeaderViewController, SKUIItem, SKUIIncompatibleAppViewController, SSMetricsPageEvent, SKUILoadProductPageOperation, SKUIMetricsController, SKUINetworkErrorViewController, NSOperationQueue, UIView, SKUIProductPagePlaceholderViewController, SKUIProductPage, SKUISwooshArrayViewController, SKUIProductPageReviewsViewController, NSURLRequest, NSURL;

@interface SKUIIPadProductPageViewController : UIViewController <SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate, SKUIMessageBannerDelegate> {

	char _askPermission;
	SKUIMessageBanner* _banner;
	NSString* _bannerText;
	SKUIClientContext* _clientContext;
	int _defaultSelectedSectionIndex;
	id<SKUIIPadProductPageDelegate> _delegate;
	SKUIProductPageDetailsViewController* _detailsViewController;
	char _didSendCannotOpen;
	SKUIProductPageHeaderViewController* _headerViewController;
	SKUIItem* _item;
	SKUIIncompatibleAppViewController* _incompatibleViewController;
	SSMetricsPageEvent* _lastPageEvent;
	SKUILoadProductPageOperation* _loadOperation;
	long long _lookupItemIdentifier;
	SKUIMetricsController* _metricsController;
	SKUINetworkErrorViewController* _networkErrorViewController;
	NSOperationQueue* _operationQueue;
	UIView* _overlayView;
	SKUIProductPagePlaceholderViewController* _placeholderViewController;
	SKUIProductPage* _productPage;
	SKUISwooshArrayViewController* _relatedViewController;
	SKUIProductPageReviewsViewController* _reviewsViewController;
	int _selectedSectionIndex;
	NSURLRequest* _urlRequest;

}

@property (nonatomic,readonly) SKUIItem * item;                                            //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) SKUIProductPage * productPage;                              //@synthesize productPage=_productPage - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,retain) SKUIClientContext * clientContext;                            //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIIPadProductPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char askPermission;                                           //@synthesize askPermission=_askPermission - In the implementation block
@property (nonatomic,copy) NSString * bannerText;                                          //@synthesize bannerText=_bannerText - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIIPadProductPageDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id<SKUIIPadProductPageDelegate>)delegate;
-(SKUIItem *)item;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)setAskPermission:(char)arg1 ;
-(void)setBannerText:(NSString *)arg1 ;
-(void)configureMetricsWithPageEvent:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(id)initWithProductPage:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)_placeholderViewController;
-(id)initWithItem:(id)arg1 ;
-(SKUIProductPage *)productPage;
-(void)_setMetricsController:(id)arg1 ;
-(void)_metricsEnterEventNotification:(id)arg1 ;
-(id)activeMetricsController;
-(void)productPageChildViewControllerDidLoadScrollView:(id)arg1 ;
-(void)productPageChildOpenItem:(id)arg1 ;
-(void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(/*^block*/id)arg2 ;
-(void)productPageChildViewControllerDidScroll:(id)arg1 ;
-(void)productPageChildViewControllerDidLoad:(id)arg1 ;
-(char)askPermission;
-(void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2 ;
-(id)metricsControllerForProductPageHeader:(id)arg1 ;
-(void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(int)arg2 ;
-(void)productPageHeaderViewDidWantAskPermissionBanner:(id)arg1 ;
-(id)initWithItemIdentifier:(long long)arg1 ;
-(CGPoint)topContentOffset;
-(id)_initSKUIIPadProductPageViewController;
-(void)_setDefaultSectionIndexWithFragment:(int)arg1 ;
-(void)_setProductPage:(id)arg1 error:(id)arg2 ;
-(void)_showBanner;
-(void)_selectSectionIndex:(int)arg1 ;
-(id)_reviewsViewController;
-(void)_sendCannotOpen;
-(void)_reloadHeaderViewController;
-(id)_viewControllerForSectionIndex:(int)arg1 ;
-(void)_showViewController:(id)arg1 ;
-(void)_showError:(id)arg1 ;
-(char)_isIncompatibleItem;
-(void)_showIncompatibleView;
-(id)_detailsViewController;
-(id)_relatedViewController;
-(void)networkErrorViewControllerInvalidated:(id)arg1 ;
-(void)askPermissionBannerDidSelect:(id)arg1 ;
-(NSString *)bannerText;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUIScreenshotsDelegate.h>
#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>
#import <libobjc.A.dylib/SKUITableViewSectionDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageChildViewController.h>

@protocol SKUIProductPageChildViewControllerDelegate;
@class SKUIClientContext, SKUIProductPageTableHeaderOnlySection, SKUIProductPageTableTextBoxSection, NSOperationQueue, SKUIProductPage, SKUIResourceLoader, NSMutableArray, SKUIProductPageTableViewController, SKUILayoutCache, NSString, UIScrollView, SKUIProductPageHeaderViewController;

@interface SKUIProductPageDetailsViewController : UIViewController <SKUIScreenshotsDelegate, SKUIItemStateCenterObserver, SKUITableViewSectionDelegate, SKUIProductPageChildViewController> {

	char _askPermission;
	SKUIClientContext* _clientContext;
	SKUIProductPageTableHeaderOnlySection* _copyrightSection;
	id<SKUIProductPageChildViewControllerDelegate> _delegate;
	SKUIProductPageTableTextBoxSection* _descriptionSection;
	NSOperationQueue* _operationQueue;
	SKUIProductPage* _productPage;
	SKUIResourceLoader* _resourceLoader;
	SKUIProductPageTableHeaderOnlySection* _screenshotsSection;
	NSMutableArray* _sections;
	SKUIProductPageTableTextBoxSection* _storeNotesSection;
	SKUIProductPageTableViewController* _tableViewController;
	SKUILayoutCache* _textLayoutCache;
	SKUIProductPageTableTextBoxSection* _whatsNewSection;

}

@property (nonatomic,readonly) SKUIProductPage * productPage;                                             //@synthesize productPage=_productPage - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) char askPermission;                                                          //@synthesize askPermission=_askPermission - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController; 
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)defaultPageWidthForUserInterfaceIdiom:(int)arg1 ;
-(void)setDelegate:(id<SKUIProductPageChildViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(UIScrollView *)scrollView;
-(void)loadView;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(id)_tableViewController;
-(NSOperationQueue *)operationQueue;
-(void)setAskPermission:(char)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)initWithProductPage:(id)arg1 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)_resourceLoader;
-(SKUIProductPage *)productPage;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(char)askPermission;
-(id)_storeNotesSection;
-(id)_textLayoutRequestWithText:(id)arg1 widthOffset:(float)arg2 ;
-(id)_bundledAppsSection;
-(id)_parentBundlesSection;
-(id)_screenshotsSection;
-(id)_descriptionSection;
-(id)_whatsNewSection;
-(id)_featuresSection;
-(id)_infoSection;
-(void)_expandSection:(id)arg1 ;
-(void)_addTapRecognizerForView:(id)arg1 action:(SEL)arg2 ;
-(id)_copyrightSection;
-(void)_configureSwooshSection:(id)arg1 ;
-(void)screenshotsWillBeginDragging:(id)arg1 ;
-(id)tableViewForTableViewSection:(id)arg1 ;
@end


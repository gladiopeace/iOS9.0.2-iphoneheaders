/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>

@protocol SKUIBannerViewDelegate;
@class SKUIBannerView, SKUIClientContext, UIImage, SSLookupItem, SKUIItemStateCenter, NSOperationQueue, NSMutableArray, NSDictionary, SKUIItemArtworkContext, NSString;

@interface SKUIBannerViewController : UIViewController <SKUIItemStateCenterObserver> {

	SKUIBannerView* _bannerView;
	SKUIClientContext* _clientContext;
	id<SKUIBannerViewDelegate> _delegate;
	UIImage* _iconImage;
	SSLookupItem* _item;
	long long _itemIdentifier;
	SKUIItemStateCenter* _itemStateCenter;
	NSOperationQueue* _resourceOperationQueue;
	NSMutableArray* _screenshotImages;
	NSDictionary* _scriptContextDictionary;
	SKUIItemArtworkContext* _itemArtworkContext;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                       //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * resourceOperationQueue;               //@synthesize resourceOperationQueue=_resourceOperationQueue - In the implementation block
@property (nonatomic,copy) NSDictionary * scriptContextDictionary;                    //@synthesize scriptContextDictionary=_scriptContextDictionary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIBannerViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SKUIBannerViewDelegate>)delegate;
-(void)loadView;
-(void)setScriptContextDictionary:(NSDictionary *)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)loadWithProductParameters:(id)arg1 ;
-(void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2 ;
-(NSDictionary *)scriptContextDictionary;
-(SKUIClientContext *)clientContext;
-(void)_finishWithResponse:(id)arg1 error:(id)arg2 ;
-(NSOperationQueue *)resourceOperationQueue;
-(void)_warmItemStateCenter;
-(void)_closeButtonAction:(id)arg1 ;
-(void)_bannerViewAction:(id)arg1 ;
-(void)_reloadBannerView;
-(id)_itemState;
-(void)_launchApp;
-(void)_loadImages;
-(id)_itemArtworkContext;
-(void)_launchURL:(id)arg1 withBundleIdentifier:(id)arg2 ;
-(void)_setIcon:(id)arg1 error:(id)arg2 ;
-(id)_screenshotConsumerWithSize:(CGSize)arg1 ;
-(void)_setScreenshot:(id)arg1 forIndex:(int)arg2 error:(id)arg3 ;
-(id)_iconImage;
-(void)setResourceOperationQueue:(NSOperationQueue *)arg1 ;
@end


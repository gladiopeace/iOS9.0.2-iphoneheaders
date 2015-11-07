/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/StoreServicesPlugin.servicebundle/StoreServicesPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIFullscreenAlertController.h>
#import <libobjc.A.dylib/SKAccountPageViewControllerDelegate.h>

@protocol SSVSBFullScreenAlertViewDelegate;
@class SKAccountPageViewController, NSString;

@interface SSVSBFullScreenAlertViewController : SBUIFullscreenAlertController <SKAccountPageViewControllerDelegate> {

	SKAccountPageViewController* _childViewController;
	id<SSVSBFullScreenAlertViewDelegate> _storeServicesPluginDelegate;

}

@property (assign,nonatomic,__weak) id<SSVSBFullScreenAlertViewDelegate> storeServicesPluginDelegate;              //@synthesize storeServicesPluginDelegate=_storeServicesPluginDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)handleLockButtonPressed;
-(void)accountPageViewControllerDidFinish:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(void)_dismiss;
-(char)handleMenuButtonTap;
-(void)finishedAnimatingOut;
-(id)initWithChildViewController:(id)arg1 ;
-(id<SSVSBFullScreenAlertViewDelegate>)storeServicesPluginDelegate;
-(void)setStoreServicesPluginDelegate:(id<SSVSBFullScreenAlertViewDelegate>)arg1 ;
@end


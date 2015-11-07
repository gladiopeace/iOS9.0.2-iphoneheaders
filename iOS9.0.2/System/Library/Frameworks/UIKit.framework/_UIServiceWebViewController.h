/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/_UIServiceWebViewControllerProtocol.h>
#import <UIKit/_UIWebBrowserLoadingControllerDelegate.h>

@class _UIServiceWebView, _UIWebBrowserLoadingController, NSString;

@interface _UIServiceWebViewController : UIViewController <_UIServiceWebViewControllerProtocol, _UIWebBrowserLoadingControllerDelegate> {

	_UIServiceWebView* _uiWebView;
	_UIWebBrowserLoadingController* _loadingController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(void)reload;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(id)_makeAlertView;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)_willAppearInRemoteViewController;
-(void)browserLoadingControllerDidUpdateBackForward:(id)arg1 ;
-(void)browserLoadingControllerDidUpdateEstimatedProgress:(id)arg1 ;
-(void)loadUserTypedAddress:(id)arg1 ;
-(void)browserLoadingControllerDidUpdateURLString:(id)arg1 ;
-(void)browserLoadingControllerDidUpdateTitle:(id)arg1 ;
-(void)browserLoadingControllerDidStartLoading:(id)arg1 ;
-(void)browserLoadingController:(id)arg1 didFinishLoadingWithError:(id)arg2 dataSource:(id)arg3 ;
-(void)loadEncodedRequest:(id)arg1 ;
-(void)setShouldDecidePolicyRemotely:(char)arg1 ;
-(void)configureWithEncodedSettings:(id)arg1 ;
-(void)_webContentSizeWithReplyHandler:(/*^block*/id)arg1 ;
-(char)_isInternalInstall;
-(void)_remotelyDecidePolicyForRequest:(id)arg1 inMainFrame:(char)arg2 navigationType:(id)arg3 decisionHandler:(/*^block*/id)arg4 ;
-(void)_remotelyDispatchWillPresentViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_remotelyDispatchDidDismissViewController;
@end

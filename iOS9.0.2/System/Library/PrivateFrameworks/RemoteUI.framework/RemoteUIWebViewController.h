/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol RemoteUIWebViewControllerDelegate;
@class UIWebView, UIToolbar, _UIBackdropView, NSString;

@interface RemoteUIWebViewController : UIViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	UIToolbar* _toolbar;
	/*^block*/id _loadCompletion;
	_UIBackdropView* _statusBarBackdrop;
	char _scalesPageToFit;
	id<RemoteUIWebViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RemoteUIWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIToolbar * toolbar; 
@property (nonatomic,readonly) UIWebView * webView; 
@property (assign,nonatomic) char scalesPageToFit;                                               //@synthesize scalesPageToFit=_scalesPageToFit - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadURL:(id)arg1 ;
-(void)loadURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<RemoteUIWebViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<RemoteUIWebViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UIToolbar *)toolbar;
-(UIWebView *)webView;
-(char)scalesPageToFit;
-(void)setScalesPageToFit:(char)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)donePressed:(id)arg1 ;
@end


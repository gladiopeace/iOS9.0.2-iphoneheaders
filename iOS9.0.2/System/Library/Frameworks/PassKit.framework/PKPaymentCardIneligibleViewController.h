/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class UIWebView, NSURL, NSString;

@interface PKPaymentCardIneligibleViewController : UIViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	/*^block*/id _preflightCompletion;
	char _preloadLearnMoreWebView;
	int _reason;
	int _context;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	NSURL* _learnMoreURL;
	/*^block*/id _learnMorePresentationHandler;

}

@property (assign,nonatomic) int reason;                                                          //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) int context;                                                         //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,retain) NSURL * learnMoreURL;                                                //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
@property (nonatomic,copy) id learnMorePresentationHandler;                                       //@synthesize learnMorePresentationHandler=_learnMorePresentationHandler - In the implementation block
@property (assign) char preloadLearnMoreWebView;                                                  //@synthesize preloadLearnMoreWebView=_preloadLearnMoreWebView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(NSURL *)learnMoreURL;
-(void)handleDone:(id)arg1 ;
-(id)_alertWithReason:(int)arg1 learnMoreURL:(id)arg2 isPreloaded:(char)arg3 ;
-(void)_webViewDidLoad:(char)arg1 withError:(id)arg2 ;
-(id)initWithReason:(int)arg1 context:(int)arg2 setupDelegate:(id)arg3 ;
-(void)setLearnMoreURL:(NSURL *)arg1 ;
-(id)learnMorePresentationHandler;
-(void)setLearnMorePresentationHandler:(id)arg1 ;
-(char)preloadLearnMoreWebView;
-(void)setPreloadLearnMoreWebView:(char)arg1 ;
-(void)setReason:(int)arg1 ;
-(void)dealloc;
-(int)context;
-(void)viewDidLoad;
-(id)webView;
-(void)setContext:(int)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(int)reason;
@end


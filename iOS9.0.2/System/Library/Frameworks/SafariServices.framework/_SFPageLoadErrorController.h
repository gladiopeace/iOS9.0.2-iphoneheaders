/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _SFPageLoadErrorControllerDelegate;
#import <SafariServices/SafariServices-Structs.h>
@class NSMutableArray, WKWebView, NSTimer, NSURLRequest;

@interface _SFPageLoadErrorController : NSObject {

	NSMutableArray* _alerts;
	char _reloadAfterResume;
	WKWebView* _webView;
	NSTimer* _crashCountResetTimer;
	char _reloadingFailedRequest;
	id<_SFPageLoadErrorControllerDelegate> _delegate;
	NSURLRequest* _failedRequest;
	unsigned _crashesSinceLastSuccessfulLoad;

}

@property (assign,nonatomic,__weak) id<_SFPageLoadErrorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char reloadingFailedRequest;                                       //@synthesize reloadingFailedRequest=_reloadingFailedRequest - In the implementation block
@property (nonatomic,readonly) NSURLRequest * failedRequest;                                      //@synthesize failedRequest=_failedRequest - In the implementation block
@property (nonatomic,readonly) unsigned crashesSinceLastSuccessfulLoad;                           //@synthesize crashesSinceLastSuccessfulLoad=_crashesSinceLastSuccessfulLoad - In the implementation block
-(void)performAction:(int)arg1 forAlert:(id)arg2 ;
-(void)addAlert:(id)arg1 ;
-(void)_continueWithoutCredentialsUsingAlertContext:(id)arg1 ;
-(void)showErrorPageWithTitle:(id)arg1 bodyText:(id)arg2 learnMoreLink:(id)arg3 forError:(id)arg4 ;
-(void)_continueAfterCertificateAlertWithURL:(id)arg1 trust:(SecTrustRef)arg2 recoveryAttempter:(/*^block*/id)arg3 ;
-(void)reloadAfterError;
-(char)_handleCertificateError:(id)arg1 forURL:(id)arg2 recoveryAttempter:(/*^block*/id)arg3 ;
-(void)clearFailedRequest;
-(id)_specializedMessageForError:(id)arg1 URL:(id)arg2 ;
-(id)_genericMessageForError:(id)arg1 ;
-(id)_titleForError:(id)arg1 ;
-(void)addAlertWithTitle:(id)arg1 bodyText:(id)arg2 ;
-(void)_setFailedRequest:(id)arg1 ;
-(void)_handleFrameLoadError:(id)arg1 forURL:(id)arg2 recoveryAttempter:(/*^block*/id)arg3 ;
-(void)showErrorPageWithTitle:(id)arg1 bodyText:(id)arg2 forError:(id)arg3 ;
-(void)clearCrashCountResetTimer;
-(void)_resetCrashCount:(id)arg1 ;
-(void)_showRepeatedWebProcessCrashError:(id)arg1 URLString:(id)arg2 ;
-(void)_resetCrashCountSoon;
-(void)addFormAlertWithTitle:(id)arg1 decisionHandler:(/*^block*/id)arg2 ;
-(void)addDisallowedUseOfJavaScriptAlert;
-(void)handleFrameLoadError:(id)arg1 ;
-(void)handleSubframeCertificateError:(id)arg1 ;
-(void)addInvalidURLAlert;
-(char)updateCrashesAndShowCrashError:(id)arg1 URLString:(id)arg2 ;
-(void)scheduleResetCrashCount;
-(char)reloadingFailedRequest;
-(NSURLRequest *)failedRequest;
-(unsigned)crashesSinceLastSuccessfulLoad;
-(void)setDelegate:(id<_SFPageLoadErrorControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<_SFPageLoadErrorControllerDelegate>)delegate;
-(id)alert;
-(void)_reachabilityChanged:(id)arg1 ;
-(id)initWithWebView:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/WebSheet.app/WebSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebSheet/WebSheet-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIWebViewPrivateDelegate.h>

@class UIWebView, WebSheetPolicyDelegate, UIView, UINavigationBar, UINavigationItem, UIBarButtonItem, UIImageView, UILabel, NSMutableArray, WBUSheetController, WebUIAuthenticationManager, WebUIDownloadManager, UIActionSheet, NSTimer, NSURL, NSDictionary, NSString;

@interface WebSheetView : UIView <UIActionSheetDelegate, UINavigationBarDelegate, UIWebViewDelegate, UIWebViewPrivateDelegate> {

	UIWebView* _webView;
	WebSheetPolicyDelegate* _policyDelegate;
	UIView* _headerBackgroundView;
	UINavigationBar* _headerView;
	UINavigationItem* _navigationItem;
	UIBarButtonItem* _backButtonItem;
	UIBarButtonItem* _forwardButtonItem;
	UIBarButtonItem* _cancelDoneBarButtonItem;
	UIBarButtonItem* _backForwardButton;
	UIImageView* _lockIconView;
	UILabel* _addressLabel;
	UILabel* _ssidLabel;
	float _statusBarHeight;
	NSMutableArray* _alerts;
	WBUSheetController* _sheetController;
	ProbeContext* _probeContext;
	int _orientation;
	WebUIAuthenticationManager* _authenticationManager;
	WebUIDownloadManager* _downloadManager;
	char _inDoneState;
	int _springboardPID;
	UIActionSheet* _stayConnectedActionSheet;
	NSTimer* _captiveProbeDispatchTimer;
	char _shouldShowStayConnectedOptions;
	char _mediaPlaybackEnabled;
	char _hasEVCert;
	NSURL* _currentURL;
	NSDictionary* _proxyConfiguration;

}

@property (nonatomic,retain) UIWebView * webView;                              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSURL * currentURL;                               //@synthesize currentURL=_currentURL - In the implementation block
@property (assign,nonatomic) int orientation;                                  //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) char shouldShowStayConnectedOptions;              //@synthesize shouldShowStayConnectedOptions=_shouldShowStayConnectedOptions - In the implementation block
@property (assign,nonatomic) char mediaPlaybackEnabled;                        //@synthesize mediaPlaybackEnabled=_mediaPlaybackEnabled - In the implementation block
@property (nonatomic,copy) NSDictionary * proxyConfiguration;                  //@synthesize proxyConfiguration=_proxyConfiguration - In the implementation block
@property (assign,nonatomic) char hasEVCert;                                   //@synthesize hasEVCert=_hasEVCert - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCaptiveNetworkCookie:(unsigned long)arg1 ;
-(void)setCurrentURL:(NSURL *)arg1 ;
-(void)setSSID:(CFStringRef)arg1 ;
-(void)setMediaPlaybackEnabled:(char)arg1 ;
-(void)setShouldShowStayConnectedOptions:(char)arg1 ;
-(void)updateToDoneButton;
-(void)_backButtonPressed;
-(void)_forwardButtonPressed;
-(id)_promptLabelFont;
-(id)_lockIconImage;
-(void)doneTapped;
-(char)_shouldShowPromptLabels;
-(void)_updateAddress;
-(float)_promptLabelFontLineHeight;
-(float)_addressBaselineOffsetY;
-(char)_isSecureAddress;
-(id)_evCertColor;
-(id)_lockIconImageWithTintColor:(id)arg1 ;
-(id)_evCertLockIconImage;
-(void)_dismissWebSheetWithCaptiveWebSheetResult:(int)arg1 ;
-(char)isGreenTea;
-(void)_continueAfterCertificateAlertWithContext:(id)arg1 ;
-(void)_startCaptiveProbeDispatchTimer;
-(void)setHasEVCert:(char)arg1 ;
-(void)_showProfileInstallAlert;
-(void)_showProfileDownloadAlert;
-(void)_loadRequest:(id)arg1 inFrame:(id)arg2 ;
-(void)_stopCaptiveProbeDispatchTimer;
-(void)_updateBackForwardButtons;
-(void)_captiveProbeDispatchTimerDidFire:(id)arg1 ;
-(NSURL *)currentURL;
-(char)shouldShowStayConnectedOptions;
-(char)mediaPlaybackEnabled;
-(char)hasEVCert;
-(void)addAlert:(id)arg1 ;
-(id)_titleForError:(id)arg1 ;
-(void)_showGenericDownloadAlert;
-(void)sheetControllerDidShowSheet:(id)arg1 ;
-(void)sheetControllerDidHideSheet:(id)arg1 ;
-(void)sheetController:(id)arg1 performAction:(int)arg2 forAlert:(id)arg3 ;
-(id)sheetController:(id)arg1 viewControllerForAlert:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)uiWebView:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(void)uiWebView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3 ;
-(id)uiWebView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3 ;
-(id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)cancelTapped;
-(char)_handleCertificateError:(id)arg1 ;
-(void)_updateTitle;
-(NSDictionary *)proxyConfiguration;
-(void)setProxyConfiguration:(NSDictionary *)arg1 ;
-(id)_sheetController;
-(id)_specializedMessageForError:(id)arg1 ;
-(id)containerViewForAuthenticationPanel;
-(void)logInFromAuthenticationManager:(id)arg1 withCredential:(id)arg2 forChallenge:(id)arg3 ;
-(void)cancelFromAuthenticationManager:(id)arg1 forChallenge:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidFail:(id)arg2 ;
-(void)downloadManager:(id)arg1 hasData:(id)arg2 forFinishedDownload:(id)arg3 ;
-(void)setInterfaceName:(CFStringRef)arg1 ;
@end


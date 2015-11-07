/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <UIKit/UIWebView.h>

@protocol UIWebViewDelegateADWebViewDelegate;
@class NSString, NSData, NSMutableDictionary, JSContext;

@interface ADWebView : UIWebView {

	char _paused;
	char _shouldReportScriptErrors;
	id<UIWebViewDelegate><ADWebViewDelegate> _delegate;
	NSString* _iAdJSVersion;
	NSString* _userAgent;
	NSString* _identifier;
	NSData* _clientAuditToken;
	NSMutableDictionary* _resourceLoadStartDates;

}

@property (assign,nonatomic) char paused;                                                    //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) id<UIWebViewDelegate><ADWebViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldReportScriptErrors;                                  //@synthesize shouldReportScriptErrors=_shouldReportScriptErrors - In the implementation block
@property (nonatomic,copy) NSString * iAdJSVersion;                                          //@synthesize iAdJSVersion=_iAdJSVersion - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                                             //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * clientAuditToken;                                      //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
@property (nonatomic,readonly) JSContext * javaScriptContext; 
@property (nonatomic,retain) NSMutableDictionary * resourceLoadStartDates;                   //@synthesize resourceLoadStartDates=_resourceLoadStartDates - In the implementation block
+(void)clearContentStorage;
+(void)initialize;
-(void)setClientAuditToken:(NSData *)arg1 ;
-(void)dispatchDOMEventWithName:(id)arg1 canBubble:(char)arg2 cancelable:(char)arg3 ;
-(void)dispatchDOMEventWithName:(id)arg1 canBubble:(char)arg2 cancelable:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setShouldReportScriptErrors:(char)arg1 ;
-(NSString *)iAdJSVersion;
-(void)setIAdJSVersion:(NSString *)arg1 ;
-(void)loadWebArchive:(id)arg1 ;
-(void)_handleConsoleMessage:(id)arg1 ;
-(void)pauseAllMediaInWebView:(id)arg1 ;
-(char)shouldReportScriptErrors;
-(NSMutableDictionary *)resourceLoadStartDates;
-(void)setResourceLoadStartDates:(NSMutableDictionary *)arg1 ;
-(NSData *)clientAuditToken;
-(id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(void)removeImageFromCacheForURL:(id)arg1 ;
-(void)webThreadWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<UIWebViewDelegate><ADWebViewDelegate>)arg1 ;
-(void)dealloc;
-(id<UIWebViewDelegate><ADWebViewDelegate>)delegate;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)mainFrame;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)sendOrientationEventForOrientation:(int)arg1 ;
-(void)setPaused:(char)arg1 ;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(char)paused;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(id)_accessibilityUserTestingElementAttributes;
-(BOOL)addImageToCache:(CGImageRef)arg1 forURL:(id)arg2 ;
-(JSContext *)javaScriptContext;
-(void)webThreadWebView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4 ;
@end


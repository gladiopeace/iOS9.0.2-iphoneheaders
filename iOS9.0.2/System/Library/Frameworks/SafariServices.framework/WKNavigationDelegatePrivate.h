/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WKNavigationDelegatePrivate <WKNavigationDelegate>
@optional
-(void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;
-(void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
-(void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(int)arg3;
-(void)_webView:(id)arg1 renderingProgressDidChange:(unsigned)arg2;
-(char)_webView:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)_webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(id)_webCryptoMasterKeyForWebView:(id)arg1;
-(void)_webViewDidBeginNavigationGesture:(id)arg1;
-(void)_webViewWillEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
-(void)_webViewDidEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
-(void)_webView:(id)arg1 willSnapshotBackForwardListItem:(id)arg2;
-(void)_webView:(id)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg2 uti:(id)arg3;
-(void)_webView:(id)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(id)arg2;
-(void)_webViewWebProcessDidCrash:(id)arg1;

@end


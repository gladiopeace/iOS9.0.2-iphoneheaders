/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WKUIDelegatePrivate <WKUIDelegate>
@optional
-(id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2;
-(void)_webView:(id)arg1 decideDatabaseQuotaForSecurityOrigin:(id)arg2 currentQuota:(unsigned long long)arg3 currentOriginUsage:(unsigned long long)arg4 currentDatabaseUsage:(unsigned long long)arg5 expectedUsage:(unsigned long long)arg6 decisionHandler:(/*^block*/id)arg7;
-(void)_webView:(id)arg1 decideWebApplicationCacheQuotaForSecurityOrigin:(id)arg2 currentQuota:(unsigned long long)arg3 totalBytesNeeded:(unsigned long long)arg4 decisionHandler:(/*^block*/id)arg5;
-(void)_webView:(id)arg1 printFrame:(id)arg2;
-(void)_webViewClose:(id)arg1;
-(void)_webViewFullscreenMayReturnToInline:(id)arg1;
-(void)_webViewDidEnterFullscreen:(id)arg1;
-(void)_webViewDidExitFullscreen:(id)arg1;
-(char)_webView:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
-(id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3;
-(void)_webView:(id)arg1 didNotHandleTapAsClickAtPoint:(CGPoint)arg2;
-(void)_webView:(id)arg1 mediaDocumentNaturalSizeChanged:(CGSize)arg2;
-(void)_webView:(id)arg1 commitPreviewedImageWithURL:(id)arg2;
-(id)_webView:(id)arg1 previewViewControllerForAnimatedImageAtURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4 imageSize:(CGSize)arg5;
-(id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
-(void)_webView:(id)arg1 willPreviewImageWithURL:(id)arg2;
-(void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2;
-(void)_webView:(id)arg1 didDismissPreviewViewController:(id)arg2 committing:(char)arg3;
-(void)_webView:(id)arg1 didDismissPreviewViewController:(id)arg2;
-(char)_webView:(id)arg1 shouldRequestGeolocationAuthorizationForURL:(id)arg2 isMainFrame:(char)arg3 mainFrameURL:(id)arg4;
-(UIEdgeInsets*)_webView:(id)arg1 finalObscuredInsetsForScrollView:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4;

@end


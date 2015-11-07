/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebUIDelegate <NSObject>
@optional
-(void)webView:(id)arg1 printFrameView:(id)arg2;
-(void)webViewClose:(id)arg1;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
-(char)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
-(id)webView:(id)arg1 createWebViewWithRequest:(id)arg2;
-(void)webViewShow:(id)arg1;
-(id)webView:(id)arg1 createWebViewModalDialogWithRequest:(id)arg2;
-(void)webViewRunModal:(id)arg1;
-(void)webViewFocus:(id)arg1;
-(void)webViewUnfocus:(id)arg1;
-(id)webViewFirstResponder:(id)arg1;
-(void)webView:(id)arg1 makeFirstResponder:(id)arg2;
-(void)webView:(id)arg1 setStatusText:(id)arg2;
-(id)webViewStatusText:(id)arg1;
-(char)webViewAreToolbarsVisible:(id)arg1;
-(void)webView:(id)arg1 setToolbarsVisible:(char)arg2;
-(char)webViewIsStatusBarVisible:(id)arg1;
-(void)webView:(id)arg1 setStatusBarVisible:(char)arg2;
-(char)webViewIsResizable:(id)arg1;
-(void)webView:(id)arg1 setResizable:(char)arg2;
-(void)webView:(id)arg1 setFrame:(CGRect)arg2;
-(CGRect*)webViewFrame:(id)arg1;
-(char)webView:(id)arg1 runBeforeUnloadConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 allowMultipleFiles:(char)arg3;
-(void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned)arg3;
-(id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
-(char)webView:(id)arg1 shouldPerformAction:(SEL)arg2 fromSender:(id)arg3;
-(float)webViewHeaderHeight:(id)arg1;
-(float)webViewFooterHeight:(id)arg1;
-(void)webView:(id)arg1 drawHeaderInRect:(CGRect)arg2;
-(void)webView:(id)arg1 drawFooterInRect:(CGRect)arg2;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2;
-(char)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3;
-(void)webView:(id)arg1 setContentRect:(CGRect)arg2;
-(CGRect*)webViewContentRect:(id)arg1;

@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicNavigationController.h>
#import <libobjc.A.dylib/MusicJSAccountNativeViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicJSNativeViewControllerFactory.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@class MusicClientContext, NSString, SKUIClientContext;

@interface MusicAccountNavigationController : MusicNavigationController <MusicJSAccountNativeViewControllerDelegate, MusicJSNativeViewControllerFactory, MusicClientContextConsuming> {

	char _registeredWithModalNavigationStackRegistry;
	MusicClientContext* _clientContext;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(char)automaticallyInstallAccountBarButtonItem;
+(char)automaticallyInstallSearchBarButtonItem;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(void)_setRegisteredWithModalNavigationStackRegistry:(char)arg1 ;
-(void)jsAccountNativeViewController:(id)arg1 setAccountDocument:(id)arg2 options:(id)arg3 ;
-(void)jsDidCloseAccountNativeViewController:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIScrollingSegmentedController.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/SKUIProxyScrollViewDelegate.h>
#import <libobjc.A.dylib/SKUITabBarItemRootViewController.h>

@class SKUIProxyScrollView, MusicLibraryTopBarController, NSString, SKUIClientContext;

@interface MusicMyMusicViewController : SKUIScrollingSegmentedController <MusicClientContextConsuming, SKUIProxyScrollViewDelegate, SKUITabBarItemRootViewController> {

	SKUIProxyScrollView* _proxyScrollView;
	MusicLibraryTopBarController* _topBarController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(char)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(void)_updatePrompt;
-(void)_didChangeLibrary:(id)arg1 ;
-(id)initWithTabBarItem:(id)arg1 ;
-(void)scrollViewDidChangeContentInset:(id)arg1 ;
@end


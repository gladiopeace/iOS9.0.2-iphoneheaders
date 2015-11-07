/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKNavigatorSceneKitViewController.h>

@class OKPageSceneViewController, OKPageViewController;

@interface OKNavigatorSceneKitFixedViewController : OKNavigatorSceneKitViewController {

	OKPageSceneViewController* _pageViewController;

}

@property (nonatomic,retain) OKPageViewController * pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)commonInit;
-(void)setPageViewController:(OKPageViewController *)arg1 ;
-(OKPageViewController *)pageViewController;
-(void)navigateToPageWithName:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)updatePageViewController;
@end


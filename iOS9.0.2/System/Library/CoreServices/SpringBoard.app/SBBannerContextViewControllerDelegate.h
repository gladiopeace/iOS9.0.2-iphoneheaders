/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBBannerContextViewControllerDelegate
@required
-(void)bannerViewController:(id)arg1 willSelectAction:(id)arg2 withContext:(id)arg3;
-(void)bannerViewControllerDidSelectAction:(id)arg1;
-(void)bannerViewControllerDidRequestDismissal:(id)arg1;
-(void)bannerViewControllerDidRequestSticky:(id)arg1;
-(void)bannerViewController:(id)arg1 didRequestSticky:(char)arg2;
-(void)bannerViewControllerDidReceiveRaiseGesture:(id)arg1;
-(void)bannerViewControllerDidShrinkForKeyboard:(id)arg1;
-(void)bannerViewControllerDidPullDown:(id)arg1;

@end


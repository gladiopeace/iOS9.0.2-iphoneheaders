/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ZWZoomSlugViewControllerDelegate <NSObject>
@required
-(char)shouldShowSlugWithSlugViewController:(id)arg1;
-(void)slugWasSingleTappedWithSlugViewController:(id)arg1;
-(void)slugWasDoubleTappedWithSlugViewController:(id)arg1;
-(char)shouldBeginAutopanningLensWithSlugViewController:(id)arg1;
-(void)wantsToStartAutopannerWithSlugViewController:(id)arg1;
-(void)zoomSlugViewController:(id)arg1 wantsToAdjustZoomLevelWithDelta:(CGPoint)arg2;
-(void)zoomSlugViewController:(id)arg1 didDragSlug:(id)arg2 withDelta:(CGPoint)arg3;
-(void)wantsToStopAutopannerWithSlugViewController:(id)arg1;

@end

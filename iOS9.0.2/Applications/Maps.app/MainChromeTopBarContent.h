/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class MainChromeViewController;


@protocol MainChromeTopBarContent <NSObject,MainChromeViewControllerBackdropLightness>
@property (assign,nonatomic) MainChromeViewController * chromeViewController; 
@optional
-(MainChromeViewController *)chromeViewController;
-(void)setChromeViewController:(id)arg1;
-(id)toolbarItemsForToolbar:(id)arg1;
-(id)customTopBarView;
-(void)topBarSizeDidChange:(CGSize)arg1;
-(void)topBarSizeWillChange:(CGSize)arg1;
-(char)needsUpdateWhenBoundsSizeChanges;
-(void)setLeftMargin:(float)arg1 rightMargin:(float)arg2;
-(char)requiresSuppressingRepositioningAnimations;
-(char)paletteViewDrawsOwnBackdrop;
-(char)paletteViewFrameIsInsetByMargin;
-(id)paletteView;
-(float)paletteViewHeight;
-(float)toolbarContentHeight;
-(float)customTopBarViewHeight;
-(char)customTopBarViewIsInsetByMargin;
-(void)willUpdateWithAnimation:(id)arg1;
-(id)navigationItem;
-(id)toolbarItems;
-(void)setVariant:(int)arg1;

@end


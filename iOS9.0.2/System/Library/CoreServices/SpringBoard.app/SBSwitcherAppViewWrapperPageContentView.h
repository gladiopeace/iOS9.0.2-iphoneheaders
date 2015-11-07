/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherWallpaperPageContentView.h>

@protocol SBSwitcherAppViewWrapperPageContentViewDelegate;
@class SBAppView, SBOrientationTransformWrapperView, SBDisplayItem, SBLayoutState, SBFakeStatusBarView, SBAppSwitcherSettings;

@interface SBSwitcherAppViewWrapperPageContentView : SBSwitcherWallpaperPageContentView {

	SBAppView* _appView;
	SBOrientationTransformWrapperView* _appTransformView;
	SBDisplayItem* _displayItem;
	SBLayoutState* _layoutState;
	SBFakeStatusBarView* _fakeStatusBar;
	id<SBSwitcherAppViewWrapperPageContentViewDelegate> _delegate;
	SBAppSwitcherSettings* _settings;
	char _presenting;
	char _interactive;
	int _savedStatusBarStyleOverride;

}

@property (nonatomic,retain) SBAppView * appView;                                                       //@synthesize appView=_appView - In the implementation block
@property (nonatomic,retain) SBDisplayItem * displayItem;                                               //@synthesize displayItem=_displayItem - In the implementation block
@property (assign,nonatomic) id<SBSwitcherAppViewWrapperPageContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)prepareToBecomeVisibleIfNecessary;
-(void)viewPresenting:(id)arg1 withInteraction:(char)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4 ;
-(void)interactionDidEnd:(char)arg1 ;
-(SBAppView *)appView;
-(void)_createStatusBarIfNeeded;
-(id)initWithFrame:(CGRect)arg1 appView:(id)arg2 displayItem:(id)arg3 layoutState:(id)arg4 delegate:(id)arg5 ;
-(void)_layoutFakeStatusBar;
-(void)_updateBreadcrumbOverrides;
-(void)setAppView:(SBAppView *)arg1 ;
-(SBDisplayItem *)displayItem;
-(void)setDisplayItem:(SBDisplayItem *)arg1 ;
-(void)viewDismissing:(id)arg1 withInteraction:(char)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SBSwitcherAppViewWrapperPageContentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<SBSwitcherAppViewWrapperPageContentViewDelegate>)delegate;
-(void)setContentMode:(int)arg1 ;
-(void)invalidate;
-(void)setOrientation:(int)arg1 ;
-(void)setCornerRadius:(float)arg1 ;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(float)cornerRadius;
@end


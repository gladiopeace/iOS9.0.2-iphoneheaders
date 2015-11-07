/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWindow.h>

@class UITraitCollection, UIColor, _UIHostedWindowHostingHandle;

@interface _UIHostedWindow : UIWindow {

	char _wantsTraitPropagation;
	char __hostViewUnderlapsStatusBar;
	int _hostTintAdjustmentMode;
	UITraitCollection* _hostTraitCollection;
	UIColor* __hostTintColor;

}

@property (nonatomic,readonly) _UIHostedWindowHostingHandle * hostingHandle; 
@property (assign,setter=_setHostTintAdjustmentMode:,nonatomic) int _hostTintAdjustmentMode;                        //@synthesize hostTintAdjustmentMode=_hostTintAdjustmentMode - In the implementation block
@property (setter=_setHostTraitCollection:,nonatomic,retain) UITraitCollection * _hostTraitCollection;              //@synthesize hostTraitCollection=_hostTraitCollection - In the implementation block
@property (assign,setter=_setWantsTraitPropigation:,nonatomic) char _wantsTraitPropagation;                         //@synthesize wantsTraitPropagation=_wantsTraitPropagation - In the implementation block
@property (setter=_setHostTintColor:,nonatomic,retain) UIColor * _hostTintColor;                                    //@synthesize _hostTintColor=__hostTintColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)_needsShakesWhenInactive;
-(char)_isWindowServerHostingManaged;
-(char)_isConstrainedByScreenJail;
-(char)_usesWindowServerHitTesting;
-(void)setScreen:(id)arg1 ;
-(int)_orientationForViewTransform;
-(int)_orientationForRootTransform;
-(void)_updateTransformLayerForClassicPresentation;
-(void)_configureContextOptions:(id)arg1 ;
-(void)_updateWindowTraitsAndNotify:(char)arg1 ;
-(char)_shouldPropigateTraitCollectionChanges;
-(id)_traitCollectionForSize:(CGSize)arg1 screenCollection:(id)arg2 virtualHorizontalSizeClass:(int)arg3 virtualVerticalSizeClass:(int)arg4 ;
-(char)_canPromoteFromKeyWindowStack;
-(void)_updateAppTintView;
-(void)_registerScrollToTopView:(id)arg1 ;
-(void)_unregisterScrollToTopView:(id)arg1 ;
-(id)_normalInheritedTintColor;
-(char)__hostViewUnderlapsStatusBar;
-(void)__setHostViewUnderlapsStatusBar:(char)arg1 ;
-(int)_defaultTintAdjustmentMode;
-(unsigned)contextID;
-(_UIHostedWindowHostingHandle *)hostingHandle;
-(UIColor *)_hostTintColor;
-(int)_hostTintAdjustmentMode;
-(void)_setWantsTraitPropigation:(char)arg1 ;
-(void)_setHostTintAdjustmentMode:(int)arg1 ;
-(void)_setHostTraitCollection:(id)arg1 ;
-(char)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(float)arg3 ;
-(UITraitCollection *)_hostTraitCollection;
-(char)_wantsTraitPropagation;
-(void)_setHostTintColor:(id)arg1 ;
@end


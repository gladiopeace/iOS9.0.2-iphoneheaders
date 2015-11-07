/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SKUIScrollingTabBarPaletteDelegate;
@class UIView, SKUIScrollingTabBarBackgroundView;

@interface SKUIScrollingTabBarPalette : UIView {

	char _attached;
	char _tabBarBackgroundExtendsBehindPalette;
	UIView* _contentView;
	float _paletteHeight;
	id<SKUIScrollingTabBarPaletteDelegate> _delegate;
	SKUIScrollingTabBarBackgroundView* _backgroundView;

}

@property (assign,getter=isAttached,nonatomic) char attached;                                                                           //@synthesize attached=_attached - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                                                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) float paletteHeight;                                                                                     //@synthesize paletteHeight=_paletteHeight - In the implementation block
@property (assign,nonatomic) char tabBarBackgroundExtendsBehindPalette;                                                                 //@synthesize tabBarBackgroundExtendsBehindPalette=_tabBarBackgroundExtendsBehindPalette - In the implementation block
@property (assign,setter=_setDelegate:,getter=_delegate,nonatomic,__weak) id<SKUIScrollingTabBarPaletteDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=_backgroundView,nonatomic,readonly) SKUIScrollingTabBarBackgroundView * backgroundView;                               //@synthesize backgroundView=_backgroundView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_delegate;
-(id)_backgroundView;
-(UIView *)contentView;
-(char)isAttached;
-(void)_setDelegate:(id)arg1 ;
-(void)setTabBarBackgroundExtendsBehindPalette:(char)arg1 ;
-(void)_setAttached:(char)arg1 ;
-(float)paletteHeight;
-(char)tabBarBackgroundExtendsBehindPalette;
@end


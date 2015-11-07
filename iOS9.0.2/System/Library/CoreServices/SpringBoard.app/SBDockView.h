/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <SpringBoard/SBWallpaperObserver.h>

@class SBDockIconListView, SBHighlightView, SBWallpaperEffectView, UIImageView, UIView, _UILegibilitySettings, NSString;

@interface SBDockView : UIView <SBWallpaperObserver> {

	SBDockIconListView* _iconListView;
	SBHighlightView* _highlightView;
	SBWallpaperEffectView* _backgroundView;
	UIImageView* _backgroundImageView;
	UIView* _accessibilityBackgroundView;
	char _forSnapshot;
	_UILegibilitySettings* _legibilitySettings;
	unsigned _dockEdge;

}

@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) unsigned dockEdge;                                       //@synthesize dockEdge=_dockEdge - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)defaultHeight;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)wallpaperDidChangeForVariant:(int)arg1 ;
-(void)setDockEdge:(unsigned)arg1 ;
-(id)dockListView;
-(unsigned)dockEdge;
-(id)_newBackgroundImage;
-(id)initWithDockListView:(id)arg1 forSnapshot:(char)arg2 ;
-(void)setVerticalBackgroundStretch:(float)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setBackgroundAlpha:(float)arg1 ;
@end


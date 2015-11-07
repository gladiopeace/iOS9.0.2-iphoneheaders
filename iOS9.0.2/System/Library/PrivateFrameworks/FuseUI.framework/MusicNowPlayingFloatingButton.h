/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIButton.h>

@class MusicNowPlayingAtmosphericEffectView, UIImageView, NSString, UIImage;

@interface MusicNowPlayingFloatingButton : UIButton {

	char _hideShadow;
	MusicNowPlayingAtmosphericEffectView* _effectView;
	UIImageView* _glyphImageView;
	UIImageView* _shadowView;
	UIOffset _glyphImageOffset;

}

@property (assign,nonatomic) int effect; 
@property (nonatomic,retain) NSString * backdropGroupName; 
@property (nonatomic,retain) UIImage * glyphImage; 
@property (assign,nonatomic) UIOffset glyphImageOffset;                                      //@synthesize glyphImageOffset=_glyphImageOffset - In the implementation block
@property (assign,nonatomic) char hideShadow;                                                //@synthesize hideShadow=_hideShadow - In the implementation block
@property (nonatomic,retain) MusicNowPlayingAtmosphericEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UIImageView * glyphImageView;                                   //@synthesize glyphImageView=_glyphImageView - In the implementation block
@property (nonatomic,retain) UIImageView * shadowView;                                       //@synthesize shadowView=_shadowView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UIImageView *)shadowView;
-(void)setShadowView:(UIImageView *)arg1 ;
-(void)setEffect:(int)arg1 ;
-(MusicNowPlayingAtmosphericEffectView *)effectView;
-(void)setEffectView:(MusicNowPlayingAtmosphericEffectView *)arg1 ;
-(int)effect;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)setHideShadow:(char)arg1 ;
-(void)setGlyphImageOffset:(UIOffset)arg1 ;
-(UIImage *)glyphImage;
-(UIOffset)glyphImageOffset;
-(char)hideShadow;
-(UIImageView *)glyphImageView;
-(void)setGlyphImageView:(UIImageView *)arg1 ;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(NSString *)backdropGroupName;
@end


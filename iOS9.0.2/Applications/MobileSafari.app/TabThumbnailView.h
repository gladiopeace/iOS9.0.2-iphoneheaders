/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_queue;
@class UIView, UILabel, NSObject, UIButton, NSString, UIColor, UIFont;

@interface TabThumbnailView : UIView {

	UIView* _headerView;
	UILabel* _titleLabel;
	NSObject*<OS_dispatch_queue> _titleMeasurementQueue;
	CGSize _titleSize;
	char _titleTextNeedsUpdate;
	UIButton* _closeButton;
	float _extraTitleScale;
	NSString* _title;
	float _titleHeight;
	float _titleOffset;
	float _titleScale;
	float _verticalTextAlignmentAdjustment;
	/*^block*/id _layoutAnimator;

}

@property (nonatomic,readonly) UIButton * closeButton;                           //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) float extraTitleScale;                              //@synthesize extraTitleScale=_extraTitleScale - In the implementation block
@property (assign,nonatomic) char showsCloseButton; 
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) float titleAlpha; 
@property (nonatomic,copy) UIColor * titleColor; 
@property (nonatomic,retain) UIFont * titleFont; 
@property (assign,nonatomic) float titleHeight;                                  //@synthesize titleHeight=_titleHeight - In the implementation block
@property (assign,nonatomic) float titleOffset;                                  //@synthesize titleOffset=_titleOffset - In the implementation block
@property (assign,nonatomic) float titleScale;                                   //@synthesize titleScale=_titleScale - In the implementation block
@property (assign,nonatomic) float verticalTextAlignmentAdjustment;              //@synthesize verticalTextAlignmentAdjustment=_verticalTextAlignmentAdjustment - In the implementation block
@property (nonatomic,copy) id layoutAnimator;                                    //@synthesize layoutAnimator=_layoutAnimator - In the implementation block
-(id)layoutAnimator;
-(void)setLayoutAnimator:(id)arg1 ;
-(void)setTitleHeight:(float)arg1 ;
-(void)setVerticalTextAlignmentAdjustment:(float)arg1 ;
-(void)setTitleScale:(float)arg1 ;
-(float)extraTitleScale;
-(void)setExtraTitleScale:(float)arg1 ;
-(char)showsCloseButton;
-(void)setShowsCloseButton:(char)arg1 ;
-(void)_measureTitle;
-(float)titleHeight;
-(float)titleScale;
-(float)verticalTextAlignmentAdjustment;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(float)titleOffset;
-(void)setTitleOffset:(float)arg1 ;
-(UIFont *)titleFont;
-(void)setTitleAlpha:(float)arg1 ;
-(float)titleAlpha;
-(UIButton *)closeButton;
-(void)setTitleFont:(UIFont *)arg1 ;
@end


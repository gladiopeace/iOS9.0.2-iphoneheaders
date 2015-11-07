/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SKUIStackedBarDelegate;
@class _UIBackdropView, NSArray, UIView;

@interface SKUIStackedBar : UIView {

	id<SKUIStackedBarDelegate> _delegate;
	_UIBackdropView* _backdropView;
	NSArray* _items;
	NSArray* _cells;
	char _lastItemExpanded;
	char _hidesStatusBar;
	char _splitViewStyle;
	char _alwaysShowsBackButton;
	char _zeroHeightWhenFirstChildExpanded;
	float _offset;
	UIView* _wrapperView;
	UIView* _maskView;
	float _newOffset;

}

@property (__weak) id<SKUIStackedBarDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * items;                                    //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) char alwaysShowsBackButton;                         //@synthesize alwaysShowsBackButton=_alwaysShowsBackButton - In the implementation block
@property (assign,nonatomic) char hidesStatusBar;                                //@synthesize hidesStatusBar=_hidesStatusBar - In the implementation block
@property (assign,nonatomic) char lastItemExpanded;                              //@synthesize lastItemExpanded=_lastItemExpanded - In the implementation block
@property (assign,nonatomic) char splitViewStyle;                                //@synthesize splitViewStyle=_splitViewStyle - In the implementation block
@property (assign,nonatomic) char zeroHeightWhenFirstChildExpanded;              //@synthesize zeroHeightWhenFirstChildExpanded=_zeroHeightWhenFirstChildExpanded - In the implementation block
@property (assign,nonatomic) float offset;                                       //@synthesize offset=_offset - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SKUIStackedBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SKUIStackedBarDelegate>)delegate;
-(void)sizeToFit;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setOffset:(float)arg1 ;
-(float)offset;
-(void)_buttonAction:(id)arg1 ;
-(void)_reload;
-(char)splitViewStyle;
-(void)setSplitViewStyle:(char)arg1 ;
-(void)setHidesStatusBar:(char)arg1 ;
-(void)setAlwaysShowsBackButton:(char)arg1 ;
-(void)setLastItemExpanded:(char)arg1 animated:(char)arg2 ;
-(void)setLastItemExpanded:(char)arg1 ;
-(void)setZeroHeightWhenFirstChildExpanded:(char)arg1 ;
-(void)animateToFullSizeIfNecessary;
-(void)_selectItemAtIndex:(int)arg1 ;
-(void)_backAction:(id)arg1 ;
-(void)_resetNewOffset;
-(char)alwaysShowsBackButton;
-(char)lastItemExpanded;
-(char)hidesStatusBar;
-(char)zeroHeightWhenFirstChildExpanded;
@end


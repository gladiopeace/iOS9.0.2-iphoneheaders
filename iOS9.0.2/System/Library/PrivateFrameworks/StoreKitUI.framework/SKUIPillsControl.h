/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class SKUIColorScheme, NSString, SKUISegmentedControl, NSArray;

@interface SKUIPillsControl : UIControl {

	SKUIColorScheme* _colorScheme;
	UIEdgeInsets _contentInset;
	int _maximumNumberOfVisiblePills;
	NSString* _moreListTitle;
	SKUISegmentedControl* _segmentedControl;
	NSArray* _titles;

}

@property (nonatomic,copy) SKUIColorScheme * colorScheme;                  //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                    //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) int maximumNumberOfVisiblePills;              //@synthesize maximumNumberOfVisiblePills=_maximumNumberOfVisiblePills - In the implementation block
@property (nonatomic,copy) NSString * moreListTitle;                       //@synthesize moreListTitle=_moreListTitle - In the implementation block
@property (assign,nonatomic) int selectedIndex; 
@property (nonatomic,readonly) CGRect selectedPillFrame; 
@property (nonatomic,copy) NSArray * titles;                               //@synthesize titles=_titles - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setTitles:(NSArray *)arg1 ;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(NSArray *)titles;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(NSString *)moreListTitle;
-(void)setMoreListTitle:(NSString *)arg1 ;
-(void)_segmentedControlAction:(id)arg1 ;
-(void)reloadPills;
-(CGRect)selectedPillFrame;
-(int)maximumNumberOfVisiblePills;
-(void)setMaximumNumberOfVisiblePills:(int)arg1 ;
@end


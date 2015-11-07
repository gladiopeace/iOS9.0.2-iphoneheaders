/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBControlCenterSectionView.h>

@class NSMutableArray, UIScrollView;

@interface SBCCButtonLayoutView : SBControlCenterSectionView {

	NSMutableArray* _buttons;
	UIScrollView* _scrollView;
	float _interButtonPadding;
	unsigned _buttonStretchThreshold;
	unsigned _buttonShrinkThreshold;
	int _maxButtons;
	UIEdgeInsets _contentEdgeInsets;

}

@property (assign,nonatomic) float interButtonPadding;                     //@synthesize interButtonPadding=_interButtonPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;               //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic) unsigned buttonStretchThreshold;              //@synthesize buttonStretchThreshold=_buttonStretchThreshold - In the implementation block
@property (assign,nonatomic) unsigned buttonShrinkThreshold;               //@synthesize buttonShrinkThreshold=_buttonShrinkThreshold - In the implementation block
@property (assign,nonatomic) int maxButtons;                               //@synthesize maxButtons=_maxButtons - In the implementation block
-(void)removeButton:(id)arg1 ;
-(void)setMaxButtons:(int)arg1 ;
-(void)setButtonStretchThreshold:(unsigned)arg1 ;
-(void)resortButtons;
-(void)_didAddButton:(id)arg1 ;
-(void)_didRemoveButton:(id)arg1 ;
-(void)_resortButtons;
-(int)maxButtons;
-(unsigned)buttonShrinkThreshold;
-(float)interButtonPadding;
-(unsigned)buttonStretchThreshold;
-(void)_setButtons:(id)arg1 ;
-(void)setInterButtonPadding:(float)arg1 ;
-(void)setButtonShrinkThreshold:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(id)buttons;
-(void)addButton:(id)arg1 ;
@end

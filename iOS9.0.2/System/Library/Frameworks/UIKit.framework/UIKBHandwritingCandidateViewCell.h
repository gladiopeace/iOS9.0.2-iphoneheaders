/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class TIKeyboardCandidate, UILabel, UIKBThemedView;

@interface UIKBHandwritingCandidateViewCell : UICollectionViewCell {

	TIKeyboardCandidate* _candidate;
	SCD_Struct_UI37 _visualStyling;
	UILabel* _label;
	UILabel* _secondaryLabel;
	UIKBThemedView* _themedView;

}

@property (nonatomic,copy) TIKeyboardCandidate * candidate;              //@synthesize candidate=_candidate - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI37 visualStyling;              //@synthesize visualStyling=_visualStyling - In the implementation block
@property (nonatomic,retain) UILabel * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                   //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UIKBThemedView * themedView;                //@synthesize themedView=_themedView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
+(float)systemFontSize;
+(float)widthForCandidate:(id)arg1 visualStyling:(SCD_Struct_UI37)arg2 ;
+(char)needsThemedView;
+(id)labelFontForText:(id)arg1 ;
+(id)secondaryLabelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)reloadData;
-(UIEdgeInsets)edgeInsets;
-(char)_canDrawContent;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setVisualStyling:(SCD_Struct_UI37)arg1 ;
-(SCD_Struct_UI37)visualStyling;
-(TIKeyboardCandidate *)candidate;
-(void)setThemedView:(UIKBThemedView *)arg1 ;
-(UIKBThemedView *)themedView;
-(void)updateLabels;
-(id)textLabelColor;
-(UILabel *)secondaryLabel;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)updateThemedView;
@end


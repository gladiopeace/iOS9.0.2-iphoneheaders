/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/GuidanceSignView.h>

@class MapsAutoLayoutContext, UIView, SteppingTransitArtworkView, UILabel, MKTransitInfoLabelView, UIImageView, NSLayoutConstraint, NSArray;

@interface SteppingSignView : GuidanceSignView {

	MapsAutoLayoutContext* _layoutContext;
	UIView* _centeredContentView;
	UIView* _textBlockView;
	SteppingTransitArtworkView* _artworkGroupView;
	UILabel* _majorInstructionLabel;
	UILabel* _minorInstructionLabel;
	UILabel* _tertiaryInstructionLabel;
	MKTransitInfoLabelView* _alternateRoutesLabel;
	UIImageView* _iconImageView;
	UIImageView* _secondaryImageView;
	NSLayoutConstraint* _topToMajorInstructionLabelConstraint;
	NSLayoutConstraint* _yCenteredInShieldMajorInstructionLabelConstraint;
	char _transitMode;
	float _preferredMaxLayoutWidth;

}

@property (assign,nonatomic) float preferredMaxLayoutWidth;              //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (assign,nonatomic) char transitMode;                           //@synthesize transitMode=_transitMode - In the implementation block
@property (nonatomic,retain) NSArray * transitArtworks; 
+(char)requiresConstraintBasedLayout;
-(void)_contentSizeDidChange;
-(void)setInstructionsText:(id)arg1 shorterAlternatives:(id)arg2 ;
-(void)updateStyleValuesFromTheme;
-(char)transitMode;
-(void)setTransitMode:(char)arg1 ;
-(void)setMajorInstruction:(id)arg1 withTimeZone:(id)arg2 ;
-(void)setAlternateOptionsLabelItems:(id)arg1 ;
-(id)_minorFont;
-(id)_makeImageView;
-(float)_preferredTextLeadingForAvailableWidth:(float)arg1 ;
-(float)_baselineToTopMarginForLabel:(id)arg1 ;
-(void)setTransitArtworks:(NSArray *)arg1 ;
-(void)setMinorInstruction:(id)arg1 withTimeZone:(id)arg2 ;
-(void)_configureLabel:(id)arg1 withFont:(id)arg2 ;
-(id)_labelAboveLabel:(id)arg1 excludeHidden:(char)arg2 ;
-(void)resetConstraints;
-(id)_makeLabelWithFont:(id)arg1 ;
-(float)_maxWidthInstructionText;
-(id)_majorFont;
-(void)setTertiaryInstruction:(id)arg1 withTimeZone:(id)arg2 ;
-(float)_maxWidthForImages;
-(void)_updateInstructionText:(id)arg1 inLabel:(id)arg2 usingFont:(id)arg3 ;
-(void)_setupConstraintsForLabel:(id)arg1 maxLayoutWidth:(float)arg2 autoLayoutContext:(id)arg3 ;
-(id)_visibleLabelAboveLabel:(id)arg1 ;
-(void)_resetLayoutConstraints;
-(NSArray *)transitArtworks;
-(void)clearContent;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)setPreferredMaxLayoutWidth:(float)arg1 ;
-(float)preferredMaxLayoutWidth;
-(id)viewForFirstBaselineLayout;
-(void)setSecondaryImage:(id)arg1 ;
@end


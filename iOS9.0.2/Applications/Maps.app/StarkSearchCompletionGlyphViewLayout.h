/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/SearchCompletionGlyphViewLayout.h>

@interface StarkSearchCompletionGlyphViewLayout : SearchCompletionGlyphViewLayout {

	char _collapsesLeftMarginWithoutGlyph;
	char highlighted;
	float _leftInsetWithoutGlyph;
	float _availableLabelWidth;
	int _labelPositions;

}

@property (assign,nonatomic) char collapsesLeftMarginWithoutGlyph;               //@synthesize collapsesLeftMarginWithoutGlyph=_collapsesLeftMarginWithoutGlyph - In the implementation block
@property (assign,nonatomic) float leftInsetWithoutGlyph;                        //@synthesize leftInsetWithoutGlyph=_leftInsetWithoutGlyph - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted; 
@property (assign,nonatomic) int labelPositions;                                 //@synthesize labelPositions=_labelPositions - In the implementation block
@property (nonatomic,readonly) float availableLabelWidth;                        //@synthesize availableLabelWidth=_availableLabelWidth - In the implementation block
-(id)titleLabelTextAttributes;
-(id)subtitleLabelTextAttributes;
-(id)boldSubtitleLabelTextAttributes;
-(id)boldTitleLabelTextAttributes;
-(char)collapsesLeftMarginWithoutGlyph;
-(float)leftInsetWithoutGlyph;
-(void)setLeftInsetWithoutGlyph:(float)arg1 ;
-(float)availableLabelWidth;
-(int)labelPositions;
-(void)setLabelPositions:(int)arg1 ;
-(void)setCollapsesLeftMarginWithoutGlyph:(char)arg1 ;
-(id)init;
-(void)setHighlighted:(char)arg1 ;
-(id)titleLabel;
-(char)isHighlighted;
-(void)layout;
@end


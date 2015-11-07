/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SearchUIRichTextData, UILabel, UIView, NSArray;

@interface SearchUIRichTextField : UIView {

	char _hasIcons;
	SearchUIRichTextData* _richTextData;
	UILabel* _textLabel;
	UIView* _contentAdvisoryView;
	UIView* _starRatingView;
	NSArray* _orderedLayoutItems;
	unsigned _style;

}

@property (retain) SearchUIRichTextData * richTextData;              //@synthesize richTextData=_richTextData - In the implementation block
@property (retain) UILabel * textLabel;                              //@synthesize textLabel=_textLabel - In the implementation block
@property (retain) UIView * contentAdvisoryView;                     //@synthesize contentAdvisoryView=_contentAdvisoryView - In the implementation block
@property (retain) UIView * starRatingView;                          //@synthesize starRatingView=_starRatingView - In the implementation block
@property (retain) NSArray * orderedLayoutItems;                     //@synthesize orderedLayoutItems=_orderedLayoutItems - In the implementation block
@property (assign) unsigned style;                                   //@synthesize style=_style - In the implementation block
@property (assign) char hasIcons;                                    //@synthesize hasIcons=_hasIcons - In the implementation block
+(char)richTextNeedsFancyVibrancy:(id)arg1 ;
+(char)richTextIsSingleTextField:(id)arg1 ;
-(UIView *)starRatingView;
-(unsigned)style;
-(void)setStyle:(unsigned)arg1 ;
-(UILabel *)textLabel;
-(id)viewForLastBaselineLayout;
-(void)setPreferredMaxLayoutWidth:(float)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(char)updateWithRichText:(id)arg1 ;
-(void)setRichTextData:(SearchUIRichTextData *)arg1 ;
-(SearchUIRichTextData *)richTextData;
-(id)initWithRichText:(id)arg1 font:(id)arg2 style:(unsigned)arg3 ;
-(UIView *)contentAdvisoryView;
-(char)hasIcons;
-(void)setHasIcons:(char)arg1 ;
-(void)setStarRatingView:(UIView *)arg1 ;
-(void)setContentAdvisoryView:(UIView *)arg1 ;
-(void)setOrderedLayoutItems:(NSArray *)arg1 ;
-(void)layoutViewsHorizontally;
-(NSArray *)orderedLayoutItems;
@end


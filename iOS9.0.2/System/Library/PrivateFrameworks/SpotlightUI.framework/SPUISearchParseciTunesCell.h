/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpotlightUI/SPUISearchParsecCell.h>

@class UITextView, SKUIItemOfferButton, UILabel, UIView;

@interface SPUISearchParseciTunesCell : SPUISearchParsecCell {

	UITextView* _descriptionTextView;
	SKUIItemOfferButton* _appStoreButton;
	UILabel* _ratingLabel;
	UIView* _starView;

}
+(char)supportsSection:(id)arg1 result:(id)arg2 ;
+(id)fullStar;
+(id)halfStar;
+(id)emptyStar;
-(void)updateFontSizes;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(id)subtitleLabel;
-(void)updateConstraints;
-(void)buttonPressed;
-(void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
-(id)accessoryViewForSection:(id)arg1 result:(id)arg2 ;
-(void)updateButtonState;
-(id)appStoreButton;
-(void)updateStarViewWithRating:(float)arg1 ;
@end


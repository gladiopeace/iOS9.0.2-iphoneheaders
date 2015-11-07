/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/RCViewLayout.h>
#import <VoiceMemos/RCConcreteViewLayout.h>

@class RCContentSizeLayoutConstraint, NSArray, NSLayoutConstraint, UITextField, UILabel, NSString;

@interface RCRecordingCellLabelsViewLayout : RCViewLayout <RCConcreteViewLayout> {

	RCContentSizeLayoutConstraint* _titleFieldBodyTopSpacingCn;
	NSArray* _titleFieldHorizontalInsetCns;
	NSArray* _horizontalContentMarginCns;
	NSLayoutConstraint* _dateToBottomCn;
	float _dateToBottomDefaultConstant;
	float _titleFieldBodyTopSpacing;
	float _titleFieldHorizontalInset;
	float _temporalBottomAdjustment;
	UITextField* _titleField;
	UILabel* _dateLabel;
	UILabel* _durationLabel;

}

@property (assign,nonatomic) float titleFieldBodyTopSpacing;               //@synthesize titleFieldBodyTopSpacing=_titleFieldBodyTopSpacing - In the implementation block
@property (assign,nonatomic) float titleFieldHorizontalInset;              //@synthesize titleFieldHorizontalInset=_titleFieldHorizontalInset - In the implementation block
@property (assign,nonatomic) float horizontalContentMargin; 
@property (assign,nonatomic) float temporalBottomAdjustment;               //@synthesize temporalBottomAdjustment=_temporalBottomAdjustment - In the implementation block
@property (nonatomic,readonly) UITextField * titleField;                   //@synthesize titleField=_titleField - In the implementation block
@property (nonatomic,readonly) UILabel * dateLabel;                        //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,readonly) UILabel * durationLabel;                    //@synthesize durationLabel=_durationLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loadGuideConstraints;
-(id)loadViews;
-(void)prepareViewsForReuse;
-(void)setHorizontalContentMargin:(float)arg1 ;
-(void)setTitleFieldBodyTopSpacing:(float)arg1 ;
-(void)setTemporalBottomAdjustment:(float)arg1 ;
-(UILabel *)durationLabel;
-(id)_createTitleField;
-(id)_createSubtitleLabel;
-(float)titleFieldBodyTopSpacing;
-(float)titleFieldHorizontalInset;
-(void)setTitleFieldHorizontalInset:(float)arg1 ;
-(float)temporalBottomAdjustment;
-(float)_separatorHeight;
-(UILabel *)dateLabel;
-(UITextField *)titleField;
@end


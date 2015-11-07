/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIVisualEffectView.h>

@class UILabel, UIImageView, UIButton, NSArray, NSLayoutConstraint, UILayoutGuide;

@interface SplashScreenView : UIVisualEffectView {

	/*^block*/id _continueButtonTappedCallback;
	UILabel* _titleLabel;
	UIImageView* _mailIcon;
	UIImageView* _locationIcon;
	UILabel* _suggestedEventsFeatureLabel;
	UILabel* _timeToLeaveAndAutomaticGeocodingFeatureLabel;
	UILabel* _configurationLabel;
	UIButton* _continueButton;
	NSArray* _persistedConstraints;
	NSLayoutConstraint* _titleLabelVerticalConstraint;
	NSLayoutConstraint* _suggestedEventsFeatureLabelVerticalConstraint;
	NSLayoutConstraint* _timeToLeaveAndAutomaticGeocodingFeatureLabelVerticalConstraint;
	NSLayoutConstraint* _maximumWidthForFeatureSectionConstraint;
	NSLayoutConstraint* _mailIconLeadingConstraint;
	NSLayoutConstraint* _continueButtonVerticalConstraint;
	NSLayoutConstraint* _configurationLabelVerticalConstraint;
	UILayoutGuide* _featureSectionsLayoutGuide;

}

@property (nonatomic,copy) id continueButtonTappedCallback;                                                                    //@synthesize continueButtonTappedCallback=_continueButtonTappedCallback - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * mailIcon;                                                                           //@synthesize mailIcon=_mailIcon - In the implementation block
@property (nonatomic,retain) UIImageView * locationIcon;                                                                       //@synthesize locationIcon=_locationIcon - In the implementation block
@property (nonatomic,retain) UILabel * suggestedEventsFeatureLabel;                                                            //@synthesize suggestedEventsFeatureLabel=_suggestedEventsFeatureLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeToLeaveAndAutomaticGeocodingFeatureLabel;                                           //@synthesize timeToLeaveAndAutomaticGeocodingFeatureLabel=_timeToLeaveAndAutomaticGeocodingFeatureLabel - In the implementation block
@property (nonatomic,retain) UILabel * configurationLabel;                                                                     //@synthesize configurationLabel=_configurationLabel - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;                                                                        //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) NSArray * persistedConstraints;                                                                   //@synthesize persistedConstraints=_persistedConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelVerticalConstraint;                                                //@synthesize titleLabelVerticalConstraint=_titleLabelVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * suggestedEventsFeatureLabelVerticalConstraint;                               //@synthesize suggestedEventsFeatureLabelVerticalConstraint=_suggestedEventsFeatureLabelVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * timeToLeaveAndAutomaticGeocodingFeatureLabelVerticalConstraint;              //@synthesize timeToLeaveAndAutomaticGeocodingFeatureLabelVerticalConstraint=_timeToLeaveAndAutomaticGeocodingFeatureLabelVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * maximumWidthForFeatureSectionConstraint;                                     //@synthesize maximumWidthForFeatureSectionConstraint=_maximumWidthForFeatureSectionConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * mailIconLeadingConstraint;                                                   //@synthesize mailIconLeadingConstraint=_mailIconLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * continueButtonVerticalConstraint;                                            //@synthesize continueButtonVerticalConstraint=_continueButtonVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * configurationLabelVerticalConstraint;                                        //@synthesize configurationLabelVerticalConstraint=_configurationLabelVerticalConstraint - In the implementation block
@property (nonatomic,retain) UILayoutGuide * featureSectionsLayoutGuide;                                                       //@synthesize featureSectionsLayoutGuide=_featureSectionsLayoutGuide - In the implementation block
+(float)_titleLabelVerticalOffsetForFrame:(CGRect)arg1 ;
+(float)_mailIconLeadingPaddingForFrame:(CGRect)arg1 ;
+(float)_suggestedEventsFeatureLabelVerticalOffsetForFrame:(CGRect)arg1 ;
+(float)_timeToLeaveAndAutomaticGeocodingFeatureLabelVerticalOffsetForFrame:(CGRect)arg1 ;
+(float)_continueButtonVerticalOffsetForFrame:(CGRect)arg1 ;
+(float)_configurationLabelVerticalOffsetForFrame:(CGRect)arg1 ;
+(float)_squareIconEdgeSize;
+(float)_minimumSpaceBetweenFeatureSectionsForFrame:(CGRect)arg1 ;
+(float)_subheadFontSize;
+(float)_iconAndLabelSpacing;
+(float)_footnoteFontSize;
-(void)setContinueButtonTappedCallback:(id)arg1 ;
-(id)_titleLabelConstraints;
-(void)_addSubviews;
-(void)_addLayoutGuides;
-(NSArray *)persistedConstraints;
-(NSLayoutConstraint *)titleLabelVerticalConstraint;
-(NSLayoutConstraint *)mailIconLeadingConstraint;
-(NSLayoutConstraint *)suggestedEventsFeatureLabelVerticalConstraint;
-(NSLayoutConstraint *)timeToLeaveAndAutomaticGeocodingFeatureLabelVerticalConstraint;
-(NSLayoutConstraint *)maximumWidthForFeatureSectionConstraint;
-(float)_maximumWidthForFeatureSectionForFrame:(CGRect)arg1 ;
-(NSLayoutConstraint *)continueButtonVerticalConstraint;
-(NSLayoutConstraint *)configurationLabelVerticalConstraint;
-(id)_mailIconConstraints;
-(id)_locationIconConstraints;
-(id)_suggestedEventsFeatureLabelConstraints;
-(id)_timeToLeaveAndAutomaticGeocodingFeatureLabelConstraints;
-(id)_continueButtonConstraints;
-(id)_configurationLabelConstraints;
-(id)_featureSectionsLayoutGuideConstraints;
-(void)setPersistedConstraints:(NSArray *)arg1 ;
-(id)continueButtonTappedCallback;
-(void)setTitleLabelVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(UIImageView *)mailIcon;
-(UILayoutGuide *)featureSectionsLayoutGuide;
-(void)setMailIconLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)suggestedEventsFeatureLabel;
-(UIImageView *)locationIcon;
-(UILabel *)timeToLeaveAndAutomaticGeocodingFeatureLabel;
-(void)setSuggestedEventsFeatureLabelVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTimeToLeaveAndAutomaticGeocodingFeatureLabelVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_continueButtonTapped:(id)arg1 ;
-(UIButton *)continueButton;
-(void)setContinueButtonVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)configurationLabel;
-(void)setConfigurationLabelVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFeatureSectionsLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setMaximumWidthForFeatureSectionConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMailIcon:(UIImageView *)arg1 ;
-(void)setLocationIcon:(UIImageView *)arg1 ;
-(void)setSuggestedEventsFeatureLabel:(UILabel *)arg1 ;
-(void)setTimeToLeaveAndAutomaticGeocodingFeatureLabel:(UILabel *)arg1 ;
-(void)setConfigurationLabel:(UILabel *)arg1 ;
-(void)setContinueButton:(UIButton *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(id)initWithEffect:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end


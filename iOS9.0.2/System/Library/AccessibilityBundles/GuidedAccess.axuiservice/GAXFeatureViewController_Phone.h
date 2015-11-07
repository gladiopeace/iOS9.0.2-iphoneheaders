/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXFeatureViewController.h>

@class UILabel, NSLayoutConstraint, GAXOptionsView;

@interface GAXFeatureViewController_Phone : GAXFeatureViewController {

	UILabel* _instructionsLabel;
	NSLayoutConstraint* _instructionsLabelWidthConstraint;
	GAXOptionsView* _optionsView;

}

@property (nonatomic,retain) UILabel * instructionsLabel;                                        //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (nonatomic,readonly) float instructionsLabelHorizontalOffset; 
@property (nonatomic,retain) NSLayoutConstraint * instructionsLabelWidthConstraint;              //@synthesize instructionsLabelWidthConstraint=_instructionsLabelWidthConstraint - In the implementation block
@property (nonatomic,readonly) char isTouchEnabled; 
@property (nonatomic,readonly) UIOffset optionsButtonOffset; 
@property (nonatomic,retain) GAXOptionsView * optionsView;                                       //@synthesize optionsView=_optionsView - In the implementation block
@property (nonatomic,readonly) float featureViewControllerHeight; 
-(void)releaseOutlets;
-(void)setInstructionsLabel:(UILabel *)arg1 ;
-(UILabel *)instructionsLabel;
-(void)dismissOptionsAnimated:(char)arg1 ;
-(id)_hardwareFeatureViews;
-(id)_appFeatureViews;
-(id)_timeRestrictionFeatureViews;
-(void)presentOptionsAnimated:(char)arg1 ;
-(float)featureViewControllerHeight;
-(void)setInstructionsLabelWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_handleTouchUpInside:(id)arg1 ;
-(float)instructionsLabelHorizontalOffset;
-(UIOffset)optionsButtonOffset;
-(NSLayoutConstraint *)instructionsLabelWidthConstraint;
-(void)featureView:(id)arg1 didChangeState:(char)arg2 ;
-(void)featureView:(id)arg1 didChangeTimeRestrictionDuration:(int)arg2 timeRestrictionsEnabled:(char)arg3 ;
-(GAXOptionsView *)optionsView;
-(void)setOptionsView:(GAXOptionsView *)arg1 ;
-(char)isTouchEnabled;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLayoutSubviews;
@end


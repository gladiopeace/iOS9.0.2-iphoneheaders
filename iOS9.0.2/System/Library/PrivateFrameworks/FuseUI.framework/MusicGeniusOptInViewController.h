/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MPTermsViewControllerDelegate.h>

@protocol OS_dispatch_source;
@class HSCloudClient, NSObject, NSURL, UIImageView, UIView, UILabel, UIButton, MPUIndeterminateProgressIndicatorView, NSLayoutConstraint, MPUContentSizeLayoutConstraint, MPUNotificationObserver, UIScrollView, NSString;

@interface MusicGeniusOptInViewController : UIViewController <MPTermsViewControllerDelegate> {

	HSCloudClient* _cloudClient;
	int _state;
	long long _geniusTermsVersion;
	char _hasUpdateGeniusCompletionBlock;
	NSObject*<OS_dispatch_source> _updateStatusTimer;
	NSURL* _learnMoreURL;
	UIImageView* _geniusImageView;
	UIView* _widthConstrainingView;
	UIView* _bottomSpacerView;
	UILabel* _aboutGeniusLabel;
	UIButton* _geniusOptInButton;
	UILabel* _geniusLegalLabel;
	UIButton* _geniusLearnMoreButton;
	UILabel* _stepOneBulletLabel;
	UILabel* _stepOneDescriptionLabel;
	UILabel* _stepTwoBulletLabel;
	UILabel* _stepTwoDescriptionLabel;
	UILabel* _stepThreeBulletLabel;
	UILabel* _stepThreeDescriptionLabel;
	UILabel* _continueUsingMusicLabel;
	UIImageView* _stepOneCompleteImageView;
	UIImageView* _stepTwoCompleteImageView;
	UIImageView* _stepThreeCompleteImageView;
	MPUIndeterminateProgressIndicatorView* _indeterminateProgressIndicator;
	NSLayoutConstraint* _contentSizeHeightConstraint;
	MPUContentSizeLayoutConstraint* _updatingAboutGeniusLabelBaselineContraint;
	MPUContentSizeLayoutConstraint* _updatingGeniusOptInButtonBaselineContraint;
	NSLayoutConstraint* _updatingGeniusLegalLabelTopConstraint;
	MPUContentSizeLayoutConstraint* _updatingGeniusLearnMoreButtonBaselineContraint;
	NSLayoutConstraint* _updatingStepOneBulletLeadingToLeadingConstraint;
	NSLayoutConstraint* _updatingStepOneCompletedImageViewCenterYConstraint;
	MPUContentSizeLayoutConstraint* _updatingStepOneDescriptionLabelBaselineContraint;
	NSLayoutConstraint* _updatingStepTwoBulletLeadingToLeadingConstraint;
	NSLayoutConstraint* _updatingStepTwoCompletedImageViewCenterYConstraint;
	MPUContentSizeLayoutConstraint* _updatingStepTwoDescriptionLabelBaselineContraint;
	NSLayoutConstraint* _updatingStepThreeBulletLeadingToLeadingConstraint;
	NSLayoutConstraint* _updatingStepThreeCompletedImageViewCenterYConstraint;
	MPUContentSizeLayoutConstraint* _updatingStepThreeDescriptionLabelBaselineContraint;
	NSLayoutConstraint* _updatingContinueUsingMusicLabelTopConstraint;
	NSLayoutConstraint* _updatingIndeterminateProgressIndicatorWidthConstraint;
	MPUNotificationObserver* _preferredContentSizeDidChangeObserver;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)termsViewControllerDidCancel:(id)arg1 ;
-(void)termsViewControllerShouldDismiss:(id)arg1 ;
-(void)termsViewController:(id)arg1 loadTermsAndConditionsWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)termsViewController:(id)arg1 acceptTermsAndConditions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(/*^block*/id)_completionBlock;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)updateViewConstraints;
-(id)_createHorizontalSpacerViewInView:(id)arg1 ;
-(id)_createVerticalSpacerViewInView:(id)arg1 ;
-(void)_updateViewsForCurrentState;
-(void)_updateConstraintsForContentSizeDidChangeNotification;
-(void)_updateLearnMoreButtonState;
-(void)_updateGeniusState;
-(void)_updateViewConstraintsForGeniusDisabled;
-(void)_updateViewConstraintsForGeniusEnabled;
-(void)_optInToGenius;
-(void)_animateToGeniusEnabledStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_enableGenius;
-(void)_prepareForDisabledViews;
-(void)_doneButtonPressed:(id)arg1 ;
-(void)_geniusOptInButtonAction:(id)arg1 ;
-(void)_geniusLearnMoreButtonAction:(id)arg1 ;
-(void)_prepareForEnabledViews;
-(void)_setupViewsForGeniusDisabledIfNeeded;
-(void)_setupViewsForGeniusEnabledIfNeeded;
-(void)_prepareIndeterminateProgressIndicatorForUse;
-(void)_showErrorAlert;
-(void)_ensureCompletionHandlerIsAttached;
-(void)_ensureUpdateStatusTimerIsRunning;
@end


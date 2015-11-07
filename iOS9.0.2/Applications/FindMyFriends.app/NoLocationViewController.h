/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FMFViewController.h>
#import <libobjc.A.dylib/FMMapGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@class FMFPerson, UIButton, UILabel, UIImageView, UIView, NSLayoutConstraint, FMMapGestureRecognizer, CNAvatarView, NSString;

@interface NoLocationViewController : FMFViewController <FMMapGestureRecognizerDelegate, CNAvatarViewDelegate> {

	char _shouldShow;
	char _disableAnimation;
	char _isNoLocationViewShowing;
	id _delegate;
	FMFPerson* _orbPreviewPerson;
	UIButton* _topButton;
	UIButton* _bottomButton;
	UILabel* _subtitleLabel;
	UIImageView* _monogramRing;
	UIView* _avatarViewContainer;
	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _imageHeightConstraint;
	FMMapGestureRecognizer* _backGestureRecognizer;
	UIView* _backBlurView;
	CNAvatarView* _avatarView;

}

@property (assign,nonatomic,__weak) id delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldShow;                                             //@synthesize shouldShow=_shouldShow - In the implementation block
@property (assign,nonatomic) char disableAnimation;                                       //@synthesize disableAnimation=_disableAnimation - In the implementation block
@property (nonatomic,retain) FMFPerson * orbPreviewPerson;                                //@synthesize orbPreviewPerson=_orbPreviewPerson - In the implementation block
@property (nonatomic,retain) UIButton * topButton;                                        //@synthesize topButton=_topButton - In the implementation block
@property (nonatomic,retain) UIButton * bottomButton;                                     //@synthesize bottomButton=_bottomButton - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                     //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * monogramRing;                                  //@synthesize monogramRing=_monogramRing - In the implementation block
@property (nonatomic,retain) UIView * avatarViewContainer;                                //@synthesize avatarViewContainer=_avatarViewContainer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageWidthConstraint;                   //@synthesize imageWidthConstraint=_imageWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageHeightConstraint;                  //@synthesize imageHeightConstraint=_imageHeightConstraint - In the implementation block
@property (nonatomic,retain) FMMapGestureRecognizer * backGestureRecognizer;              //@synthesize backGestureRecognizer=_backGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * backBlurView;                                       //@synthesize backBlurView=_backBlurView - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                   //@synthesize avatarView=_avatarView - In the implementation block
@property (assign,nonatomic) char isNoLocationViewShowing;                                //@synthesize isNoLocationViewShowing=_isNoLocationViewShowing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)avatarViewContainer;
-(void)setAvatarViewContainer:(UIView *)arg1 ;
-(void)addNotifications;
-(void)updateAvatarImage;
-(void)setBackGestureRecognizer:(FMMapGestureRecognizer *)arg1 ;
-(FMMapGestureRecognizer *)backGestureRecognizer;
-(NSLayoutConstraint *)imageHeightConstraint;
-(NSLayoutConstraint *)imageWidthConstraint;
-(char)shouldShow;
-(FMFPerson *)orbPreviewPerson;
-(UIButton *)topButton;
-(UIButton *)bottomButton;
-(void)actionButtonWasPressed;
-(void)dismissNoLocationWithAnimatatedCompletion:(/*^block*/id)arg1 ;
-(void)dismissActionSheet;
-(char)showNoLocationForSelectedEntity;
-(void)setShouldShow:(char)arg1 ;
-(void)presentNoLocationAnimateWithCompletion:(/*^block*/id)arg1 ;
-(char)isNoLocationViewShowing;
-(void)setIsNoLocationViewShowing:(char)arg1 ;
-(float)xTransformForScale:(float)arg1 forView:(id)arg2 ;
-(float)yTransformForScale:(float)arg1 forView:(id)arg2 ;
-(float)relativeParentXPositionForView:(id)arg1 ;
-(float)relativeParentYPositionForView:(id)arg1 ;
-(char)selectedEntityHasNoLocation:(id)arg1 ;
-(void)showNoLocationForMapType:(unsigned)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateAvatarViewWithPerson:(id)arg1 ;
-(void)setOrbPreviewPerson:(FMFPerson *)arg1 ;
-(void)setTopButton:(UIButton *)arg1 ;
-(void)setBottomButton:(UIButton *)arg1 ;
-(UIImageView *)monogramRing;
-(void)setMonogramRing:(UIImageView *)arg1 ;
-(void)setImageWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)delegate;
-(void)didReceiveMemoryWarning;
-(void)awakeFromNib;
-(char)disableAnimation;
-(UILabel *)subtitleLabel;
-(void)viewDidLoad;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)setDisableAnimation:(char)arg1 ;
-(void)mapSwiped:(id)arg1 withPercent:(float)arg2 ;
-(void)mapSwipedEnd:(id)arg1 withPercent:(float)arg2 ;
-(UIView *)backBlurView;
-(void)setBackBlurView:(UIView *)arg1 ;
-(void)updateViews;
@end


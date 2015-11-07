/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <GameCenterPrivateUI/GKLoadableContentViewController.h>
#import <UIKit/UICollisionBehaviorDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class GKLocalPlayerProfileHeaderView, UIScrollView, GKBubbleFlowContainerView, GKValueWithCaptionBubbleControl, NSArray, GKLocalPlayer, GKPhotoPicker, UITapGestureRecognizer, NSLayoutConstraint, NSString;

@interface GKLocalPlayerProfileViewController : GKLoadableContentViewController <UICollisionBehaviorDelegate, UITextViewDelegate, UINavigationControllerDelegate> {

	char _statusEditingActive;
	char _didAssignNilPlayer;
	GKLocalPlayerProfileHeaderView* _headerView;
	UIScrollView* _scrollView;
	GKBubbleFlowContainerView* _bubbleContainerView;
	GKValueWithCaptionBubbleControl* _gamesBubble;
	GKValueWithCaptionBubbleControl* _friendsBubble;
	GKValueWithCaptionBubbleControl* _friendRequestsBubble;
	GKValueWithCaptionBubbleControl* _challengesBubble;
	GKValueWithCaptionBubbleControl* _turnsBubble;
	NSArray* _headerPortraitConstraints;
	NSArray* _headerLandscapeConstraints;
	NSArray* _headerLandscapeRTLConstraints;
	GKLocalPlayer* _player;
	GKPhotoPicker* _photoPicker;
	UITapGestureRecognizer* _cancelEditingGestureRecognizer;
	NSLayoutConstraint* _portraitTopConstraint;
	NSLayoutConstraint* _landscapeTopConstraint;
	NSLayoutConstraint* _headerViewLeadingConstraint;
	NSLayoutConstraint* _headerViewTrailingConstraint;
	int _constraintOrientation;
	/*^block*/id _presentationDelayHandler;

}

@property (nonatomic,retain) GKLocalPlayerProfileHeaderView * headerView;                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) GKBubbleFlowContainerView * bubbleContainerView;                      //@synthesize bubbleContainerView=_bubbleContainerView - In the implementation block
@property (assign,nonatomic) GKValueWithCaptionBubbleControl * gamesBubble;                        //@synthesize gamesBubble=_gamesBubble - In the implementation block
@property (assign,nonatomic) GKValueWithCaptionBubbleControl * friendsBubble;                      //@synthesize friendsBubble=_friendsBubble - In the implementation block
@property (assign,nonatomic) GKValueWithCaptionBubbleControl * friendRequestsBubble;               //@synthesize friendRequestsBubble=_friendRequestsBubble - In the implementation block
@property (assign,nonatomic) GKValueWithCaptionBubbleControl * challengesBubble;                   //@synthesize challengesBubble=_challengesBubble - In the implementation block
@property (assign,nonatomic) GKValueWithCaptionBubbleControl * turnsBubble;                        //@synthesize turnsBubble=_turnsBubble - In the implementation block
@property (nonatomic,retain) NSArray * headerPortraitConstraints;                                  //@synthesize headerPortraitConstraints=_headerPortraitConstraints - In the implementation block
@property (nonatomic,retain) NSArray * headerLandscapeConstraints;                                 //@synthesize headerLandscapeConstraints=_headerLandscapeConstraints - In the implementation block
@property (nonatomic,retain) NSArray * headerLandscapeRTLConstraints;                              //@synthesize headerLandscapeRTLConstraints=_headerLandscapeRTLConstraints - In the implementation block
@property (nonatomic,retain) GKLocalPlayer * player;                                               //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) char statusEditingActive;                                             //@synthesize statusEditingActive=_statusEditingActive - In the implementation block
@property (nonatomic,retain) GKPhotoPicker * photoPicker;                                          //@synthesize photoPicker=_photoPicker - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * cancelEditingGestureRecognizer;              //@synthesize cancelEditingGestureRecognizer=_cancelEditingGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * portraitTopConstraint;                           //@synthesize portraitTopConstraint=_portraitTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * landscapeTopConstraint;                          //@synthesize landscapeTopConstraint=_landscapeTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerViewLeadingConstraint;                     //@synthesize headerViewLeadingConstraint=_headerViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerViewTrailingConstraint;                    //@synthesize headerViewTrailingConstraint=_headerViewTrailingConstraint - In the implementation block
@property (assign,nonatomic) int constraintOrientation;                                            //@synthesize constraintOrientation=_constraintOrientation - In the implementation block
@property (nonatomic,copy) id presentationDelayHandler;                                            //@synthesize presentationDelayHandler=_presentationDelayHandler - In the implementation block
@property (assign,nonatomic) char didAssignNilPlayer;                                              //@synthesize didAssignNilPlayer=_didAssignNilPlayer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGamesBubble:(GKValueWithCaptionBubbleControl *)arg1 ;
-(void)setFriendsBubble:(GKValueWithCaptionBubbleControl *)arg1 ;
-(GKValueWithCaptionBubbleControl *)gamesBubble;
-(GKValueWithCaptionBubbleControl *)friendsBubble;
-(void)didTouchGamesBubble;
-(void)didTouchFriendsBubble;
-(void)setAccentColor:(id)arg1 ;
-(void)_updateTextForBubbleOfType:(int)arg1 ;
-(void)changePhoto;
-(void)didTouchSpeechBalloon;
-(void)_addBubbleEventTargets;
-(void)_removeBubbleEventTargets;
-(char)_ensureHasAuthenticatedPlayerIfAvailable;
-(void)updateBubbleText;
-(void)showBubbles;
-(void)_clearBubbleText;
-(void)setLandscapeTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeaderPortraitConstraints:(NSArray *)arg1 ;
-(void)setHeaderLandscapeConstraints:(NSArray *)arg1 ;
-(void)setHeaderLandscapeRTLConstraints:(NSArray *)arg1 ;
-(void)adjustConstraintsForOrientation:(int)arg1 ;
-(float)bubbleDimensionForViewSize:(CGSize)arg1 ;
-(void)updateBubbleRectsForViewSize:(CGSize)arg1 bubbleDimension:(float)arg2 orientation:(int)arg3 ;
-(NSLayoutConstraint *)landscapeTopConstraint;
-(int)constraintOrientation;
-(void)setConstraintOrientation:(int)arg1 ;
-(void)setPhotoPicker:(GKPhotoPicker *)arg1 ;
-(void)selectTabBarViewControllerByAppDelegateSelector:(SEL)arg1 fromBubble:(id)arg2 animated:(char)arg3 ;
-(GKValueWithCaptionBubbleControl *)challengesBubble;
-(GKValueWithCaptionBubbleControl *)turnsBubble;
-(GKValueWithCaptionBubbleControl *)friendRequestsBubble;
-(void)setStatusEditingActive:(char)arg1 ;
-(void)_updateHeaderView:(char)arg1 endingOrBeginning:(char)arg2 ;
-(void)tappedOutsideBalloonDuringEditing;
-(void)_startEditingStatus;
-(void)_stopEditingStatus;
-(char)_shouldAnimateBubblesIn;
-(void)didTouchChallengesBubble;
-(void)didTouchTurnsBubble;
-(void)didTouchFriendRequestsBubble;
-(void)cancelChangePhoto;
-(void)transitionFromBubble:(id)arg1 toViewController:(id)arg2 ;
-(void)setBubbleContainerView:(GKBubbleFlowContainerView *)arg1 ;
-(void)setFriendRequestsBubble:(GKValueWithCaptionBubbleControl *)arg1 ;
-(void)setChallengesBubble:(GKValueWithCaptionBubbleControl *)arg1 ;
-(void)setTurnsBubble:(GKValueWithCaptionBubbleControl *)arg1 ;
-(NSArray *)headerPortraitConstraints;
-(NSArray *)headerLandscapeConstraints;
-(NSArray *)headerLandscapeRTLConstraints;
-(char)statusEditingActive;
-(GKPhotoPicker *)photoPicker;
-(UITapGestureRecognizer *)cancelEditingGestureRecognizer;
-(void)setCancelEditingGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(NSLayoutConstraint *)portraitTopConstraint;
-(void)setPortraitTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)headerViewLeadingConstraint;
-(void)setHeaderViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)headerViewTrailingConstraint;
-(void)setHeaderViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(char)didAssignNilPlayer;
-(void)setDidAssignNilPlayer:(char)arg1 ;
-(void)setPlayer:(GKLocalPlayer *)arg1 ;
-(GKLocalPlayer *)player;
-(void)dealloc;
-(id)init;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(GKLocalPlayerProfileHeaderView *)headerView;
-(void)setHeaderView:(GKLocalPlayerProfileHeaderView *)arg1 ;
-(void)didUpdateModel;
-(void)viewWillAppearAnimated:(char)arg1 bubbleFlow:(char)arg2 ;
-(void)_gkRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(char)_gkShouldRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(char)readyToAppearWithBubbleFlow;
-(void)setPresentationDelayHandler:(id)arg1 ;
-(char)shouldUseSlidingDoorWhenTransitioningFrom;
-(char)shouldUseSlidingDoorWhenTransitioningTo;
-(double)bubbleFlowAnimateOutDuration;
-(double)bubbleFlowAnimateInDuration;
-(void)delayAppearingWithBubbleFlowUntil:(/*^block*/id)arg1 ;
-(id)presentationDelayHandler;
-(id)bubbleAnimatorForTransitionFromViewController:(id)arg1 ;
-(id)bubbleAnimatorForTransitionToViewController:(id)arg1 ;
-(GKBubbleFlowContainerView *)bubbleContainerView;
-(void)configureControlForBubble:(id)arg1 ;
-(double)bubbleFlowSubviewFadeOutDuration;
-(double)bubbleFlowSubviewFadeOutDelay;
-(double)bubbleFlowSubviewFadeInDuration;
-(double)bubbleFlowSubviewFadeInDelay;
-(id)viewsToAnimateInWhileAppearingWithBubbleFlow;
-(id)viewsToAnimateOutWhileDisappearingWithBubbleFlow;
-(char)updateBubbleTextImmediatelyForTransitionFromViewController:(id)arg1 ;
@end


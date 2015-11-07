/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <TSReading/TSDRep.h>
#import <iBooks/THWPressableRep.h>
#import <TSReading/TSDGestureTarget.h>
#import <iBooks/THAnimatableSource.h>
#import <iBooks/THWControlHosting.h>
#import <TSReading/TSDContainerRep.h>
#import <iBooks/THAnimationControllerObserver.h>
#import <iBooks/THWFreeTransformableRep.h>
#import <TSReading/TSDLayerProviderRep.h>
#import <iBooks/THWButtonControlDelegate.h>
#import <iBooks/THWExpandableRep.h>
#import <iBooks/THWAutoplayable.h>
#import <iBooks/THAVPlayerViewControllerDelegate.h>

@class CALayer, THAnimationController, THWAutoplayConfig, THWFreeTransformableRepGestureTargetHandler, THAVPlayerViewController, AVPlayerItem, NSArray, THWButtonControlRep, THWPressableRepGestureTargetHandler, UIView, THWMovieInfo, NSString;

@interface THWIOSMovieRep : TSDRep <THWPressableRep, TSDGestureTarget, THAnimatableSource, THWControlHosting, TSDContainerRep, THAnimationControllerObserver, THWFreeTransformableRep, TSDLayerProviderRep, THWButtonControlDelegate, THWExpandableRep, THWAutoplayable, THAVPlayerViewControllerDelegate> {

	char _handlingPress;
	char _animating;
	char _inFreeTransform;
	char _isInFullscreen;
	char _animatedFromFullscreen;
	char _moviePlayerControllerIsLoaded;
	THAnimationController* _animationController;
	THWFreeTransformableRepGestureTargetHandler* _freeTransformableHandler;
	THAVPlayerViewController* _moviePlayerViewController;
	AVPlayerItem* _playerItem;
	NSArray* _childReps;
	THWButtonControlRep* _buttonControlRep;
	THWPressableRepGestureTargetHandler* _pressableHandler;
	UIView* _reparentingView;

}

@property (nonatomic,readonly) THWMovieInfo * movieInfo; 
@property (nonatomic,retain) THAVPlayerViewController * moviePlayerViewController;                                  //@synthesize moviePlayerViewController=_moviePlayerViewController - In the implementation block
@property (nonatomic,readonly) char wantsFullscreenOnlyDisplay; 
@property (nonatomic,retain) NSArray * childReps;                                                                   //@synthesize childReps=_childReps - In the implementation block
@property (assign,nonatomic) THWButtonControlRep * buttonControlRep;                                                //@synthesize buttonControlRep=_buttonControlRep - In the implementation block
@property (nonatomic,retain) THWPressableRepGestureTargetHandler * pressableHandler;                                //@synthesize pressableHandler=_pressableHandler - In the implementation block
@property (assign,nonatomic) char animating;                                                                        //@synthesize animating=_animating - In the implementation block
@property (nonatomic,readonly) THWFreeTransformableRepGestureTargetHandler * freeTransformableHandler;              //@synthesize freeTransformableHandler=_freeTransformableHandler - In the implementation block
@property (assign,nonatomic) char inFreeTransform;                                                                  //@synthesize inFreeTransform=_inFreeTransform - In the implementation block
@property (assign,nonatomic) UIView * reparentingView;                                                              //@synthesize reparentingView=_reparentingView - In the implementation block
@property (assign,nonatomic) char isInFullscreen;                                                                   //@synthesize isInFullscreen=_isInFullscreen - In the implementation block
@property (assign,nonatomic) char animatedFromFullscreen;                                                           //@synthesize animatedFromFullscreen=_animatedFromFullscreen - In the implementation block
@property (assign,nonatomic) char moviePlayerControllerIsLoaded;                                                    //@synthesize moviePlayerControllerIsLoaded=_moviePlayerControllerIsLoaded - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                                             //@synthesize playerItem=_playerItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CALayer * pressableAnimationLayer; 
@property (nonatomic,readonly) CALayer * pressableAnimationShadowLayer; 
@property (nonatomic,readonly) char wantsPressAnimation; 
@property (nonatomic,readonly) char wantsPressAction; 
@property (assign,nonatomic) char handlingPress;                                                                    //@synthesize handlingPress=_handlingPress - In the implementation block
@property (nonatomic,readonly) int pressableAction; 
@property (nonatomic,readonly) char wantsRecoilAnimation; 
@property (nonatomic,readonly) NSObject*<TSDContainerInfo> containerInfo; 
@property (nonatomic,retain,readonly) THAnimationController * animationController;                                  //@synthesize animationController=_animationController - In the implementation block
@property (nonatomic,readonly) THWAutoplayConfig * autoplayConfig; 
@property (nonatomic,readonly) char autoplayAllowed; 
-(id)hostICC;
-(void)p_moviePlayerNowPlayingWillChange:(id)arg1 ;
-(THWButtonControlRep *)buttonControlRep;
-(THAVPlayerViewController *)moviePlayerViewController;
-(void)p_play;
-(void)p_stop;
-(void)p_teardownPlayerIsTransferringToExpanded:(char)arg1 ;
-(void)p_moviePlayerPlaybackDidFinish:(id)arg1 ;
-(void)p_vantageDidChange:(id)arg1 ;
-(void)setMoviePlayerControllerIsLoaded:(char)arg1 ;
-(void)setReparentingView:(UIView *)arg1 ;
-(void)p_stopAndInvalidate;
-(char)isInFullscreen;
-(char)moviePlayerControllerIsLoaded;
-(char)p_shouldShowPosterImage;
-(char)inFreeTransform;
-(THWPressableRepGestureTargetHandler *)pressableHandler;
-(THWAutoplayConfig *)autoplayConfig;
-(char)p_hasValidViewForFreeTransform;
-(THWFreeTransformableRepGestureTargetHandler *)freeTransformableHandler;
-(id)animationLayer;
-(void)setInFreeTransform:(char)arg1 ;
-(char)isFreeTransformInProgress;
-(UIView *)reparentingView;
-(void)p_setMoviePlayerBackgroundColor:(id)arg1 animated:(char)arg2 ;
-(void)setButtonControlRep:(THWButtonControlRep *)arg1 ;
-(char)wantsFullscreenOnlyDisplay;
-(char)isVisibleOnCanvas;
-(void)p_pause;
-(char)animatedFromFullscreen;
-(void)setAnimatedFromFullscreen:(char)arg1 ;
-(char)meetsStageDimensionRequirementForExpanded;
-(int)pressableAction;
-(char)shouldRecognizePressOnRep:(id)arg1 ;
-(CALayer *)pressableAnimationLayer;
-(CALayer *)pressableAnimationShadowLayer;
-(char)wantsPressAnimation;
-(char)wantsPressAction;
-(char)handlingPress;
-(void)setHandlingPress:(char)arg1 ;
-(char)shouldAnimateTargetLayer:(id)arg1 ;
-(char)shouldFadeOutAnimationLayer:(id)arg1 ;
-(id)shadowAnimationLayer;
-(CGAffineTransform)freeTransform;
-(char)enforceAnimationLayer;
-(void)control:(id)arg1 repWasAdded:(id)arg2 ;
-(void)control:(id)arg1 repWillBeRemoved:(id)arg2 ;
-(void)animationControllerWillPresent:(id)arg1 ;
-(void)animationControllerDidPresent:(id)arg1 ;
-(void)freeTransformWillBegin;
-(void)freeTransformDidEnd;
-(id)transformLayer;
-(char)freeTransformUseTracedShadowPath;
-(CGRect)rectForCompletion;
-(void)freeTransformWillMoveTargetLayer:(id)arg1 ;
-(char)freeTransformShouldMoveAboveStatusBar;
-(char)freeTransformInteractionEnabledOverride;
-(void)freeTransformDidEndPassedThreshold:(char)arg1 ;
-(void)buttonControlWasPressed:(id)arg1 ;
-(id)buttonControl:(id)arg1 imageForState:(int)arg2 highlighted:(char)arg3 ;
-(void)buttonControl:(id)arg1 didUpdateLayer:(id)arg2 ;
-(id)expandedContentDrawableToPresent;
-(void)expandableWillPresentExpanded;
-(void)expandableExpandedPresentationDidEnd;
-(char)shouldFadeInTargetLayer:(id)arg1 ;
-(id)targetLayer;
-(CGRect)ftcTargetFrame;
-(void)reparentTargetLayerIfBackedByView:(id)arg1 ;
-(void)autoplayStart;
-(void)autoplayStop;
-(void)autoplayPause;
-(char)autoplayAllowed;
-(char)doneButtonTappedForAVPlayerVC:(id)arg1 sender:(id)arg2 ;
-(void)fullScreenButtonTappedForAVPlayerVC:(id)arg1 sender:(id)arg2 ;
-(char)videoTappedForAVPlayerVC:(id)arg1 gesture:(id)arg2 ;
-(void)mediaSelectionTappedForAVPlayerVC:(id)arg1 sender:(id)arg2 ;
-(void)setMoviePlayerViewController:(THAVPlayerViewController *)arg1 ;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withOpacity:(char)arg2 forAlphaOnly:(char)arg3 drawChildren:(char)arg4 ;
-(char)expandedPanelStartsVisible;
-(char)widgetInteractionAllowAutoplayForReflowableMT;
-(char)widgetInteractionAllowOnPageForReflowableMT;
-(void)setPressableHandler:(THWPressableRepGestureTargetHandler *)arg1 ;
-(void)setIsInFullscreen:(char)arg1 ;
-(void)setChildReps:(NSArray *)arg1 ;
-(NSArray *)childReps;
-(char)canSelectChildRep:(id)arg1 ;
-(void)selectChildRep:(id)arg1 ;
-(id)childRepsForHitTesting;
-(char)containerManagesChildView;
-(void)addChildViewsToArray:(id)arg1 ;
-(void)willAddChildView:(id)arg1 toView:(id)arg2 ;
-(void)willRemoveChildView:(id)arg1 ;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(id)hitRep:(CGPoint)arg1 withGesture:(id)arg2 passingTest:(/*^block*/id)arg3 ;
-(char)wantsToHandleTapsWhenLocked;
-(char)canHandleGesture:(id)arg1 ;
-(char)handleGesture:(id)arg1 ;
-(void)willBeginHandlingGesture:(id)arg1 ;
-(char)directlyManagesLayerContent;
-(char)layerUpdatesPaused;
-(void)updateLayerGeometryFromLayout:(id)arg1 ;
-(void)didUpdateLayer:(id)arg1 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)updateChildrenFromLayout;
-(char)shouldShowMediaReplaceUI;
-(id)movieLayout;
-(AVPlayerItem *)playerItem;
-(void)play;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(char)isPlaying;
-(void)dealloc;
-(THAnimationController *)animationController;
-(void)stop;
-(char)isExpanded;
-(void)setAnimating:(char)arg1 ;
-(char)animating;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)shadowPath;
-(void)willBeRemoved;
-(void)pause;
-(NSObject*<TSDContainerInfo>)containerInfo;
-(THWMovieInfo *)movieInfo;
@end


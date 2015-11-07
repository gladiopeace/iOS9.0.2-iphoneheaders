/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBIconAnimatorDelegate;
@class NSMutableArray, SBFolderControllerAnimationContext, NSString, SBIconAnimationSettings, SBFolderController, UIView;

@interface SBIconAnimator : NSObject {

	float _fraction;
	char _startAnimationAfterRotationEnds;
	char _windowIsRotating;
	char _cleanedUp;
	NSMutableArray* _pendedAnimationContexts;
	SBFolderControllerAnimationContext* _animationContext;
	NSString* _instanceIdentifier;
	char _invalidated;
	char _animatesInnerFolderViews;
	id<SBIconAnimatorDelegate> _delegate;
	SBIconAnimationSettings* _settings;
	SBFolderController* _folderController;

}

@property (assign,nonatomic) id<SBIconAnimatorDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBIconAnimationSettings * settings;                                          //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) char invalidated;                                                            //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic) char animatesInnerFolderViews;                                               //@synthesize animatesInnerFolderViews=_animatesInnerFolderViews - In the implementation block
@property (nonatomic,retain,readonly) SBFolderController * folderController;                              //@synthesize folderController=_folderController - In the implementation block
@property (nonatomic,retain,readonly) SBFolderControllerAnimationContext * animationContext;              //@synthesize animationContext=_animationContext - In the implementation block
@property (nonatomic,retain,readonly) UIView * referenceView; 
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)initWithFolderController:(id)arg1 ;
-(SBFolderController *)folderController;
-(void)_setAnimationFraction:(float)arg1 ;
-(unsigned)_numberOfSignificantAnimations;
-(void)_animateToFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(id)centralAnimationFactory;
-(void)setFraction:(float)arg1 ;
-(void)animateToFraction:(float)arg1 afterDelay:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_windowFinishedRotating;
-(void)_allowRotationOnMainWindowIfNecessary:(char)arg1 ;
-(void)_invalidateCompletions;
-(void)_animateToFractionFromContext:(id)arg1 ;
-(char)animatesInnerFolderViews;
-(void)_animateToFractionFromPendingContexts;
-(char)_isDelayedForRotation;
-(id)_centralAnimationFactory;
-(void)setAnimatesInnerFolderViews:(char)arg1 ;
-(void)prepare;
-(void)setDelegate:(id<SBIconAnimatorDelegate>)arg1 ;
-(void)dealloc;
-(id<SBIconAnimatorDelegate>)delegate;
-(SBIconAnimationSettings *)settings;
-(void)setSettings:(SBIconAnimationSettings *)arg1 ;
-(void)cleanup;
-(UIView *)referenceView;
-(SBFolderControllerAnimationContext *)animationContext;
-(char)invalidated;
-(void)setInvalidated:(char)arg1 ;
@end


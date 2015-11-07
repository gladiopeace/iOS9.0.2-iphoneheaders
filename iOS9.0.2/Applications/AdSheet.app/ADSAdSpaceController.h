/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <AdSheet/ADSCreativeContainerViewDelegate.h>

@protocol ADSActionViewControllerInterface;
@class ADSSession, ADSAdSpace, NSString, ADSAdImpressionController, NSURL, ADSCreativeController, UIViewController, NSTimer;

@interface ADSAdSpaceController : NSObject <ADSCreativeContainerViewDelegate> {

	ADSSession* _session;
	ADSAdSpace* _adSpace;
	char _actionInProgress;
	char _isOpen;
	char _holdingAssertion;
	char _hasSentWillLoad;
	char _devBackoffScheduled;
	NSString* _section;
	ADSAdImpressionController* _adImpressionController;
	NSString* _controllerIdentifier;
	int _adType;
	NSURL* _serverURL;
	ADSCreativeController* _currentCreativeController;
	UIViewController*<ADSActionViewControllerInterface> _currentActionViewController;
	long _adRequestToken;
	NSTimer* _processVisibilityTimer;
	ADSAdImpressionController* _loadingAdImpressionController;
	NSTimer* _loadActionViewControllerTimer;
	/*^block*/id _beginActionCompletionHandler;
	double _actionViewControllerRequestTime;
	double _actionViewControllerAppearanceTime;
	double _createdAt;

}

@property (assign,nonatomic) ADSSession * session; 
@property (assign,nonatomic,__weak) ADSAdSpace * adSpace; 
@property (nonatomic,retain) ADSAdImpressionController * adImpressionController;                                           //@synthesize adImpressionController=_adImpressionController - In the implementation block
@property (nonatomic,readonly) NSString * controllerIdentifier;                                                            //@synthesize controllerIdentifier=_controllerIdentifier - In the implementation block
@property (assign,nonatomic) int adType;                                                                                   //@synthesize adType=_adType - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                                                                              //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,copy) NSString * section;                                                                             //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) ADSCreativeController * currentCreativeController;                                            //@synthesize currentCreativeController=_currentCreativeController - In the implementation block
@property (nonatomic,retain) UIViewController*<ADSActionViewControllerInterface> currentActionViewController;              //@synthesize currentActionViewController=_currentActionViewController - In the implementation block
@property (assign,nonatomic) double actionViewControllerRequestTime;                                                       //@synthesize actionViewControllerRequestTime=_actionViewControllerRequestTime - In the implementation block
@property (assign,nonatomic) char actionInProgress;                                                                        //@synthesize actionInProgress=_actionInProgress - In the implementation block
@property (nonatomic,readonly) char hasAd; 
@property (assign,nonatomic) long adRequestToken;                                                                          //@synthesize adRequestToken=_adRequestToken - In the implementation block
@property (nonatomic,readonly) char isOpen;                                                                                //@synthesize isOpen=_isOpen - In the implementation block
@property (nonatomic,retain) NSTimer * processVisibilityTimer;                                                             //@synthesize processVisibilityTimer=_processVisibilityTimer - In the implementation block
@property (nonatomic,retain) ADSAdImpressionController * loadingAdImpressionController;                                    //@synthesize loadingAdImpressionController=_loadingAdImpressionController - In the implementation block
@property (assign,nonatomic) char holdingAssertion;                                                                        //@synthesize holdingAssertion=_holdingAssertion - In the implementation block
@property (assign,nonatomic) double actionViewControllerAppearanceTime;                                                    //@synthesize actionViewControllerAppearanceTime=_actionViewControllerAppearanceTime - In the implementation block
@property (assign,nonatomic) char hasSentWillLoad;                                                                         //@synthesize hasSentWillLoad=_hasSentWillLoad - In the implementation block
@property (assign,nonatomic) char devBackoffScheduled;                                                                     //@synthesize devBackoffScheduled=_devBackoffScheduled - In the implementation block
@property (assign,nonatomic) double createdAt;                                                                             //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,retain) NSTimer * loadActionViewControllerTimer;                                                      //@synthesize loadActionViewControllerTimer=_loadActionViewControllerTimer - In the implementation block
@property (nonatomic,copy) id beginActionCompletionHandler;                                                                //@synthesize beginActionCompletionHandler=_beginActionCompletionHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProcessVisibilityTimer:(NSTimer *)arg1 ;
-(void)setLoadActionViewControllerTimer:(NSTimer *)arg1 ;
-(void)_requestAd;
-(char)hasSentWillLoad;
-(ADSAdImpressionController *)adImpressionController;
-(void)_handleAdLoad;
-(void)processAdSpaceVisibility:(int)arg1 ;
-(void)_cancelCurrentAdRequest;
-(ADSAdImpressionController *)loadingAdImpressionController;
-(UIViewController*<ADSActionViewControllerInterface>)currentActionViewController;
-(void)setCurrentActionViewController:(UIViewController*<ADSActionViewControllerInterface>)arg1 ;
-(id)beginActionCompletionHandler;
-(void)setBeginActionCompletionHandler:(id)arg1 ;
-(ADSCreativeController *)currentCreativeController;
-(void)_resetAdRequest;
-(void)clientApplicationDidEnterBackground;
-(id)_sanitizeRequestFailure:(id)arg1 ;
-(void)_handleAdError:(id)arg1 forAdData:(id)arg2 ;
-(void)setHasSentWillLoad:(char)arg1 ;
-(void)setLoadingAdImpressionController:(ADSAdImpressionController *)arg1 ;
-(void)setAdImpressionController:(ADSAdImpressionController *)arg1 ;
-(void)setCurrentCreativeController:(ADSCreativeController *)arg1 ;
-(long)adRequestToken;
-(void)setAdRequestToken:(long)arg1 ;
-(char)devBackoffScheduled;
-(void)loadAdData:(id)arg1 error:(id)arg2 ;
-(void)setDevBackoffScheduled:(char)arg1 ;
-(void)_unloadCurrentAd;
-(void)_scheduledProcessAdSpaceVisibility:(id)arg1 ;
-(char)actionInProgress;
-(double)_cyclingInterval;
-(void)requestForActionViewControllerTimedOut;
-(void)beginActionViewControllerPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setActionViewControllerAppearanceTime:(double)arg1 ;
-(void)creativeContainerViewLayoutDidBecomeInvalid:(id)arg1 ;
-(id)initForAdSpace:(id)arg1 session:(id)arg2 ;
-(void)_test_clearCurrentAd;
-(void)willLoadAd;
-(char)hasAd;
-(void)interstitialRemovedFromSuperview;
-(void)interstitialCreativeWasDismissed;
-(void)playbackFinishedForContentHash:(id)arg1 ;
-(void)playbackFailedForURL:(id)arg1 ;
-(void)preRollDidStart;
-(void)preRollDidStop;
-(void)userDidSkipPreRoll;
-(void)determineActionForTapAtLocation:(CGPoint)arg1 inFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)beginActionFromFrame:(CGRect)arg1 tapLocation:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)refuseAction;
-(void)presentPortraitOnlyModalViewControllerAnimated:(char)arg1 ;
-(void)dismissPortraitOnlyModalViewControllerAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)actionCompletedWithSystemEvent:(int)arg1 ;
-(void)storyboardFinishedFirstLoad;
-(void)storyboardRequestsOpenURL:(id)arg1 ;
-(void)setAdType:(int)arg1 ;
-(double)actionViewControllerRequestTime;
-(void)setActionViewControllerRequestTime:(double)arg1 ;
-(NSTimer *)processVisibilityTimer;
-(char)holdingAssertion;
-(void)setHoldingAssertion:(char)arg1 ;
-(double)actionViewControllerAppearanceTime;
-(NSTimer *)loadActionViewControllerTimer;
-(ADSSession *)session;
-(void)dealloc;
-(NSString *)description;
-(NSString *)section;
-(void)close;
-(void)cancelAction;
-(void)setSection:(NSString *)arg1 ;
-(ADSAdSpace *)adSpace;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)playbackStartedForImpressionSource:(int)arg1 ;
-(void)playbackPaused;
-(void)playbackResumed;
-(int)adType;
-(void)setAdSpace:(ADSAdSpace *)arg1 ;
-(void)setActionInProgress:(char)arg1 ;
-(void)actionViewControllerReadyForPresentation;
-(void)setSession:(ADSSession *)arg1 ;
-(void)setCreatedAt:(double)arg1 ;
-(NSString *)controllerIdentifier;
-(char)isOpen;
-(void)clientApplicationWillEnterForeground;
-(double)createdAt;
-(NSURL *)serverURL;
@end


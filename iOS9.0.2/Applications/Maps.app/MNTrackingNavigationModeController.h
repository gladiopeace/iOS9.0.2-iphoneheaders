/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNNavigationModeController.h>
#import <Maps/SteppingSignsCarouselDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class MNLocation, SteppingSignsCarousel, MNRoute, NSArray, MNGuidanceSignView, NSString, MNPedestrianTagView, TopBarTitleView, UIView;

@interface MNTrackingNavigationModeController : MNNavigationModeController <SteppingSignsCarouselDelegate, MKMapViewDelegate> {

	MNLocation* _matchedLocation;
	SteppingSignsCarousel* _signsCarousel;
	MNRoute* _route;
	NSArray* _steps;
	char _isNavigatorOnRoute;
	char _haveArrived;
	SCD_Struct_MN56* _stepInfos;
	NSArray* _signs;
	unsigned _stepIndex;
	unsigned _guidanceStepIndex;
	int _guidanceMode;
	unsigned _stepIndexAfterPreRouteStep;
	unsigned _preRouteSignIndex;
	MNGuidanceSignView* _preRouteSign;
	NSString* _proceedToRouteDisplayString;
	unsigned _maneuverStepIndex;
	double _distanceUntilManeuver;
	unsigned _signIndexWithModifiedDistance;
	char _isStepTrackingEnabled;
	char _isManualStepTrackingEnabled;
	int _desiredViewStyle;
	int _nextDesiredViewStyle;
	double _startTimeNextDesiredCameraViewStyle;
	double _lastCameraViewStyleChangeTime;
	char _appearing;
	double _cameraZoomScale;
	double _userZoom;
	char _is3D;
	char _enteredOverview;
	UIEdgeInsets _minimumEdgeInsets;
	MNPedestrianTagView* _sideTagView;
	char _isCarouselReadyForDisplay;
	char _hasCarouselAnimatedIn;
	char _sizeClassIsChanging;
	char _isAnimatingStatusBar;
	char _disableMasking;
	float _stagedHeightForTagAnimation;
	TopBarTitleView* _topBarTitleView;
	UIView* _compactLine;

}

@property (nonatomic,retain) SteppingSignsCarousel * signsCarousel;               //@synthesize signsCarousel=_signsCarousel - In the implementation block
@property (nonatomic,retain) NSString * proceedToRouteDisplayString;              //@synthesize proceedToRouteDisplayString=_proceedToRouteDisplayString - In the implementation block
@property (assign,nonatomic) char isAnimatingStatusBar;                           //@synthesize isAnimatingStatusBar=_isAnimatingStatusBar - In the implementation block
@property (assign,nonatomic) float stagedHeightForTagAnimation;                   //@synthesize stagedHeightForTagAnimation=_stagedHeightForTagAnimation - In the implementation block
@property (nonatomic,retain) TopBarTitleView * topBarTitleView;                   //@synthesize topBarTitleView=_topBarTitleView - In the implementation block
@property (nonatomic,retain) UIView * compactLine;                                //@synthesize compactLine=_compactLine - In the implementation block
@property (assign,nonatomic) char disableMasking;                                 //@synthesize disableMasking=_disableMasking - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)navigationSession:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di20*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned)arg11 isSynthetic:(char)arg12 ;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned)arg2 distanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4 ;
-(void)navigationSession:(id)arg1 updateETA:(id)arg2 ;
-(void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 eta:(id)arg4 closestStepIndex:(unsigned)arg5 ;
-(void)navigationSession:(id)arg1 failedWithErrorCode:(int)arg2 ;
-(void)navigationSessionHasArrived:(id)arg1 ;
-(void)_didChangeCurrentLocale;
-(void)_threeDButtonTapped:(id)arg1 ;
-(UIEdgeInsets)_minimumEdgeInsets;
-(void)prepareToRunNavigationAnimated:(char)arg1 startCamera:(char)arg2 ;
-(void)setETA:(id)arg1 ;
-(void)_prepareViewForLockScreen:(id)arg1 ;
-(void)_startNavigationCameraMotionAnimated:(char)arg1 ;
-(void)willRotateWithDuration:(double)arg1 ;
-(void)willAnimateRotationWithDuration:(double)arg1 ;
-(void)modeWillAppear:(char)arg1 ;
-(void)modeDidAppear:(char)arg1 ;
-(void)resignCurrentModeAnimated:(char)arg1 toMode:(id)arg2 ;
-(void)animateBarsToCurrentStateWithAnimation:(id)arg1 ;
-(void)_audioNotificationForNewTransportType:(int)arg1 navigationSession:(id)arg2 ;
-(id)initWithNavigationSession:(id)arg1 dismissHandler:(/*^block*/id)arg2 ;
-(char)shouldSlideTopBar;
-(void)navigationOverviewBarOverviewTapped:(id)arg1 ;
-(void)_refreshCameraPosition;
-(id)_controlBarItems;
-(void)_updateWithMatchedLocation:(id)arg1 ;
-(void)layoutForUnobscuredBoundsChange;
-(char)_is3D;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(char)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resetNavigationMode;
-(void)_setRoute:(id)arg1 ;
-(void)willChangeToLightLevel:(int)arg1 animation:(id)arg2 ;
-(void)_stopNavigationCameraMotion;
-(void)_didSetNavigationBarsHidden:(char)arg1 ;
-(void)_updateControlBarItemsAnimated:(char)arg1 ;
-(void)setTopBarTitleView:(TopBarTitleView *)arg1 ;
-(TopBarTitleView *)topBarTitleView;
-(void)_removeTopBarLayerMask;
-(id)layerMaskAnimationWithFrom:(float)arg1 to:(float)arg2 ;
-(SCD_Struct_Mo14)_maps_sizeClassPair;
-(void)_updatePreRouteStepTracking;
-(void)setStagedHeightForTagAnimation:(float)arg1 ;
-(unsigned)_stepIndexForSignIndex:(unsigned)arg1 ;
-(void)_forceStepTrackingToCurrentStepAnimated:(char)arg1 resetGuidanceStep:(char)arg2 ;
-(void)_hideTagView;
-(void)_updateStepTrackingWithNavigatorStep;
-(unsigned)_signIndexForStepIndex:(unsigned)arg1 ;
-(char)_isCameraControllerActive;
-(unsigned)_arrowIndexForGuidanceStep;
-(void)_setupTagViewForAnimation;
-(SteppingSignsCarousel *)signsCarousel;
-(void)_updateDistanceForNavigatorStep;
-(void)_setGuidanceStepIndex:(unsigned)arg1 ;
-(void)_addTopBarLayerMask;
-(void)signsCarousel:(id)arg1 didChangeFrame:(CGRect)arg2 ;
-(void)_updateTagViewFrame:(CGRect)arg1 ;
-(void)_updateSignsCarouselFrame;
-(unsigned)_nextStepIndexWithSign:(unsigned)arg1 ;
-(void)signsCarousel:(id)arg1 didChangeSelectedSignIndexWithCause:(int)arg2 ;
-(char)isAnimatingStatusBar;
-(void)setDisableMasking:(char)arg1 ;
-(void)signsCarousel:(id)arg1 didUpdateSignWidthWithNewFrame:(CGRect)arg2 ;
-(void)setIsAnimatingStatusBar:(char)arg1 ;
-(NSString *)proceedToRouteDisplayString;
-(void)signsCarousel:(id)arg1 didScroll:(int)arg2 withNewFrame:(CGRect)arg3 ;
-(void)_setupWithRoute:(id)arg1 ;
-(void)_updateTagWithRemainingTime:(double)arg1 andDistance:(double)arg2 ;
-(void)_showTagView;
-(void)_moveMapRegionToCurrentStepAnimated:(char)arg1 ;
-(float)_signWidthForSizeClassPair:(SCD_Struct_Mo14)arg1 ;
-(void)_setMinimumEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_setStepIndex:(unsigned)arg1 animated:(char)arg2 scrollsSignCarousel:(char)arg3 ;
-(void)_moveCameraToCurrentStepAnimated:(char)arg1 ;
-(void)_hideSignsCarouselAnimated:(char)arg1 ;
-(void)setSignsCarousel:(SteppingSignsCarousel *)arg1 ;
-(void)_restoreStepDistanceForModifiedSign;
-(void)_refreshCameraForMatchedLocation;
-(void)_updateTagViewHiddenStatus:(char)arg1 ;
-(void)setProceedToRouteDisplayString:(NSString *)arg1 ;
-(void)_setupPreRouteGuidanceAtStepIndex:(unsigned)arg1 redisplayCarousel:(char)arg2 ;
-(void)_updateSignsForSizeClass:(SCD_Struct_Mo14)arg1 ;
-(CGRect)_signsCarouselFrame;
-(void)_cleanupRouteSigns;
-(void)_updateCameraViewStyle;
-(void)setCompactLine:(UIView *)arg1 ;
-(char)_canHideTopBarShadow;
-(char)_doesStepIndexHaveSign:(unsigned)arg1 ;
-(void)_slideSignCarouselOnScreenFromRight;
-(void)_updateSignViewsForNewStepAnimated:(char)arg1 scrollSignCarousel:(char)arg2 ;
-(void)_updateCameraFocus;
-(UIView *)compactLine;
-(char)disableMasking;
-(float)stagedHeightForTagAnimation;
-(void)_layoutSignsOrderingNeedsUpdate:(char)arg1 ;
-(void)mapView:(id)arg1 didBecomePitched:(char)arg2 ;
-(void)dealloc;
-(void)didRotate;
@end


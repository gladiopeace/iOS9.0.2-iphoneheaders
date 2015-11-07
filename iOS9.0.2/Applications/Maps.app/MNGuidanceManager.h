/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MNGuidanceManagerDelegate;
#import <Maps/Maps-Structs.h>
@class MNRoute, GEOComposedWaypoint, NSString, NSData, GEOComposedRouteStep;

@interface MNGuidanceManager : NSObject {

	MNRoute* _route;
	int _guidanceState;
	unsigned _currentStepIndex;
	double _distanceWhenFirstAnnouncementAllowed;
	double _distanceWhenInitialAnnounced;
	double _distanceWhenPrepareAnnounced;
	double _distanceWhenExecuteAnnounced;
	double _baselineSpeed;
	double _baselineDistance;
	double _minExecutionDistance;
	double _lastUpdateTime;
	double _timeLastAnnouncementStarted;
	double _timeLastAnnouncementEnded;
	double _contentOfInitPrepAnnouncement;
	double _contentOfExecutionAnnouncement;
	double _estimateOfTimeToSpeakExecutionAnnouncement;
	char _currentDirectionsContinueStraight;
	char _shouldAnnounceContinueStraight;
	char _shouldSkipInitialAnnounce;
	char _shouldSkipPrepareAnnounce;
	char _shouldSkipExecuteAnnounce;
	char _didAnnounceProceedToRoute;
	char _didAnnounceManeuverContinue;
	char _didAnnounceManeuverInitial;
	char _didAnnounceManeuverPreparation;
	char _didAnnounceManeuverExecution;
	char _didAnnounceSecondaryManeuver;
	char _didShowPrimarySign;
	char _didShowSecondarySign;
	id<MNGuidanceManagerDelegate> _delegate;
	GEOComposedWaypoint* _destination;
	unsigned _pointIndexForCurrentRoadInfo;
	NSString* _currentRoadName;
	long long _currentShieldType;
	NSString* _currentShieldText;
	SCD_Struct_MN26 _currentInstructionOptions;

}

@property (assign,nonatomic,__weak) id<MNGuidanceManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSData * remainingRouteZilchData; 
@property (nonatomic,readonly) int guidanceState;                                        //@synthesize guidanceState=_guidanceState - In the implementation block
@property (nonatomic,readonly) char proceedingToRoute; 
@property (nonatomic,readonly) GEOComposedRouteStep * maneuverStep; 
@property (nonatomic,readonly) unsigned maneuverStepIndex; 
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) MNRoute * route;                                          //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) NSString * currentRoadName;                                 //@synthesize currentRoadName=_currentRoadName - In the implementation block
@property (nonatomic,retain) NSString * currentShieldText;                               //@synthesize currentShieldText=_currentShieldText - In the implementation block
@property (assign,nonatomic) SCD_Struct_MN26 currentInstructionOptions;                  //@synthesize currentInstructionOptions=_currentInstructionOptions - In the implementation block
-(char)_updateGuidanceStateWithLocation:(id)arg1 withMatch:(id)arg2 withNavigatorState:(int)arg3 stepChanged:(char*)arg4 ;
-(char)_hasCurrentRoadNameChangedForLocation:(id)arg1 ;
-(int)guidanceState;
-(double)_distanceForSign;
-(void)_clearCurrentRoadName;
-(unsigned)_maneuverStepIndex;
-(double)_estimateTimeToSpeakExecutionAnnouncement;
-(id)_getClosestStepWithNameForProceedToRoute:(SCD_Struct_RA7)arg1 routeMatch:(id)arg2 ;
-(id)_nameInfoForContinueSign;
-(void)_resetStepState;
-(void)_notifyAnnounceManeuverForStep:(id)arg1 withDistance:(double)arg2 withCombinedGuidance:(int)arg3 playShortPrompt:(char)arg4 isRepeat:(char)arg5 stage:(unsigned)arg6 ;
-(char)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2 ;
-(void)updateGuidanceForProceedToRouteAtLocation:(SCD_Struct_RA7)arg1 routeMatch:(id)arg2 remainingTime:(double)arg3 distanceUntilDestination:(double)arg4 ;
-(SCD_Struct_RA7)maneuverStepCoordinate;
-(char)_updateConsiderSubstepAnnouncement:(id)arg1 location:(id)arg2 ;
-(unsigned)maneuverStepIndex;
-(char)repeatLastGuidanceAnnouncement:(id)arg1 ;
-(id)initWithRoute:(id)arg1 destination:(id)arg2 proceedToRoute:(char)arg3 allowMidRouteStart:(char)arg4 ;
-(NSData *)remainingRouteZilchData;
-(void)_notifyDisplayManeuverForStep:(id)arg1 withDistance:(double)arg2 allowCombinedGuidance:(char)arg3 ;
-(id)_updateValidateRouteMatchForLocation:(id)arg1 ;
-(char)_hasSubsteps;
-(double)_adjustedVehicleSpeed:(id)arg1 ;
-(char)_setInstructionContentForStep:(id)arg1 withSecondary:(id)arg2 optionsToSet:(SCD_Struct_MN26*)arg3 basedOnPortion:(double)arg4 ;
-(void)_notifyDisplayManeuverForSecondaryStep:(id)arg1 ;
-(void)updateGuidanceAfterReroute;
-(void)_notifyAnnounceProceedToRoute:(id)arg1 withClosestStep:(id)arg2 withNamedStep:(id)arg3 andSecondaryStep:(id)arg4 isRepeat:(char)arg5 ;
-(void)_callUpdatePointOfInterestForLocation:(id)arg1 navigatorState:(int)arg2 ;
-(double)_timeUntilNextAnnouncement:(id)arg1 location:(id)arg2 upcomingStage:(out unsigned*)arg3 ;
-(char)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2 ;
-(void)setCurrentShieldText:(NSString *)arg1 ;
-(double)_getPortionForStep:(id)arg1 withSecondary:(id)arg2 basedOnOptions:(SCD_Struct_MN26*)arg3 ;
-(void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2 ;
-(id)_combinedGuidanceForStep:(id)arg1 withType:(int)arg2 ;
-(unsigned)_currentAnnouncementStage;
-(id)_getStepAtIndex:(unsigned)arg1 ;
-(char)_startingWrongWayForLocation:(id)arg1 navigatorState:(int)arg2 routeMatch:(id)arg3 ;
-(char)_announcementInProgress;
-(char)_updateConsiderInitialAnnouncement:(id)arg1 passedManeuverStart:(char)arg2 ;
-(SCD_Struct_MN26)currentInstructionOptions;
-(double)_timeSinceLastAnnouncement;
-(double)_calculateExecutionDistance:(id)arg1 withLogging:(char)arg2 ;
-(NSString *)currentShieldText;
-(double)_speedFactor:(id)arg1 ;
-(id)_nameInfoForCurrentRoad;
-(void)_updatePrepareForNextStep;
-(id)_getStepAtIndex:(unsigned)arg1 clampIndexToRange:(char)arg2 ;
-(char)proceedingToRoute;
-(void)setCurrentInstructionOptions:(SCD_Struct_MN26)arg1 ;
-(void)_notifyAnnounceContinueAsRepeat:(char)arg1 ;
-(char)_updateCheckIfNextStep:(id)arg1 navigatorState:(int)arg2 routeMatch:(id)arg3 ;
-(double)_durationOfLastAnnouncement;
-(char)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2 ;
-(void)setDelegate:(id<MNGuidanceManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNGuidanceManagerDelegate>)delegate;
-(MNRoute *)route;
-(int)transportType;
-(GEOComposedRouteStep *)maneuverStep;
-(NSString *)currentRoadName;
-(void)setCurrentRoadName:(NSString *)arg1 ;
@end


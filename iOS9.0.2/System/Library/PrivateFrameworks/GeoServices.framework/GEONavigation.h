/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEORoutePreloadSession;
@class NSPointerArray, GEONavigationDetails, GEONavigationGuidanceState, GEOLocation, NSDate, NSXPCConnection, NSTimer, NSData, GEOComposedRoute, NSString, GEORouteMatch;

@interface GEONavigation : NSObject {

	NSPointerArray* _observers;
	GEONavigationDetails* _details;
	id<GEORoutePreloadSession> _preloadSession;
	GEONavigationGuidanceState* _guidanceState;
	GEOLocation* _previousLocation;
	NSDate* _arrivalDate;
	NSXPCConnection* _navdConnection;
	NSXPCConnection* _nanomapscdConnection;
	int _navigationStartedToken;
	char _hasNavigationStartedToken;
	char _hasStartedGuidance;
	NSTimer* _etaUpdateTimer;
	NSDate* _displayETA;
	char _shouldSendRouteWithStatus;
	NSData* _lastSentRouteContext;

}

@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (nonatomic,readonly) char hasStartedGuidance;                             //@synthesize hasStartedGuidance=_hasStartedGuidance - In the implementation block
@property (nonatomic,readonly) NSString * destinationName; 
@property (nonatomic,readonly) GEOLocation * location; 
@property (nonatomic,readonly) GEORouteMatch * routeMatch; 
@property (nonatomic,readonly) double distanceToManeuverStart; 
@property (nonatomic,readonly) double distanceToManeuverEnd; 
@property (nonatomic,readonly) double distanceToRoute; 
@property (nonatomic,readonly) double distanceRemainingOnRoute; 
@property (nonatomic,readonly) double remainingTime; 
@property (assign,nonatomic) int displayStep; 
@property (nonatomic,readonly) char isNavigating; 
@property (nonatomic,readonly) char locationUnreliable; 
@property (assign,nonatomic) int navigationTransportType; 
@property (assign,nonatomic) int navigationState; 
@property (assign,nonatomic) char guidancePromptsEnabled; 
@property (assign,nonatomic) int guidanceLevel; 
@property (nonatomic,readonly) int guidanceLevelIgnoringTimeCriterion; 
@property (nonatomic,readonly) NSDate * arrivalDate;                                //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (assign,nonatomic) unsigned announcementStage; 
@property (nonatomic,readonly) unsigned nextAnnouncementStage; 
@property (nonatomic,readonly) double timeUntilNextAnnouncement; 
@property (nonatomic,readonly) char shouldSuppressCellularDataAlerts; 
+(id)sharedInstance;
+(double)displayRemainingTimeForRemainingTime:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)stop;
-(void)removeObserver:(id)arg1 ;
-(GEOLocation *)location;
-(void)updateLocation:(id)arg1 routeMatch:(id)arg2 etaRoute:(id)arg3 locationUnreliable:(char)arg4 ;
-(double)distanceRemainingOnRoute;
-(void)selectRoute:(id)arg1 currentLocation:(id)arg2 ;
-(char)hasStartedGuidance;
-(void)startWithDestinationName:(id)arg1 ;
-(double)distanceToManeuverStart;
-(NSDate *)arrivalDate;
-(unsigned)nextAnnouncementStage;
-(void)stopTracking;
-(void)_updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3 ;
-(void)setNavigationState:(int)arg1 ;
-(char)canRunNavigationForRoute:(id)arg1 withCurrentLocation:(id)arg2 ;
-(GEOComposedRoute *)route;
-(int)guidanceLevelIgnoringTimeCriterion;
-(NSString *)destinationName;
-(id)preloadSessionForRoute:(id)arg1 loggingEnabled:(char)arg2 minimalDebugging:(char)arg3 fullDebugging:(char)arg4 delegate:(id)arg5 traits:(id)arg6 withBatteryHandler:(/*^block*/id)arg7 ;
-(void)setNavigationTransportType:(int)arg1 ;
-(void)_updateNavigationRouteStatus;
-(int)guidanceLevel;
-(void)_closeNavdConnection;
-(void)stopTurnByTurnNavigation;
-(unsigned)announcementStage;
-(void)startTurnByTurnNavigationForTransportType:(int)arg1 state:(int)arg2 ;
-(void)_updatePreloaderWithGuidanceLevel:(int)arg1 ;
-(int)displayStep;
-(double)remainingTime;
-(double)distanceToManeuverEnd;
-(char)shouldSuppressCellularDataAlerts;
-(void)startTrackingFromLocation:(id)arg1 ;
-(void)_createNanomapscdConnection;
-(void)_createNavdConnection;
-(void)_invalidateNavigationSessionWithRouteContext:(id)arg1 ;
-(void)_updateNavigationGuidanceStateCellularDataAlertsAttribute:(char)arg1 ;
-(void)_clearETATimer;
-(void)setNextAnnouncementStage:(unsigned)arg1 andTime:(double)arg2 ;
-(void)updatedETA:(id)arg1 ;
-(void)setGuidanceLevel:(int)arg1 ;
-(char)canNavigateWithTransportType:(int)arg1 ;
-(void)_updateETA;
-(void)recalculatedToRoute:(id)arg1 location:(id)arg2 routeMatch:(id)arg3 ;
-(char)_canRunNavigationBasedOnDistanceForRoute:(id)arg1 withCurrentLocation:(id)arg2 ;
-(void)_closeNanomapscdConnection;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)updateRouteGuidanceLevelForLocation:(id)arg1 shouldFilterLocationUpdatesOnDistance:(char)arg2 ;
-(int)navigationState;
-(void)setAnnouncementStage:(unsigned)arg1 ;
-(int)navigationTransportType;
-(GEORouteMatch *)routeMatch;
-(void)setGuidancePromptsEnabled:(char)arg1 ;
-(void)setDisplayStep:(int)arg1 ;
-(double)distanceToRoute;
-(void)sendNavigationStatus;
-(char)isNavigating;
-(char)guidancePromptsEnabled;
-(void)_sendMessage:(int)arg1 data:(id)arg2 ;
-(char)locationUnreliable;
-(double)timeUntilNextAnnouncement;
@end


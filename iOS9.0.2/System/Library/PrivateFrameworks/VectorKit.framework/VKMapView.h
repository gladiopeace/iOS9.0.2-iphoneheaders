/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:17:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/VKInteractiveMapDelegate.h>
#import <libobjc.A.dylib/MDMapControllerDelegate.h>
#import <libobjc.A.dylib/GGLLayerDisruptor.h>
#import <libobjc.A.dylib/GGLRenderQueueSource.h>

@protocol VKMapViewDelegate;
@class VKMapCanvas, VKClassicGlobeCanvas, MDDisplayLayer, NSString, VKTimedAnimation, VKLabelMarker, VKMemoryObserver, GGLDisplayLink, NSMutableArray, GEOResourceManifestConfiguration, CADisplay, GEOMapRegion, NSArray, VKPolylineOverlayPainter;

@interface VKMapView : CALayer <VKInteractiveMapDelegate, MDMapControllerDelegate, GGLLayerDisruptor, GGLRenderQueueSource> {

	int _mapType;
	VKMapCanvas* _canvas;
	VKClassicGlobeCanvas* _globe;
	MDDisplayLayer* _mapLayer;
	id<VKMapViewDelegate> _mapDelegate;
	char _loaderOpen;
	char _additionalManifestConfigurationLoaderOpen;
	NSString* _tileLoaderClientID;
	SCD_Struct_VK19 _mapDisplayStyle;
	VKTimedAnimation* _mapDisplayStyleAnimation;
	VKTimedAnimation* _edgeInsetAnimation;
	VKEdgeInsets _animatingToEdgeInsets;
	char _isChangingMapType;
	unsigned _regionChangeCount;
	char _containsOverlay;
	double _verticalYaw;
	VKLabelMarker* _selectedLabelMarker;
	unsigned char _applicationState;
	VKMemoryObserver* _memoryObserver;
	GGLDisplayLink* _displayLink;
	int _displayRate;
	int _requestedRate;
	shared_ptr<ggl::RenderQueue>* _renderQueue;
	NSMutableArray* _annotationMarkersToAddToNewCanvas;
	char _isInBackground;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	GEOResourceManifestConfiguration* _additionalManifestConfiguration;
	vector<OnscreenTimestampData, std::__1::allocator<OnscreenTimestampData> >* _onscreenTimestamps;

}

@property (nonatomic,readonly) VKMapCanvas * mapCanvas; 
@property (assign,nonatomic) char shouldLoadFallbackTiles; 
@property (assign,nonatomic) char shouldLoadMapMargin; 
@property (assign,nonatomic) id<VKMapViewDelegate> mapDelegate;                                                  //@synthesize mapDelegate=_mapDelegate - In the implementation block
@property (assign,nonatomic) char staysCenteredDuringPinch; 
@property (assign,nonatomic) char staysCenteredDuringRotation; 
@property (nonatomic,retain) CADisplay * hostDisplay; 
@property (assign,nonatomic) char isPitchable; 
@property (getter=isPitched,nonatomic,readonly) char pitched; 
@property (getter=isFullyPitched,nonatomic,readonly) char fullyPitched; 
@property (nonatomic,readonly) char canEnter3DMode; 
@property (getter=isShowingFlyover,nonatomic,readonly) char showingFlyover; 
@property (nonatomic,readonly) char canShowFlyover; 
@property (assign,nonatomic) char trafficEnabled; 
@property (assign,nonatomic) char trafficIncidentsEnabled; 
@property (assign,nonatomic) int displayRate; 
@property (assign,nonatomic) char localizeLabels; 
@property (assign,nonatomic) int labelScaleFactor; 
@property (assign,nonatomic) char dynamicMapModesEnabled; 
@property (nonatomic,readonly) int flyoverMode; 
@property (assign,nonatomic) int mapType; 
@property (assign,nonatomic) SCD_Struct_VK19 mapDisplayStyle; 
@property (nonatomic,readonly) double minimumZoomLevel; 
@property (nonatomic,readonly) double maximumZoomLevel; 
@property (nonatomic,readonly) double currentZoomLevel; 
@property (assign,nonatomic) int targetDisplay; 
@property (assign,nonatomic) SCD_Struct_VK24 vehicleState; 
@property (assign,getter=isLabelMarkerSelectionEnabled,nonatomic) char labelMarkerSelectionEnabled; 
@property (assign,nonatomic) int shieldSize; 
@property (assign,nonatomic) int navigationShieldSize; 
@property (assign,nonatomic) int shieldIdiom; 
@property (assign,nonatomic) char showsPointsOfInterest; 
@property (assign,nonatomic) char showsBuildings; 
@property (nonatomic,retain) GEOResourceManifestConfiguration * additionalManifestConfiguration;                 //@synthesize additionalManifestConfiguration=_additionalManifestConfiguration - In the implementation block
@property (assign,nonatomic) VKEdgeInsets edgeInsets; 
@property (assign,nonatomic) VKEdgeInsets fullyOccludedEdgeInsets; 
@property (assign,nonatomic) VKEdgeInsets labelEdgeInsets; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) GEOMapRegion * mapRegionOfInterest; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) double presentationYaw; 
@property (nonatomic,readonly) double verticalYaw;                                                               //@synthesize verticalYaw=_verticalYaw - In the implementation block
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double altitude; 
@property (assign,nonatomic) VKPoint centerCoordinate; 
@property (assign,nonatomic) char allowDatelineWraparound; 
@property (assign,getter=isGesturing,nonatomic) char gesturing; 
@property (assign,nonatomic) char iconsShouldAlignToPixels; 
@property (getter=isFullyDrawn,nonatomic,readonly) char fullyDrawn; 
@property (assign,nonatomic) int trackingCameraPanStyle; 
@property (assign,nonatomic) double trackingZoomScale; 
@property (assign,nonatomic) int annotationTrackingZoomStyle; 
@property (assign,nonatomic) int annotationTrackingHeadingAnimationDisplayRate; 
@property (getter=isAnimatingToTrackAnnotation,nonatomic,readonly) char animatingToTrackAnnotation; 
@property (nonatomic,readonly) char canShowFlyoverAnimation; 
@property (nonatomic,readonly) VKLabelMarker * selectedLabelMarker; 
@property (nonatomic,readonly) NSArray * annotationMarkers; 
@property (nonatomic,readonly) NSArray * labelMarkers; 
@property (nonatomic,retain) VKPolylineOverlayPainter * focusedLabelsPolylinePainter; 
@property (nonatomic,retain) NSArray * externalTrafficIncidents; 
@property (nonatomic,retain) id<GEORoutePreloadSession> routePreloadSession; 
@property (assign,nonatomic) char rendersInBackground; 
@property (assign,nonatomic) char debugDrawContinuously; 
@property (assign,nonatomic) char debugLayoutContinuously; 
@property (assign,nonatomic) char debugEnableMultisampling; 
@property (nonatomic,readonly) float debugFramesPerSecond; 
@property (nonatomic,readonly) char enableDebugLabelHighlighting; 
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (assign,nonatomic) double userZoomFocusStyleGroundspanMeters; 
@property (assign,nonatomic) double userZoomFocusStyleMinGroundspanMeters; 
@property (assign,nonatomic) double userZoomFocusStyleMaxGroundspanMeters; 
@property (assign,nonatomic) unsigned char applicationState;                                                     //@synthesize applicationState=_applicationState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_mapkit_configureFromDefaults:(char)arg1 ;
-(void)setIsPitchable:(char)arg1 ;
-(void)setLabelEdgeInsets:(VKEdgeInsets)arg1 ;
-(void)setRouteLineSplitAnnotation:(id)arg1 ;
-(void)debugHighlightLabelAtPoint:(CGPoint)arg1 ;
-(id)consoleString:(char)arg1 ;
-(double)topDownMinimumZoomLevelForTileSize:(int)arg1 ;
-(char)shouldHideOffscreenSelectedAnnotation;
-(void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(char)arg3 duration:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)animateStylesWithDuration:(double)arg1 animations:(/*^block*/id)arg2 ;
-(void)setTrafficIncidentsEnabled:(char)arg1 ;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(char)arg2 animated:(char)arg3 ;
-(char)canEnter3DMode;
-(VKLabelMarker *)selectedLabelMarker;
-(void)setIconsShouldAlignToPixels:(char)arg1 ;
-(void)startFlyoverAnimation:(id)arg1 animateToStart:(char)arg2 completion:(/*^block*/id)arg3 ;
-(double)maximumZoomLevelForTileSize:(int)arg1 ;
-(char)localizeLabels;
-(void)setMapDelegate:(id<VKMapViewDelegate>)arg1 ;
-(int)annotationTrackingZoomStyle;
-(void)setAnnotationTrackingZoomStyle:(int)arg1 ;
-(char)canZoomInForTileSize:(int)arg1 ;
-(void)setLocalizeLabels:(char)arg1 ;
-(void)deselectLabelMarker;
-(void)addExternalAnchor:(id)arg1 ;
-(/*^block*/id)annotationCoordinateTest;
-(char)supportsNightMode;
-(void)updatePanWithTranslation:(CGPoint)arg1 ;
-(CGRect)mapRegionBounds;
-(GEOMapRegion *)mapRegionOfInterest;
-(void)setRendersInBackground:(char)arg1 ;
-(void)setYaw:(double)arg1 animated:(char)arg2 ;
-(char)isGesturing;
-(void)pauseFlyoverTourAnimation;
-(void)setVehicleState:(SCD_Struct_VK24)arg1 ;
-(double)durationToAnimateToMapRegion:(id)arg1 ;
-(void)moveToFlyoverTourStartPosition:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(char)isShowingFlyover;
-(void)setAllowDatelineWraparound:(char)arg1 ;
-(NSArray *)labelMarkers;
-(char)stylesheetIsDevResource;
-(double)presentationYaw;
-(VKEdgeInsets)labelEdgeInsets;
-(void)startFlyoverTourAnimation:(unsigned long long)arg1 animateToStart:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCenterCoordinate:(SCD_Struct_VK25)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(double)yaw;
-(void)addAnnotationMarker:(id)arg1 allowAnimation:(char)arg2 ;
-(void)_setStyleTransitionProgress:(float)arg1 targetStyle:(SCD_Struct_VK19)arg2 step:(int)arg3 ;
-(id)attributionsForCurrentRegion;
-(void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)setMapType:(int)arg1 animated:(char)arg2 ;
-(int)displayRate;
-(void)_forceLayoutForSuspensionSnapShot;
-(void)setGesturing:(char)arg1 ;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 duration:(double)arg2 timingFunction:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setShowsPointsOfInterest:(char)arg1 ;
-(char)iconsShouldAlignToPixels;
-(void)setApplicationState:(unsigned char)arg1 ;
-(double)currentZoomLevelForTileSize:(int)arg1 ;
-(void)setDisplayRate:(int)arg1 ;
-(void)setMapDisplayStyle:(SCD_Struct_VK19)arg1 animated:(char)arg2 ;
-(char)canShowFlyover;
-(char)isPitchable;
-(void)setCenterCoordinate:(VKPoint)arg1 animated:(char)arg2 ;
-(char)restoreViewportFromInfo:(id)arg1 ;
-(void)prepareFlyoverAnimation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopPanningAtPoint:(CGPoint)arg1 ;
-(char)supportsMapType:(int)arg1 ;
-(char)isShowingNoDataPlaceholders;
-(char)canShowAnimationForSearchResultWithMapRegion:(id)arg1 ;
-(char)isPitched;
-(void)addPersistentOverlay:(id)arg1 ;
-(void)forceFrame;
-(void)setShowsBuildings:(char)arg1 ;
-(void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stopFlyoverAnimation;
-(void)removeExternalAnchor:(id)arg1 ;
-(char)allowDatelineWraparound;
-(void)setTracePlaybackSpeedMultiplier:(double)arg1 ;
-(void)removeAnnotationMarker:(id)arg1 ;
-(void)showSearchResultAnimationAtCoordinate:(SCD_Struct_VK25)arg1 withMapRegion:(id)arg2 ;
-(char)rendersInBackground;
-(void)selectLabelMarker:(id)arg1 ;
-(void)setStaysCenteredDuringPinch:(char)arg1 ;
-(GEOResourceManifestConfiguration *)additionalManifestConfiguration;
-(void)setShouldLoadFallbackTiles:(char)arg1 ;
-(void)setFlyoverMode:(int)arg1 ;
-(char)canZoomOutForTileSize:(int)arg1 ;
-(char)enableDebugLabelHighlighting;
-(id)labelMarkerForSelectionAtPoint:(CGPoint)arg1 selectableLabelsOnly:(char)arg2 ;
-(void)setTrafficEnabled:(char)arg1 ;
-(void)startPanningAtPoint:(CGPoint)arg1 ;
-(void)setLabelMarkerSelectionEnabled:(char)arg1 ;
-(/*^block*/id)annotationRectTest;
-(char)showsPointsOfInterest;
-(void)resumeFlyoverTourAnimation;
-(void)enter3DMode;
-(char)showsBuildings;
-(char)trafficIncidentsEnabled;
-(void)stopTrackingAnnotation;
-(void)removePersistentOverlay:(id)arg1 ;
-(char)isAnimatingToTrackAnnotation;
-(void)exit3DMode;
-(void)setAdditionalManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 ;
-(void)setShieldSize:(int)arg1 ;
-(int)shieldSize;
-(void)runAnimation:(id)arg1 ;
-(void)puckAnimatorDidStop:(id)arg1 ;
-(void)puckAnimator:(id)arg1 updatedPosition:(SCD_Struct_VK26*)arg2 ;
-(void)puckAnimator:(id)arg1 updatedTargetPosition:(VKPoint)arg2 ;
-(char)currentZoomLevelAllowsRotation;
-(void)setAnnotationTrackingHeadingAnimationDisplayRate:(int)arg1 ;
-(id)transitLineMarkersInCurrentViewport;
-(void)selectTransitLineMarker:(id)arg1 ;
-(void)deselectTransitLineMarker;
-(void)addOverlay:(id)arg1 ;
-(void)removeOverlay:(id)arg1 ;
-(void)addRasterOverlay:(id)arg1 ;
-(void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)removeRasterOverlay:(id)arg1 ;
-(double)zoomLevelAdjustmentForTileSize:(int)arg1 ;
-(void)_resetMaximumZoomLevel;
-(void)_setMaximumZoomLevel:(double)arg1 ;
-(char)staysCenteredDuringRotation;
-(void)stopPitchingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePitchWithFocusPoint:(CGPoint)arg1 translation:(double)arg2 ;
-(void)startPitchingWithFocusPoint:(CGPoint)arg1 ;
-(void)didStartPanningDeceleration;
-(char)isFullyPitched;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2 ;
-(char)staysCenteredDuringPinch;
-(void)startPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)stopPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)stopSnappingAnimations;
-(int)targetDisplay;
-(void)setLabelScaleFactor:(int)arg1 ;
-(SCD_Struct_VK19)mapDisplayStyle;
-(void)setMapDisplayStyle:(SCD_Struct_VK19)arg1 ;
-(void)flushTileLoads;
-(char)trafficEnabled;
-(CGPoint)convertCoordinate:(SCD_Struct_VK25)arg1 toPointToLayer:(id)arg2 ;
-(void)setHostDisplay:(CADisplay *)arg1 ;
-(SCD_Struct_VK25)convertPoint:(CGPoint)arg1 toCoordinateFromLayer:(id)arg2 ;
-(void)didFinishSnapshotting;
-(void)setTargetDisplay:(int)arg1 ;
-(CGPoint)convertCoordinate:(SCD_Struct_VK25)arg1 toCameraModelPointToLayer:(id)arg2 ;
-(void)closeLoaderConnection;
-(char)isPointValidForGesturing:(CGPoint)arg1 ;
-(id)initWithGlobe:(char)arg1 shouldRasterize:(char)arg2 inBackground:(char)arg3 manifestConfiguration:(id)arg4 ;
-(void)openLoaderConnection;
-(id)transitLineMarkersForSelectionAtPoint:(CGPoint)arg1 ;
-(void)setRouteContext:(id)arg1 ;
-(SCD_Struct_VK25)convertPoint:(CGPoint)arg1 toMapPointFromLayer:(id)arg2 ;
-(CGPoint)convertMapPoint:(SCD_Struct_VK25)arg1 toPointToLayer:(id)arg2 ;
-(double)distanceFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 fromLayer:(id)arg3 withPrecision:(int)arg4 ;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)setNeedsLayout;
-(void)setHidden:(char)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(unsigned char)applicationState;
-(VKEdgeInsets)edgeInsets;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)setContentsScale:(float)arg1 ;
-(void)_updateBackgroundColor;
-(void)forceLayout;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(void)willEnterForeground;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)stopTracking;
-(double)altitude;
-(id)viewportInfo;
-(VKPoint)centerCoordinate;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(NSArray *)visibleTileSets;
-(id)detailedDescription;
-(void)setCenterCoordinate:(VKPoint)arg1 ;
-(void)didEnterBackground;
-(shared_ptr<gss::StyleSheet>*)stylesheet;
-(double)pitch;
-(void)_notifyDelegateFlyoverTourLabelChanged:(id)arg1 ;
-(VKEdgeInsets)fullyOccludedEdgeInsets;
-(void)setMapRegion:(id)arg1 animated:(char)arg2 ;
-(SCD_Struct_VK24)vehicleState;
-(id)secondaryCanvas;
-(void)setStylesheetName:(id)arg1 ;
-(float)debugFramesPerSecond;
-(void)_openAdditionalManifestConfigurationLoaderConnection;
-(void)setDebugDynamicMapModesEnabled:(char)arg1 ;
-(void)setShouldLimitTrackingCameraHeight:(char)arg1 ;
-(id)stylesheetName;
-(void)setCurrentLocationText:(id)arg1 ;
-(VKMapCanvas *)mapCanvas;
-(void)selectAnnotationMarker:(id)arg1 ;
-(id)buildingMarkerAtPoint:(CGPoint)arg1 ;
-(int)labelScaleFactor;
-(char)updateDisplayLinkStatus;
-(void)resetFlyoverStatistics;
-(char)shouldLoadMapMargin;
-(void)_updateAnalytics:(char)arg1 ;
-(void)setDisableRealisticLand:(char)arg1 ;
-(char)isLabelMarkerSelectionEnabled;
-(double)userZoomFocusStyleMaxGroundspanMeters;
-(id<GEORoutePreloadSession>)routePreloadSession;
-(void)setCanonicalSkyHeight:(double)arg1 ;
-(void)setAnnotationMarkerDeselectionCallback:(/*^block*/id)arg1 ;
-(void)setDisableRoadClass:(char)arg1 forRoadClass:(int)arg2 ;
-(char)isEffectivelyHidden;
-(NSArray *)annotationMarkers;
-(void)map:(id)arg1 didUpdateVerticalYawTo:(double)arg2 ;
-(void)_closeAdditionalManifestConfigurationLoaderConnection;
-(void)preloadNavigationSceneResources;
-(void)transitionToTracking:(char)arg1 mapMode:(int)arg2 pounceCompletionHandler:(/*^block*/id)arg3 ;
-(double)verticalYaw;
-(char)debugDynamicMapModesEnabled;
-(void)setStyleManager:(shared_ptr<gss::StyleManager>*)arg1 ;
-(void)deselectAnnotationMarker:(id)arg1 ;
-(void)setDebugEnableMultisampling:(char)arg1 ;
-(void)setUserZoomFocusStyleMaxGroundspanMeters:(double)arg1 ;
-(void)setExternalTrafficIncidents:(NSArray *)arg1 ;
-(void)setRoutePreloadSession:(id<GEORoutePreloadSession>)arg1 ;
-(CADisplay *)hostDisplay;
-(void)setNavigationShieldSize:(int)arg1 ;
-(char)_createDisplayLayer;
-(void)resetRenderQueue;
-(double)maximumZoomLevel;
-(void)setFullyOccludedEdgeInsets:(VKEdgeInsets)arg1 ;
-(shared_ptr<gss::CartoStyle>*)styleForFeature:(id)arg1 ;
-(void)setDisableTransitLines:(char)arg1 ;
-(NSArray *)externalTrafficIncidents;
-(void)setFocusedLabelsPolylinePainter:(VKPolylineOverlayPainter *)arg1 ;
-(void)forceSceneLoad;
-(char)isFullyDrawn;
-(void)pauseTracking;
-(void)_clearAnalytics;
-(void)disableFlyoverStatistics;
-(void)setDisableRealisticRoads:(char)arg1 ;
-(id)closestRoadMarkerForSelectionAtPoint:(CGPoint)arg1 ;
-(double)userZoomFocusStyleMinGroundspanMeters;
-(void)setDisableBuildingFootprints:(char)arg1 ;
-(int)navigationShieldSize;
-(void)performStylesheetDidChange;
-(void)setTrackingZoomScale:(double)arg1 ;
-(void)clearScene;
-(void)setDebugLayoutContinuously:(char)arg1 ;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(char)arg4 ;
-(int)shieldIdiom;
-(void)reloadStylesheet;
-(char)dynamicMapModesEnabled;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1 ;
-(void)setDisableGrid:(char)arg1 ;
-(char)debugDrawContinuously;
-(void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4 ;
-(void)enableFlyoverStatistics;
-(void)setStaysCenteredDuringRotation:(char)arg1 ;
-(void)setDebugDrawContinuously:(char)arg1 ;
-(void)setDisableLabels:(char)arg1 ;
-(int)flyoverMode;
-(void)setDisablePolygons:(char)arg1 ;
-(void)setCenterCoordinateSmoothTransition:(VKPoint)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(void)setDesiredMapMode:(int)arg1 immediate:(char)arg2 ;
-(char)debugLayoutContinuously;
-(void)pushNewOnscreenTimestamp:(id)arg1 ;
-(id<VKMapViewDelegate>)mapDelegate;
-(char)shouldLoadFallbackTiles;
-(void)setUserZoomFocusStyleMinGroundspanMeters:(double)arg1 ;
-(double)currentZoomLevel;
-(id)annotationMarkerForSelectionAtPoint:(CGPoint)arg1 avoidCurrent:(char)arg2 ;
-(char)debugEnableMultisampling;
-(int)annotationTrackingHeadingAnimationDisplayRate;
-(void)clearOnscreenTimestamps;
-(double)trackingZoomScale;
-(char)canShowFlyoverAnimation;
-(VKPolylineOverlayPainter *)focusedLabelsPolylinePainter;
-(int)trackingCameraPanStyle;
-(shared_ptr<gss::StyleManager>*)styleManager;
-(char)roadClassDisabled:(int)arg1 ;
-(double)userZoomFocusStyleGroundspanMeters;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)startPanningAtPoint:(CGPoint)arg1 panAtStartPoint:(char)arg2 ;
-(void)_runFlyoverTourStateChange:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDisableRasters:(char)arg1 ;
-(void)setDisableRoads:(char)arg1 ;
-(double)minimumZoomLevel;
-(char)transitLinesDisabled;
-(void)setDynamicMapModesEnabled:(char)arg1 ;
-(char)polygonsDisabled;
-(void)_updateDisplayRate;
-(void)updateOnscreenTimestamps;
-(char)roadsDisabled;
-(void)updateCameraContext:(id)arg1 ;
-(void)onTimerFired:(id)arg1 ;
-(char)labelsDisabled;
-(void)setMapDisplayStyle:(SCD_Struct_VK19)arg1 animated:(char)arg2 duration:(double)arg3 ;
-(void)mapDidFinishChangingMapDisplayStyle:(SCD_Struct_VK19)arg1 ;
-(id)flyoverStatistics;
-(void)setShieldIdiom:(int)arg1 ;
-(char)realisticRoadsDisabled;
-(id)currentCanvas;
-(float)_styleTransitionProgress;
-(char)buildingFootprintsDisabled;
-(double)minimumZoomLevelForTileSize:(int)arg1 ;
-(char)rastersDisabled;
-(void)debugRunPerformanceTestWithOutputHeader:(id)arg1 ;
-(void)_createGlobe;
-(void)setUserZoomFocusStyleGroundspanMeters:(double)arg1 ;
-(void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3 ;
-(void)setTrackingCameraPanStyle:(int)arg1 ;
-(void)_updateMapDisplayStyle;
-(void)zoomToLevel:(double)arg1 withFocusPoint:(CGPoint)arg2 ;
-(char)realisticLandDisabled;
-(char)gridDisabled;
-(void)setShouldLoadMapMargin:(char)arg1 ;
-(void)map:(id)arg1 canZoomInDidChange:(char)arg2 ;
-(void)mapDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(char)arg2 ;
-(void)mapDidBecomePartiallyDrawn:(id)arg1 ;
-(void)map:(id)arg1 didChangeRegionAnimated:(char)arg2 ;
-(void)map:(id)arg1 didUpdateContainsOverlay:(char)arg2 ;
-(void)mapDidStartLoadingTiles:(id)arg1 ;
-(void)mapDidChangeVisibleRegion:(id)arg1 ;
-(void)map:(id)arg1 willChangeRegionAnimated:(char)arg2 ;
-(void)mapDidReloadStylesheet:(id)arg1 ;
-(id)map:(id)arg1 presentationForAnnotation:(id)arg2 ;
-(void)mapDidFinishLoadingTiles:(id)arg1 ;
-(void)map:(id)arg1 didBecomePitched:(char)arg2 ;
-(void)map:(id)arg1 canEnter3DModeDidChange:(char)arg2 ;
-(void)map:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)map:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4 ;
-(void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2 ;
-(id)map:(id)arg1 painterForOverlay:(id)arg2 ;
-(void)mapDidFinishInitialTrackingAnimation:(id)arg1 ;
-(void)map:(id)arg1 canZoomOutDidChange:(char)arg2 ;
-(void)mapLabelsDidLayout:(id)arg1 ;
-(id)roadMarkersForSelectionAtPoint:(CGPoint)arg1 ;
-(id)featureMarkerAtPoint:(CGPoint)arg1 ;
-(void)mapController:(id)arg1 requestsDisplayRate:(int)arg2 ;
-(void)mapControllerNeedsDisplay:(id)arg1 ;
-(void)mapControllerNeedsInitialization:(id)arg1 ;
-(void)map:(id)arg1 flyoverModeDidChange:(int)arg2 ;
-(void)map:(id)arg1 canShowFlyoverDidChange:(char)arg2 ;
-(void)map:(id)arg1 flyoverModeWillChange:(int)arg2 ;
-(RenderQueue*)renderQueue;
-(void)didDrawWithTimestamp:(double)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:18:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSArray, GEOMapRegion, VKAnchorWrapper;


@protocol VKInteractiveMap <NSObject>
@property (assign,nonatomic) id<VKInteractiveMapDelegate> delegate; 
@property (assign,nonatomic) char trafficEnabled; 
@property (assign,nonatomic) char trafficIncidentsEnabled; 
@property (assign,nonatomic) char staysCenteredDuringPinch; 
@property (assign,nonatomic) char staysCenteredDuringRotation; 
@property (assign,nonatomic) char isPitchable; 
@property (getter=isPitched,nonatomic,readonly) char pitched; 
@property (getter=isFullyPitched,nonatomic,readonly) char fullyPitched; 
@property (assign,nonatomic) int mapType; 
@property (assign,nonatomic) int shieldSize; 
@property (assign,nonatomic) int navigationShieldSize; 
@property (assign,nonatomic) int shieldIdiom; 
@property (assign,nonatomic) char showsPointsOfInterest; 
@property (assign,nonatomic) char showsBuildings; 
@property (assign,nonatomic) PolylineCoordinate routeUserOffset; 
@property (nonatomic,retain) NSArray * externalTrafficIncidents; 
@property (nonatomic,readonly) double minimumZoomLevel; 
@property (nonatomic,readonly) double maximumZoomLevel; 
@property (assign,nonatomic) char labelMarkerSelectionEnabled; 
@property (assign,nonatomic) char localizeLabels; 
@property (assign,nonatomic) unsigned char labelScaleFactor; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) GEOMapRegion * mapRegionOfInterest; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) double presentationYaw; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double altitude; 
@property (assign,nonatomic) int annotationTrackingZoomStyle; 
@property (assign,nonatomic) int annotationTrackingHeadingAnimationDisplayRate; 
@property (assign,nonatomic) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation; 
@property (getter=isAnimatingToTrackAnnotation,nonatomic,readonly) char animatingToTrackAnnotation; 
@property (nonatomic,readonly) id<VKTrackableAnnotation> trackingAnnotation; 
@property (getter=isTrackingHeading,nonatomic,readonly) char trackingHeading; 
@property (nonatomic,readonly) NSArray * rasterOverlays; 
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (getter=isFullyDrawn,nonatomic,readonly) char fullyDrawn; 
@property (nonatomic,readonly) VKAnchorWrapper * externalAnchors; 
@required
+(char)supportsMapType:(int)arg1 scale:(int)arg2 manifestConfiguration:(id)arg3;
-(void)setIsPitchable:(char)arg1;
-(void)setRouteLineSplitAnnotation:(id)arg1;
-(void)debugHighlightLabelAtPoint:(CGPoint)arg1;
-(id)consoleString:(char)arg1;
-(double)topDownMinimumZoomLevelForTileSize:(int)arg1;
-(char)shouldHideOffscreenSelectedAnnotation;
-(void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(char)arg3 duration:(double)arg4 completionHandler:(/*^block*/id)arg5;
-(void)setTrafficIncidentsEnabled:(char)arg1;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(char)arg2 animated:(char)arg3;
-(char)canEnter3DMode;
-(id)selectedLabelMarker;
-(double)maximumZoomLevelForTileSize:(int)arg1;
-(char)localizeLabels;
-(int)annotationTrackingZoomStyle;
-(void)setAnnotationTrackingZoomStyle:(int)arg1;
-(char)canZoomInForTileSize:(int)arg1;
-(void)setLocalizeLabels:(char)arg1;
-(void)deselectLabelMarker;
-(void)addExternalAnchor:(id)arg1;
-(/*^block*/id)annotationCoordinateTest;
-(void)updatePanWithTranslation:(CGPoint)arg1;
-(GEOMapRegion *)mapRegionOfInterest;
-(void)setYaw:(double)arg1 animated:(char)arg2;
-(double)durationToAnimateToMapRegion:(id)arg1;
-(id)labelMarkers;
-(double)presentationYaw;
-(double)yaw;
-(void)addAnnotationMarker:(id)arg1 allowAnimation:(char)arg2;
-(void)_setStyleTransitionProgress:(float)arg1 targetStyle:(DisplayStyle)arg2 step:(int)arg3;
-(id)attributionsForCurrentRegion;
-(void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(/*^block*/id)arg5;
-(void)setMapType:(int)arg1 animated:(char)arg2;
-(void)setShowsPointsOfInterest:(char)arg1;
-(double)currentZoomLevelForTileSize:(int)arg1;
-(char)isPitchable;
-(char)restoreViewportFromInfo:(id)arg1;
-(void)stopPanningAtPoint:(CGPoint)arg1;
-(char)isShowingNoDataPlaceholders;
-(char)isPitched;
-(void)addPersistentOverlay:(id)arg1;
-(void)setShowsBuildings:(char)arg1;
-(void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeExternalAnchor:(id)arg1;
-(void)removeAnnotationMarker:(id)arg1;
-(void)selectLabelMarker:(id)arg1;
-(void)setStaysCenteredDuringPinch:(char)arg1;
-(char)canZoomOutForTileSize:(int)arg1;
-(id)labelMarkerForSelectionAtPoint:(CGPoint)arg1 selectableLabelsOnly:(char)arg2;
-(void)setTrafficEnabled:(char)arg1;
-(void)setLabelMarkerSelectionEnabled:(char)arg1;
-(/*^block*/id)annotationRectTest;
-(char)showsPointsOfInterest;
-(void)enter3DMode;
-(char)showsBuildings;
-(char)trafficIncidentsEnabled;
-(void)stopTrackingAnnotation;
-(void)removePersistentOverlay:(id)arg1;
-(char)isAnimatingToTrackAnnotation;
-(void)exit3DMode;
-(void)setShieldSize:(int)arg1;
-(int)shieldSize;
-(char)currentZoomLevelAllowsRotation;
-(void)setAnnotationTrackingHeadingAnimationDisplayRate:(int)arg1;
-(id)transitLineMarkersInCurrentViewport;
-(void)selectTransitLineMarker:(id)arg1;
-(void)deselectTransitLineMarker;
-(id)overlays;
-(void)addOverlay:(id)arg1;
-(void)removeOverlay:(id)arg1;
-(void)addRasterOverlay:(id)arg1;
-(void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
-(void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
-(void)removeRasterOverlay:(id)arg1;
-(double)zoomLevelAdjustmentForTileSize:(int)arg1;
-(char)staysCenteredDuringRotation;
-(void)stopPitchingWithFocusPoint:(CGPoint)arg1;
-(void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1;
-(void)updatePitchWithFocusPoint:(CGPoint)arg1 translation:(double)arg2;
-(void)startPitchingWithFocusPoint:(CGPoint)arg1;
-(void)didStartPanningDeceleration;
-(char)isFullyPitched;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2;
-(char)staysCenteredDuringPinch;
-(void)startPinchingWithFocusPoint:(CGPoint)arg1;
-(void)stopPinchingWithFocusPoint:(CGPoint)arg1;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1;
-(void)stopSnappingAnimations;
-(void)setLabelScaleFactor:(unsigned char)arg1;
-(char)trafficEnabled;
-(char)isPointValidForGesturing:(CGPoint)arg1;
-(id)transitLineMarkersForSelectionAtPoint:(CGPoint)arg1;
-(void)setDelegate:(id)arg1;
-(id<VKInteractiveMapDelegate>)delegate;
-(void)setMapRegion:(id)arg1;
-(GEOMapRegion *)mapRegion;
-(double)altitude;
-(id)viewportInfo;
-(VKPoint*)centerCoordinate;
-(int)mapType;
-(void)setMapType:(int)arg1;
-(NSArray *)visibleTileSets;
-(id)detailedDescription;
-(double)pitch;
-(id)selectedAnnotationMarker;
-(void)setMapRegion:(id)arg1 animated:(char)arg2;
-(DisplayStyle*)sourceMapDisplayStyle;
-(CGPoint*)convertCoordinateToCameraModelPoint:(SCD_Struct_VK25)arg1;
-(void)selectAnnotationMarker:(id)arg1;
-(NSArray *)rasterOverlays;
-(id<VKTrackableAnnotation>)trackingAnnotation;
-(unsigned char)labelScaleFactor;
-(SCD_Struct_VK25*)convertPointToMapPoint:(CGPoint)arg1;
-(void)setCenterCoordinate:(SCD_Struct_VK25)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(int)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8;
-(VKAnchorWrapper *)externalAnchors;
-(void)setAnnotationMarkerDeselectionCallback:(/*^block*/id)arg1;
-(id)annotationMarkers;
-(void)deselectAnnotationMarker:(id)arg1;
-(/*^block*/id)annotationMarkerDeselectionCallback;
-(void)setExternalTrafficIncidents:(id)arg1;
-(void)setNavigationShieldSize:(int)arg1;
-(double)maximumZoomLevel;
-(CGPoint*)convertMapPointToPoint:(SCD_Struct_VK25)arg1;
-(void)stylesheetAnimationDidEnd:(char)arg1;
-(NSArray *)externalTrafficIncidents;
-(char)isFullyDrawn;
-(id)closestRoadMarkerForSelectionAtPoint:(CGPoint)arg1;
-(int)navigationShieldSize;
-(PolylineCoordinate)routeUserOffset;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(char)arg4;
-(int)shieldIdiom;
-(void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(DisplayStyle)arg2 setupHandler:(/*^block*/id)arg3;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1;
-(id<VKRouteMatchedAnnotationPresentation>)routeLineSplitAnnotation;
-(void)setStaysCenteredDuringRotation:(char)arg1;
-(void)setCenterCoordinate3D:(VKPoint)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(int)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8;
-(double)currentZoomLevel;
-(id)annotationMarkerForSelectionAtPoint:(CGPoint)arg1 avoidCurrent:(char)arg2;
-(int)annotationTrackingHeadingAnimationDisplayRate;
-(void)endStyleAnimationGroup;
-(CGPoint*)convertCoordinateToPoint:(SCD_Struct_VK25)arg1;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(char)arg4 completion:(/*^block*/id)arg5;
-(void)startPanningAtPoint:(CGPoint)arg1 panAtStartPoint:(char)arg2;
-(void)stylesheetAnimationDidProgress:(float)arg1;
-(double)minimumZoomLevel;
-(SCD_Struct_VK25*)convertPointToCoordinate:(CGPoint)arg1;
-(void)setShieldIdiom:(int)arg1;
-(void)beginStyleAnimationGroup;
-(float)_styleTransitionProgress;
-(double)minimumZoomLevelForTileSize:(int)arg1;
-(char)isTrackingHeading;
-(id)persistentOverlays;
-(char)labelMarkerSelectionEnabled;
-(void)zoomToLevel:(double)arg1 withFocusPoint:(CGPoint)arg2;
-(char)supportsMapDisplayStyle:(DisplayStyle)arg1;
-(void)setStylesheetMapDisplayStyle:(DisplayStyle)arg1;
-(void)stylesheetAnimationWillStartFromStyle:(DisplayStyle)arg1 toStyle:(DisplayStyle)arg2;
-(VKPoint*)screenPointForPoint:(CGPoint)arg1;

@end


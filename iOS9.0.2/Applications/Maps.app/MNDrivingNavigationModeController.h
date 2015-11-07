/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNNavigationModeController.h>

@interface MNDrivingNavigationModeController : MNNavigationModeController {

	char _haveArrived;
	char _isNavigatorManagingCameraFocus;
	char _startInETAOnly;
	int _cameraDisplayMode;
	int _camera3DViewStyle;
	unsigned _type;

}

@property (assign,nonatomic) char startInETAOnly;                 //@synthesize startInETAOnly=_startInETAOnly - In the implementation block
@property (assign,nonatomic) unsigned type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int cameraDisplayMode;               //@synthesize cameraDisplayMode=_cameraDisplayMode - In the implementation block
@property (assign,nonatomic) int camera3DViewStyle;               //@synthesize camera3DViewStyle=_camera3DViewStyle - In the implementation block
@property (assign,nonatomic) double cameraZoomScale; 
-(void)navigationSessionHasArrived:(id)arg1 ;
-(void)_threeDButtonTapped:(id)arg1 ;
-(void)sizeClassDidChangeToPair:(SCD_Struct_Mo14)arg1 ;
-(id)_newGuidanceSignsDisplayInView:(id)arg1 ;
-(void)_pauseNavigationCameraMotion;
-(void)prepareToRunNavigationAnimated:(char)arg1 startCamera:(char)arg2 ;
-(void)_prepareViewForLockScreen:(id)arg1 ;
-(void)_startNavigationCameraMotionAnimated:(char)arg1 ;
-(void)resignCurrentModeAnimated:(char)arg1 toMode:(id)arg2 ;
-(int)_cameraDisplayMode;
-(void)_audioNotificationForNewTransportType:(int)arg1 navigationSession:(id)arg2 ;
-(void)_setCameraDisplayMode:(int)arg1 ;
-(void)_navigationUpdatedPointOfInterest:(SCD_Struct_RA7)arg1 focusStyle:(int)arg2 ;
-(void)_refreshCameraPosition;
-(void)_updateWithMatchedLocation:(id)arg1 ;
-(void)layoutForUnobscuredBoundsChange;
-(char)_is3D;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(char)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(char)_supportsCameraDisplayModeChanges;
-(void)_setRoute:(id)arg1 ;
-(void)_stopNavigationCameraMotion;
-(float)_cameraOffset;
-(int)camera3DViewStyle;
-(void)setStartInETAOnly:(char)arg1 ;
-(int)_desiredViewStyle;
-(id)_cameraZoomScalePreferenceKey;
-(double)cameraZoomScale;
-(void)setCameraDisplayMode:(int)arg1 ;
-(int)cameraDisplayMode;
-(char)startInETAOnly;
-(void)setCameraZoomScale:(double)arg1 ;
-(void)_starkOffsetCameraForOverlay:(char)arg1 animated:(char)arg2 ;
-(void)setCamera3DViewStyle:(int)arg1 ;
-(void)mapView:(id)arg1 canZoomOutDidChange:(char)arg2 ;
-(void)mapView:(id)arg1 canZoomInDidChange:(char)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
@end


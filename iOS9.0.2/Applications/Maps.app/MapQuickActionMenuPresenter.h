/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/QuickActionMenuPresenter.h>

@class MKMapView, MKDeepPressGestureRecognizer, UIView, UIImageView, MKCalloutBackgroundView;

@interface MapQuickActionMenuPresenter : QuickActionMenuPresenter {

	MKMapView* _mapView;
	MKDeepPressGestureRecognizer* _pressureGesture;
	UIView* _pressureGestureHitView;
	UIImageView* _imageSourceView;
	CGPoint _imageSourceViewCenter;
	char _showImageSourceView;
	char _gestureInCallout;
	float _sourceViewScale;
	MKCalloutBackgroundView* _newCalloutBackgroundView;

}
-(void)actionMenuDidFinish;
-(char)_shouldBeginOrbGestureAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)initWithPresentingViewController:(id)arg1 inView:(id)arg2 ;
-(void)_setGestureSourceViewForLabelMarker:(id)arg1 ;
-(void)_setGestureSourceViewForCoordinate:(SCD_Struct_RA7)arg1 image:(id)arg2 ;
-(id)initWithPresentingViewController:(id)arg1 inMapView:(id)arg2 ;
-(void)_updateGestureConfiguration;
-(void)_setGestureSourceViewForCoordinate:(SCD_Struct_RA7)arg1 attributes:(id)arg2 ;
-(float)_sourceViewScaleUpFactorForPresentingAlertController:(id)arg1 ;
-(char)_isValidLabelMarker:(id)arg1 ;
-(char)_shouldLinkPresentationSourceRepresentationViewToAlertController:(id)arg1 ;
-(void)dealloc;
-(void)userDefaultsDidChange:(id)arg1 ;
-(void)_willBeginSystemProvidedDismissalOfAlertController:(id)arg1 ;
-(void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(void)_didEndSystemProvidedPresentationOfAlertController:(id)arg1 wasSuccessful:(char)arg2 ;
@end


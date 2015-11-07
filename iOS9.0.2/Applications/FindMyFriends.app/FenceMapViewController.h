/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FMFGeoFence, MKMapView;

@interface FenceMapViewController : UIViewController {

	FMFGeoFence* _fence;
	MKMapView* _mapView;

}

@property (nonatomic,retain) FMFGeoFence * fence;              //@synthesize fence=_fence - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
-(FMFGeoFence *)fence;
-(void)setFence:(FMFGeoFence *)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(MKMapView *)mapView;
-(void)viewDidLoad;
@end

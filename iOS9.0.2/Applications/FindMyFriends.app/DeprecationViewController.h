/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSURL, MKMapView;

@interface DeprecationViewController : UIViewController {

	NSURL* _url;
	MKMapView* _mapView;

}

@property (nonatomic,retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
-(void)updateNow:(id)arg1 ;
-(void)signout:(id)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(NSURL *)url;
-(void)viewDidLoad;
-(void)setUrl:(NSURL *)arg1 ;
@end


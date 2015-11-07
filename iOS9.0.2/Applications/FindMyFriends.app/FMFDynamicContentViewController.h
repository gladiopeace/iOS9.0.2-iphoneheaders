/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class MKMapView, UIView, NSLayoutConstraint, UIImageView;

@interface FMFDynamicContentViewController : UIViewController {

	MKMapView* _mapView;
	UIView* _dynamicContentView;
	NSLayoutConstraint* _dynamicContentViewBottomConstraint;
	UIImageView* _logoImageView;

}

@property (nonatomic,retain) MKMapView * mapView;                                                  //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) UIView * dynamicContentView;                                          //@synthesize dynamicContentView=_dynamicContentView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dynamicContentViewBottomConstraint;              //@synthesize dynamicContentViewBottomConstraint=_dynamicContentViewBottomConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * logoImageView;                                          //@synthesize logoImageView=_logoImageView - In the implementation block
-(void)dismissKeyboard:(id)arg1 ;
-(UIView *)dynamicContentView;
-(UIImageView *)logoImageView;
-(void)keyboardFrameWillChange:(id)arg1 ;
-(void)keyboardFrameDidChange:(id)arg1 ;
-(NSLayoutConstraint *)dynamicContentViewBottomConstraint;
-(void)setDynamicContentView:(UIView *)arg1 ;
-(void)setDynamicContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLogoImageView:(UIImageView *)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <FMF/CurrentLocationDelegate.h>

@protocol RefreshControllerDelegate;
@class NSTimer, CLLocationManager, CLLocation, NSString;

@interface RefreshController : NSObject <CLLocationManagerDelegate, CurrentLocationDelegate> {

	char isVisibilityRefresh;
	char refresherCancelled;
	NSTimer* pollTimer;
	id<RefreshControllerDelegate> delegate;
	CLLocationManager* locationManager;
	CLLocation* currentLocation;
	CLLocation* lastRefreshLocation;
	double timeout;

}

@property (assign,nonatomic) id<RefreshControllerDelegate> delegate; 
@property (assign,nonatomic) char isVisibilityRefresh; 
@property (nonatomic,retain) NSTimer * pollTimer; 
@property (nonatomic,retain) CLLocationManager * locationManager; 
@property (nonatomic,retain) CLLocation * currentLocation; 
@property (nonatomic,copy) CLLocation * lastRefreshLocation; 
@property (assign,nonatomic) char refresherCancelled; 
@property (assign,nonatomic) double timeout; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)refresherCancelled;
-(CLLocation *)lastRefreshLocation;
-(char)isVisibilityRefresh;
-(void)beginTimerWithRefresh:(double)arg1 timeout:(double)arg2 ;
-(void)setLastRefreshLocation:(CLLocation *)arg1 ;
-(void)scheduleTimerWithInterval:(double)arg1 ;
-(void)refreshVisibility;
-(void)refreshLocations;
-(void)setRefresherCancelled:(char)arg1 ;
-(void)setIsVisibilityRefresh:(char)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(double)timeout;
-(void)setDelegate:(id<RefreshControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<RefreshControllerDelegate>)delegate;
-(void)timerFired:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)setPollTimer:(NSTimer *)arg1 ;
-(NSTimer *)pollTimer;
-(void)cancelTimer;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/StarkTableViewController.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>
#import <libobjc.A.dylib/MKQuickRouteManagerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Maps/StarkContentController.h>

@class NSTimer, NSIndexPath, NSArray, NSString;

@interface StarkSearchTableViewController : StarkTableViewController <MKLocationManagerObserver, MKQuickRouteManagerDelegate, UITableViewDelegate, UITableViewDataSource, StarkContentController> {

	NSTimer* _timer;
	char _timeToUpdate;
	NSIndexPath* _selectedIndexPath;
	NSArray* _quickRouteManagers;
	NSArray* _cachedSearchResults;

}

@property (nonatomic,retain) NSArray * cachedSearchResults;              //@synthesize cachedSearchResults=_cachedSearchResults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldTimeoutAfterDisconnect;
-(void)modeWillPop;
-(NSArray *)cachedSearchResults;
-(double)poiHeadingForCoordinate:(SCD_Struct_RA7)arg1 currentLocation:(id)arg2 currentHeading:(double)arg3 ;
-(void)toggleRateLimitedUpdate;
-(void)setCachedSearchResults:(NSArray *)arg1 ;
-(void)updateArrowInCell:(id)arg1 animated:(char)arg2 ;
-(void)updateArrows;
-(id)visuallySelectedItem;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(char)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(char)quickRouteShouldIncludeTransit;
-(char)quickRouteShouldOnlyUseAutomobile;
-(unsigned)preferredDirectionsTypeForQuickRoute;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)_viewControllerWasSelected;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end


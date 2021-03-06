/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, PCPersistentTimer, NSString;

@interface MPLocationFinder : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	/*^block*/id _completionHandler;
	PCPersistentTimer* _timer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)findLocationWithBundle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)setCompletionHandler:(/*^block*/id)arg1 ;
-(void)start;
-(id)initWithBundle:(id)arg1 ;
-(void)_timerFired;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/BulletinBoardPlugins/WeatherNotifications.bundle/WeatherNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBDataProvider.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class NSRecursiveLock, City, NSTimer, BBBulletinRequest, NSString;

@interface WATodayDataProvider : NSObject <BBDataProvider, CLLocationManagerDelegate> {

	char _isReachable;
	char _neverBeenUnlocked;
	NSRecursiveLock* _lock;
	unsigned _conditionCode;
	City* _city;
	NSTimer* _reachabilityTimer;
	BBBulletinRequest* _lastBulletin;

}

@property (nonatomic,retain) NSRecursiveLock * lock;                   //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) char isReachable;                         //@synthesize isReachable=_isReachable - In the implementation block
@property (assign,nonatomic) unsigned conditionCode;                   //@synthesize conditionCode=_conditionCode - In the implementation block
@property (nonatomic,retain) City * city;                              //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) NSTimer * reachabilityTimer;              //@synthesize reachabilityTimer=_reachabilityTimer - In the implementation block
@property (assign,nonatomic) char neverBeenUnlocked;                   //@synthesize neverBeenUnlocked=_neverBeenUnlocked - In the implementation block
@property (retain) BBBulletinRequest * lastBulletin;                   //@synthesize lastBulletin=_lastBulletin - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_lock_handleLocalCityChanged;
-(void)setLastBulletin:(BBBulletinRequest *)arg1 ;
-(void)_lock_cleanupReachabilityTimer;
-(void)_lock_cleanupSharedManagers;
-(void)_lock_reachabilityChanged:(id)arg1 ;
-(void)_lock_resetLocale;
-(void)_lock_handleLocationManagerDidUpdateWithLocation:(id)arg1 ;
-(void)_lock_handleDidChangeAuthorizationStatus:(int)arg1 ;
-(id)iconForWeatherCondition:(int)arg1 ;
-(id)_lock_bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(void)_resetLocale:(id)arg1 ;
-(void)_lock_setupLocationControllers;
-(void)_lock_prepareToRefreshWeather;
-(void)_lock_updateForCity:(id)arg1 ;
-(void)_lock_cleanupUpdaters;
-(id)_lock_newTodayRequest;
-(BBBulletinRequest *)lastBulletin;
-(void)_lock_updateLockedState;
-(void)_lock_becameReachable;
-(void)_applyDeferredReachablityUpdate:(id)arg1 ;
-(void)_lock_applyDeferredReachablityUpdate:(id)arg1 ;
-(void)_lock_applyDeferredUnreachablityUpdate;
-(void)_lock_prepareToDisplay;
-(void)_lock_refreshForUnitsChange;
-(void)setIsReachable:(char)arg1 ;
-(NSTimer *)reachabilityTimer;
-(void)setReachabilityTimer:(NSTimer *)arg1 ;
-(char)neverBeenUnlocked;
-(void)setNeverBeenUnlocked:(char)arg1 ;
-(City *)city;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSRecursiveLock *)lock;
-(id)sortDescriptors;
-(void)_reachabilityChanged:(id)arg1 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)sectionParameters;
-(id)defaultSectionInfo;
-(char)isReachable;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(unsigned)conditionCode;
-(void)setConditionCode:(unsigned)arg1 ;
-(void)setCity:(City *)arg1 ;
-(id)sectionIdentifier;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEONavdServerProxy : NSObject
-(void)dealloc;
-(id)init;
-(void)close;
-(void)open;
-(void)forceWork;
-(void)startMonitoringSuggestionsForClient:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)forceCacheRefresh;
-(void)didPostUINotification:(unsigned)arg1 forDestination:(id)arg2 fromClient:(id)arg3 ;
-(void)forceNone;
-(void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)forceHome;
-(void)statusWithCallback:(/*^block*/id)arg1 ;
-(void)shouldPostDarwinNotificationForNextUpdate:(char)arg1 ;
-(void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 ;
-(void)stopMonitoringSuggestionsForClient:(id)arg1 ;
-(void)getDirectionsForClient:(id)arg1 withRouteHypothesisRequest:(id)arg2 andCallback:(/*^block*/id)arg3 ;
@end


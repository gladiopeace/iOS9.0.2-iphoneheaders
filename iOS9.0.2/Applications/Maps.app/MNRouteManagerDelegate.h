/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MNRouteManagerDelegate <GEORouteManagerDelegate>
@required
-(void)routeManager:(id)arg1 receivedTrafficIncidentAlert:(id)arg2;
-(void)routeManagerDidFailToRecordTrace:(id)arg1;
-(void)routeManagerDidChangeState:(id)arg1 newRouteState:(int)arg2;
-(void)routeManagerUpdatedTrafficIncidents:(id)arg1;
-(void)routeManagerUpdatedETA:(id)arg1;
-(void)routeManager:(id)arg1 willSendETARequest:(id)arg2;
-(void)routeManager:(id)arg1 failedWithError:(id)arg2;
-(void)routeManager:(id)arg1 didChangeRoutePreloadSession:(id)arg2;
-(void)routeManager:(id)arg1 didSwitchToNewRoute:(id)arg2 alreadyOnRoute:(char)arg3;
-(void)routeManagerDidChangeActiveRouteSet:(id)arg1;

@end

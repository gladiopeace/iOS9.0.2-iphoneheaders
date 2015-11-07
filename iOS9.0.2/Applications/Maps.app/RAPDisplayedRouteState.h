/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPCurrentDirections.h>

@class NSString, GEOComposedRoute;

@interface RAPDisplayedRouteState : NSObject <RAPCurrentDirections> {

	NSString* _startWaypointTitle;
	NSString* _endWaypointTitle;
	int _transportType;
	GEOComposedRoute* _composedRoute;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)startWaypointTitle;
-(id)initWithStartWaypointTitle:(id)arg1 endWaypointTitle:(id)arg2 transportType:(int)arg3 composedRoute:(id)arg4 ;
-(id)endWaypointTitle;
-(int)transportType;
-(id)composedRoute;
@end

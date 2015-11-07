/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPDisplayedDirectionsPlan.h>

@protocol RAPDisplayedDirectionsPlan <RAPUserDirectionRequest>
@required
-(id)displayedRouteSuggestions;
-(char)getTransitSuggestedRoutesIndex:(out unsigned*)arg1 directionsResponseIndex:(out unsigned*)arg2 forRouteSuggestion:(id)arg3;

@end


@class RouteSet, RAPDirectionsRecording, NSString;

@interface RAPDisplayedDirectionsPlan : NSObject <RAPDisplayedDirectionsPlan> {

	RouteSet* _routeSet;
	RAPDirectionsRecording* _recording;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRouteSet:(id)arg1 recording:(id)arg2 ;
-(int)requestedTransportType;
-(id)displayedRouteSuggestions;
-(char)getTransitSuggestedRoutesIndex:(out unsigned*)arg1 directionsResponseIndex:(out unsigned*)arg2 forRouteSuggestion:(id)arg3 ;
-(id)recording;
@end


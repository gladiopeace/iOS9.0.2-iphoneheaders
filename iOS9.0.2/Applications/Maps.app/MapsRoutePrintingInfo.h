/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MapsPrintingInfo.h>

@class NSArray;

@interface MapsRoutePrintingInfo : MapsPrintingInfo {

	NSArray* _routeStepCells;
	NSArray* _routeStepCalloutCells;

}

@property (nonatomic,readonly) NSArray * routeStepCells;                     //@synthesize routeStepCells=_routeStepCells - In the implementation block
@property (nonatomic,readonly) NSArray * routeStepCalloutCells;              //@synthesize routeStepCalloutCells=_routeStepCalloutCells - In the implementation block
-(id)initWithNumberOfPages:(int)arg1 routeStepCells:(id)arg2 routeStepCalloutCells:(id)arg3 ;
-(NSArray *)routeStepCalloutCells;
-(NSArray *)routeStepCells;
@end


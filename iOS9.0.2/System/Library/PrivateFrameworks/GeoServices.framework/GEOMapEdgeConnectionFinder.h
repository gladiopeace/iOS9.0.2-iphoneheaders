/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder, NSMutableArray, GEOVectorTile;

@interface GEOMapEdgeConnectionFinder : GEOMapRequest {

	GEOMapAccess* _map;
	GEOMapTileFinder* _tileFinder;
	NSMutableArray* _builders;
	GEOVectorTile* _tile;
	SCD_Struct_GE152* _junction;
	SCD_Struct_GE16 _coordinate;

}
-(void)cancel;
-(void)dealloc;
-(void)_findConnections:(/*^block*/id)arg1 incoming:(char)arg2 ;
-(id)initWithMap:(id)arg1 tile:(id)arg2 junction:(SCD_Struct_GE152*)arg3 coordinate:(SCD_Struct_GE16)arg4 ;
-(void)findConnectionsOut:(/*^block*/id)arg1 ;
-(void)findConnectionsIn:(/*^block*/id)arg1 ;
@end


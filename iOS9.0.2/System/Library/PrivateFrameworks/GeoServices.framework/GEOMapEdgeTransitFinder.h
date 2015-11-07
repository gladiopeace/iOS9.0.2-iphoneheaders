/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeFinder.h>

@interface GEOMapEdgeTransitFinder : GEOMapEdgeFinder {

	unordered_set<geo::TransitEdgePiece, std::__1::hash<geo::TransitEdgePiece>, std::__1::equal_to<geo::TransitEdgePiece>, std::__1::allocator<geo::TransitEdgePiece> >* _piecesConsidered;

}
-(char)_checkEdgeForDuplicates:(const shared_ptr<geo::MapEdge>*)arg1 ;
-(void)_buildersInTile:(id)arg1 localPoint:(const Matrix<float, 2, 1>*)arg2 localRadiusSqr:(float)arg3 localSearch:(const Box<float, 2>*)arg4 handler:(/*^block*/id)arg5 ;
-(id)initWithMap:(id)arg1 center:(SCD_Struct_GE16)arg2 radius:(double)arg3 ;
@end


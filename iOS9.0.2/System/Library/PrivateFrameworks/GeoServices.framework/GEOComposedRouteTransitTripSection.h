/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteSection.h>
#import <libobjc.A.dylib/GEOComposedRouteTransitSection.h>

@class NSString;

@interface GEOComposedRouteTransitTripSection : GEOComposedRouteSection <GEOComposedRouteTransitSection> {

	SCD_Struct_GE181 _fromNodeID;
	SCD_Struct_GE181 _toNodeID;
	unsigned long long _lineID;
	SCD_Struct_GE16 _fromNodeLocation;
	SCD_Struct_GE16 _toNodeLocation;
	int _toNodeSignificance;
	Matrix<float, 4, 1> _lineColor;
	SCD_Struct_GE57 _originalBounds;

}

@property (nonatomic,readonly) Matrix<float lineColor;                   //@synthesize lineColor=_lineColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE181 fromNodeID;              //@synthesize fromNodeID=_fromNodeID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE181 toNodeID;                //@synthesize toNodeID=_toNodeID - In the implementation block
@property (nonatomic,readonly) unsigned long long lineID;                //@synthesize lineID=_lineID - In the implementation block
@property (nonatomic,readonly) char isTransfer; 
@property (nonatomic,readonly) int toNodeSignificance;                   //@synthesize toNodeSignificance=_toNodeSignificance - In the implementation block
-(void)updateLabelExternalObjectsInRenderRegion:(id)arg1 previousSection:(id)arg2 nextSection:(id)arg3 labelExternalObjectsModerator:(LabelExternalObjectsModerator*)arg4 nodeIDToStyleAttributeMap:(unordered_map<unsigned long long, std::__1::unordered_map<unsigned int, int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int> > >, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unordered_map<unsigned int, int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int> > > > > >*)arg5 ;
-(void)_getPointOnPath:(id)arg1 index:(int)arg2 bounds:(const SCD_Struct_GE178*)arg3 result:(Matrix<double, 2, 1>*)arg4 ;
-(BOOL)_getEndPoints:(id)arg1 vkRect:(const SCD_Struct_GE178*)arg2 result:(vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > >*)arg3 ;
-(id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(char)arg3 verifySnapping:(char)arg4 ;
-(BOOL)_getEndPoints:(id)arg1 gmRect:(const SCD_Struct_GE57*)arg2 result:(vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > >*)arg3 ;
-(id)unsnappedPathsInOverlay:(id)arg1 ;
-(Matrix<float)lineColor;
-(NSString *)description;
-(unsigned long long)lineID;
-(SCD_Struct_GE181)fromNodeID;
-(SCD_Struct_GE181)toNodeID;
-(int)toNodeSignificance;
-(id)initWithRoute:(id)arg1 startPoint:(unsigned)arg2 pointCount:(unsigned)arg3 step:(id)arg4 stepIndex:(unsigned)arg5 toNodeSignificance:(int)arg6 currentTransitLineColor:(id)arg7 ;
-(char)isTransfer;
@end


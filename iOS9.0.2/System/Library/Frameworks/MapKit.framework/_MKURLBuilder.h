/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class _GEOMapURLBuilder;

@interface _MKURLBuilder : NSObject {

	_GEOMapURLBuilder* _realBuilder;

}
+(id)URLForSearch:(id)arg1 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 ;
+(id)URLForSearch:(id)arg1 at:(SCD_Struct_MK1)arg2 zoomLevel:(float)arg3 ;
+(id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(SCD_Struct_MK1)arg4 address:(id)arg5 ;
+(id)URLForSearch:(id)arg1 near:(SCD_Struct_MK1)arg2 ;
+(id)URLForAddress:(id)arg1 ;
+(id)URLForAddress:(id)arg1 label:(id)arg2 ;
+(id)URLForCoordinate:(SCD_Struct_MK1)arg1 ;
+(id)URLForCoordinate:(SCD_Struct_MK1)arg1 label:(id)arg2 ;
+(id)URLForDirectionsFromHereTo:(id)arg1 transport:(unsigned)arg2 ;
+(id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 transport:(unsigned)arg3 ;
+(id)URLForDirectionsFromHereTo:(id)arg1 ;
+(id)URLForSearch:(id)arg1 at:(SCD_Struct_MK1)arg2 span:(SCD_Struct_MK1)arg3 ;
+(id)URLForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3 ;
+(id)URLForCoordinate:(SCD_Struct_MK1)arg1 address:(id)arg2 label:(id)arg3 ;
-(void)setTransportType:(unsigned)arg1 ;
-(void)setDisplayRegion:(SCD_Struct_MK2)arg1 ;
-(id)initForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 ;
-(id)initForCoordinate:(SCD_Struct_MK1)arg1 label:(id)arg2 ;
-(void)setBusinessAddress:(id)arg1 ;
-(void)setSearchLocation:(SCD_Struct_MK1)arg1 zoomLevel:(float)arg2 ;
-(void)setContentProvider:(id)arg1 ;
-(id)initForAddress:(id)arg1 label:(id)arg2 ;
-(void)setStartAddress:(id)arg1 ;
-(id)buildForWeb;
-(id)initForCoordinate:(SCD_Struct_MK1)arg1 address:(id)arg2 label:(id)arg3 ;
-(id)initForDirectionsTo:(id)arg1 ;
-(void)setBusinessCoordinate:(SCD_Struct_MK1)arg1 ;
-(void)setNear:(SCD_Struct_MK1)arg1 ;
-(void)setSearchLocation:(SCD_Struct_MK1)arg1 span:(SCD_Struct_MK1)arg2 ;
-(void)setMapType:(unsigned)arg1 ;
-(id)initForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3 ;
-(id)initForSearch:(id)arg1 ;
-(id)build;
@end


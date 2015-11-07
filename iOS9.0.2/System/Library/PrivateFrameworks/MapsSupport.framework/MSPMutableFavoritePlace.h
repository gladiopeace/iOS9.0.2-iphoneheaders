/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <MapsSupport/MSPMutableFavorite.h>
#import <libobjc.A.dylib/MSPFavoritePlace.h>

@class NSString;

@interface MSPMutableFavoritePlace : MSPMutableFavorite <MSPFavoritePlace>

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) id<GEOMapItemPrivate> geoMapItem; 
@property (assign,nonatomic) SCD_Struct_MS2 coordinateOfDroppedPin; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)immutableObjectClass;
+(id)mutableObjectProtocol;
+(id)immutableObjectProtocol;
+(Class)mutableObjectClass;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id<GEOMapItemPrivate>)geoMapItem;
-(id)transferToImmutableWithError:(out id*)arg1 ;
-(id)initWithBookmarkStorage:(id)arg1 ;
-(SCD_Struct_MS2)coordinateOfDroppedPin;
-(void)setCoordinateOfDroppedPin:(SCD_Struct_MS2)arg1 ;
-(void)setGeoMapItem:(id<GEOMapItemPrivate>)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/MSPMutableFavorite.h>
#import <libobjc.A.dylib/MSPFavoriteRegion.h>

@class NSString, GEOMapRegion;

@interface MSPMutableFavoriteRegion : MSPMutableFavorite <MSPFavoriteRegion>

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) GEOMapRegion * geoMapRegion; 
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
-(GEOMapRegion *)geoMapRegion;
-(void)setGeoMapRegion:(GEOMapRegion *)arg1 ;
-(id)transferToImmutableWithError:(out id*)arg1 ;
-(id)initWithBookmarkStorage:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOMapItem;
@interface GEOSuggestedDestination : NSObject <NSSecureCoding> {

	unsigned _classification;
	id<GEOMapItem> _mapItem;
	int _transportType;
	int _loiType;

}

@property (assign,nonatomic) unsigned classification;              //@synthesize classification=_classification - In the implementation block
@property (nonatomic,retain) id<GEOMapItem> mapItem;               //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) int transportType;                    //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) int loiType;                          //@synthesize loiType=_loiType - In the implementation block
+(char)supportsSecureCoding;
-(id<GEOMapItem>)mapItem;
-(void)setMapItem:(id<GEOMapItem>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
-(void)setLoiType:(int)arg1 ;
-(int)loiType;
-(void)setClassification:(unsigned)arg1 ;
-(unsigned)classification;
@end


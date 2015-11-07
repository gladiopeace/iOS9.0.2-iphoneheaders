/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOUsageCollection : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	long long _requestErrorCode;
	SCD_Struct_GE89* _tileUsages;
	unsigned _tileUsagesCount;
	unsigned _tileUsagesSpace;
	double _timestamp;
	int _cellWifi;
	NSString* _countryCode;
	int _geoService;
	NSString* _hwMachine;
	int _placeRequestType;
	int _requestDataSize;
	NSString* _requestErrorDescription;
	NSString* _requestErrorDomain;
	int _responseDataSize;
	int _responseTime;
	char _sessionIDIsPersistent;
	SCD_Struct_GE66 _has;

}

@property (assign,nonatomic) char hasGeoService; 
@property (assign,nonatomic) int geoService;                                  //@synthesize geoService=_geoService - In the implementation block
@property (assign,nonatomic) char hasRequestDataSize; 
@property (assign,nonatomic) int requestDataSize;                             //@synthesize requestDataSize=_requestDataSize - In the implementation block
@property (assign,nonatomic) char hasResponseDataSize; 
@property (assign,nonatomic) int responseDataSize;                            //@synthesize responseDataSize=_responseDataSize - In the implementation block
@property (assign,nonatomic) char hasResponseTime; 
@property (assign,nonatomic) int responseTime;                                //@synthesize responseTime=_responseTime - In the implementation block
@property (assign,nonatomic) char hasCellWifi; 
@property (assign,nonatomic) int cellWifi;                                    //@synthesize cellWifi=_cellWifi - In the implementation block
@property (nonatomic,readonly) char hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                          //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned tileUsagesCount; 
@property (nonatomic,readonly) SCD_Struct_GE89* tileUsages; 
@property (nonatomic,readonly) char hasHwMachine; 
@property (nonatomic,retain) NSString * hwMachine;                            //@synthesize hwMachine=_hwMachine - In the implementation block
@property (assign,nonatomic) char hasSessionIDIsPersistent; 
@property (assign,nonatomic) char sessionIDIsPersistent;                      //@synthesize sessionIDIsPersistent=_sessionIDIsPersistent - In the implementation block
@property (assign,nonatomic) char hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType;                            //@synthesize placeRequestType=_placeRequestType - In the implementation block
@property (nonatomic,readonly) char hasRequestErrorDomain; 
@property (nonatomic,retain) NSString * requestErrorDomain;                   //@synthesize requestErrorDomain=_requestErrorDomain - In the implementation block
@property (assign,nonatomic) char hasRequestErrorCode; 
@property (assign,nonatomic) long long requestErrorCode;                      //@synthesize requestErrorCode=_requestErrorCode - In the implementation block
@property (nonatomic,readonly) char hasRequestErrorDescription; 
@property (nonatomic,retain) NSString * requestErrorDescription;              //@synthesize requestErrorDescription=_requestErrorDescription - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(SCD_Struct_GE4)sessionID;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(char)hasCountryCode;
-(char)hasGeoService;
-(void)setHasCellWifi:(char)arg1 ;
-(SCD_Struct_GE89*)tileUsages;
-(void)setHasPlaceRequestType:(char)arg1 ;
-(void)setCellWifi:(int)arg1 ;
-(void)setRequestDataSize:(int)arg1 ;
-(char)hasCellWifi;
-(int)placeRequestType;
-(NSString *)requestErrorDomain;
-(void)addTileUsage:(SCD_Struct_GE89)arg1 ;
-(void)setRequestErrorDomain:(NSString *)arg1 ;
-(NSString *)hwMachine;
-(void)setSessionIDIsPersistent:(char)arg1 ;
-(void)setPlaceRequestType:(int)arg1 ;
-(unsigned)tileUsagesCount;
-(char)hasResponseTime;
-(void)setRequestErrorDescription:(NSString *)arg1 ;
-(char)hasSessionIDIsPersistent;
-(void)setHasResponseTime:(char)arg1 ;
-(void)setHasGeoService:(char)arg1 ;
-(SCD_Struct_GE89)tileUsageAtIndex:(unsigned)arg1 ;
-(void)setHasSessionIDIsPersistent:(char)arg1 ;
-(int)cellWifi;
-(char)hasRequestErrorCode;
-(char)sessionIDIsPersistent;
-(char)hasResponseDataSize;
-(int)geoService;
-(char)hasRequestErrorDescription;
-(void)setHasResponseDataSize:(char)arg1 ;
-(long long)requestErrorCode;
-(void)setResponseTime:(int)arg1 ;
-(int)responseTime;
-(void)clearTileUsages;
-(void)setGeoService:(int)arg1 ;
-(int)responseDataSize;
-(char)hasHwMachine;
-(void)setHasRequestErrorCode:(char)arg1 ;
-(int)requestDataSize;
-(char)hasRequestDataSize;
-(void)setTileUsages:(SCD_Struct_GE89*)arg1 count:(unsigned)arg2 ;
-(void)setHasRequestDataSize:(char)arg1 ;
-(void)setRequestErrorCode:(long long)arg1 ;
-(void)setResponseDataSize:(int)arg1 ;
-(void)setHwMachine:(NSString *)arg1 ;
-(char)hasPlaceRequestType;
-(NSString *)requestErrorDescription;
-(char)hasRequestErrorDomain;
-(char)readFrom:(id)arg1 ;
@end


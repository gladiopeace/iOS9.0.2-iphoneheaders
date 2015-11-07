/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOAddressCorrectionUpdateResponse : PBCodable <NSCopying> {

	unsigned _retryScheduleInDays;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) char hasRetryScheduleInDays; 
@property (assign,nonatomic) unsigned retryScheduleInDays;              //@synthesize retryScheduleInDays=_retryScheduleInDays - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasRetryScheduleInDays;
-(unsigned)retryScheduleInDays;
-(void)setHasRetryScheduleInDays:(char)arg1 ;
-(void)setRetryScheduleInDays:(unsigned)arg1 ;
-(char)readFrom:(id)arg1 ;
@end


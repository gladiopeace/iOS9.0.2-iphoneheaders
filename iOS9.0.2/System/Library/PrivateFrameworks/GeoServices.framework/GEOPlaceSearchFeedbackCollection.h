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

@class NSMutableArray;

@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	unsigned long long _businessID;
	long long _placeID;
	NSMutableArray* _actionCaptures;
	int _localSearchProviderID;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) char hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID;                //@synthesize businessID=_businessID - In the implementation block
@property (assign,nonatomic) char hasPlaceID; 
@property (assign,nonatomic) long long placeID;                            //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionCaptures;              //@synthesize actionCaptures=_actionCaptures - In the implementation block
@property (assign,nonatomic) char hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                    //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(SCD_Struct_GE4)sessionID;
-(int)localSearchProviderID;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasLocalSearchProviderID:(char)arg1 ;
-(char)hasLocalSearchProviderID;
-(unsigned long long)businessID;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(char)hasBusinessID;
-(void)setHasBusinessID:(char)arg1 ;
-(unsigned)actionCapturesCount;
-(id)actionCaptureAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)actionCaptures;
-(void)setPlaceID:(long long)arg1 ;
-(void)setHasPlaceID:(char)arg1 ;
-(void)setActionCaptures:(NSMutableArray *)arg1 ;
-(long long)placeID;
-(void)clearActionCaptures;
-(void)addActionCapture:(id)arg1 ;
-(char)hasPlaceID;
-(char)readFrom:(id)arg1 ;
@end


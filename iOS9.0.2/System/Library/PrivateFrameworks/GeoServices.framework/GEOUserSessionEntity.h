/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString, NSNumber;

@interface GEOUserSessionEntity : NSObject {

	SCD_Struct_GE4 _sessionID;
	unsigned _sequenceNumber;
	double _sessionCreationTime;

}

@property (assign) SCD_Struct_GE4 sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                       //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign) double sessionCreationTime;                              //@synthesize sessionCreationTime=_sessionCreationTime - In the implementation block
@property (nonatomic,readonly) NSString * sessionEntityString; 
@property (nonatomic,readonly) NSString * sessionIDString; 
@property (nonatomic,readonly) NSString * sessionUUIDString; 
@property (nonatomic,readonly) NSNumber * sessionIDLow; 
@property (nonatomic,readonly) NSNumber * sessionIDHigh; 
@property (nonatomic,readonly) NSString * sessionIDLowString; 
@property (nonatomic,readonly) NSString * sessionIDHighString; 
-(id)init;
-(id)description;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(SCD_Struct_GE4)sessionID;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(NSString *)sessionIDHighString;
-(NSNumber *)sessionIDHigh;
-(id)initWithSessionEntityString:(id)arg1 ;
-(NSString *)sessionIDLowString;
-(NSNumber *)sessionIDLow;
-(NSString *)sessionEntityString;
-(void)updateSessionIDFromUUIDString:(id)arg1 ;
-(void)setSessionCreationTime:(double)arg1 ;
-(NSString *)sessionUUIDString;
-(id)initWithSessionID:(SCD_Struct_GE4)arg1 sessionCreationTime:(double)arg2 sequenceNumber:(unsigned)arg3 ;
-(char)_isValidSessionIDHighOrLowString:(id)arg1 ;
-(void)updateWithSessionEntityString:(id)arg1 ;
-(double)sessionCreationTime;
-(NSString *)sessionIDString;
@end


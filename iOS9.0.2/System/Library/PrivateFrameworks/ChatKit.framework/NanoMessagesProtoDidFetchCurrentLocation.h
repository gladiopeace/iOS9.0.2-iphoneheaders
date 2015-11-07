/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/companionmessagesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companionmessagesd/companionmessagesd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLLocation, NSError;

@interface NanoMessagesProtoDidFetchCurrentLocation : PBCodable <NSCopying> {

	double _locationAltitude;
	double _locationCourse;
	double _locationHorizontalAccuracy;
	double _locationLatitude;
	double _locationLongitude;
	double _locationSpeed;
	double _locationTimestamp;
	double _locationVerticalAccuracy;
	int _errorCode;
	NSString* _errorDomain;
	SCD_Struct_Na2 _has;

}

@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) NSError * error; 
@property (assign,nonatomic) char hasLocationLatitude; 
@property (assign,nonatomic) double locationLatitude;                         //@synthesize locationLatitude=_locationLatitude - In the implementation block
@property (assign,nonatomic) char hasLocationLongitude; 
@property (assign,nonatomic) double locationLongitude;                        //@synthesize locationLongitude=_locationLongitude - In the implementation block
@property (assign,nonatomic) char hasLocationAltitude; 
@property (assign,nonatomic) double locationAltitude;                         //@synthesize locationAltitude=_locationAltitude - In the implementation block
@property (assign,nonatomic) char hasLocationHorizontalAccuracy; 
@property (assign,nonatomic) double locationHorizontalAccuracy;               //@synthesize locationHorizontalAccuracy=_locationHorizontalAccuracy - In the implementation block
@property (assign,nonatomic) char hasLocationVerticalAccuracy; 
@property (assign,nonatomic) double locationVerticalAccuracy;                 //@synthesize locationVerticalAccuracy=_locationVerticalAccuracy - In the implementation block
@property (assign,nonatomic) char hasLocationCourse; 
@property (assign,nonatomic) double locationCourse;                           //@synthesize locationCourse=_locationCourse - In the implementation block
@property (assign,nonatomic) char hasLocationSpeed; 
@property (assign,nonatomic) double locationSpeed;                            //@synthesize locationSpeed=_locationSpeed - In the implementation block
@property (assign,nonatomic) char hasLocationTimestamp; 
@property (assign,nonatomic) double locationTimestamp;                        //@synthesize locationTimestamp=_locationTimestamp - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) char hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                          //@synthesize errorDomain=_errorDomain - In the implementation block
-(void)setHasLocationLatitude:(char)arg1 ;
-(char)hasLocationLatitude;
-(void)setHasLocationLongitude:(char)arg1 ;
-(char)hasLocationLongitude;
-(void)setHasLocationAltitude:(char)arg1 ;
-(char)hasLocationAltitude;
-(void)setHasLocationHorizontalAccuracy:(char)arg1 ;
-(char)hasLocationHorizontalAccuracy;
-(void)setHasLocationVerticalAccuracy:(char)arg1 ;
-(char)hasLocationVerticalAccuracy;
-(void)setLocationCourse:(double)arg1 ;
-(void)setHasLocationCourse:(char)arg1 ;
-(char)hasLocationCourse;
-(void)setHasLocationSpeed:(char)arg1 ;
-(char)hasLocationSpeed;
-(void)setLocationTimestamp:(double)arg1 ;
-(void)setHasLocationTimestamp:(char)arg1 ;
-(char)hasLocationTimestamp;
-(double)locationCourse;
-(double)locationTimestamp;
-(void)setLocationSpeed:(double)arg1 ;
-(double)locationSpeed;
-(double)locationLatitude;
-(double)locationLongitude;
-(NSError *)error;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocation *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)errorCode;
-(NSString *)errorDomain;
-(char)hasErrorCode;
-(void)setErrorDomain:(NSString *)arg1 ;
-(char)hasErrorDomain;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(char)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(double)locationAltitude;
-(double)locationHorizontalAccuracy;
-(double)locationVerticalAccuracy;
-(void)setLocationLatitude:(double)arg1 ;
-(void)setLocationLongitude:(double)arg1 ;
-(void)setLocationAltitude:(double)arg1 ;
-(void)setLocationHorizontalAccuracy:(double)arg1 ;
-(void)setLocationVerticalAccuracy:(double)arg1 ;
@end


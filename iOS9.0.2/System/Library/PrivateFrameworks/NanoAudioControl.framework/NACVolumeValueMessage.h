/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NACVolumeValueMessage : PBCodable <NSCopying> {

	NSString* _category;
	float _volumeValue;
	SCD_Struct_NA1 _has;

}

@property (assign,nonatomic) char hasVolumeValue; 
@property (assign,nonatomic) float volumeValue;                //@synthesize volumeValue=_volumeValue - In the implementation block
@property (nonatomic,readonly) char hasCategory; 
@property (nonatomic,retain) NSString * category;              //@synthesize category=_category - In the implementation block
-(void)setVolumeValue:(float)arg1 ;
-(float)volumeValue;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasCategory;
-(void)setHasVolumeValue:(char)arg1 ;
-(char)hasVolumeValue;
-(char)readFrom:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companioncamerad/companioncamerad-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NCSetFocusPointRequest : PBRequest <NSCopying> {

	SCD_Struct_NC1* _points;

}

@property (nonatomic,readonly) unsigned pointsCount; 
@property (nonatomic,readonly) float* points; 
-(void)setPoints:(float*)arg1 count:(unsigned)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addPoint:(float)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearPoints;
-(float)pointAtIndex:(unsigned)arg1 ;
-(unsigned)pointsCount;
-(float*)points;
-(char)readFrom:(id)arg1 ;
@end


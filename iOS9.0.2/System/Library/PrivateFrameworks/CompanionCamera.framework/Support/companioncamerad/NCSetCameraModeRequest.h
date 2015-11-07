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

@interface NCSetCameraModeRequest : PBRequest <NSCopying> {

	int _mode;
	SCD_Struct_NC3 _has;

}

@property (assign,nonatomic) char hasMode; 
@property (assign,nonatomic) int mode;                  //@synthesize mode=_mode - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasMode:(char)arg1 ;
-(char)hasMode;
-(char)readFrom:(id)arg1 ;
@end


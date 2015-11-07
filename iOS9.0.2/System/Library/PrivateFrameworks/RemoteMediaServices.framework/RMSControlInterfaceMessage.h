/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMSControlInterfaceMessage : PBCodable <NSCopying> {

	char _supportsDirectionalControl;
	char _supportsSpeakerSelection;
	char _supportsVolumeControl;
	SCD_Struct_RM5 _has;

}

@property (assign,nonatomic) char hasSupportsSpeakerSelection; 
@property (assign,nonatomic) char supportsSpeakerSelection;                   //@synthesize supportsSpeakerSelection=_supportsSpeakerSelection - In the implementation block
@property (assign,nonatomic) char hasSupportsVolumeControl; 
@property (assign,nonatomic) char supportsVolumeControl;                      //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (assign,nonatomic) char hasSupportsDirectionalControl; 
@property (assign,nonatomic) char supportsDirectionalControl;                 //@synthesize supportsDirectionalControl=_supportsDirectionalControl - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setSupportsSpeakerSelection:(char)arg1 ;
-(void)setHasSupportsSpeakerSelection:(char)arg1 ;
-(char)hasSupportsSpeakerSelection;
-(void)setSupportsVolumeControl:(char)arg1 ;
-(void)setHasSupportsVolumeControl:(char)arg1 ;
-(char)hasSupportsVolumeControl;
-(void)setSupportsDirectionalControl:(char)arg1 ;
-(void)setHasSupportsDirectionalControl:(char)arg1 ;
-(char)hasSupportsDirectionalControl;
-(char)supportsSpeakerSelection;
-(char)supportsVolumeControl;
-(char)supportsDirectionalControl;
@end


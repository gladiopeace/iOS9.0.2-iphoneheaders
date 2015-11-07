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

@interface GEOETARequestAttributes : PBCodable <NSCopying> {

	char _includeAggressiveEstimate;
	char _includeBestEstimate;
	char _includeConservativeEstimate;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) char hasIncludeAggressiveEstimate; 
@property (assign,nonatomic) char includeAggressiveEstimate;                   //@synthesize includeAggressiveEstimate=_includeAggressiveEstimate - In the implementation block
@property (assign,nonatomic) char hasIncludeBestEstimate; 
@property (assign,nonatomic) char includeBestEstimate;                         //@synthesize includeBestEstimate=_includeBestEstimate - In the implementation block
@property (assign,nonatomic) char hasIncludeConservativeEstimate; 
@property (assign,nonatomic) char includeConservativeEstimate;                 //@synthesize includeConservativeEstimate=_includeConservativeEstimate - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)includeAggressiveEstimate;
-(char)includeBestEstimate;
-(void)setIncludeBestEstimate:(char)arg1 ;
-(void)setIncludeConservativeEstimate:(char)arg1 ;
-(char)includeConservativeEstimate;
-(char)hasIncludeAggressiveEstimate;
-(char)hasIncludeConservativeEstimate;
-(char)hasIncludeBestEstimate;
-(void)setIncludeAggressiveEstimate:(char)arg1 ;
-(void)setHasIncludeAggressiveEstimate:(char)arg1 ;
-(void)setHasIncludeBestEstimate:(char)arg1 ;
-(void)setHasIncludeConservativeEstimate:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end


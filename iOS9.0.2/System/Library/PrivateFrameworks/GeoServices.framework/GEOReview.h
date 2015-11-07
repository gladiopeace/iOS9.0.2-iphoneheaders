/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOUser;

@interface GEOReview : PBCodable <NSCopying> {

	double _reviewTime;
	double _score;
	NSString* _languageCode;
	GEOUser* _reviewer;
	NSString* _snippet;
	NSString* _uid;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) char hasSnippet; 
@property (nonatomic,retain) NSString * snippet;                   //@synthesize snippet=_snippet - In the implementation block
@property (assign,nonatomic) char hasScore; 
@property (assign,nonatomic) double score;                         //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) char hasReviewTime; 
@property (assign,nonatomic) double reviewTime;                    //@synthesize reviewTime=_reviewTime - In the implementation block
@property (nonatomic,readonly) char hasReviewer; 
@property (nonatomic,retain) GEOUser * reviewer;                   //@synthesize reviewer=_reviewer - In the implementation block
@property (nonatomic,readonly) char hasUid; 
@property (nonatomic,retain) NSString * uid;                       //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) char hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
-(double)score;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uid;
-(NSString *)languageCode;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(char)hasLanguageCode;
-(char)hasUid;
-(void)setUid:(NSString *)arg1 ;
-(void)setHasScore:(char)arg1 ;
-(char)hasScore;
-(void)setScore:(double)arg1 ;
-(GEOUser *)reviewer;
-(void)setSnippet:(NSString *)arg1 ;
-(double)reviewTime;
-(char)hasSnippet;
-(void)setReviewTime:(double)arg1 ;
-(NSString *)snippet;
-(char)hasReviewTime;
-(void)setHasReviewTime:(char)arg1 ;
-(void)setReviewer:(GEOUser *)arg1 ;
-(char)hasReviewer;
-(char)readFrom:(id)arg1 ;
@end


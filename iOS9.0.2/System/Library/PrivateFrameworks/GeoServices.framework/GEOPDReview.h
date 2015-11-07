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

@class GEOPDRating, NSString, GEOPDUser, NSMutableArray;

@interface GEOPDReview : PBCodable <NSCopying> {

	double _reviewTime;
	GEOPDRating* _rating;
	NSString* _reviewId;
	GEOPDUser* _reviewer;
	NSMutableArray* _snippets;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSMutableArray * snippets;              //@synthesize snippets=_snippets - In the implementation block
@property (assign,nonatomic) char hasReviewTime; 
@property (assign,nonatomic) double reviewTime;                      //@synthesize reviewTime=_reviewTime - In the implementation block
@property (nonatomic,readonly) char hasReviewer; 
@property (nonatomic,retain) GEOPDUser * reviewer;                   //@synthesize reviewer=_reviewer - In the implementation block
@property (nonatomic,readonly) char hasReviewId; 
@property (nonatomic,retain) NSString * reviewId;                    //@synthesize reviewId=_reviewId - In the implementation block
@property (nonatomic,readonly) char hasRating; 
@property (nonatomic,retain) GEOPDRating * rating;                   //@synthesize rating=_rating - In the implementation block
+(id)reviewsForPlaceData:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDUser *)reviewer;
-(double)reviewTime;
-(void)setReviewTime:(double)arg1 ;
-(char)hasReviewTime;
-(void)setHasReviewTime:(char)arg1 ;
-(void)setReviewer:(GEOPDUser *)arg1 ;
-(char)hasReviewer;
-(id)_bestSnippet;
-(char)hasReviewId;
-(NSString *)reviewId;
-(GEOPDRating *)rating;
-(void)setRating:(GEOPDRating *)arg1 ;
-(NSMutableArray *)snippets;
-(void)clearSnippets;
-(void)addSnippet:(id)arg1 ;
-(id)snippetAtIndex:(unsigned)arg1 ;
-(char)hasRating;
-(void)setReviewId:(NSString *)arg1 ;
-(unsigned)snippetsCount;
-(void)setSnippets:(NSMutableArray *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end


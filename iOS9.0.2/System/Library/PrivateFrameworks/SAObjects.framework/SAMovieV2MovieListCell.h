/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, SAMovieV2MovieDetailSnippet, NSString, NSNumber, NSDate;

@interface SAMovieV2MovieListCell : SADomainObject

@property (nonatomic,copy) NSArray * displayableShowtimes; 
@property (nonatomic,retain) SAMovieV2MovieDetailSnippet * movieDetailSnippet; 
@property (nonatomic,copy) NSString * movieName; 
@property (nonatomic,copy) NSArray * posterImages; 
@property (nonatomic,copy) NSNumber * qualityRating; 
@property (nonatomic,copy) NSString * rating; 
@property (nonatomic,copy) NSDate * theatricalReleaseDate; 
+(id)movieListCell;
+(id)movieListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)rating;
-(void)setRating:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)displayableShowtimes;
-(void)setDisplayableShowtimes:(NSArray *)arg1 ;
-(SAMovieV2MovieDetailSnippet *)movieDetailSnippet;
-(void)setMovieDetailSnippet:(SAMovieV2MovieDetailSnippet *)arg1 ;
-(NSString *)movieName;
-(void)setMovieName:(NSString *)arg1 ;
-(NSArray *)posterImages;
-(void)setPosterImages:(NSArray *)arg1 ;
-(NSNumber *)qualityRating;
-(void)setQualityRating:(NSNumber *)arg1 ;
-(NSDate *)theatricalReleaseDate;
-(void)setTheatricalReleaseDate:(NSDate *)arg1 ;
@end


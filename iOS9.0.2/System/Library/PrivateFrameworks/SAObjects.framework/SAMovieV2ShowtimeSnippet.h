/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SAUIImageResource, NSString, NSArray, SALocalSearchBusiness2;

@interface SAMovieV2ShowtimeSnippet : SAUISnippet

@property (nonatomic,retain) SAUIImageResource * attributionLogo; 
@property (nonatomic,copy) NSString * movieName; 
@property (nonatomic,copy) NSArray * showtimes; 
@property (nonatomic,retain) SALocalSearchBusiness2 * theater; 
@property (nonatomic,copy) NSString * theaterName; 
+(id)showtimeSnippet;
+(id)showtimeSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)movieName;
-(void)setMovieName:(NSString *)arg1 ;
-(NSArray *)showtimes;
-(void)setShowtimes:(NSArray *)arg1 ;
-(SALocalSearchBusiness2 *)theater;
-(void)setTheater:(SALocalSearchBusiness2 *)arg1 ;
-(NSString *)theaterName;
-(void)setTheaterName:(NSString *)arg1 ;
-(SAUIImageResource *)attributionLogo;
-(void)setAttributionLogo:(SAUIImageResource *)arg1 ;
@end


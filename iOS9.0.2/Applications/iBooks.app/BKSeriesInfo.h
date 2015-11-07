/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKSeriesInfo.h>
@class NSString, NSArray, NSURL;


@protocol BKSeriesInfo <NSObject>
@property (readonly) NSString * adamId; 
@property (readonly) NSString * author; 
@property (readonly) char isExplicit; 
@property (readonly) char isContainer; 
@property (readonly) float popularity; 
@property (readonly) NSString * seriesId; 
@property (readonly) NSString * seriesTitle; 
@property (readonly) NSString * genre; 
@property (readonly) unsigned sequenceNumber; 
@property (readonly) NSString * sequenceDisplayName; 
@property (readonly) NSString * title; 
@property (readonly) NSArray * children; 
@property (readonly) NSArray * childrenIds; 
@property (readonly) NSArray * genreNames; 
@property (readonly) NSArray * genres; 
@property (readonly) NSString * kind; 
@property (readonly) NSString * name; 
@property (readonly) NSString * nameRaw; 
@property (readonly) NSURL * shortUrl; 
@property (readonly) NSString * tellAFriendMessageContentsUrl; 
@required
-(NSString *)seriesId;
-(float)popularity;
-(NSString *)seriesTitle;
-(NSString *)sequenceDisplayName;
-(NSArray *)childrenIds;
-(NSString *)nameRaw;
-(NSURL *)shortUrl;
-(NSString *)genre;
-(NSArray *)genreNames;
-(char)isContainer;
-(NSString *)name;
-(NSString *)title;
-(NSString *)kind;
-(NSString *)tellAFriendMessageContentsUrl;
-(unsigned)sequenceNumber;
-(char)isExplicit;
-(NSArray *)children;
-(NSString *)author;
-(NSString *)adamId;
-(NSArray *)genres;

@end


@class NSString, NSArray, NSURL, NSDictionary;

@interface BKSeriesInfo : NSObject <BKSeriesInfo> {

	NSDictionary* _infoDictionary;

}

@property (copy) NSDictionary * infoDictionary;                             //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * adamId; 
@property (readonly) NSString * author; 
@property (readonly) char isExplicit; 
@property (readonly) char isContainer; 
@property (readonly) float popularity; 
@property (readonly) NSString * seriesId; 
@property (readonly) NSString * seriesTitle; 
@property (readonly) NSString * genre; 
@property (readonly) unsigned sequenceNumber; 
@property (readonly) NSString * sequenceDisplayName; 
@property (readonly) NSString * title; 
@property (readonly) NSArray * children; 
@property (readonly) NSArray * childrenIds; 
@property (readonly) NSArray * genreNames; 
@property (readonly) NSArray * genres; 
@property (readonly) NSString * kind; 
@property (readonly) NSString * name; 
@property (readonly) NSString * nameRaw; 
@property (readonly) NSURL * shortUrl; 
@property (readonly) NSString * tellAFriendMessageContentsUrl; 
+(id)seriesInfoWithDictionary:(id)arg1 ;
-(NSString *)seriesId;
-(float)popularity;
-(NSString *)seriesTitle;
-(NSString *)sequenceDisplayName;
-(NSArray *)childrenIds;
-(NSString *)nameRaw;
-(NSURL *)shortUrl;
-(NSString *)genre;
-(NSArray *)genreNames;
-(char)isContainer;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSDictionary *)infoDictionary;
-(NSString *)title;
-(NSString *)kind;
-(NSString *)tellAFriendMessageContentsUrl;
-(unsigned)sequenceNumber;
-(char)isExplicit;
-(void)setInfoDictionary:(NSDictionary *)arg1 ;
-(NSArray *)children;
-(NSString *)author;
-(NSString *)adamId;
-(NSArray *)genres;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKLocation, NSMutableDictionary, NSString;

@interface BKHistoryEntity : NSObject {

	BKLocation* _location;
	NSMutableDictionary* _pagination;
	NSString* _pageTitle;

}

@property (nonatomic,retain) BKLocation * location;                 //@synthesize location=_location - In the implementation block
@property (readonly) NSMutableDictionary * pagination;              //@synthesize pagination=_pagination - In the implementation block
@property (nonatomic,retain) NSString * pageTitle;                  //@synthesize pageTitle=_pageTitle - In the implementation block
-(int)pageForLookupKey:(id)arg1 ;
-(void)setPage:(int)arg1 forLookupKey:(id)arg2 ;
-(NSMutableDictionary *)pagination;
-(void)setPageTitle:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BKLocation *)location;
-(void)setLocation:(BKLocation *)arg1 ;
-(NSString *)pageTitle;
@end


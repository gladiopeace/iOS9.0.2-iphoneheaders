/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKBookInfo, NSDictionary;

@interface BKLibraryBookListItemViewModel : NSObject {

	BKBookInfo* _bookInfo;
	NSDictionary* _priceDictionary;

}

@property (nonatomic,retain) BKBookInfo * bookInfo;                       //@synthesize bookInfo=_bookInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * priceDictionary;              //@synthesize priceDictionary=_priceDictionary - In the implementation block
-(BKBookInfo *)bookInfo;
-(NSDictionary *)priceDictionary;
-(void)setPriceDictionary:(NSDictionary *)arg1 ;
-(id)initWithBook:(id)arg1 ;
-(void)setBookInfo:(BKBookInfo *)arg1 ;
-(id)priceString;
@end


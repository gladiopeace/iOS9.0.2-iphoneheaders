/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AEBookInfo;

@interface BKBookParser : NSObject {

	AEBookInfo* _book;

}

@property (nonatomic,readonly) AEBookInfo * book;              //@synthesize book=_book - In the implementation block
+(id)generateFileUniqueIdFromPath:(id)arg1 ;
+(char)canParse:(id)arg1 ;
+(id)parserForBook:(id)arg1 ;
-(id)initWithBook:(id)arg1 ;
-(AEBookInfo *)book;
-(void)dealloc;
-(int)parse:(char)arg1 ;
@end


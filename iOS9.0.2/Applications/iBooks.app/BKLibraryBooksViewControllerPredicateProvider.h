/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface BKLibraryBooksViewControllerPredicateProvider : NSObject {

	NSString* _sortKey;

}

@property (nonatomic,retain) NSString * sortKey;              //@synthesize sortKey=_sortKey - In the implementation block
+(id)providerWithType:(int)arg1 collection:(id)arg2 ;
-(id)sortDescriptorsForLibraryBooksViewController:(id)arg1 ;
-(id)embeddedHeaderPredicateForLibraryBooksViewController:(id)arg1 ;
-(void)setSortKey:(NSString *)arg1 ;
-(NSString *)sortKey;
@end


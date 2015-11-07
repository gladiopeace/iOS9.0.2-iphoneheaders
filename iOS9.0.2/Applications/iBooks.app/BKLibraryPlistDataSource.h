/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKLibraryDataSource.h>

@class NSFileManager;

@interface BKLibraryPlistDataSource : BKLibraryDataSource {

	NSFileManager* _fileManager;

}
+(void)readRightsInfoFromAssetURL:(id)arg1 intoBook:(id)arg2 ;
+(id)bookWithPath:(id)arg1 uniqueId:(id)arg2 storeId:(id)arg3 managedObjectContext:(id)arg4 currentBookInfo:(id)arg5 ;
+(int)libraryReloadFlag;
+(id)bookFromDownloadInfo:(id)arg1 moc:(id)arg2 ;
+(id)bookMatchingPlistEntry:(id)arg1 managedObjectContext:(id)arg2 ;
+(id)fullPathKey;
+(id)fileExistsKey;
+(void)populateBook:(id)arg1 fromPlistEntry:(id)arg2 ;
+(id)databaseKeyFromPlistEntry:(id)arg1 ;
+(id)bookWithPath:(id)arg1 uniqueId:(id)arg2 storeId:(id)arg3 managedObjectContext:(id)arg4 ;
+(void)setPropertiesOfBook:(id)arg1 withPlistEntry:(id)arg2 ;
-(void)executeProcess;
-(char)_isFamilyPurchaseAtPath:(id)arg1 ;
-(id)plists;
-(char)_isEntryFamilyPurchase:(id)arg1 ;
-(void)deletePlistEntries:(id)arg1 ;
-(id)unionPlistContents;
-(void)processInventory:(id)arg1 ;
-(void)setPropertiesOfBook:(id)arg1 withPlistEntry:(id)arg2 isNewBook:(char)arg3 ;
-(id)excludeMatchingBookRows:(id)arg1 ;
-(id)reverseAlphebetizedPlistEntries:(id)arg1 ;
-(void)patchUpBooks:(id)arg1 ;
-(void)prefetchPreExistingSortKeys:(id)arg1 ;
-(void)processPromisedBooks:(id)arg1 ;
-(void)processExistingBooks:(id)arg1 ;
-(id)bookWithPath:(id)arg1 uniqueId:(id)arg2 storeId:(id)arg3 ;
-(void)patchUpBook:(id)arg1 withURL:(id)arg2 withPlistEntry:(id)arg3 ;
-(id)selectPlistEntryToKeep:(id)arg1 entry2:(id)arg2 ;
-(void)processSingleMatchingBook:(id)arg1 plistEntries:(id)arg2 ;
-(id)computePatchupBooksFilterWithPlistEntries:(id)arg1 ;
-(id)fileManager;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class ASSAccountsManager;

@interface MergeAndRemoveMobileMeAccounts : DataClassMigrator {

	ASSAccountsManager* _manager;

}
-(char)_mergeAccountDataToLocalStore:(id)arg1 ;
-(id)dataClassName;
-(char)_removeAccount:(id)arg1 ;
-(char)performMigration;
@end


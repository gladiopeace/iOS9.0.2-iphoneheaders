/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/LegacyMessageAccountsMigrator.migrator/LegacyMessageAccountsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class ACAccountStore, NSArray;

@interface LegacyMessageAccountsMigrator : DataClassMigrator {

	ACAccountStore* _accountStore;
	NSArray* _legacyMessageAccounts;
	unsigned _numberOfAccountsMigrated;

}
+(id)_legacyAccountsPlistPath;
-(id)initWithPath:(id)arg1 accountStore:(id)arg2 ;
-(char)specifyDefaultSendingAccountIfNotSet;
-(char)migrateLegacyAccounts;
-(float)migrationProgress;
-(float)estimatedDuration;
-(void)dealloc;
-(id)init;
-(id)dataClassName;
-(char)performMigration;
@end


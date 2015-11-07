/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HDSQLiteDatabase;

@interface HDDatabaseMigrator : NSObject {

	HDSQLiteDatabase* _database;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(id)init;
-(char)executeSQL:(id)arg1 error:(id*)arg2 ;
-(char)executeSQL:(id)arg1 argument:(id)arg2 error:(id*)arg3 ;
-(int)migrateProtectedDatabaseFromVersion:(int)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
-(int)migrateUnprotectedDatabaseFromVersion:(int)arg1 error:(id*)arg2 ;
-(id)initWithDatabase:(id)arg1 ;
-(char)executeSQLStatements:(id)arg1 error:(id*)arg2 ;
-(int)statusForUnhandledVersion:(int)arg1 error:(id*)arg2 ;
-(int)fatalStatusForVersion:(int)arg1 errorMessage:(id)arg2 error:(id*)arg3 ;
-(HDSQLiteDatabase *)database;
@end


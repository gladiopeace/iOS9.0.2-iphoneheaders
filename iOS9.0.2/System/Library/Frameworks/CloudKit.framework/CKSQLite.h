/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CloudKit/CloudKit-Structs.h>
@class NSString, NSMutableDictionary, NSDateFormatter;

@interface CKSQLite : NSObject {

	char _hasMigrated;
	char _shouldVacuum;
	char _corrupt;
	NSString* _path;
	NSString* _schema;
	NSString* _schemaVersion;
	NSString* _objectClassPrefix;
	long _userVersion;
	int _synchronousMode;
	sqlite3Ref _db;
	unsigned _openCount;
	NSMutableDictionary* _statementsBySQL;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,readonly) NSString * path;                                    //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * schema;                                  //@synthesize schema=_schema - In the implementation block
@property (nonatomic,readonly) NSString * schemaVersion;                           //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (nonatomic,retain) NSString * objectClassPrefix;                         //@synthesize objectClassPrefix=_objectClassPrefix - In the implementation block
@property (assign,nonatomic) long userVersion;                                     //@synthesize userVersion=_userVersion - In the implementation block
@property (assign,nonatomic) int synchronousMode;                                  //@synthesize synchronousMode=_synchronousMode - In the implementation block
@property (nonatomic,readonly) char isOpen; 
@property (nonatomic,readonly) char hasMigrated;                                   //@synthesize hasMigrated=_hasMigrated - In the implementation block
@property (assign,nonatomic) char shouldVacuum;                                    //@synthesize shouldVacuum=_shouldVacuum - In the implementation block
@property (assign,nonatomic) sqlite3Ref db;                                        //@synthesize db=_db - In the implementation block
@property (assign,nonatomic) unsigned openCount;                                   //@synthesize openCount=_openCount - In the implementation block
@property (assign,nonatomic) char corrupt;                                         //@synthesize corrupt=_corrupt - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * statementsBySQL;              //@synthesize statementsBySQL=_statementsBySQL - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                      //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(id)_createSchemaHash;
-(id)_synchronousModeString;
-(long)dbUserVersion;
-(void)removeAllStatements;
-(void)dropAllTables;
-(char)shouldVacuum;
-(void)_periodicVacuum;
-(void)executeSQL:(id)arg1 arguments:(void*)arg2 ;
-(id)statementForSQL:(id)arg1 ;
-(id)allTableNames;
-(id)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4 ;
-(id)_tableNameForClass:(Class)arg1 ;
-(id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(id)_boxedPropertyDictionary:(id)arg1 forObjCClass:(id)arg2 ;
-(id)_boxedValue:(id)arg1 forObjcCProperty:(id)arg2 ;
-(void)analyze;
-(void)vacuum;
-(id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(unsigned)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(NSString *)objectClassPrefix;
-(char)hasMigrated;
-(void)setShouldVacuum:(char)arg1 ;
-(unsigned)openCount;
-(void)setOpenCount:(unsigned)arg1 ;
-(char)corrupt;
-(void)setCorrupt:(char)arg1 ;
-(NSMutableDictionary *)statementsBySQL;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)removePropertyForKey:(id)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(id)creationDate;
-(void)dealloc;
-(NSString *)path;
-(void)end;
-(void)begin;
-(void)close;
-(void)remove;
-(long)userVersion;
-(sqlite3Ref)db;
-(void)setDb:(sqlite3Ref)arg1 ;
-(id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 ;
-(long long)insertOrReplaceInto:(id)arg1 values:(id)arg2 ;
-(void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(void)executeSQL:(id)arg1 ;
-(id)initWithPath:(id)arg1 schema:(id)arg2 ;
-(void)setUserVersion:(long)arg1 ;
-(char)openWithError:(id*)arg1 ;
-(void)setSynchronousMode:(int)arg1 ;
-(int)synchronousMode;
-(long long)insertOrReplaceObject:(id)arg1 ;
-(id)selectObjectOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4 ;
-(void)setObjectClassPrefix:(NSString *)arg1 ;
-(id)select:(id)arg1 from:(id)arg2 ;
-(id)datePropertyForKey:(id)arg1 ;
-(void)setDateProperty:(id)arg1 forKey:(id)arg2 ;
-(id)selectAllObjectsOfClass:(Class)arg1 ;
-(void)open;
-(long long)lastInsertRowID;
-(NSString *)schemaVersion;
-(void)raise:(id)arg1 ;
-(char)isOpen;
-(void)rollback;
-(NSString *)schema;
@end


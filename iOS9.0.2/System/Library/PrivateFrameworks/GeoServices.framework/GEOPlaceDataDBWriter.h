/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBWriter.h>

@interface GEOPlaceDataDBWriter : GEODBWriter {

	sqlite3_stmtRef _sqlInsertPhoneNumber;
	sqlite3_stmtRef _sqlInsertKeyString;
	sqlite3_stmtRef _sqlDeleteAllPhoneNumbers;
	sqlite3_stmtRef _sqlDeleteKeyStringForMUID;
	sqlite3_stmtRef _sqlDeletePlaceDataForMUID;
	char _canCreateDebugTable;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)clear;
-(void)_setMUID:(unsigned long long)arg1 forPhoneNumber:(long long)arg2 ;
-(void)_createKeyStringTable;
-(void)deletePlaceDataForMUID:(unsigned long long)arg1 ;
-(void)_openIfNecessary;
-(void)performStatementPreparationTasks;
-(void)_populateDBKey:(GEOTileKey*)arg1 forMUID:(unsigned long long)arg2 ;
-(void)_createPhoneNumberTable;
-(void)deletePhoneNumberMapping;
-(void)_setMUID:(id)arg1 forKey:(GEOTileKey)arg2 ;
-(void)performTableCreationTasks;
-(void)setComponent:(id)arg1 forKey:(_GEOPlaceDataComponentKey)arg2 ;
-(void)deleteComponentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(void)setComponentsFromPlaceData:(id)arg1 ;
@end


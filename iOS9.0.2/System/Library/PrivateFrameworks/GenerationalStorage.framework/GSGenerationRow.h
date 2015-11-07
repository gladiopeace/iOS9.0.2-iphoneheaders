/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/revisiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <revisiond/revisiond-Structs.h>
#import <libobjc.A.dylib/PQLResultSetInitializer.h>

@class NSString;

@interface GSGenerationRow : NSObject <PQLResultSetInitializer> {

	long long generation_id;
	long long generation_storage_id;
	NSString* generation_name;
	NSString* generation_client_id;
	NSString* generation_path;
	unsigned long long generation_options;
	int generation_status;
	long long generation_add_time;
	long long generation_size;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)thinningPrecompute:(id)arg1 kept:(id)arg2 ;
+(char)rowExists:(id)arg1 withStorageID:(long long)arg2 andName:(id)arg3 andClientID:(id)arg4 ;
+(id)generationRow:(id)arg1 storageID:(long long)arg2 name:(id)arg3 clientID:(id)arg4 error:(id*)arg5 ;
+(long long)tableRowCount:(id)arg1 ;
+(long long)countOfGenerations:(id)arg1 storageID:(long long)arg2 clientID:(id)arg3 ;
+(PQLResultSet*)enumerate:(id)arg1 withOptions:(const GSGenerationEnumeratorOptions*)arg2 ;
+(char)setGenerationStatus:(id)arg1 rowID:(long long)arg2 status:(int)arg3 error:(id*)arg4 ;
+(char)setGenerationOptions:(id)arg1 rowID:(long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(long long)deleteRow:(id)arg1 rowID:(long long)arg2 ;
+(long long)deleteRowsWithoutStorage:(id)arg1 ;
+(long long)deleteRowsWithoutData:(id)arg1 atRoot:(id)arg2 ;
+(long long)fixPendingRowsWithData:(id)arg1 atRoot:(id)arg2 ;
+(long long)fixupGenerationOptions:(id)arg1 ;
-(char)isAccessibleByUID:(unsigned)arg1 error:(id*)arg2 ;
-(id)fullPath:(id)arg1 ;
-(char)saveToDB:(id)arg1 ;
-(id)initFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
@end

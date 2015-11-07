/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface LocationSource : SQLiteEntity
+(id)anyInDatabase:(id)arg1 withURL:(id)arg2 ;
+(id)insertLocationSourceWithURL:(id)arg1 forPass:(id)arg2 type:(int)arg3 inDatabase:(id)arg4 ;
+(id)locationSourcePIDPredicate:(id)arg1 ;
+(id)urlPredicate:(id)arg1 ;
+(id)anyInDatabase:(id)arg1 withLocationSourcePID:(id)arg2 ;
+(id)databaseTable;
+(id)foreignKeyColumnForTable:(id)arg1 ;
-(id)initWithLocationURL:(id)arg1 type:(int)arg2 inDatabase:(id)arg3 ;
-(char)deleteFromDatabase;
@end


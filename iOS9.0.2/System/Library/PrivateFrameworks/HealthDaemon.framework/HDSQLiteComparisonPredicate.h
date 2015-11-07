/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDSQLiteComparisonPredicate : HDSQLitePropertyPredicate <NSCopying> {

	int _comparisonType;
	id _value;

}

@property (nonatomic,readonly) int comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,readonly) id value;                        //@synthesize value=_value - In the implementation block
+(id)predicateWithProperty:(id)arg1 greaterThanOrEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 lessThanValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 notEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 greaterThanValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 lessThanOrEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(int)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(char)isCompatibleWithPredicate:(id)arg1 ;
-(id)_comparisonTypeString;
-(int)comparisonType;
@end


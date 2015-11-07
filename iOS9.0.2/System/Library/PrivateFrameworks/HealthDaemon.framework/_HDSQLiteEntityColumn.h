/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _HDSQLiteEntityColumn : NSObject {

	NSString* _name;
	NSString* _databaseType;
	unsigned _keyPathType;
	Class _targetEntityClass;
	NSString* _targetProperty;
	int _deletionAction;

}

@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * databaseType;                //@synthesize databaseType=_databaseType - In the implementation block
@property (nonatomic,readonly) unsigned keyPathType;                        //@synthesize keyPathType=_keyPathType - In the implementation block
@property (nonatomic,readonly) Class targetEntityClass;                     //@synthesize targetEntityClass=_targetEntityClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetProperty;              //@synthesize targetProperty=_targetProperty - In the implementation block
@property (nonatomic,readonly) int deletionAction;                          //@synthesize deletionAction=_deletionAction - In the implementation block
-(id)description;
-(NSString *)name;
-(id)creationSQL;
-(int)deletionAction;
-(Class)targetEntityClass;
-(id)initWithName:(id)arg1 databaseType:(id)arg2 keyPathType:(unsigned)arg3 targetEntityClass:(Class)arg4 targetProperty:(id)arg5 deletionAction:(int)arg6 ;
-(NSString *)databaseType;
-(unsigned)keyPathType;
-(NSString *)targetProperty;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/cloudphotod-Structs.h>
#import <libobjc.A.dylib/PQLInjecting.h>

@class PQLNameInjection, NSString, CPLPrequeliteType, NSData;

@interface CPLPrequeliteVariable : NSObject <PQLInjecting> {

	PQLNameInjection* _injection;
	id _cachedValue;
	char _hasCachedValue;
	NSString* _variableName;
	CPLPrequeliteType* _type;

}

@property (readonly) NSString * variableName;                       //@synthesize variableName=_variableName - In the implementation block
@property (readonly) CPLPrequeliteType * type;                      //@synthesize type=_type - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * sql; 
+(id)variableWithName:(id)arg1 forTable:(id)arg2 type:(id)arg3 ;
+(id)indexVariableForVariableWithName:(id)arg1 forTable:(id)arg2 ;
+(id)variableWithName:(id)arg1 type:(id)arg2 ;
-(void)setCachedValue:(id)arg1 ;
-(char)hasCachedValue;
-(id)cachedValue;
-(void)discardCachedValue;
-(id)initWithName:(id)arg1 table:(id)arg2 type:(id)arg3 ;
-(NSString *)variableName;
-(NSString *)description;
-(CPLPrequeliteType *)type;
-(NSData *)sql;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2 ;
@end


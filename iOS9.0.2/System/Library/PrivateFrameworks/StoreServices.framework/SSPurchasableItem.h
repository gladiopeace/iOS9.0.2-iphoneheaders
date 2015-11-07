/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, SSSQLiteDatabase;

@interface SSPurchasableItem : NSObject {

	NSDictionary* _propertyValues;
	NSString* _tableName;
	SSSQLiteDatabase* _database;

}
+(id)databaseTable;
+(id)sortByDatePurchasedKey;
+(id)allPropertyKeys;
-(void)dealloc;
-(char)isHidden;
-(id)description;
-(id)propertyValues;
-(id)datePurchased;
-(long long)storeID;
-(long long)accountUniqueIdentifier;
-(id)initWithPropertyValues:(id)arg1 ;
-(long long)pid;
@end


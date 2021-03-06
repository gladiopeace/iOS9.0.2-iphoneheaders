/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface ValueAddedServiceTransaction : SQLiteEntity
+(void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2 ;
+(id)_predicateForPass:(id)arg1 ;
+(void)truncateEntitiesForPass:(id)arg1 inDatabase:(id)arg2 toCount:(int)arg3 ;
+(id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2 ;
+(id)insertValueAddedServiceTransaction:(id)arg1 withPass:(id)arg2 paymentTransaction:(id)arg3 valueAddedMerchant:(id)arg4 inDatabase:(id)arg5 ;
+(id)valueAddedServiceTransactionsInDatabase:(id)arg1 forPassUniqueIdentifier:(id)arg2 limit:(int)arg3 ;
+(id)valueAddedServiceTransactionsInDatabase:(id)arg1 forPaymentTransaction:(id)arg2 ;
+(id)_predicateForIdentifier:(id)arg1 ;
+(id)_predicateForPassWithUniqueIdentifier:(id)arg1 ;
+(id)_predicateForPaymentTransaction:(id)arg1 ;
+(id)_predicateForMerchantPID:(id)arg1 ;
+(id)_valueAddedServiceTransactionsWithQuery:(id)arg1 ;
+(id)_propertySettersForValueAddedServiceTransaction;
+(void)deleteEntitiesForPaymentTransaction:(id)arg1 inDatabase:(id)arg2 ;
+(id)databaseTable;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)joinClauseForProperty:(id)arg1 ;
-(void)updateWithValueAddedServiceTransaction:(id)arg1 paymentTransaction:(id)arg2 ;
-(id)valueAddedServiceTransaction;
-(id)initWithValueAddedServiceTransaction:(id)arg1 pass:(id)arg2 paymentTransaction:(id)arg3 valueAddedMerchant:(id)arg4 inDatabase:(id)arg5 ;
-(char)deleteFromDatabase;
@end


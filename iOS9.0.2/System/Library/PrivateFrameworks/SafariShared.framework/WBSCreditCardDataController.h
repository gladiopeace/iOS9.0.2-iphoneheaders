/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSArray;

@interface WBSCreditCardDataController : NSObject {

	NSMapTable* _creditCardDataKeychainReferences;

}

@property (nonatomic,readonly) NSArray * creditCardData; 
+(char)hasCreditCardData;
-(id)init;
-(id)_neverSavedCreditCardSuffixFromCardNumber:(id)arg1 ;
-(NSArray *)creditCardData;
-(char)shouldNeverSaveCardWithNumber:(id)arg1 ;
-(id)existingCardWithNumber:(id)arg1 ;
-(id)_uniqueCardNameForCardName:(id)arg1 ;
-(id)defaultNameForCardOfType:(unsigned)arg1 cardholderName:(id)arg2 ;
-(void)creditCardDataDidChange;
-(void)_removeNeverSaveCreditCardData:(id)arg1 ;
-(char)shouldAddCardWithNumber:(id)arg1 ;
-(void)saveCreditCardData:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCard:(id)arg1 ;
-(void)invalidateCreditCardData;
-(id)savableCreditCardDataInForm:(id)arg1 ;
-(void)removeCreditCardData:(id)arg1 ;
-(void)replaceCreditCardData:(id)arg1 withCard:(id)arg2 ;
-(void)saveCreditCardDataIfAllowed:(id)arg1 ;
-(char)isCreditCardDataSaved:(id)arg1 ;
-(void)neverSaveCreditCardData:(id)arg1 ;
-(void)clearCreditCardData;
@end


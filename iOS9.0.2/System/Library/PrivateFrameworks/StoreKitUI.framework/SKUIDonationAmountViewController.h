/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIDonationStepViewController.h>
#import <libobjc.A.dylib/SKUIDonationConfigurationObserver.h>

@class SKUIDonationAmountView, SKUIGiftValidationResponse, SKUIGiftPurchaseRequest, SKUIGiftValidator, NSString;

@interface SKUIDonationAmountViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver> {

	SKUIDonationAmountView* _amountView;
	SKUIGiftValidationResponse* _lastValidationResponse;
	SKUIGiftPurchaseRequest* _purchaseRequest;
	char _tappedNextWhileValidating;
	SKUIGiftValidator* _validator;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_finishValidationWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_finishPurchaseWithResult:(char)arg1 errorMessage:(id)arg2 ;
-(id)initWithCharity:(id)arg1 configuration:(id)arg2 ;
-(void)_donateButtonAction:(id)arg1 ;
-(void)_amountChangedNotification:(id)arg1 ;
-(void)_validateDonation:(id)arg1 ;
-(void)_performActionAfterValidation;
-(void)_setDonationButtonEnabled:(char)arg1 ;
-(void)_reenableAfterFailure;
-(void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2 ;
@end


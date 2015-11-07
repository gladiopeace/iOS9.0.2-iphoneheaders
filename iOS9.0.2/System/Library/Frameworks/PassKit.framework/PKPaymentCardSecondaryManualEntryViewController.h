/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPaymentSetupFieldsViewController.h>

@interface PKPaymentCardSecondaryManualEntryViewController : PKPaymentSetupFieldsViewController {

	char _suppressPrimarySetupFields;

}

@property (assign,nonatomic) char suppressPrimarySetupFields;              //@synthesize suppressPrimarySetupFields=_suppressPrimarySetupFields - In the implementation block
-(id)newPaymentEligibilityRequest;
-(id)visibleFieldIdentifiers;
-(id)readonlyFieldIdentifiers;
-(void)performNextActionForProvisioningState:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)defaultFields;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)initWithProvisioningController:(id)arg1 context:(int)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4 ;
-(void)setSuppressPrimarySetupFields:(char)arg1 ;
-(char)suppressPrimarySetupFields;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end


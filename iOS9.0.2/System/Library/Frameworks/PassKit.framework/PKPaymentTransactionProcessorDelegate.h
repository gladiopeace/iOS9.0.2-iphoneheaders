/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPaymentTransactionProcessorDelegate <NSObject>
@optional
-(void)paymentTransactionProcessorDidActivate:(id)arg1;
-(void)paymentTransactionProcessorDidDeactivate:(id)arg1;

@required
-(void)paymentTransactionUpdated:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;

@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NFContactlessPaymentSessionDelegate <NSObject>
@optional
-(void)contactlessPaymentSession:(id)arg1 didDetectField:(char)arg2;
-(void)contactlessPaymentSession:(id)arg1 didDetectTechnology:(id)arg2;
-(void)contactlessPaymentSession:(id)arg1 didSelectApplet:(id)arg2;
-(void)contactlessPaymentSession:(id)arg1 didReceiveButtonPressForApplet:(id)arg2;
-(void)contactlessPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2;
-(void)contactlessPaymentSession:(id)arg1 didStartTransaction:(id)arg2;
-(void)contactlessPaymentSession:(id)arg1 didEndTransaction:(id)arg2;
-(void)contactlessPaymentSessionDidEndUnexpectedly:(id)arg1;

@end


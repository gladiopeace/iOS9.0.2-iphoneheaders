/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKAlertItem.h>

@class NSString;

@interface CKCarrierSMSAlertItem : CKAlertItem {

	NSString* _messageBody;
	NSString* _sender;
	/*^block*/id _acknowledgeBlock;

}
-(void)dealloc;
-(id)name;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)messageText;
-(void)didDeactivateForReason:(int)arg1 ;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)willShowInAwayItems;
-(char)shouldShowInEmergencyCall;
-(char)shouldShowInLockScreen;
-(id)initWithMessageBody:(id)arg1 sender:(id)arg2 acknowledgeBlock:(/*^block*/id)arg3 ;
@end


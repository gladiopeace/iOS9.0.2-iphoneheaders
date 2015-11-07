/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@interface CTMessageCenter : NSObject
+(id)sharedMessageCenter;
-(char)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withID:(unsigned)arg4 ;
-(id)encodeMessage:(id)arg1 ;
-(void)sendMessageAsSmsToShortCodeRecipients:(id)arg1 andReplaceData:(id*)arg2 ;
-(SCD_Struct_CT0)sendMMSFromData:(id)arg1 messageId:(unsigned)arg2 ;
-(SCD_Struct_CT0)send:(id)arg1 withMoreToFollow:(char)arg2 ;
-(SCD_Struct_CT0)sendSMS:(id)arg1 withMoreToFollow:(char)arg2 ;
-(SCD_Struct_CT0)sendMMS:(id)arg1 ;
-(id)incomingMessageWithId:(unsigned)arg1 isDeferred:(char)arg2 ;
-(void)addMessageOfType:(int)arg1 toArray:(id)arg2 withIdsFromArray:(id)arg3 ;
-(char)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withMoreToFollow:(char)arg4 withID:(unsigned)arg5 ;
-(int)incomingMessageCount;
-(id)deferredMessageWithId:(unsigned)arg1 ;
-(id)statusOfOutgoingMessages;
-(id)decodeMessage:(id)arg1 ;
-(char)isMmsEnabled;
-(char)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withMoreToFollow:(char)arg4 ;
-(char)simulateSmsReceived:(id)arg1 ;
-(char)simulateDeferredMessage;
-(SCD_Struct_CT0)send:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)acknowledgeIncomingMessageWithId:(unsigned)arg1 ;
-(void)acknowledgeOutgoingMessageWithId:(unsigned)arg1 ;
-(id)allIncomingMessages;
-(id)incomingMessageWithId:(unsigned)arg1 ;
-(char)getCharacterCount:(int*)arg1 andMessageSplitThreshold:(int*)arg2 forSmsText:(id)arg3 ;
-(char)isMmsConfigured;
-(SCD_Struct_CT0)isDeliveryReportsEnabled:(char*)arg1 ;
-(void)setDeliveryReportsEnabled:(char)arg1 ;
-(char)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 ;
@end


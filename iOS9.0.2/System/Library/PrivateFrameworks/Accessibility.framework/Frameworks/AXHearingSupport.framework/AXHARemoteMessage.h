/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXHearingSupport/AXHAMessage.h>

@class NSString;

@interface AXHARemoteMessage : AXHAMessage {

	NSString* _UUID;
	/*^block*/id _sendCompletion;

}

@property (nonatomic,retain) NSString * UUID;              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) id sendCompletion;              //@synthesize sendCompletion=_sendCompletion - In the implementation block
+(id)messageWithPayload:(id)arg1 andSendCompletion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSString *)UUID;
-(id)initWithPayload:(id)arg1 ;
-(void)setSendCompletion:(id)arg1 ;
-(id)transportPayload;
-(id)sendCompletion;
-(void)setUUID:(NSString *)arg1 ;
@end


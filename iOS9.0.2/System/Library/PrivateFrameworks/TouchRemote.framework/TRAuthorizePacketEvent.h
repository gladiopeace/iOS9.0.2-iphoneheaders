/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@class NSString;

@interface TRAuthorizePacketEvent : TRPacketEvent {

	NSString* _deviceIdentifier;
	NSString* _passcode;

}

@property (nonatomic,readonly) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * passcode;                      //@synthesize passcode=_passcode - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(NSString *)passcode;
-(NSString *)deviceIdentifier;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithPasscode:(id)arg1 ;
@end


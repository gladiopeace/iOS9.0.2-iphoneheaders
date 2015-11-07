/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _NMRIDSMessageHandler : NSObject {

	unsigned short _messageType;
	id _target;
	SEL _action;

}

@property (assign,nonatomic) unsigned short messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic,__weak) id target;                        //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                              //@synthesize action=_action - In the implementation block
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(void)setMessageType:(unsigned short)arg1 ;
-(unsigned short)messageType;
@end


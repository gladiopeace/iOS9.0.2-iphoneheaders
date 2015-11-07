/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData;

@interface APSProtocolMessage : NSObject {

	int _command;
	NSMutableData* _data;

}
-(void)_appendOneByte:(unsigned char)arg1 ;
-(void)_appendTwoBytes:(unsigned short)arg1 ;
-(void)appendItem:(unsigned char)arg1 data:(id)arg2 ;
-(void)_appendFourBytes:(unsigned)arg1 ;
-(void)appendItem:(unsigned char)arg1 string:(id)arg2 ;
-(void)appendOneByteItem:(unsigned char)arg1 byte:(unsigned char)arg2 ;
-(void)appendTwoByteItem:(unsigned char)arg1 bytes:(unsigned short)arg2 ;
-(void)appendFourByteItem:(unsigned char)arg1 bytes:(unsigned)arg2 ;
-(id)copyMessageData;
-(id)initWithCommand:(int)arg1 ;
-(void)dealloc;
@end

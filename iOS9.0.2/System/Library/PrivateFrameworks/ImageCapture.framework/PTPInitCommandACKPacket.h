/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PTPInitCommandACKPacket : NSObject {

	unsigned long _connectionNumber;
	unsigned char _responderGUID[16];
	NSString* _responderFriendlyName;

}
-(void)dealloc;
-(id)description;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(id)initWithConnectionNumber:(unsigned long)arg1 responderGUID:(char*)arg2 responderFriendlyName:(id)arg3 ;
-(unsigned long)connectionNumber;
-(id)responderGUIDString;
-(void)setConnectionNumber:(unsigned long)arg1 ;
-(const char*)responderGUID;
-(void)setResponderGUID:(char*)arg1 ;
-(id)responderFriendlyName;
-(void)setResponderFriendlyName:(id)arg1 ;
@end


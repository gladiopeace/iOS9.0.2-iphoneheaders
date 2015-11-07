/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/AVCRTCPPacket.h>

@class NSString;

@interface AVCRTCPSourceDescription : AVCRTCPPacket {

	unsigned char _type;
	NSString* _text;

}

@property (assign,nonatomic) unsigned char type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setType:(unsigned char)arg1 ;
-(unsigned char)type;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
@end


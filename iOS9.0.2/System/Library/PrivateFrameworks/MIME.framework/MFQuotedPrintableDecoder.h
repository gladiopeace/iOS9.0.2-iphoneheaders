/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer {

	unsigned char _lastEncoded;
	unsigned long _required;
	char _forTextPart;
	char _badlyEncoded;

}

@property (assign,nonatomic) char forTextPart;              //@synthesize forTextPart=_forTextPart - In the implementation block
-(void)done;
-(int)appendData:(id)arg1 ;
-(char)forTextPart;
-(void)setForTextPart:(char)arg1 ;
@end


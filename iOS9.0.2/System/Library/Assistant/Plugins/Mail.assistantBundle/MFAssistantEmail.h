/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/Plugins/Mail.assistantBundle/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAEmailEmail.h>

@interface MFAssistantEmail : SAEmailEmail {

	unsigned _statusFlags;

}

@property (assign,nonatomic) unsigned statusFlags;              //@synthesize statusFlags=_statusFlags - In the implementation block
+(int)MSSendTypeForSAEMailType:(id)arg1 ;
-(unsigned)statusFlags;
-(void)setStatusFlags:(unsigned)arg1 ;
@end


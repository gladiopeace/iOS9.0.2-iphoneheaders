/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFMailMessage;

@interface _MBLLoadMessageJob : NSObject {

	MFMailMessage* _message;
	id _mbl;

}

@property (nonatomic,readonly) MFMailMessage * message;              //@synthesize message=_message - In the implementation block
-(id)initForMessage:(id)arg1 forMBLMailbox:(id)arg2 ;
-(void)dealloc;
-(MFMailMessage *)message;
-(void)run;
@end

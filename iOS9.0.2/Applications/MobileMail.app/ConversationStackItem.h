/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MFMailMessage;

@interface ConversationStackItem : NSObject <NSCopying> {

	MFMailMessage* _message;
	unsigned _index;
	unsigned _total;

}
-(id)initWithMessage:(id)arg1 index:(unsigned)arg2 total:(unsigned)arg3 ;
-(char)isTopmost;
-(unsigned)total;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)message;
-(unsigned)index;
@end

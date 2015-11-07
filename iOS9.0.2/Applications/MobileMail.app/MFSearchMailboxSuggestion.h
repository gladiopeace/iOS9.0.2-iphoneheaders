/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MFSearchSuggestion.h>

@class MFMailboxUid, NSString;

@interface MFSearchMailboxSuggestion : MFSearchSuggestion {

	MFMailboxUid* _mailbox;
	NSString* _subtitle;

}

@property (nonatomic,retain,readonly) MFMailboxUid * mailbox;              //@synthesize mailbox=_mailbox - In the implementation block
+(id)suggestionForMailbox:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)contactIdentifier;
-(MFMailboxUid *)mailbox;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)category;
-(id)title;
-(id)subtitle;
-(id)initWithMailbox:(id)arg1 ;
@end


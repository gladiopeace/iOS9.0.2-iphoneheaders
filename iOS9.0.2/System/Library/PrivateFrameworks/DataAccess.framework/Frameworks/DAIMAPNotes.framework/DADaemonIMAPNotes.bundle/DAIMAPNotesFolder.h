/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DADaemonIMAPNotes.bundle/DADaemonIMAPNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAFolder.h>

@class MFMailboxUid;

@interface DAIMAPNotesFolder : DAFolder {

	MFMailboxUid* _mailboxUid;

}

@property (nonatomic,retain) MFMailboxUid * mailboxUid;              //@synthesize mailboxUid=_mailboxUid - In the implementation block
-(void)setMailboxUid:(MFMailboxUid *)arg1 ;
-(MFMailboxUid *)mailboxUid;
@end


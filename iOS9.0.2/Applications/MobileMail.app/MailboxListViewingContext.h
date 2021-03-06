/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MailAccount;

@interface MailboxListViewingContext : NSObject {

	MailAccount* _account;
	id _mailboxSelectionTarget;
	int _pickingForType;
	float _offset;
	char _promoteFavorites;

}
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setOffset:(float)arg1 ;
-(float)offset;
-(void)setSelectionTarget:(id)arg1 ;
-(id)selectionTarget;
-(char)promoteFavorites;
-(void)setPromoteFavorites:(char)arg1 ;
-(void)setAccount:(id)arg1 ;
-(id)account;
@end


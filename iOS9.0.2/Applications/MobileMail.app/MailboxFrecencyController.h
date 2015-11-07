/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CRRecentContactsLibrary;

@interface MailboxFrecencyController : NSObject {

	CRRecentContactsLibrary* _library;

}
+(id)sharedInstance;
-(void)recordEventWithMailboxURLString:(id)arg1 ;
-(id)_rankedMailboxURLs;
-(id)orderedMailboxUidsForAccount:(id)arg1 ;
-(id)orderedArrayOfSources:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 ;
-(void)dealloc;
-(char)shouldHideNotesForAccount:(id)arg1 ;
@end


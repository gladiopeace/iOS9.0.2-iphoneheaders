/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMActivity.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class MFMailComposeViewController, NSString;

@interface IMActivityMail : IMActivity <MFMailComposeViewControllerDelegate> {

	char _managedBook;
	MFMailComposeViewController* _mailViewController;

}

@property (assign,nonatomic) char managedBook;                                              //@synthesize managedBook=_managedBook - In the implementation block
@property (nonatomic,retain) MFMailComposeViewController * mailViewController;              //@synthesize mailViewController=_mailViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)canPerformActivityItems:(id)arg1 ;
-(void)setMailViewController:(MFMailComposeViewController *)arg1 ;
-(MFMailComposeViewController *)mailViewController;
-(void)dealloc;
-(id)activityType;
-(id)activityTitle;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(char)managedBook;
-(void)setManagedBook:(char)arg1 ;
@end

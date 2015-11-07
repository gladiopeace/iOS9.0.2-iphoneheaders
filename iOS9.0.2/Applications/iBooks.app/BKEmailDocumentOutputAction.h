/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKOutputAction.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class MFMailComposeViewController, NSString;

@interface BKEmailDocumentOutputAction : BKOutputAction <MFMailComposeViewControllerDelegate> {

	MFMailComposeViewController* _mailComposeViewController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)deviceHasCapability;
+(char)isEmailAllowedForBook:(id)arg1 ;
-(void)launchEmailPreferences;
-(void)prepareMailComposeController;
-(void)dealloc;
-(id)title;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)performAction:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNContactAction.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@class CNContact, UIViewController, NSString;

@interface CNContactCreateNewContactAction : CNContactAction <CNContactViewControllerDelegate> {

	CNContact* _createdContact;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) CNContact * createdContact;                                      //@synthesize createdContact=_createdContact - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionWithSender:(id)arg1 ;
-(void)setCreatedContact:(CNContact *)arg1 ;
-(CNContact *)createdContact;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
@end


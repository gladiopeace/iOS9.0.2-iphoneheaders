/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNContactContentViewController.h>
#import <libobjc.A.dylib/CNContactViewHostProtocol.h>

@class NSString;

@interface CNContactViewServiceViewController : CNContactContentViewController <CNContactViewHostProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(void)updateEditing:(char)arg1 doneButtonEnabled:(char)arg2 doneButtonText:(id)arg3 ;
-(void)didCompleteWithContact:(id)arg1 ;
-(void)didDeleteContact:(id)arg1 ;
-(void)isPresentingFullscreen:(char)arg1 ;
-(id)init;
@end


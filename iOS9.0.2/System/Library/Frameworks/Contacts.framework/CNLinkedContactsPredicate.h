/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class CNContact, NSString;

@interface CNLinkedContactsPredicate : CNPredicate <CNSuggestedContactPredicate> {

	CNContact* _contact;
	NSString* _contactIdentifier;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) CNContact * contact;                       //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
-(id)initWithContactIdentifier:(id)arg1 ;
-(CNContact *)contact;
-(NSString *)contactIdentifier;
-(id)initWithContact:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
@end


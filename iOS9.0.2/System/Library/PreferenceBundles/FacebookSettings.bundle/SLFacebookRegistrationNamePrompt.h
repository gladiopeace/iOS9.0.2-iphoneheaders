/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/SLFacebookRegistrationInfoPrompt.h>

@class NSString;

@interface SLFacebookRegistrationNamePrompt : SLFacebookRegistrationInfoPrompt {

	NSString* _firstName;
	NSString* _lastName;
	char _lastNameOnTop;

}
-(char)isReadyToValidate;
-(void)updateRegistrationInfo;
-(void)setFirstName:(id)arg1 withSpecifier:(id)arg2 ;
-(id)firstNameWithSpecifier:(id)arg1 ;
-(void)setLastName:(id)arg1 withSpecifier:(id)arg2 ;
-(id)lastNameWithSpecifier:(id)arg1 ;
-(id)specifiers;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(char)validate;
@end

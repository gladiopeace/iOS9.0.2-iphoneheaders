/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/FacebookSettings-Structs.h>
#import <AccountsUI/ACUIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SLFacebookRegistrationInfoPromptDelegate;
@class SLFacebookRegistrationInfo, UITextField, NSString;

@interface SLFacebookRegistrationInfoPrompt : ACUIViewController <UITextFieldDelegate> {

	SLFacebookRegistrationInfo* _registrationInfo;
	UITextField* _firstTextField;
	id<SLFacebookRegistrationInfoPromptDelegate> _delegate;

}

@property (nonatomic,retain) id<SLFacebookRegistrationInfoPromptDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refreshNextButton;
-(void)showErrorMessage:(id)arg1 withTitle:(id)arg2 ;
-(void)nextButtonTapped:(id)arg1 ;
-(char)isReadyToValidate;
-(void)updateRegistrationInfo;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(void)setDelegate:(id<SLFacebookRegistrationInfoPromptDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<SLFacebookRegistrationInfoPromptDelegate>)delegate;
-(void)textFieldValueDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(char)validate;
-(void)returnPressedAtEnd;
@end


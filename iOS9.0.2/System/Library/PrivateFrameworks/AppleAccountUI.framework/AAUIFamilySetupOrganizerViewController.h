/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccountUI/AAUIConfirmIdentityViewController.h>
#import <libobjc.A.dylib/AAUIFamilySetupPage.h>

@protocol AAUIFamilySetupPageDelegate;
@class NSString;

@interface AAUIFamilySetupOrganizerViewController : AAUIConfirmIdentityViewController <AAUIFamilySetupPage> {

	id<AAUIFamilySetupPageDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AAUIFamilySetupPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<AAUIFamilySetupPageDelegate>)arg1 ;
-(id<AAUIFamilySetupPageDelegate>)delegate;
-(void)viewDidLoad;
-(id)pageTitle;
-(id)titleForContinuebutton;
-(void)continueButtonWasTapped:(id)arg1 ;
-(char)shouldShowInviteeInstructions;
-(id)_createCancelButton;
-(id)instructions;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
@end


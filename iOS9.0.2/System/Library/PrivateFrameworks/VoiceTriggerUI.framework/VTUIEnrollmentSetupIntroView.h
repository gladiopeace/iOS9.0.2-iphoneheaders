/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIEnrollmentStateView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol VTUIEnrollmentSetupIntroViewDelegate;
@class UIView, UIButton, NSString;

@interface VTUIEnrollmentSetupIntroView : VTUIEnrollmentStateView <UITextViewDelegate> {

	UIView* _footerView;
	id<VTUIEnrollmentSetupIntroViewDelegate> _stateViewDelegate;
	UIButton* _laterButton;

}

@property (assign,nonatomic,__weak) id<VTUIEnrollmentSetupIntroViewDelegate> stateViewDelegate;              //@synthesize stateViewDelegate=_stateViewDelegate - In the implementation block
@property (nonatomic,readonly) UIButton * laterButton;                                                       //@synthesize laterButton=_laterButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)footerView;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(void)setStateViewDelegate:(id<VTUIEnrollmentSetupIntroViewDelegate>)arg1 ;
-(UIButton *)laterButton;
-(void)_setupContent;
-(void)_setupImage;
-(id)_createFooter;
-(id<VTUIEnrollmentSetupIntroViewDelegate>)stateViewDelegate;
@end


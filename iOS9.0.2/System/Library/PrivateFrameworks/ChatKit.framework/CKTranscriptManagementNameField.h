/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol CKTranscriptManagementNameFieldDelegate;
@class UILabel, UITextField, UIView, _UIBackdropView, NSString;

@interface CKTranscriptManagementNameField : UIView <UITextFieldDelegate> {

	char _isOverlay;
	char _enabled;
	id<CKTranscriptManagementNameFieldDelegate> _delegate;
	UILabel* _fieldLabel;
	UITextField* _textField;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	_UIBackdropView* _backdropView;

}

@property (assign,nonatomic) id<CKTranscriptManagementNameFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * groupName; 
@property (assign,nonatomic) char isOverlay;                                                    //@synthesize isOverlay=_isOverlay - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                     //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UILabel * fieldLabel;                                              //@synthesize fieldLabel=_fieldLabel - In the implementation block
@property (nonatomic,retain) UITextField * textField;                                           //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIView * topSeparator;                                             //@synthesize topSeparator=_topSeparator - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                                          //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                                    //@synthesize backdropView=_backdropView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)preferredHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<CKTranscriptManagementNameFieldDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<CKTranscriptManagementNameFieldDelegate>)delegate;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)layoutMarginsDidChange;
-(void)setGroupName:(NSString *)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(NSString *)groupName;
-(UITextField *)textField;
-(void)setFieldLabel:(UILabel *)arg1 ;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)commitGroupName;
-(void)setTopSeparator:(UIView *)arg1 ;
-(UIView *)topSeparator;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
-(void)setTextField:(UITextField *)arg1 ;
-(UILabel *)fieldLabel;
-(char)isOverlay;
-(void)setIsOverlay:(char)arg1 ;
@end


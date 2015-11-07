/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBCCButtonModuleDelegate;
@interface SBCCButtonModule : NSObject {

	char _enabled;
	char _inoperative;
	id<SBCCButtonModuleDelegate> _delegate;

}

@property (assign,nonatomic) id<SBCCButtonModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isInoperative,nonatomic) char inoperative;              //@synthesize inoperative=_inoperative - In the implementation block
+(char)enabledByDefault;
+(char)isSupported:(int)arg1 ;
+(id)identifier;
+(id)displayName;
-(id)aggdKey;
-(char)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(void)cooldown;
-(void)setInoperative:(char)arg1 ;
-(id)statusUpdate;
-(id)unavailableText;
-(id)glyphImageForState:(int)arg1 section:(int)arg2 ;
-(char)isInoperative;
-(void)_noteButtonStateDidChange;
-(void)toggleState;
-(void)_noteDisplayPropertiesDidChange;
-(char)needsConfirmation;
-(void)confirmed:(char)arg1 ;
-(id)confirmationAlertMessage;
-(id)confirmationAlertTitle;
-(void)setDelegate:(id<SBCCButtonModuleDelegate>)arg1 ;
-(id)description;
-(id<SBCCButtonModuleDelegate>)delegate;
-(int)state;
-(id)identifier;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)deactivate;
-(void)_updateState;
-(void)activate;
-(id)displayName;
-(void)warmup;
-(char)isRestricted;
@end


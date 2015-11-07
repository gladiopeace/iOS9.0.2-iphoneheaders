/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TPNumberPad.h>
#import <libobjc.A.dylib/TPDialerKeypadProtocol.h>

@protocol TPDialerKeypadDelegate;
@class TPDialerSoundController, NSString;

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol> {

	char _playsSounds;
	id<TPDialerKeypadDelegate> _delegate;
	TPDialerSoundController* _soundController;

}

@property (assign,nonatomic) char playsSounds;                             //@synthesize playsSounds=_playsSounds - In the implementation block
@property (assign) id<TPDialerKeypadDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (retain) TPDialerSoundController * soundController;              //@synthesize soundController=_soundController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dialerNumberPadFullCharacters;
+(id)dialerNumberPadNumericCharacters;
-(void)buttonDown:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(void)setDelegate:(id<TPDialerKeypadDelegate>)arg1 ;
-(id<TPDialerKeypadDelegate>)delegate;
-(void)buttonTapped:(id)arg1 ;
-(void)buttonLongPressed:(id)arg1 ;
-(void)setPlaysSounds:(char)arg1 ;
-(char)supportsHardPause;
-(void)setSupportsHardPause:(char)arg1 ;
-(void)highlightKeyAtIndex:(int)arg1 ;
-(int)indexForHighlightedKey;
-(TPDialerSoundController *)soundController;
-(void)setSoundController:(TPDialerSoundController *)arg1 ;
-(char)playsSounds;
@end


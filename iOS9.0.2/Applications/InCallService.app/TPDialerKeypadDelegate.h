/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TPDialerKeypadDelegate <NSObject>
@optional
-(void)phonePad:(id)arg1 appendString:(id)arg2;
-(void)phonePad:(id)arg1 keyDown:(char)arg2;
-(void)phonePad:(id)arg1 keyUp:(char)arg2;
-(void)phonePadWillBeginSounds:(id)arg1;
-(void)phonePadDidEndSounds:(id)arg1;
-(void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2;
-(void)phonePadDeleteLastDigit:(id)arg1;
-(void)phonePad:(id)arg1 dialerCharacterButtonWasHeld:(unsigned)arg2;

@end


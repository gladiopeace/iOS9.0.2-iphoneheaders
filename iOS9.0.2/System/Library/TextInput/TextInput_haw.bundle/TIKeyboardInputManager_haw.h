/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_haw.bundle/TextInput_haw
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_haw/TextInput_haw-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_haw : TIKeyboardInputManagerZephyr
-(id)externalStringToInternal:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(char)doesComposeText;
-(id)internalStringToExternal:(id)arg1 ;
-(id)sentencePrefixingCharacters;
@end


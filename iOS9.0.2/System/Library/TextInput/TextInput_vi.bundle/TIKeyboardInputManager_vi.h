/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_vi.bundle/TextInput_vi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_vi/TextInput_vi-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_vi : TIKeyboardInputManagerZephyr {

	void* m_transliterator;
	char m_compositionDisabled;
	char m_useInternalIndex;

}
+(void)setupUnikey;
+(void)cleanupUnikey;
-(void)setInput:(id)arg1 ;
-(void)dealloc;
-(unsigned)inputIndex;
-(void*)createTransliterator;
-(id)decomposeTelex:(id)arg1 ;
-(unsigned)deleteLengthForString:(id)arg1 ;
-(char)handleThisCharacter:(unsigned short)arg1 ;
-(void)setInputIndex:(unsigned)arg1 ;
-(void)acceptInput;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned*)arg4 fromVariantKey:(char)arg5 ;
-(id)externalStringToInternal:(id)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(unsigned)internalIndexToExternal:(unsigned)arg1 ;
-(char)doesComposeText;
-(id)internalStringToExternal:(id)arg1 ;
-(id)deleteFromInput:(unsigned*)arg1 ;
-(unsigned)externalIndexToInternal:(unsigned)arg1 ;
@end

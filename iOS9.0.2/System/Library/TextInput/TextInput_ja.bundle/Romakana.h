/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCharacterSet;

@interface Romakana : NSObject {

	char _kanaMode;
	NSCharacterSet* _consonantsCharacterSet;

}
+(id)hiraganaString:(id)arg1 mappingArray:(id)arg2 withKanaMode:(char)arg3 ;
+(id)oneKanaToRoma:(id)arg1 ;
+(id)hiraganaString:(id)arg1 withKanaMode:(char)arg2 ;
+(id)kanaSymbol:(id)arg1 ;
-(void)dealloc;
-(id)roma2hiragana:(id)arg1 stripIncompleteRomajiAtEnd:(char)arg2 incompleteRomajiLength:(unsigned*)arg3 ;
-(id)initWithKanaMode:(char)arg1 ;
-(id)roma2katakana:(id)arg1 ;
-(id)adjustIncompleteRomaji:(id)arg1 ;
@end


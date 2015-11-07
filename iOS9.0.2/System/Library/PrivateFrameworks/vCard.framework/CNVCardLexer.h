/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <vCard/vCard-Structs.h>
@class NSMutableData, NSArray;

@interface CNVCardLexer : NSObject {

	NSMutableData* _data;
	char* _bytes;
	unsigned _length;
	unsigned _peekedPoint;
	unsigned _cursor;
	char _unicode;
	int _errorCount;
	NSArray* _activeTokenSets;

}
-(id)tokenSetForLength:(int)arg1 ;
-(char)advancePastEOL;
-(char)advancedPastToken:(int)arg1 ;
-(int)tokenAtCursor;
-(id)nextQuotedPrintableData;
-(id)nextEscapedCharacter;
-(id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(char)arg2 trim:(char)arg3 ;
-(id)nextSingleByteStringInEncoding:(unsigned)arg1 quotedPrintable:(char)arg2 stopTokens:(int)arg3 trim:(char)arg4 ;
-(void)_applyNextStringInEncoding:(unsigned)arg1 quotedPrintable:(char)arg2 stopTokens:(int)arg3 trim:(char)arg4 intoString:(id)arg5 ;
-(id)nextStringInEncoding:(unsigned)arg1 quotedPrintable:(char)arg2 stopTokens:(int)arg3 trim:(char)arg4 ;
-(id)nextUnicodeBase64Line:(char*)arg1 ;
-(id)nextSingleByteBase64Line:(char*)arg1 ;
-(id)nextBase64Line:(char*)arg1 ;
-(char)advanceToEOL;
-(int)advanceToString;
-(int)advanceToUnicodeString;
-(int)advanceToSingleByteString;
-(char)advanceToEOLUnicode;
-(char)advanceToEOLSingle;
-(char)advancePastEOLUnicode;
-(char)advancePastEOLSingle;
-(id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned)arg3 ;
-(id)nextBase64Data;
-(char)advanceToToken:(int)arg1 throughTypes:(int)arg2 ;
-(char)atEOF;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(unsigned)cursor;
-(int)errorCount;
-(int)readNextToken;
-(int)peekAtNextToken;
-(void)advanceToPeekPoint;
-(id)stringWithRange:(NSRange)arg1 encoding:(unsigned)arg2 ;
-(int)nextTokenPeek:(char)arg1 ;
-(int)nextTokenPeekUnicode:(char)arg1 length:(int)arg2 ;
-(int)nextTokenPeekSingle:(char)arg1 length:(int)arg2 ;
-(id)nextQuotedStringValueInEncoding:(unsigned)arg1 ;
-(NSRange)emptyRangeStartingAtCursor;
-(void)appendDataInRange:(NSRange)arg1 toData:(id)arg2 ;
-(void)appendNextQuotedPrintableDataToData:(id)arg1 ;
-(void)appendNextEscapedCharacterToData:(id)arg1 ;
-(id)stringFromData:(id)arg1 encoding:(unsigned)arg2 prefixLength:(unsigned)arg3 suffixLength:(unsigned)arg4 ;
-(id)trimData:(id)arg1 withPrefixLength:(unsigned)arg2 suffixLength:(unsigned)arg3 ;
-(id)stringFromSubData:(id)arg1 encoding:(unsigned)arg2 ;
-(NSRange)rangeWithLength:(unsigned)arg1 lTrim:(unsigned)arg2 rTrim:(unsigned)arg3 ;
-(NSRange)expandRange:(NSRange)arg1 untilNextByteIs:(id)arg2 ;
-(unsigned short)charAtPosition:(unsigned)arg1 withOffset:(int)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMXMLParserContext.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSMutableAttributedString, NSAttributedString, NSArray;

@interface IMToSuperParserContext : IMXMLParserContext {

	unsigned _underlineCount;
	unsigned _boldCount;
	unsigned _italicCount;
	unsigned _strikethroughCount;
	unsigned _messagePartNumber;
	NSMutableArray* _fontFamilyStack;
	NSMutableArray* _fontSizeStack;
	NSMutableArray* _linkStack;
	NSMutableArray* _backgroundColorStack;
	NSMutableArray* _foregroundColorStack;
	NSMutableDictionary* _currentAttributes;
	char _didAddBodyAttributes;
	int _baseWritingDirection;
	NSString* _backgroundColor;
	NSString* _foregroundColor;
	NSMutableAttributedString* _body;
	NSMutableArray* _fileTransferGUIDs;

}

@property (nonatomic,retain) NSString * backgroundColor;               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSString * foregroundColor;               //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) NSAttributedString * body; 
@property (nonatomic,retain) NSArray * fileTransferGUIDs;              //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (assign) int baseWritingDirection;                           //@synthesize baseWritingDirection=_baseWritingDirection - In the implementation block
-(void)setBackgroundColor:(NSString *)arg1 ;
-(NSString *)backgroundColor;
-(void)dealloc;
-(id)name;
-(void)reset;
-(void)appendString:(id)arg1 ;
-(NSAttributedString *)body;
-(void)setBaseWritingDirection:(int)arg1 ;
-(int)baseWritingDirection;
-(NSString *)foregroundColor;
-(void)_updateFontSize;
-(void)setForegroundColor:(NSString *)arg1 ;
-(NSArray *)fileTransferGUIDs;
-(void)setFileTransferGUIDs:(NSArray *)arg1 ;
-(id)resultsForLogging;
-(void)_clearIvars;
-(void)_initIvars;
-(void)_updateFontFamily;
-(void)_pushValue:(id)arg1 ontoStack:(id)arg2 attributeName:(id)arg3 ;
-(void)_popValueFromStack:(id)arg1 attributeName:(id)arg2 ;
-(void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(int)arg3 height:(int)arg4 emoji:(int)arg5 ;
-(void)_incrementMessagePartNumber;
-(void)incrementBoldCount;
-(void)decrementBoldCount;
-(void)incrementItalicCount;
-(void)decrementItalicCount;
-(void)incrementUnderlineCount;
-(void)decrementUnderlineCount;
-(void)incrementStrikethroughCount;
-(void)decrementStrikethroughCount;
-(void)pushFontFamily:(id)arg1 ;
-(void)popFontFamily;
-(void)pushFontSize:(id)arg1 ;
-(void)popFontSize;
-(void)pushLink:(id)arg1 ;
-(void)popLink;
-(void)pushBackgroundColor:(id)arg1 ;
-(void)popBackgroundColor;
-(void)pushForegroundColor:(id)arg1 ;
-(void)popForegroundColor;
-(void)appendFileTransferWithGUID:(id)arg1 ;
-(void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(int)arg3 height:(int)arg4 ;
@end


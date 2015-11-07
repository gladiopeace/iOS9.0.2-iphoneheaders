/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, WDDocument, WDTableCell;

@interface WDText : NSObject {

	NSMutableArray* mBlocks;
	WDDocument* mDocument;
	int mTextType;
	WDTableCell* mTableCell;

}
-(void)dealloc;
-(id)description;
-(char)isEmpty;
-(id)content;
-(id)tableCell;
-(id)document;
-(unsigned)blockCount;
-(id)blockAt:(unsigned)arg1 ;
-(id)addParagraph;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(int)textType;
-(void)removeLastBlock;
-(id)initWithDocument:(id)arg1 textType:(int)arg2 ;
-(id)runIterator;
-(id)newRunIterator;
-(id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3 ;
-(id)blockIterator;
-(id)newBlockIterator;
-(id)blocks;
-(id)lastBlock;
-(unsigned)indexOfBlock:(id)arg1 ;
-(void)addBlock:(id)arg1 ;
-(id)addParagraphAtIndex:(int)arg1 ;
-(id)addTable;
-(id)addTableAtIndex:(int)arg1 ;
-(int)tableNestingLevel;
@end


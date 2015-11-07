/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSString, RMTable;

@interface RMTableCell : NSObject {

	NSString* _contents;
	RMTableCell* _nextCellInColumn;
	RMTableCell* _nextCellInRow;
	RMTable* _table;
	CGPDFNodeRef _tableCellNode;

}

@property (readonly) CGPDFPageRef page; 
@property (retain) RMTableCell * nextCellInColumn;              //@synthesize nextCellInColumn=_nextCellInColumn - In the implementation block
@property (retain) RMTableCell * nextCellInRow;                 //@synthesize nextCellInRow=_nextCellInRow - In the implementation block
@property (assign) RMTable * table;                             //@synthesize table=_table - In the implementation block
@property (assign) CGPDFNodeRef tableCellNode;                  //@synthesize tableCellNode=_tableCellNode - In the implementation block
-(CGRect)bounds;
-(CGColorRef)backgroundColor;
-(void)dealloc;
-(unsigned)row;
-(id)contents;
-(RMTable *)table;
-(CGPDFPageRef)page;
-(unsigned)column;
-(void)setTableCellNode:(CGPDFNodeRef)arg1 ;
-(void)setNextCellInRow:(RMTableCell *)arg1 ;
-(void)setNextCellInColumn:(RMTableCell *)arg1 ;
-(CGPDFNodeRef)tableCellNode;
-(RMTableCell *)nextCellInRow;
-(RMTableCell *)nextCellInColumn;
-(void)setTable:(RMTable *)arg1 ;
@end


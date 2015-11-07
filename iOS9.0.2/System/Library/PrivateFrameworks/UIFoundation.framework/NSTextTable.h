/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextBlock.h>

@interface NSTextTable : NSTextBlock {

	unsigned _numCols;
	unsigned _tableFlags;
	id _lcache;
	void* _tablePrimary;
	void* _tableSecondary;

}
+(void)initialize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)numberOfColumns;
-(void)setNumberOfColumns:(unsigned)arg1 ;
-(void)_takeValuesFromTextBlock:(id)arg1 ;
-(CGRect)rectForBlock:(id)arg1 layoutAtPoint:(CGPoint)arg2 inRect:(CGRect)arg3 textContainer:(id)arg4 characterRange:(NSRange)arg5 ;
-(CGRect)boundsRectForBlock:(id)arg1 contentRect:(CGRect)arg2 inRect:(CGRect)arg3 textContainer:(id)arg4 characterRange:(NSRange)arg5 ;
-(void)drawBackgroundForBlock:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 characterRange:(NSRange)arg4 layoutManager:(id)arg5 ;
-(char)collapsesBorders;
-(id)_rowArrayForBlock:(id)arg1 atIndex:(unsigned)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(float)arg5 withRepetitions:(char)arg6 collapseBorders:(char)arg7 rowCharRange:(NSRange*)arg8 indexInRow:(unsigned*)arg9 startingRow:(int*)arg10 startingColumn:(int*)arg11 previousRowBlockHelper:(id*)arg12 ;
-(CGRect)_contentRectForCharRange:(NSRange)arg1 textContainer:(id)arg2 ;
-(char)hidesEmptyCells;
-(char)_missingColumnsForRowRange:(NSRange)arg1 blockIndex:(unsigned)arg2 text:(id)arg3 ;
-(void)setCollapsesBorders:(char)arg1 ;
-(void)setHidesEmptyCells:(char)arg1 ;
-(unsigned)layoutAlgorithm;
-(void)setLayoutAlgorithm:(unsigned)arg1 ;
-(unsigned)_tableFlags;
-(void)_setTableFlags:(unsigned)arg1 ;
-(id)_descriptionAtIndex:(unsigned)arg1 text:(id)arg2 ;
@end


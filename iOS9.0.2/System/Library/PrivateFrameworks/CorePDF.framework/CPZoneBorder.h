/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPCopying.h>

@class CPPage, NSMutableArray;

@interface CPZoneBorder : NSObject <NSCopying, CPCopying> {

	CGRect bounds;
	CPPage* page;
	NSMutableArray* ownerArray;
	NSMutableArray* graphicObjects;
	NSMutableArray* neighbors;
	NSMutableArray* intersections;
	char isHorizontal;
	char hasForwardVector;
	char hasBackwardVector;
	float overhangMin;
	float overhangMax;

}
+(void)outerVertices:(CGPoint*)arg1 fromBorders:(id)arg2 swollenBy:(float)arg3 ;
+(int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1 ;
+(void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(CGRect)arg3 ;
+(CGRect)extendRect:(CGRect)arg1 ;
+(void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 ;
-(CGRect)bounds;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isVertical;
-(id)page;
-(char)isHorizontal;
-(long)zOrder;
-(int)compareXBounds:(id)arg1 ;
-(int)compareYBounds:(id)arg1 ;
-(id)initSuper;
-(unsigned)graphicObjectCount;
-(id)graphicObjectAtIndex:(unsigned)arg1 ;
-(char)hasNeighborShape:(id)arg1 ;
-(unsigned)indexOfIntersectionWith:(id)arg1 ;
-(unsigned)neighborCount;
-(id)neighborAtIndex:(unsigned)arg1 ;
-(char)hasNeighborShape:(id)arg1 atSide:(int)arg2 ;
-(id)graphicObjects;
-(void)addGraphicObject:(id)arg1 ;
-(unsigned)intersectionCount;
-(char)windsClockwiseOnto:(id)arg1 ;
-(char)continues:(id)arg1 ;
-(char)extractCycleTo:(id)arg1 goingForward:(char)arg2 throughIntersectionIndex:(unsigned)arg3 returningTo:(id)arg4 atRect:(CGRect*)arg5 ;
-(id)copyWithoutIntersections;
-(char)hasClockwiseVectorAtIndex:(unsigned)arg1 startingForward:(char)arg2 ;
-(char)hasCounterclockwiseVectorAtIndex:(unsigned)arg1 startingForward:(char)arg2 ;
-(void)addToArray:(id)arg1 ;
-(void)trimToLastIntersections;
-(void)addNeighbor:(id)arg1 ;
-(void)removeFromArray;
-(void)removeLooseThreadsStartingFrom:(id)arg1 ;
-(id)initWithGraphicObject:(id)arg1 ;
-(void)addToArray:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeFromArrayAtIndex:(unsigned)arg1 ;
-(id)ownerArray;
-(void)removeGraphicObjectAtIndex:(unsigned)arg1 ;
-(void)removeNeighborAtIndex:(unsigned)arg1 ;
-(void)setHasForwardVector:(char)arg1 ;
-(char)hasForwardVector;
-(void)setHasBackwardVector:(char)arg1 ;
-(char)hasBackwardVector;
-(void)setSide:(int)arg1 ofPage:(id)arg2 ;
-(char)intersectsWith:(id)arg1 atRect:(CGRect*)arg2 ;
-(void)instantiateVectors;
-(char)hasVectorGoingForward:(char)arg1 startingAtIndex:(unsigned*)arg2 ;
-(char)extractCycleTo:(id)arg1 goingForward:(char)arg2 startingAtIndex:(unsigned)arg3 ;
-(char)crosses:(id)arg1 ;
-(void)combine:(id)arg1 ;
@end


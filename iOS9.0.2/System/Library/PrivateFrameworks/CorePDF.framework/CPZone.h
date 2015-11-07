/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>
#import <libobjc.A.dylib/CPGraphicUser.h>

@class NSMutableArray, CPZoneProfile, NSArray, CPCharSequence;

@interface CPZone : CPRegion <CPGraphicUser> {

	NSMutableArray* zoneBorders;
	CGPoint* outerVertices;
	CGPoint* swollenOuterVertices;
	double area;
	char isStraddleZone;
	CPZoneProfile* zoneProfile;
	NSArray* leftGuides;
	NSArray* rightGuides;
	NSArray* gutters;
	NSArray* spacers;
	CPCharSequence* charactersInZone;
	NSMutableArray* textLinesInZone;
	NSArray* graphicsInZone;
	NSMutableArray* backgroundGraphics;
	unsigned usedGraphicCount;

}
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)textLinesInZone;
-(void)accept:(id)arg1 ;
-(CGPoint*)outerVertices;
-(void)incrementUsedGraphicCount;
-(char)isZone;
-(unsigned)usedGraphicCount;
-(CGRect)zoneBounds;
-(CGColorRef)newBackgroundColor;
-(unsigned)wordCount;
-(id)backgroundGraphics;
-(char)mapToWordsWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(char)mapToWords:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(char)mapToWordPairs:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(char)mapToWordPairsWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(char)bordersWindClockwise;
-(char)hasNeighborShape:(id)arg1 ;
-(long)borderZOrder;
-(long)neighborZOrder;
-(CGPoint*)swollenOuterVertices;
-(char)hasBorders;
-(id)zoneBorders;
-(id)graphicsInZone;
-(void)setZoneBorders:(id)arg1 ;
-(void)removeUnfilledNeighborShapes;
-(CGRect)swollenZoneBounds;
-(char)rectangleBordersAtLeft:(id*)arg1 top:(id*)arg2 right:(id*)arg3 bottom:(id*)arg4 ;
-(char)canContain:(CGRect)arg1 ;
-(void)addPDFChar:(void*)arg1 ;
-(void)setCharactersInZone:(id)arg1 ;
-(id)charactersInZone;
-(void)addContentFrom:(id)arg1 ;
-(int)compareArea:(id)arg1 ;
-(char)isStraddleZone;
-(void)setIsStraddleZone:(char)arg1 ;
-(id)zoneProfile;
-(void)setZoneProfile:(id)arg1 ;
-(void)setLeftGuides:(id)arg1 ;
-(id)leftGuides;
-(void)setRightGuides:(id)arg1 ;
-(id)rightGuides;
-(void)setGutters:(id)arg1 ;
-(id)gutters;
-(void)setSpacers:(id)arg1 ;
-(id)spacers;
-(double)area;
-(unsigned)vertexCount;
-(char)contains:(id)arg1 ;
-(char)isRectangular;
@end


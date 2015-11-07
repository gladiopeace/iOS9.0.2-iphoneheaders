/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class TSDBezierPath, TSDBrushStroke, TSDLineEnd;

@interface TSDShape : NSObject {

	struct {
		unsigned path : 1;
		unsigned pathBounds : 1;
		unsigned pathBoundsWithoutStroke : 1;
		unsigned pathIsOpen : 1;
		unsigned pathIsLineSegment : 1;
		unsigned alignmentFrame : 1;
		unsigned headAndTail : 1;
		unsigned headLineEnd : 1;
		unsigned tailLineEnd : 1;
		unsigned clippedPath : 1;
	}  mShapeInvalidFlags;
	CGPoint mHeadPoint;
	CGPoint mTailPoint;
	CGPoint mHeadLineEndPoint;
	CGPoint mTailLineEndPoint;
	float mHeadLineEndAngle;
	float mTailLineEndAngle;
	int mHeadCutSegment;
	int mTailCutSegment;
	float mHeadCutT;
	float mTailCutT;
	TSDBezierPath* mCachedClippedPath;
	TSDBezierPath* _path;
	TSDBrushStroke* _stroke;
	TSDLineEnd* _headLineEnd;
	TSDLineEnd* _tailLineEnd;

}

@property (nonatomic,retain) TSDBezierPath * path;                  //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) TSDBrushStroke * stroke;               //@synthesize stroke=_stroke - In the implementation block
@property (nonatomic,retain) TSDLineEnd * headLineEnd;              //@synthesize headLineEnd=_headLineEnd - In the implementation block
@property (nonatomic,retain) TSDLineEnd * tailLineEnd;              //@synthesize tailLineEnd=_tailLineEnd - In the implementation block
-(id)init;
-(TSDBezierPath *)path;
-(TSDBrushStroke *)stroke;
-(void)setPath:(TSDBezierPath *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)clippedPathForLineEnds;
-(void)p_drawLineEndForHead:(char)arg1 withDelta:(CGPoint)arg2 inContext:(CGContextRef)arg3 useFastDrawing:(char)arg4 ;
-(id)strokeHeadLineEnd;
-(id)strokeTailLineEnd;
-(CGPoint)headLineEndPoint;
-(CGPoint)tailLineEndPoint;
-(float)headLineEndAngle;
-(float)tailLineEndAngle;
-(float)lineEndScale;
-(TSDLineEnd *)headLineEnd;
-(TSDLineEnd *)tailLineEnd;
-(void)p_validateHeadLineEnd;
-(void)p_validateTailLineEnd;
-(id)_newClippedPath;
-(void)p_invalidateClippedPath;
-(void)p_validateHeadAndTail;
-(void)p_computeAngle:(float*)arg1 point:(CGPoint*)arg2 cutSegment:(int*)arg3 cutT:(float*)arg4 forLineEndAtHead:(char)arg5 ;
-(void)p_invalidateHead;
-(void)p_invalidateTail;
-(void)setHeadLineEnd:(TSDLineEnd *)arg1 ;
-(void)setTailLineEnd:(TSDLineEnd *)arg1 ;
-(void)setStroke:(TSDBrushStroke *)arg1 ;
@end


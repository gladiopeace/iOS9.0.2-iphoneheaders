/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol NSObjectUIPDFAnnotationControllerDelegate;
@class UIPDFPageView, UIPDFMarkupAnnotation, CALayer, UIColor, UIPDFAnnotation, NSString;

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate> {

	UIPDFPageView* _pageView;
	int _lock;
	CGPoint _startPoint;
	char _moving;
	UIPDFMarkupAnnotation* _currentAnnotation;
	SCD_Struct_CP15 _initialRange;
	char _tracking;
	CALayer* _drawingSurface;
	id<NSObject><UIPDFAnnotationControllerDelegate> _delegate;
	CGSize _cachedMarginNoteSize;
	char makeUnderlineAnnotation;
	char _allowEditing;
	UIColor* _currentColor;

}

@property (nonatomic,readonly) UIPDFPageView * pageView;                                            //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,retain) UIPDFAnnotation * currentAnnotation;                                   //@synthesize currentAnnotation=_currentAnnotation - In the implementation block
@property (assign,nonatomic) char allowEditing;                                                     //@synthesize allowEditing=_allowEditing - In the implementation block
@property (assign,nonatomic) UIColor * currentColor;                                                //@synthesize currentColor=_currentColor - In the implementation block
@property (assign,nonatomic) char makeUnderlineAnnotation; 
@property (assign,nonatomic) CALayer * drawingSurface;                                              //@synthesize drawingSurface=_drawingSurface - In the implementation block
@property (assign,nonatomic) id<NSObject><UIPDFAnnotationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char tracking;                                                       //@synthesize tracking=_tracking - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newAnnotation:(CGPDFDictionaryRef)arg1 type:(const char*)arg2 ;
+(char)pageHasAnnotations:(id)arg1 ;
+(CGImageRef)newMaskImage:(CGPDFPageRef)arg1 size:(CGSize)arg2 ;
-(void)setAllowEditing:(char)arg1 ;
-(char)allowEditing;
-(void)addAnnotation:(id)arg1 ;
-(void)setNeedsDisplay;
-(void)setDelegate:(id<NSObject><UIPDFAnnotationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<NSObject><UIPDFAnnotationControllerDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setView:(id)arg1 ;
-(void)lock;
-(void)unlock;
-(UIPDFPageView *)pageView;
-(id)marginNoteImage:(id)arg1 ;
-(id)initWithPageView:(id)arg1 ;
-(void)setDrawingSurface:(CALayer *)arg1 ;
-(void)layoutAnnotationViews:(id)arg1 ;
-(void)drawAnnotations:(CGContextRef)arg1 ;
-(char)willDoSomethingWithTap:(CGPoint)arg1 ;
-(UIPDFAnnotation *)currentAnnotation;
-(char)willTrackAtPoint:(CGPoint)arg1 ;
-(void)startTracking:(CGPoint)arg1 ;
-(void)tracking:(CGPoint)arg1 ;
-(char)madeInstantAnnotation;
-(void)endTrackingAtPoint:(CGPoint)arg1 ;
-(void)doubleTapRecognized:(id)arg1 ;
-(char)isLinkAnnotationAt:(CGPoint)arg1 ;
-(char)annotationBriefPressRecognized:(id)arg1 ;
-(char)annotationLongPressRecognized:(id)arg1 ;
-(char)annotationSingleTapRecognized:(id)arg1 ;
-(void)addLinkAnnotationViews;
-(char)willHandleTouchGestureAtPoint:(CGPoint)arg1 ;
-(char)linkAnnotationShouldBegin:(id)arg1 ;
-(void)setMakeUnderlineAnnotation:(char)arg1 ;
-(void)_addLinkAnnotationViewFor:(id)arg1 ;
-(void)setSurfacePosition:(id)arg1 ;
-(void)annotationTapRecognized:(id)arg1 ;
-(void)linkPressRecognized:(id)arg1 ;
-(void)_addRecognizers:(id)arg1 ;
-(void)addDrawingSurface:(id)arg1 view:(id)arg2 ;
-(void)_addAnnotationViewFor:(id)arg1 ;
-(CGSize)marginNoteImageSize;
-(char)isSelection:(CGPDFSelectionRef)arg1 equalTo:(CGPDFSelectionRef)arg2 ;
-(char)intersects:(CGPDFSelectionRef)arg1 with:(CGPDFSelectionRef)arg2 ;
-(void)_initialRange:(CGPoint)arg1 ;
-(char)trackMoved:(CGPoint)arg1 ;
-(char)makeUnderlineAnnotation;
-(UIColor *)currentColor;
-(void)mergeSelectionOfAnnotation:(id)arg1 ;
-(id)_linkAnnotationViewAt:(CGPoint)arg1 ;
-(id)linkAnnotationAt:(CGPoint)arg1 ;
-(id)annotationAt:(CGPoint)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toSurfaceLayer:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toSurfaceLayer:(id)arg2 ;
-(void)hostViewDidScroll;
-(void)didEndTrackingAtPoint:(CGPoint)arg1 ;
-(id)annotatePageSelection;
-(void)copyAttributesOf:(id)arg1 to:(id)arg2 ;
-(CGImageRef)newHighlightMaskImageFor:(CGRect)arg1 ;
-(CGImageRef)underlineImageFor:(CGRect)arg1 ;
-(void)setCurrentAnnotation:(UIPDFAnnotation *)arg1 ;
-(CALayer *)drawingSurface;
-(char)tracking;
-(void)setCurrentColor:(UIColor *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class AKAnnotation, AKPageController, CALayer;

@interface AKAdornmentLayer : CALayer {

	char _isObservingAnnotation;
	char _isObservingEventHandling;
	AKAnnotation* _annotation;
	AKPageController* _pageController;
	float _currentScaleFactor;
	CALayer* _handleContainerLayer;

}

@property (retain) AKAnnotation * annotation;                      //@synthesize annotation=_annotation - In the implementation block
@property (__weak) AKPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
@property (assign) float currentScaleFactor;                       //@synthesize currentScaleFactor=_currentScaleFactor - In the implementation block
@property (assign) char isObservingAnnotation;                     //@synthesize isObservingAnnotation=_isObservingAnnotation - In the implementation block
@property (retain) CALayer * handleContainerLayer;                 //@synthesize handleContainerLayer=_handleContainerLayer - In the implementation block
@property (assign) char isObservingEventHandling;                  //@synthesize isObservingEventHandling=_isObservingEventHandling - In the implementation block
+(Class)_adornmentClassForAnnotation:(id)arg1 ;
+(id)newAdornmentLayerForAnnotation:(id)arg1 withPageController:(id)arg2 ;
-(void)dealloc;
-(id)actionForKey:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(AKAnnotation *)annotation;
-(void)setAnnotation:(AKAnnotation *)arg1 ;
-(void)updateAdornmentElements;
-(void)updateSublayersWithScale:(float)arg1 ;
-(unsigned)currentlyDraggedArea;
-(char)needsUpdateWhenDraggingStartsOrEnds;
-(id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2 ;
-(void)_startObservingAnnotation;
-(void)_stopObservingAnnotation;
-(char)isObservingAnnotation;
-(void)setIsObservingAnnotation:(char)arg1 ;
-(void)updatePixelAlignment;
-(void)setCurrentScaleFactor:(float)arg1 ;
-(void)setHandleContainerLayer:(CALayer *)arg1 ;
-(CALayer *)handleContainerLayer;
-(void)_startObservingAnnotationEventHandlers;
-(void)_stopObservingAnnotationEventHandlers;
-(void)_addHandleSublayerAtPoint:(CGPoint)arg1 withStyle:(unsigned)arg2 ;
-(char)isObservingEventHandling;
-(void)setIsObservingEventHandling:(char)arg1 ;
-(float)currentScaleFactor;
-(void)teardown;
@end


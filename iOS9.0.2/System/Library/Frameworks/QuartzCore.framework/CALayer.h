/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/CAPropertyInfo.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/CAMediaTiming.h>

@class NSArray, CAMeshTransform, NSString, NSDictionary;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {

	CALayerIvars* _attr;

}

@property (nonatomic,retain,readonly) CALayer * currentLayer; 
@property (nonatomic,retain,readonly) CALayer * _mapKit_mapLayer; 
@property (nonatomic,readonly) CALayer * _labelLayerToClipDuringBoundsSizeAnimation; 
@property (copy) NSArray * states; 
@property (copy) NSArray * stateTransitions; 
@property (readonly) CGRect visibleRect; 
@property (copy) CAMeshTransform * meshTransform; 
@property (assign) char needsLayoutOnGeometryChange; 
@property (assign) char canDrawConcurrently; 
@property (assign) char acceleratesDrawing; 
@property (getter=isFrozen) char frozen; 
@property (assign) char allowsHitTesting; 
@property (assign) char hitTestsAsOpaque; 
@property (assign) char clearsContext; 
@property (assign) char contentsOpaque; 
@property (assign) char literalContentsCenter; 
@property (copy) NSString * contentsScaling; 
@property (assign) CGAffineTransform contentsTransform; 
@property (assign) char invertsShadow; 
@property (assign) char shadowPathIsBounds; 
@property (assign) char swapsMaskAndLayer; 
@property (retain) id cornerContents; 
@property (assign) CGRect cornerContentsCenter; 
@property (assign) unsigned maskedCorners; 
@property (assign) float motionBlurAmount; 
@property (assign) char sortsSublayers; 
@property (assign) char preloadsCache; 
@property (assign) char rasterizationPrefersDisplayCompositing; 
@property (assign) char allowsGroupBlending; 
@property (assign) char allowsDisplayCompositing; 
@property (assign) CGSize sizeRequisition; 
@property (assign) CGSize backgroundColorPhase; 
@property (copy) NSArray * lights; 
@property (assign) char acceptsLights; 
@property (assign) float ambientReflectance; 
@property (assign) float diffuseReflectance; 
@property (assign) float specularReflectance; 
@property (assign) float shininess; 
@property (assign) float metallicity; 
@property (copy) NSArray * behaviors; 
@property (assign) float velocityStretch; 
@property (assign) float mass; 
@property (assign) float momentOfInertia; 
@property (assign) float coefficientOfRestitution; 
@property (assign) CGRect bounds; 
@property (assign) CGPoint position; 
@property (assign) float zPosition; 
@property (assign) CGPoint anchorPoint; 
@property (assign) float anchorPointZ; 
@property (assign) CATransform3D transform; 
@property (assign) CGRect frame; 
@property (getter=isHidden) char hidden; 
@property (getter=isDoubleSided) char doubleSided; 
@property (getter=isGeometryFlipped) char geometryFlipped; 
@property (readonly) CALayer * superlayer; 
@property (copy) NSArray * sublayers; 
@property (assign) CATransform3D sublayerTransform; 
@property (retain) CALayer * mask; 
@property (assign) char masksToBounds; 
@property (retain) id contents; 
@property (assign) CGRect contentsRect; 
@property (copy) NSString * contentsGravity; 
@property (assign) float contentsScale; 
@property (assign) CGRect contentsCenter; 
@property (copy) NSString * minificationFilter; 
@property (copy) NSString * magnificationFilter; 
@property (assign) float minificationFilterBias; 
@property (getter=isOpaque) char opaque; 
@property (assign) char needsDisplayOnBoundsChange; 
@property (assign) char drawsAsynchronously; 
@property (assign) unsigned edgeAntialiasingMask; 
@property (assign) char allowsEdgeAntialiasing; 
@property (assign) CGColorRef backgroundColor; 
@property (assign) float cornerRadius; 
@property (assign) float borderWidth; 
@property (assign) CGColorRef borderColor; 
@property (assign) float opacity; 
@property (assign) char allowsGroupOpacity; 
@property (retain) id compositingFilter; 
@property (copy) NSArray * filters; 
@property (copy) NSArray * backgroundFilters; 
@property (assign) char shouldRasterize; 
@property (assign) float rasterizationScale; 
@property (assign) CGColorRef shadowColor; 
@property (assign) float shadowOpacity; 
@property (assign) CGSize shadowOffset; 
@property (assign) float shadowRadius; 
@property (assign) const CGPathRef shadowPath; 
@property (copy) NSDictionary * actions; 
@property (copy) NSString * name; 
@property (__weak) id delegate; 
@property (copy) NSDictionary * style; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) char autoreverses; 
@property (copy) NSString * fillMode; 
+(void)pu_animateAlongsideView:(id)arg1 animations:(/*^block*/id)arg2 ;
+(id)SCNJSExportProtocol;
+(id)defaultActionForKey:(id)arg1 ;
+(char)resolveInstanceMethod:(SEL)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(char)_hasRenderLayerSubclass;
+(char)needsLayoutForKey:(id)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 ;
+(id)layer;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)properties;
+(char)needsDisplayForKey:(id)arg1 ;
-(id)pkui_addAdditiveAnimation:(id)arg1 ;
-(double)_pkui_elapsedDurationForAnimation:(id)arg1 ;
-(id)pkui_additiveAnimationKeyPrefixForKeyPath:(id)arg1 ;
-(id)pkui_addAdditiveAnimation:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_pkui_nextAdditiveAnimationKeyWithKeyPath:(id)arg1 ;
-(double)pkui_elapsedDurationForAnimationWithKey:(id)arg1 ;
-(double)pkui_remainingDurationForAnimationWithKey:(id)arg1 ;
-(char)pkui_hasAdditiveAnimationForKeyPath:(id)arg1 ;
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(id)_gkRecursiveDescription;
-(CATransform3D)_gkParentSublayerTransform;
-(void)pu_setPosition:(CGPoint)arg1 ;
-(void)pu_setTransform:(CATransform3D)arg1 ;
-(id)_pu_uniqueAnimationKeyWithProposedKey:(id)arg1 ;
-(char)getPresentationValue:(id*)arg1 forKey:(id)arg2 removeAnimation:(char)arg3 ;
-(char)getPresentationValue:(id*)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(char)arg4 ;
-(void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CALayer *)currentLayer;
-(void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1 ;
-(CALayer *)_mapKit_mapLayer;
-(void)setPerspectiveDistance:(float)arg1 ;
-(char)uiHasFilterWithName:(id)arg1 ;
-(CALayer *)_labelLayerToClipDuringBoundsSizeAnimation;
-(void)_setLabelMasksToBoundsForAnimation:(char)arg1 ;
-(int)compareTextEffectsOrdering:(id)arg1 ;
-(void)web_disableAllActions;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(char)contentsAreFlipped;
-(CADoubleRect)convertDoubleRect:(CADoubleRect)arg1 toLayer:(id)arg2 ;
-(char)autoreverses;
-(double)convertTime:(double)arg1 toLayer:(id)arg2 ;
-(void)setShadowPathIsBounds:(char)arg1 ;
-(float)zPosition;
-(char)allowsEdgeAntialiasing;
-(NSString *)fillMode;
-(float)shadowOpacity;
-(void)setAllowsDisplayCompositing:(char)arg1 ;
-(void)insertState:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)stateWithName:(id)arg1 ;
-(id)dependentStatesOfState:(id)arg1 ;
-(id)stateTransitionFrom:(id)arg1 to:(id)arg2 ;
-(void)_scrollPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(void)_scrollRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CGRect)_visibleRectOfLayer:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(char)shouldArchiveValueForKey:(id)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(id)_initWithReference:(id)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(unsigned)_renderImageCopyFlags;
-(void)_renderBackgroundInContext:(CGContextRef)arg1 ;
-(char)_defersDidBecomeVisiblePostCommit;
-(char)ignoresHitTesting;
-(char)allowsHitTesting;
-(char)sortsSublayers;
-(char)_scheduleAnimationTimer;
-(void)_cancelAnimationTimer;
-(void)_prepareContext:(CGContextRef)arg1 ;
-(void)_renderForegroundInContext:(CGContextRef)arg1 ;
-(void)_renderSublayersInContext:(CGContextRef)arg1 ;
-(void)_renderBorderInContext:(CGContextRef)arg1 ;
-(char)drawsMipmapLevels;
-(void)setSizeRequisition:(CGSize)arg1 ;
-(CGSize)sizeRequisition;
-(CGSize)_preferredSize;
-(id)cornerContents;
-(unsigned)maskedCorners;
-(void)setMaskedCorners:(unsigned)arg1 ;
-(CGRect)cornerContentsCenter;
-(NSArray *)backgroundFilters;
-(char)rasterizationPrefersDisplayCompositing;
-(char)canDrawConcurrently;
-(float)motionBlurAmount;
-(NSArray *)lights;
-(CGSize)backgroundColorPhase;
-(char)acceptsLights;
-(float)ambientReflectance;
-(float)diffuseReflectance;
-(float)specularReflectance;
-(float)metallicity;
-(float)velocityStretch;
-(float)coefficientOfRestitution;
-(char)preloadsCache;
-(char)allowsDisplayCompositing;
-(char)allowsExtendedColorRangeContent;
-(char)hitTestsAsOpaque;
-(char)literalContentsCenter;
-(char)swapsMaskAndLayer;
-(char)invertsShadow;
-(char)shadowPathIsBounds;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(CADoubleRect)convertDoubleRect:(CADoubleRect)arg1 fromLayer:(id)arg2 ;
-(char)_canDisplayConcurrently;
-(char)layoutIsActive;
-(id)layerBeingDrawn;
-(id)layerAtTime:(double)arg1 ;
-(char)doubleSided;
-(void)setFlipped:(char)arg1 ;
-(void)setLiteralContentsCenter:(char)arg1 ;
-(void)setInvertsShadow:(char)arg1 ;
-(char)contentsOpaque;
-(void)setSwapsMaskAndLayer:(char)arg1 ;
-(void)setMotionBlurAmount:(float)arg1 ;
-(void)setAllowsExtendedColorRangeContent:(char)arg1 ;
-(void)setBackgroundColorPhase:(CGSize)arg1 ;
-(void)setLights:(NSArray *)arg1 ;
-(void)setAcceptsLights:(char)arg1 ;
-(void)setAmbientReflectance:(float)arg1 ;
-(void)setDiffuseReflectance:(float)arg1 ;
-(void)setSpecularReflectance:(float)arg1 ;
-(void)setMetallicity:(float)arg1 ;
-(void)setVelocityStretch:(float)arg1 ;
-(void)setCoefficientOfRestitution:(float)arg1 ;
-(char)getRendererInfo:(CARenderRendererInfo*)arg1 size:(unsigned long)arg2 ;
-(void)setMomentOfInertia:(float)arg1 ;
-(float)momentOfInertia;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setOpaque:(char)arg1 ;
-(void)setNeedsDisplayOnBoundsChange:(char)arg1 ;
-(void)setNeedsDisplay;
-(CGRect)bounds;
-(CGSize)size;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setActions:(NSDictionary *)arg1 ;
-(void)setCompositingFilter:(id)arg1 ;
-(CGColorRef)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(char)isHidden;
-(void)setNeedsLayout;
-(void)setHidden:(char)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)addSublayer:(id)arg1 ;
-(CGRect)frame;
-(void)setBounds:(CGRect)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(id)debugDescription;
-(id)delegate;
-(void)setSpeed:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(double)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)layoutIfNeeded;
-(NSDictionary *)actions;
-(void)setHitTestsAsOpaque:(char)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)display;
-(void)setMasksToBounds:(char)arg1 ;
-(void)setCornerRadius:(float)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(NSDictionary *)style;
-(void)setShadowColor:(CGColorRef)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setTransform:(CATransform3D)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setRasterizationPrefersDisplayCompositing:(char)arg1 ;
-(CGAffineTransform)affineTransform;
-(void)setAffineTransform:(CGAffineTransform)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setRasterizationScale:(float)arg1 ;
-(float)rasterizationScale;
-(id)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toLayer:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toLayer:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CATransform3D)transform;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)contents;
-(void)layoutBelowIfNeeded;
-(CALayer *)superlayer;
-(CADoublePoint)convertDoublePoint:(CADoublePoint)arg1 toLayer:(id)arg2 ;
-(CADoublePoint)convertDoublePoint:(CADoublePoint)arg1 fromLayer:(id)arg2 ;
-(id)context;
-(float)speed;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(char)hasBeenCommitted;
-(float)repeatCount;
-(void)setFilters:(NSArray *)arg1 ;
-(void)setFillMode:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setAutoreverses:(char)arg1 ;
-(id)presentationLayer;
-(char)isOpaque;
-(void)setMagnificationFilter:(NSString *)arg1 ;
-(void)setContentsCenter:(CGRect)arg1 ;
-(CGRect)contentsCenter;
-(NSArray *)sublayers;
-(void)setAllowsGroupBlending:(char)arg1 ;
-(CALayer *)mask;
-(void)setMask:(CALayer *)arg1 ;
-(void)setCornerContents:(id)arg1 ;
-(void)setCornerContentsCenter:(CGRect)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(float)cornerRadius;
-(CGPoint)position;
-(char)needsLayout;
-(void)removeFromSuperlayer;
-(void)setSublayers:(NSArray *)arg1 ;
-(void)setContentsGravity:(NSString *)arg1 ;
-(char)needsDisplayOnBoundsChange;
-(NSString *)contentsGravity;
-(void)setContentsScaling:(NSString *)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(float)contentsScale;
-(void)setContentsScale:(float)arg1 ;
-(void)setShouldRasterize:(char)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(char)needsDisplay;
-(char)masksToBounds;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setClearsContext:(char)arg1 ;
-(char)clearsContext;
-(void)clearHasBeenCommitted;
-(void)displayIfNeeded;
-(double)convertTime:(double)arg1 fromLayer:(id)arg2 ;
-(double)beginTime;
-(NSArray *)filters;
-(void)removeAllAnimations;
-(char)shouldRasterize;
-(void)setContents:(id)arg1 ;
-(void)invalidateContents;
-(void)setContentsTransform:(CGAffineTransform)arg1 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(char)isFrozen;
-(id)ancestorSharedWithLayer:(id)arg1 ;
-(char)allowsWeakReference;
-(void)setSublayerTransform:(CATransform3D)arg1 ;
-(char)needsLayoutOnGeometryChange;
-(void)setNeedsLayoutOnGeometryChange:(char)arg1 ;
-(CADoubleRect)doubleBounds;
-(void)setDoubleBounds:(CADoubleRect)arg1 ;
-(CGPoint)anchorPoint;
-(CADoublePoint)doublePosition;
-(void)setDoublePosition:(CADoublePoint)arg1 ;
-(CGSize)shadowOffset;
-(void)setStyle:(NSDictionary *)arg1 ;
-(void)setAllowsGroupOpacity:(char)arg1 ;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(CGColorRef)shadowColor;
-(char)allowsGroupOpacity;
-(void)setPreloadsCache:(char)arg1 ;
-(void)setFrozen:(char)arg1 ;
-(CGRect)visibleRect;
-(void)setBorderWidth:(float)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(void)setShadowPath:(const CGPathRef)arg1 ;
-(NSString *)contentsScaling;
-(id)compositingFilter;
-(void)setEdgeAntialiasingMask:(unsigned)arg1 ;
-(void)_dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(float)mass;
-(char)retainWeakReference;
-(CGColorRef)borderColor;
-(id)hitTest:(CGPoint)arg1 ;
-(void)_display;
-(char)opaque;
-(void)setZPosition:(float)arg1 ;
-(float)borderWidth;
-(void)setAllowsEdgeAntialiasing:(char)arg1 ;
-(CAMeshTransform *)meshTransform;
-(void)setMeshTransform:(CAMeshTransform *)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(float)shadowRadius;
-(void)setShadowOpacity:(float)arg1 ;
-(void)setShadowRadius:(float)arg1 ;
-(CGRect)contentsRect;
-(const CGPathRef)shadowPath;
-(char)isDoubleSided;
-(void)setDoubleSided:(char)arg1 ;
-(CATransform3D)sublayerTransform;
-(unsigned)edgeAntialiasingMask;
-(NSArray *)behaviors;
-(char)allowsGroupBlending;
-(void)setMinificationFilter:(NSString *)arg1 ;
-(char)isGeometryFlipped;
-(void)setGeometryFlipped:(char)arg1 ;
-(void)setBehaviors:(NSArray *)arg1 ;
-(char)drawsAsynchronously;
-(void)setDrawsAsynchronously:(char)arg1 ;
-(float)anchorPointZ;
-(void)setAnchorPointZ:(float)arg1 ;
-(CGSize)preferredFrameSize;
-(void)setSortsSublayers:(char)arg1 ;
-(void)setBackgroundFilters:(NSArray *)arg1 ;
-(CGAffineTransform)contentsTransform;
-(id)modelLayer;
-(char)isFlipped;
-(void)addState:(id)arg1 ;
-(void)removeState:(id)arg1 ;
-(char)hidden;
-(id)initWithBounds:(CGRect)arg1 ;
-(double)repeatDuration;
-(void)setRepeatDuration:(double)arg1 ;
-(void)setContentsOpaque:(char)arg1 ;
-(NSString *)magnificationFilter;
-(NSString *)minificationFilter;
-(float)minificationFilterBias;
-(void)setMinificationFilterBias:(float)arg1 ;
-(float)shininess;
-(void)setShininess:(float)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setAllowsHitTesting:(char)arg1 ;
-(void)setAcceleratesDrawing:(char)arg1 ;
-(void)setContentsChanged;
-(char)acceleratesDrawing;
-(void)scrollPoint:(CGPoint)arg1 ;
-(void)reloadValueForKeyPath:(id)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 ;
-(char)isDescendantOf:(id)arg1 ;
-(void)setCanDrawConcurrently:(char)arg1 ;
-(void*)regionBeingDrawn;
@end


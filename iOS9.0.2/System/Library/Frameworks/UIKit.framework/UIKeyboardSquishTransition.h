/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKeyboardKeyplaneTransition.h>

@class NSArray, CADisplayLink;

@interface UIKeyboardSquishTransition : UIKeyboardKeyplaneTransition {

	float _widthRatio;
	float _offsetX;
	char _useInteractiveOpacity;
	char _disableMeshOptimization;
	char _opacityAnimationDirectionForward;
	unsigned _animationType;
	NSArray* _startGeometries;
	NSArray* _endGeometries;
	NSArray* _commonVisibleKeys;
	CADisplayLink* _opacityAnimationDisplayLink;
	float _previousProgress;
	double _opacityAnimationBeginTime;

}

@property (assign,nonatomic) char useInteractiveOpacity;                               //@synthesize useInteractiveOpacity=_useInteractiveOpacity - In the implementation block
@property (assign,nonatomic) unsigned animationType;                                   //@synthesize animationType=_animationType - In the implementation block
@property (assign,nonatomic) char disableMeshOptimization;                             //@synthesize disableMeshOptimization=_disableMeshOptimization - In the implementation block
@property (nonatomic,retain) NSArray * startGeometries;                                //@synthesize startGeometries=_startGeometries - In the implementation block
@property (nonatomic,retain) NSArray * endGeometries;                                  //@synthesize endGeometries=_endGeometries - In the implementation block
@property (nonatomic,retain) NSArray * commonVisibleKeys;                              //@synthesize commonVisibleKeys=_commonVisibleKeys - In the implementation block
@property (nonatomic,retain) CADisplayLink * opacityAnimationDisplayLink;              //@synthesize opacityAnimationDisplayLink=_opacityAnimationDisplayLink - In the implementation block
@property (assign,nonatomic) double opacityAnimationBeginTime;                         //@synthesize opacityAnimationBeginTime=_opacityAnimationBeginTime - In the implementation block
@property (assign,nonatomic) char opacityAnimationDirectionForward;                    //@synthesize opacityAnimationDirectionForward=_opacityAnimationDirectionForward - In the implementation block
@property (assign,nonatomic) float previousProgress;                                   //@synthesize previousProgress=_previousProgress - In the implementation block
-(void)dealloc;
-(void)removeAllAnimations;
-(void)updateWithProgress:(float)arg1 ;
-(void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4 ;
-(void)commitTransitionRebuild;
-(void)setAnimationType:(unsigned)arg1 ;
-(void)setDisableMeshOptimization:(char)arg1 ;
-(void)setStartGeometries:(NSArray *)arg1 ;
-(void)setEndGeometries:(NSArray *)arg1 ;
-(id)sortedCommonVisibleKeys;
-(void)setCommonVisibleKeys:(NSArray *)arg1 ;
-(void)setPreviousProgress:(float)arg1 ;
-(void)_updateTransition;
-(char)useInteractiveOpacity;
-(unsigned)animationType;
-(id)meshTransformForKeyplane:(id)arg1 toKeyplane:(id)arg2 ;
-(id)_animationsForStart;
-(id)_animationsForEnd;
-(CADisplayLink *)opacityAnimationDisplayLink;
-(void)setOpacityAnimationDisplayLink:(CADisplayLink *)arg1 ;
-(float)previousProgress;
-(void)setOpacityAnimationDirectionForward:(char)arg1 ;
-(void)setOpacityAnimationBeginTime:(double)arg1 ;
-(void)updateOpacityAnimation:(id)arg1 ;
-(double)opacityAnimationBeginTime;
-(char)opacityAnimationDirectionForward;
-(NSArray *)startGeometries;
-(NSArray *)endGeometries;
-(NSArray *)commonVisibleKeys;
-(char)disableMeshOptimization;
-(id)geometriesForKeyplane:(id)arg1 ;
-(id)symmetricMeshTransformForKeyplane:(id)arg1 ;
-(void)setUseInteractiveOpacity:(char)arg1 ;
@end


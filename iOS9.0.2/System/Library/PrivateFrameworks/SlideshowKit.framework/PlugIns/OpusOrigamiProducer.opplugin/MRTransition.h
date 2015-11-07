/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MRLoadable.h>
#import <OpusOrigamiProducer/MRRenderable.h>

@class NSDictionary, MRLayer, MRImage, NSString;

@interface MRTransition : NSObject <MRLoadable, MRRenderable> {

	NSDictionary* mDescription;
	id mTransitioner;
	MRLayer* mSourceLayer;
	MRLayer* mTargetLayer;
	MRImage* mSourceLayerImage;
	MRImage* mTargetLayerImage;
	MRImage* mOutputImage;
	NSString* mTransitionID;
	NSString* mPresetID;
	NSDictionary* mAttributes;
	NSDictionary* mFlattenedAttributes;
	char mNeedsToUpdateAttributes;
	CGSize mPixelSize;
	char _direction;
	double _progress;

}

@property (retain) MRLayer * sourceLayer; 
@property (retain) MRLayer * targetLayer; 
@property (nonatomic,retain) MRImage * sourceLayerImage; 
@property (nonatomic,retain) MRImage * targetLayerImage; 
@property (readonly) NSString * transitionID; 
@property (copy) NSString * presetID; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (readonly) double progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) char controlsLayersTime; 
@property (nonatomic,readonly) char noContentsMotion; 
@property (nonatomic,readonly) char needsSourceLayerImageForPrecomputing; 
@property (nonatomic,readonly) char needsTargetLayerImageForPrecomputing; 
@property (readonly) char supportsDirectionOverride; 
@property (assign,nonatomic) char direction;                                           //@synthesize direction=_direction - In the implementation block
@property (readonly) char isSplit; 
@property (nonatomic,readonly) char isNative3D; 
@property (nonatomic,readonly) char isOpaque; 
@property (nonatomic,readonly) char isAlphaFriendly; 
@property (nonatomic,readonly) char isInfinite; 
+(id)retainedTransitionWithTransitionID:(id)arg1 forTransitioner:(id)arg2 ;
-(char)noContentsMotion;
-(char)isNative3D;
-(MRImage *)targetLayerImage;
-(char)needsSourceLayerImageForPrecomputing;
-(char)needsTargetLayerImageForPrecomputing;
-(MRLayer *)targetLayer;
-(MRImage *)sourceLayerImage;
-(void)setTargetLayer:(MRLayer *)arg1 ;
-(char)isAlphaFriendly;
-(NSString *)presetID;
-(void)setPresetID:(NSString *)arg1 ;
-(char)isLoadedForTime:(double)arg1 ;
-(NSString *)transitionID;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(double)pzrStart:(id)arg1 ;
-(double)pzrUpdate:(id)arg1 ;
-(double)pzrEnd:(id)arg1 ;
-(double)pzrCancel:(id)arg1 ;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(char)arg4 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)initWithTransitionID:(id)arg1 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)retainByTransitioner:(id)arg1 ;
-(void)releaseByTransitioner:(id)arg1 ;
-(char)dependsOnFingerPosition;
-(char)controlsLayersTime;
-(void)setSourceLayerImage:(MRImage *)arg1 ;
-(void)setTargetLayerImage:(MRImage *)arg1 ;
-(char)supportsDirectionOverride;
-(char)isRetainedByTransitioner;
-(void)cancelLoading;
-(void)dealloc;
-(char)isSplit;
-(char)isOpaque;
-(void)setDirection:(char)arg1 ;
-(char)direction;
-(char)isTransitioning;
-(double)progress;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)cleanup;
-(void)setSourceLayer:(MRLayer *)arg1 ;
-(MRLayer *)sourceLayer;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)unload;
-(CGSize)pixelSize;
-(char)isInfinite;
@end


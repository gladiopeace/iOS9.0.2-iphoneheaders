/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>
#import <OpusOrigamiProducer/MRMarimbaPlayback.h>
#import <OpusOrigamiProducer/MRMarimbaHitBlobSupport.h>
#import <OpusOrigamiProducer/MRMarimbaBasicPlayback.h>

@class MPDocument, MRRenderer, MPFaceDetector, NSDictionary, NSTimer, NSString, EAGLContext;

@interface MRMarimbaLayer : CAEAGLLayer <MRMarimbaPlayback, MRMarimbaHitBlobSupport, MRMarimbaBasicPlayback> {

	MRRenderer* _renderer;
	MPDocument* _document;
	char _masterClockIsSet;
	char _bailTimeWatcher;
	char _stopWithVideo;
	char _wasSuspended;
	MPFaceDetector* _faceDetector;
	float _morphingToAspectRatio;
	CGSize _frameBufferSize;
	NSDictionary* _nextMorphInfo;
	NSTimer* _faceTimer;
	double _timestampOfLastRenderPass;
	char _enableSlideDidChangeNotification;
	char _sizeChangedWhileRendererSizeWasLocked;
	NSString* _lastSlideChange;
	EAGLContext* _context;
	unsigned _viewRenderbuffer;
	unsigned _viewFramebuffer;
	unsigned _depthBuffer;
	char _isAboutToPlay;
	char _isReadonly;
	char _slidesAreReadonly;
	char _rendererSizeIsLocked;
	char _correctsForAutorotation;
	char _interactivityIsEnabled;

}

@property (assign,nonatomic) char isAboutToPlay; 
@property (assign,nonatomic) double framesPerSecond; 
@property (assign,nonatomic) char interactivityIsEnabled;                        //@synthesize interactivityIsEnabled=_interactivityIsEnabled - In the implementation block
@property (assign,nonatomic) char isReadonly;                                    //@synthesize isReadonly=_isReadonly - In the implementation block
@property (assign,nonatomic) char slidesAreReadonly;                             //@synthesize slidesAreReadonly=_slidesAreReadonly - In the implementation block
@property (assign,nonatomic) char rendererSizeIsLocked;                          //@synthesize rendererSizeIsLocked=_rendererSizeIsLocked - In the implementation block
@property (assign,nonatomic) char correctsForAutorotation;                       //@synthesize correctsForAutorotation=_correctsForAutorotation - In the implementation block
@property (readonly) CGSize size; 
@property (nonatomic,retain) MPDocument * document; 
@property (assign,nonatomic) double time; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) char isPlaying; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) char stopWithVideo; 
@property (assign,nonatomic) char displaysFPS; 
@property (nonatomic,readonly) MRRenderer * renderer; 
@property (assign,nonatomic) char enableSlideDidChangeNotification;              //@synthesize enableSlideDidChangeNotification=_enableSlideDidChangeNotification - In the implementation block
+(void)releaseResources;
+(id)layerWithDocument:(id)arg1 size:(CGSize)arg2 ;
+(char)shouldRenderOnBackgroundThread;
+(id)layerWithDocument:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)nextFrame;
-(char)stopWithVideo;
-(void)cancelGesture:(id)arg1 ;
-(void)prevFrame;
-(void)gotoEnd;
-(void)doGesture:(id)arg1 ;
-(void)gotoNextSlide;
-(char)displaysFPS;
-(void)didAddEffects:(id)arg1 ;
-(void)pauseWhenStill;
-(void)didLiveChanged:(id)arg1 ;
-(void)didApplyStyle:(id)arg1 ;
-(void)endGesture:(id)arg1 ;
-(id)lastSlideChange;
-(double)timeForSlide:(id)arg1 ;
-(int)_mainLayerIndex;
-(char)bailTimeWatcher;
-(void)gotoNextSlide:(char)arg1 ;
-(char)isAboutToPlay;
-(void)watcherThread:(id)arg1 ;
-(void)callbackThread:(id)arg1 ;
-(double)relativeTime;
-(void)gotoSlide:(id)arg1 ;
-(void)touchesEnded:(id)arg1 ;
-(void)warmupRenderer;
-(void)touchesMoved:(id)arg1 ;
-(void)touchesBegan:(id)arg1 ;
-(void)setDisplaysFPS:(char)arg1 ;
-(void)endMorphing;
-(id)currentSlides;
-(void)requestRendering:(char)arg1 ;
-(void)goForth;
-(char)nearingEndForSerializer:(id)arg1 ;
-(char)effect:(id)arg1 requestedNumberOfSlides:(unsigned)arg2 firstSlideIndexStillNeeded:(unsigned)arg3 ;
-(void)beginMorphingToAspectRatio:(float)arg1 andOrientation:(int)arg2 withDuration:(double)arg3 switchToDocument:(id)arg4 ;
-(char)interactivityIsEnabled;
-(void)touchesCancelled:(id)arg1 ;
-(void)setInteractivityIsEnabled:(char)arg1 ;
-(void)setCorrectsForAutorotation:(char)arg1 ;
-(void)setBailTimeWatcher:(char)arg1 ;
-(id)_currentEffectContainer;
-(void)moveToEffectContainer:(id)arg1 withStartOffset:(double)arg2 toStopOffset:(double)arg3 blocking:(char)arg4 ;
-(id)displayedEffectContainers;
-(id)_firstEffectContainer;
-(id)_effectContainerForTime:(double)arg1 ;
-(id)_currentEffectLayer;
-(void)gotoNextSlideLegacy;
-(void)gotoPreviousSlide:(char)arg1 ;
-(void)gotoPreviousSlideLegacy;
-(double)startTimeForSlide:(id)arg1 ;
-(void)gotoSlideLegacy:(id)arg1 ;
-(void)moveToNextEffectContainer;
-(void)moveToPreviousEffectContainer;
-(void)setLastSlideChange:(id)arg1 ;
-(void)_postNotificationForSlideChange:(id)arg1 ;
-(char)beginLiveUpdateForHitBlob:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toHitBlob:(id)arg2 ;
-(char)endLiveUpdateForHitBlob:(id)arg1 ;
-(void)destroyFramebuffer;
-(char)updateFramebuffer;
-(void)updateSizeOfRenderer:(id)arg1 ;
-(void)_slideDidAppear:(id)arg1 ;
-(void)setupFaceDetection;
-(char)_nearingEndForSerializer:(id)arg1 ;
-(char)_effectRequestedSlides:(id)arg1 ;
-(void)setStopWithVideo:(char)arg1 ;
-(double)relativeTimeForLayer:(id)arg1 ;
-(void)moveToSubtitleForSlide:(id)arg1 ;
-(void)gotoBeginning;
-(id)blobHitAtPoint:(CGPoint)arg1 fromObjectsForObjectIDs:(id)arg2 localPoint:(CGPoint*)arg3 ;
-(void)setRendererSizeIsLocked:(char)arg1 ;
-(char)getOnScreenVertices:(CGPoint)arg1 forHitBlob:(id)arg2 ;
-(void)gotoPreviousSlide;
-(double)relativeTimeForBackgroundAudio;
-(void)setIsAboutToPlay:(char)arg1 ;
-(void)_reauthorForAspectRatioChange;
-(void)whenTransitionIsFinishedSendAction:(SEL)arg1 toTarget:(id)arg2 ;
-(CGImageRef)snapshotAsCGImage;
-(void)gotoText:(id)arg1 ;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 withSize:(CGSize)arg2 ;
-(void)aspectRatioChangedTo:(id)arg1 ;
-(void)removeEffectContainersBeforeTime:(double)arg1 ;
-(void)setEnableSlideDidChangeNotification:(char)arg1 ;
-(void)setIsReadonly:(char)arg1 ;
-(void)moveToTitleSlide;
-(void)setSlidesAreReadonly:(char)arg1 ;
-(char)enableSlideDidChangeNotification;
-(void)beginEditingOfText:(id)arg1 ;
-(char)slidesAreReadonly;
-(char)rendererSizeIsLocked;
-(char)correctsForAutorotation;
-(char)isReadonly;
-(char)isAsynchronous;
-(id)currentSlide;
-(void)togglePlayback;
-(void)play;
-(char)isPlaying;
-(void)setVolume:(float)arg1 ;
-(void)beginGesture:(id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentsScale:(float)arg1 ;
-(char)isInTransition;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)goBack;
-(MPDocument *)document;
-(void)cleanup;
-(void)setDocument:(MPDocument *)arg1 ;
-(void)setSuspended:(char)arg1 ;
-(void)pause;
-(void)setFramesPerSecond:(double)arg1 ;
-(double)framesPerSecond;
-(float)volume;
-(double)timeRemaining;
-(MRRenderer *)renderer;
@end


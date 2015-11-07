/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MRMarimbaPlayback;
@class MPDocument, NSObject, NSOperationQueue, NSMutableSet, NSLock, NSTimer;

@interface MPFaceDetector : NSObject {

	MPDocument* mDocument;
	NSObject*<MRMarimbaPlayback> mRenderer;
	NSOperationQueue* mDetectionQueue;
	char mIsCancelled;
	NSMutableSet* mPathsInQueue;
	NSLock* mPathQueueLock;
	NSMutableSet* mPlayingSlides;
	NSLock* mPlayingSlidesLock;
	NSLock* mStartStopLock;
	NSTimer* mCheckTimer;

}

@property (nonatomic,retain) MPDocument * document; 
@property (nonatomic,retain) NSObject*<MRMarimbaPlayback> renderer; 
@property (assign,nonatomic) char isCancelled; 
-(char)_pathIsInQueue:(id)arg1 ;
-(void)detectFaces:(id)arg1 ;
-(void)_addPathToQueue:(id)arg1 ;
-(void)_removePathToQueue:(id)arg1 ;
-(void)_checkPlayingSlides;
-(void)checkPlayingSlides;
-(char)suspended;
-(void)setRenderer:(NSObject*<MRMarimbaPlayback>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)stop;
-(void)_start;
-(void)start;
-(char)isCancelled;
-(void)resume;
-(MPDocument *)document;
-(void)setDocument:(MPDocument *)arg1 ;
-(void)_setupTimer;
-(void)setIsCancelled:(char)arg1 ;
-(NSObject*<MRMarimbaPlayback>)renderer;
@end


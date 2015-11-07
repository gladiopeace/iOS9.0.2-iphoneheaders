/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLPreviewContentControllerProtocol <NSObject>
@property (assign) id<QLPreviewContentDataSource> dataSource; 
@property (assign) id<QLPreviewContentDelegate> delegate; 
@property (assign) int previewMode; 
@required
-(void)setTransitioning:(char)arg1 synchronizedWithBlock:(/*^block*/id)arg2;
-(void)checkCurrentPreviewItem;
-(void)stopLoadingCurrentPreviewItem;
-(void)enterBackground;
-(void)becomeForeground;
-(void)setOverlayHidden:(char)arg1 duration:(double)arg2;
-(void)configureWithParameters:(id)arg1;
-(void)willChangeContentFrame;
-(void)setContentFrame:(CGRect)arg1;
-(void)forceResignFirstResponder;
-(void)togglePlayState;
-(void)dismissTransitionIsReadyToFinishSynchronizedWithBlock:(/*^block*/id)arg1;
-(void)setOrbMode:(unsigned)arg1;
-(id)printPageHelper;
-(void)beginScrubbing;
-(void)scrubToValue:(double)arg1;
-(void)endScrubbing;
-(void)setDataSource:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<QLPreviewContentDataSource>)dataSource;
-(id<QLPreviewContentDelegate>)delegate;
-(void)setBlockRemoteImages:(char)arg1;
-(id)printPageRenderer;
-(void)setCurrentPreviewItemIndex:(int)arg1;
-(void)setLoadingTextForMissingFiles:(id)arg1;
-(void)refreshCurrentPreviewItem;
-(int)currentPreviewItemIndex;
-(void)setPreviewMode:(int)arg1;
-(int)previewMode;

@end


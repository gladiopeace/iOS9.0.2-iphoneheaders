/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RCPreviewControllerObserver <NSObject>
@optional
-(void)previewControllerDidChangePreparingState:(id)arg1;
-(void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2;

@required
-(void)previewController:(id)arg1 playbackDidStopPlayingWithError:(id)arg2;
-(void)previewController:(id)arg1 playbackDidBeginWithRate:(float)arg2;
-(void)previewController:(id)arg1 playbackTimeDidJumpWithPreviousTime:(double)arg2;

@end


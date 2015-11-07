/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPVideoOverlayDelegate <NSObject>
@optional
-(double)overlay:(id)arg1 interpretCurrentTime:(double)arg2;
-(void)overlayDidBeginScrubbing:(id)arg1;
-(void)overlayDidEndScrubbing:(id)arg1;
-(void)overlayTappedBackButton:(id)arg1;
-(void)overlayTappedFullscreenButton:(id)arg1;
-(void)overlayTappedPictureInPictureButton:(id)arg1;
-(char)overlayShouldAcceptSkipBackwardEvent:(id)arg1;
-(char)overlayShouldAcceptSkipForwardEvent:(id)arg1;
-(double)overlay:(id)arg1 interpretDuration:(double)arg2;
-(void)overlay:(id)arg1 didBeginUserEvent:(int)arg2;
-(void)overlay:(id)arg1 didCancelUserEvent:(int)arg2;
-(void)overlay:(id)arg1 didEndUserEvent:(int)arg2;
-(void)overlayTappedScaleModeButton:(id)arg1;
-(void)overlayDidDismissAlternateTracksPopover:(id)arg1;

@end


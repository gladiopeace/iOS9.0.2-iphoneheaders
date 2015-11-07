/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@class YTVideo, NSArray, NSURL, YTSearchRequest, UIMoviePlayerController, UIImageView, UILabel;

@interface YTMovieView : UIView {

	id _delegate;
	YTVideo* _video;
	NSArray* _videoList;
	NSURL* _youTubeURL;
	YTSearchRequest* _videoInfoRequest;
	UIMoviePlayerController* _moviePlayer;
	UIImageView* _bugView;
	UIImageView* _gradientView;
	char _canAutoPlay;
	char _shownFromExternalURL;
	char _switchingVideos;
	char _controlsShown;
	char _useSmallLogo;
	char _showControlsAfterFullscreenExit;
	char _isShown;
	double _seekTime;
	UILabel* _logLabel;

}
-(void)setFullscreen:(char)arg1 ;
-(void)moviePlayerDidShowOverlay:(id)arg1 ;
-(void)moviePlayerDidHideOverlay:(id)arg1 ;
-(id)fullscreenView;
-(char)moviePlayerAddBookmarkButtonPressed:(id)arg1 ;
-(char)moviePlayerBackwardButtonPressed:(id)arg1 ;
-(char)moviePlayerEmailButtonPressed:(id)arg1 ;
-(char)moviePlayerForwardButtonPressed:(id)arg1 ;
-(void)moviePlayerWillEnterFullscreen:(id)arg1 ;
-(void)moviePlayerDidEnterFullscreen:(id)arg1 ;
-(void)moviePlayerWillExitFullscreen:(id)arg1 ;
-(void)moviePlayerDidExitFullscreen:(id)arg1 ;
-(void)moviePlayerWillShowOverlay:(id)arg1 ;
-(void)moviePlayerWillHideOverlay:(id)arg1 ;
-(CGRect)moviePlayerFrameAfterFullscreenExit:(id)arg1 ;
-(char)moviePlayerHeadsetNextTrackPressed:(id)arg1 ;
-(char)moviePlayerHeadsetPreviousTrackPressed:(id)arg1 ;
-(void)moviePlayerBufferingStateDidChange:(id)arg1 ;
-(void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned)arg2 ;
-(void)moviePlayerPlaybackDidEnd:(id)arg1 ;
-(char)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2 ;
-(char)moviePlayer:(id)arg1 validateAction:(SEL)arg2 ;
-(char)canContinuePlayingWhenLocked;
-(void)play;
-(void)setSeekTime:(double)arg1 ;
-(char)isPlaying;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(int)orientation;
-(void)pause;
-(id)video;
-(id)moviePlayer;
-(void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned)arg3 videosRemaining:(unsigned)arg4 ;
-(void)searchRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_updateCaptionsForMovie;
-(void)_destroyMoviePlayer;
-(char)_loggingEnabled;
-(void)_setupBackground;
-(char)_canShare;
-(char)_canBookmark;
-(void)_cancelVideoInfoRequest;
-(void)_switchToVideo:(id)arg1 ;
-(void)_loadVideoInfoWithID:(id)arg1 ;
-(void)setCanAutoPlay:(char)arg1 ;
-(void)_loadVideoFromURL:(char)arg1 ;
-(void)_hideOverlay;
-(void)_hideBug;
-(void)_presentAlertForError:(id)arg1 reasonCode:(id)arg2 ;
-(void)willShowForVideo:(id)arg1 inList:(id)arg2 orVideoID:(id)arg3 ;
-(void)didShow;
-(void)willHide;
-(void)didHide;
-(void)willShowAlert;
-(void)useSmallLogo:(char)arg1 ;
-(void)shareSheetWillShow;
-(void)shareSheetDidHide;
-(void)forceControlsVisible:(char)arg1 ;
@end


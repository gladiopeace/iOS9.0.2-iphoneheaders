/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol AEAudiobookTOCViewControllerDelegate;
@class IMPlayerManifest;

@interface AEAudiobookTOCViewController : UITableViewController {

	IMPlayerManifest* _playerManifest;
	id<AEAudiobookTOCViewControllerDelegate> _delegate;
	int _currentChapterIndex;
	int _lastPlayedChapterIndex;
	float _playbackRate;

}

@property (assign,nonatomic) IMPlayerManifest * playerManifest;                              //@synthesize playerManifest=_playerManifest - In the implementation block
@property (assign,nonatomic) id<AEAudiobookTOCViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int currentChapterIndex;                                        //@synthesize currentChapterIndex=_currentChapterIndex - In the implementation block
@property (assign,nonatomic) int lastPlayedChapterIndex;                                     //@synthesize lastPlayedChapterIndex=_lastPlayedChapterIndex - In the implementation block
@property (assign,nonatomic) float playbackRate;                                             //@synthesize playbackRate=_playbackRate - In the implementation block
-(void)setPlayerManifest:(IMPlayerManifest *)arg1 ;
-(void)updateWithCurrentChapter:(int)arg1 lastStoppedTime:(double)arg2 playbackRate:(float)arg3 ;
-(IMPlayerManifest *)playerManifest;
-(id)_markerImageForViewSize:(CGSize)arg1 ;
-(int)lastPlayedChapterIndex;
-(void)setLastPlayedChapterIndex:(int)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(int)currentChapterIndex;
-(void)setCurrentChapterIndex:(int)arg1 ;
-(void)setDelegate:(id<AEAudiobookTOCViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<AEAudiobookTOCViewControllerDelegate>)delegate;
-(void)done:(id)arg1 ;
@end


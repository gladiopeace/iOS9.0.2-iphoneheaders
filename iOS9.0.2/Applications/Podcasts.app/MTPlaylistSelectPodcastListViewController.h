/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTBasePodcastListViewController.h>

@protocol MTPlaylistSelectPodcastListViewControllerSaveDelegate;
@class NSString, NSMutableSet;

@interface MTPlaylistSelectPodcastListViewController : MTBasePodcastListViewController {

	char _allPodcastsSelected;
	NSString* _playlistName;
	NSMutableSet* _podcastUuids;
	NSString* _playlistUuid;
	id<MTPlaylistSelectPodcastListViewControllerSaveDelegate> _saveDelegate;

}

@property (nonatomic,retain) NSString * playlistName;                                                   //@synthesize playlistName=_playlistName - In the implementation block
@property (nonatomic,retain) NSMutableSet * podcastUuids;                                               //@synthesize podcastUuids=_podcastUuids - In the implementation block
@property (assign,nonatomic) char allPodcastsSelected;                                                  //@synthesize allPodcastsSelected=_allPodcastsSelected - In the implementation block
@property (nonatomic,retain) NSString * playlistUuid;                                                   //@synthesize playlistUuid=_playlistUuid - In the implementation block
@property (retain) id<MTPlaylistSelectPodcastListViewControllerSaveDelegate> saveDelegate;              //@synthesize saveDelegate=_saveDelegate - In the implementation block
-(void)restoreSelection;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setPlaylistUuid:(NSString *)arg1 ;
-(NSMutableSet *)podcastUuids;
-(void)togglePodcastUuid:(id)arg1 ;
-(void)setPlaylistName:(NSString *)arg1 ;
-(NSString *)playlistName;
-(char)allPodcastsSelected;
-(void)setPodcastUuids:(NSMutableSet *)arg1 ;
-(void)setAllPodcastsSelected:(char)arg1 ;
-(id<MTPlaylistSelectPodcastListViewControllerSaveDelegate>)saveDelegate;
-(NSString *)playlistUuid;
-(void)setSaveDelegate:(id<MTPlaylistSelectPodcastListViewControllerSaveDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(id)reuseIdentifierForRow:(id)arg1 ;
@end

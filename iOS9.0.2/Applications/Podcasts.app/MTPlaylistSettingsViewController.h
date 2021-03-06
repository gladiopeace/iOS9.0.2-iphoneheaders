/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTiOSGenericSettingsViewController.h>
#import <Podcasts/MTSourceListDelegate.h>
#import <Podcasts/MTPlaylistSelectPodcastListViewControllerSaveDelegate.h>

@protocol MTPlaylistSettingsViewControllerDelegate;
@class UIButton, MTPlaylistSelectPodcastListViewController, UIAlertController, NSString, NSIndexPath;

@interface MTPlaylistSettingsViewController : MTiOSGenericSettingsViewController <MTSourceListDelegate, MTPlaylistSelectPodcastListViewControllerSaveDelegate> {

	UIButton* _deleteButton;
	MTPlaylistSelectPodcastListViewController* _addPodcastsViewController;
	UIAlertController* _deleteStationAlertController;
	char _userDriven;
	id<MTPlaylistSettingsViewControllerDelegate> _delegate;
	NSString* _playlistUuid;
	/*^block*/id _deletePlaylistBlock;
	NSIndexPath* _appearanceSelectedPath;

}

@property (assign,nonatomic,__weak) id<MTPlaylistSettingsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * playlistUuid;                                                   //@synthesize playlistUuid=_playlistUuid - In the implementation block
@property (nonatomic,copy) id deletePlaylistBlock;                                                      //@synthesize deletePlaylistBlock=_deletePlaylistBlock - In the implementation block
@property (assign,nonatomic) char userDriven;                                                           //@synthesize userDriven=_userDriven - In the implementation block
@property (nonatomic,retain) NSIndexPath * appearanceSelectedPath;                                      //@synthesize appearanceSelectedPath=_appearanceSelectedPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellClassForSettingType:(int)arg1 inGroupWithIdentifier:(id)arg2 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withDescription:(id)arg3 inGroupWithIdentifier:(id)arg4 ;
-(id)metricsName;
-(void)deletePlaylist:(id)arg1 ;
-(void)sourceList:(id)arg1 didSelectItemUuid:(id)arg2 atIndexPath:(id)arg3 ;
-(void)sourceList:(id)arg1 didUpdateSelectedItemUuid:(id)arg2 ;
-(void)setPlaylistUuid:(NSString *)arg1 ;
-(void)saveNewPlaylists;
-(NSString *)playlistUuid;
-(id)metricDataSource;
-(void)syncControllerOperationCompleted:(id)arg1 ;
-(id)initWithPlaylistUuid:(id)arg1 ;
-(id)newSettingsController;
-(void)selectAppearancePathIfNecessary;
-(NSIndexPath *)appearanceSelectedPath;
-(void)setAppearanceSelectedPath:(NSIndexPath *)arg1 ;
-(void)updateTitle:(id)arg1 ;
-(void)updateContainerOrder:(int)arg1 ;
-(void)_updateUngroupedListSetting:(char)arg1 ;
-(void)updateSetting:(id)arg1 value:(id)arg2 ;
-(id)titleForCurrentPodcasts;
-(void)showAddPodcastsSheet;
-(void)updateShowSetting:(long long)arg1 forSettings:(id)arg2 ;
-(void)removePodcastAtIndex:(unsigned)arg1 ;
-(void)updatePodcastCount;
-(id)deletePlaylistBlock;
-(void)setDeletePlaylistBlock:(id)arg1 ;
-(void)setDelegate:(id<MTPlaylistSettingsViewControllerDelegate>)arg1 ;
-(id)init;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<MTPlaylistSettingsViewControllerDelegate>)delegate;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)userDriven;
-(void)setUserDriven:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UITabBarControllerDelegate.h>

@protocol MCDCarDisplayServiceProvider;
@class UITabBarController, UIButton, NSMapTable, AVExternalDevice, MCDRadioViewController, MPAVController, RadioRecentStationsController, NSString;

@interface MCDBrowserViewController : UINavigationController <UITabBarControllerDelegate> {

	char _viewHasAppeared;
	char _libraryHasSongs;
	UITabBarController* _tabBarController;
	UIButton* _nowPlayingButton;
	NSMapTable* _noContentViews;
	AVExternalDevice* _externalDevice;
	MCDRadioViewController* _radioViewController;
	MPAVController* _player;
	id<MCDCarDisplayServiceProvider> _serviceProvider;
	UITabBarController* _hostTabBarController;
	RadioRecentStationsController* _recentStationsController;

}

@property (nonatomic,retain) MPAVController * player;                                                      //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<MCDCarDisplayServiceProvider> serviceProvider;                      //@synthesize serviceProvider=_serviceProvider - In the implementation block
@property (assign,nonatomic,__weak) UITabBarController * hostTabBarController;                             //@synthesize hostTabBarController=_hostTabBarController - In the implementation block
@property (assign,nonatomic,__weak) RadioRecentStationsController * recentStationsController;              //@synthesize recentStationsController=_recentStationsController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_itemChanged:(id)arg1 ;
-(void)_limitedUIChanged:(id)arg1 ;
-(void)setRecentStationsController:(RadioRecentStationsController *)arg1 ;
-(RadioRecentStationsController *)recentStationsController;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
-(void)dealloc;
-(void)viewDidAppear:(char)arg1 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(void)setServiceProvider:(id<MCDCarDisplayServiceProvider>)arg1 ;
-(id<MCDCarDisplayServiceProvider>)serviceProvider;
-(void)MCD_pushNowPlayingViewControllerAnimated:(char)arg1 ;
-(void)_updateNowPlayingVisibility;
-(id)initWithHostTabBarController:(id)arg1 ;
-(void)pushNowPlaying:(char)arg1 ;
-(void)_mediaLibraryDidChange:(id)arg1 ;
-(void)_accountsDidChangeNotification:(id)arg1 ;
-(void)_reloadHostTabs;
-(char)_limitedUIEnabled;
-(id)_createViewControllerForIdentifier:(id)arg1 ;
-(void)refreshNavigationPath;
-(char)_isNowPlayingAvailable;
-(id)nowPlayingButton;
-(void)_nowPlayingButtonTouchUpInside:(id)arg1 ;
-(void)reloadWithTabs:(id)arg1 forceReload:(char)arg2 ;
-(void)_tabBarDidChangeViewControllers:(id)arg1 ;
-(void)_removeDetailViews;
-(UITabBarController *)hostTabBarController;
-(void)setHostTabBarController:(UITabBarController *)arg1 ;
@end


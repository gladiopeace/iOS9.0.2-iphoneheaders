/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Podcasts/IMVideoViewControllerDelegate.h>

@protocol MusicNowPlayingItemViewControllerDelegate;
@class ADBannerView, UIImage, MusicArtworkView, IMVideoViewController, MTPlayerItem, IMAVPlayer, NSString;

@interface MusicNowPlayingItemViewController : UIViewController <IMVideoViewControllerDelegate> {

	ADBannerView* _adBannerView;
	UIImage* _artworkImage;
	MusicArtworkView* _imageView;
	unsigned _itemType;
	IMVideoViewController* _videoViewController;
	char _hasProperApplicationStateForWantingVideoLayer;
	char _hasVisibilityForWantingVideoLayer;
	char _wantsVideoLayer;
	/*^block*/id _deferTransitionBlock;
	MTPlayerItem* _item;
	IMAVPlayer* _player;
	id<MusicNowPlayingItemViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) MTPlayerItem * item;                                                      //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) IMAVPlayer * player;                                                      //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<MusicNowPlayingItemViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char canShowOverlayControls; 
@property (assign,nonatomic) char overlayVideoControlsHidden; 
@property (assign,nonatomic) char canShowInlineControls; 
@property (assign,nonatomic) char inlineVideoControlsHidden; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCanShowInlineControls:(char)arg1 ;
-(id)initWithItem:(id)arg1 andPlayer:(id)arg2 ;
-(id)_playerItemAtIndex:(unsigned)arg1 ;
-(char)canShowInlineControls;
-(void)setInlineVideoControlsHidden:(char)arg1 ;
-(char)inlineVideoControlsHidden;
-(IMAVPlayer *)player;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MusicNowPlayingItemViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MusicNowPlayingItemViewControllerDelegate>)delegate;
-(MTPlayerItem *)item;
-(unsigned)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(id)artworkImage;
-(void)_itemArtworkDidChangeNotification:(id)arg1 ;
-(void)_playerFirstVideoFrameDidDisplayNotification:(id)arg1 ;
-(void)_updateArtworkCatalogWithReload:(char)arg1 ;
-(void)_updateWantsVideoLayer;
-(void)_updateContentViewWithReload:(char)arg1 ;
-(id)_placeholderArtwork;
-(void)_setArtworkImage:(id)arg1 ;
-(void)_removeAdBannerView;
-(void)_removeArtworkImageView;
-(void)_removeVideoViewController;
-(void)_setWantsVideoLayer:(char)arg1 ;
-(void)overlayBackButtonTapped:(id)arg1 ;
-(id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1 ;
-(void)deferItemTransitionIfNeeded:(/*^block*/id)arg1 ;
-(int)transitionFromItemViewController:(id)arg1 ;
-(char)canShowOverlayControls;
-(char)overlayVideoControlsHidden;
-(void)setOverlayVideoControlsHidden:(char)arg1 ;
-(void)setCanShowOverlayControls:(char)arg1 ;
-(char)metricsEnabled;
@end


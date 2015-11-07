/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/SLFacebookAlbumManagerDelegate.h>

@protocol SLFacebookAlbumChooserViewControllerDelegate;
@class NSCache, UIButton, SLFacebookAlbumManager, NSArray;

@interface SLFacebookAlbumChooserViewController : UITableViewController <SLFacebookAlbumManagerDelegate> {

	NSCache* _coverImageCache;
	UIButton* _flipBackButton;
	SLFacebookAlbumManager* _albumManager;
	NSArray* _albums;
	id<SLFacebookAlbumChooserViewControllerDelegate> _delegate;

}

@property (retain) UIButton * flipBackButton;                                              //@synthesize flipBackButton=_flipBackButton - In the implementation block
@property (retain) SLFacebookAlbumManager * albumManager;                                  //@synthesize albumManager=_albumManager - In the implementation block
@property (retain) NSArray * albums;                                                       //@synthesize albums=_albums - In the implementation block
@property (__weak) id<SLFacebookAlbumChooserViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_squareImageFromAlbumImage:(id)arg1 ;
+(id)_blankSurrogateAlbumImage;
-(NSArray *)albums;
-(void)setAlbumManager:(SLFacebookAlbumManager *)arg1 ;
-(SLFacebookAlbumManager *)albumManager;
-(void)albumManager:(id)arg1 didRefreshAlbums:(id)arg2 ;
-(void)albumManager:(id)arg1 didFailAlbumRefreshWithError:(id)arg2 ;
-(void)albumManager:(id)arg1 didLoadCoverImage:(id)arg2 forAlbum:(id)arg3 ;
-(void)albumManager:(id)arg1 didFailLoadingCoverImageForAlbum:(id)arg2 withError:(id)arg3 ;
-(id)initWithAlbumManager:(id)arg1 ;
-(void)flipBackTapped:(id)arg1 ;
-(UIButton *)flipBackButton;
-(void)setFlipBackButton:(UIButton *)arg1 ;
-(void)setDelegate:(id<SLFacebookAlbumChooserViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<SLFacebookAlbumChooserViewControllerDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)setAlbums:(NSArray *)arg1 ;
@end


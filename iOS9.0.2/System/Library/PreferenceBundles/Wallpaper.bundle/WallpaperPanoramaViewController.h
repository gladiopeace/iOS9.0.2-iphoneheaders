/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Wallpaper/Wallpaper-Structs.h>
#import <PhotosUI/PUPhotosPanoramaViewController.h>

@class WallpaperPanoramaViewControllerSpec, NSDictionary, NSArray, SBSUIWallpaperPreviewViewController, PLWallpaperImageViewController;

@interface WallpaperPanoramaViewController : PUPhotosPanoramaViewController {

	char _mineOnly;
	WallpaperPanoramaViewControllerSpec* __wallpaperPanoramaSpec;
	NSDictionary* __variantBeingPreviewed;
	NSDictionary* __optionsBeingPreviewed;
	NSArray* __wallpaperVariants;
	SBSUIWallpaperPreviewViewController* __previewController;
	PLWallpaperImageViewController* __imageViewController;

}

@property (setter=_setWallpaperPanoramaSpec:,nonatomic,retain) WallpaperPanoramaViewControllerSpec * _wallpaperPanoramaSpec;              //@synthesize _wallpaperPanoramaSpec=__wallpaperPanoramaSpec - In the implementation block
@property (setter=_setVariantBeingPreviewed:,nonatomic,retain) NSDictionary * _variantBeingPreviewed;                                     //@synthesize _variantBeingPreviewed=__variantBeingPreviewed - In the implementation block
@property (setter=_setOptionsBeingPreviewed:,nonatomic,retain) NSDictionary * _optionsBeingPreviewed;                                     //@synthesize _optionsBeingPreviewed=__optionsBeingPreviewed - In the implementation block
@property (setter=_setWallpaperVariants:,nonatomic,retain) NSArray * _wallpaperVariants;                                                  //@synthesize _wallpaperVariants=__wallpaperVariants - In the implementation block
@property (assign,nonatomic) char mineOnly;                                                                                               //@synthesize mineOnly=_mineOnly - In the implementation block
@property (setter=_setPreviewController:,nonatomic,retain) SBSUIWallpaperPreviewViewController * _previewController;                      //@synthesize _previewController=__previewController - In the implementation block
@property (setter=_setImageViewController:,nonatomic,retain) PLWallpaperImageViewController * _imageViewController;                       //@synthesize _imageViewController=__imageViewController - In the implementation block
-(char)canBeShownFromSuspendedState;
-(id)initWithSpec:(id)arg1 ;
-(void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(char)arg4 ;
-(char)canNavigateToPhotoInteractively:(char)arg1 ;
-(void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id)newGridLayout;
-(void)updateLayoutMetrics;
-(char)allowSlideshowButton;
-(char)allowsPeeking;
-(char)isPreheatingEnabled;
-(char)shouldShowMenu;
-(CGSize)_itemSizeForWidth:(float)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(char)isEmpty;
-(void)loadView;
-(id)initWithSpec:(id)arg1 mineOnly:(char)arg2 ;
-(void)_setWallpaperVariants:(id)arg1 ;
-(NSArray *)_wallpaperVariants;
-(void)_setVariantBeingPreviewed:(id)arg1 ;
-(void)dismissDidSetWallpaper:(char)arg1 ;
-(void)_setOptionsBeingPreviewed:(id)arg1 ;
-(NSDictionary *)_variantBeingPreviewed;
-(NSDictionary *)_optionsBeingPreviewed;
-(PLWallpaperImageViewController *)_imageViewController;
-(void)_setWallpaperPanoramaSpec:(id)arg1 ;
-(void)navigateToFactoryWallpaperAtIndex:(unsigned)arg1 ;
-(void)navigateToPhoto:(id)arg1 ;
-(void)_setImageViewController:(id)arg1 ;
-(void)presentPreviewControllerWithWallpaperDict:(id)arg1 photo:(id)arg2 andOptions:(id)arg3 ;
-(WallpaperPanoramaViewControllerSpec *)_wallpaperPanoramaSpec;
-(char)mineOnly;
-(void)setMineOnly:(char)arg1 ;
-(SBSUIWallpaperPreviewViewController *)_previewController;
-(void)_setPreviewController:(id)arg1 ;
-(void)editImageViewController:(id)arg1 didEditImageWithOptions:(id)arg2 ;
-(void)editImageViewControllerDidCancel:(id)arg1 ;
@end


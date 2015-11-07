/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLUIEditImageViewController.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>

@class PLWallpaperNavigationItem, NSArray, NSString, SBSUIWallpaperPreviewViewController;

@interface PLWallpaperImageViewController : PLUIEditImageViewController <SBFLegibilitySettingsProviderDelegate> {

	PLWallpaperNavigationItem* _navItem;
	int _wallpaperMode;
	NSArray* _navigationToolbarItems;
	char _saveWallpaperData;
	NSString* _wallpaperTitle;
	unsigned _didSetImageMode : 1;
	char _isWallpaperEdit;
	char __statusBarHidden;
	SBSUIWallpaperPreviewViewController* _wallpaperPreviewViewController;
	int _previewVariant;
	int _previewType;
	int __statusBarStyle;

}

@property (nonatomic,retain) SBSUIWallpaperPreviewViewController * wallpaperPreviewViewController;              //@synthesize wallpaperPreviewViewController=_wallpaperPreviewViewController - In the implementation block
@property (assign,nonatomic) char saveWallpaperData;                                                            //@synthesize saveWallpaperData=_saveWallpaperData - In the implementation block
@property (nonatomic,copy) NSString * wallpaperTitle;                                                           //@synthesize wallpaperTitle=_wallpaperTitle - In the implementation block
@property (assign,nonatomic) int previewVariant;                                                                //@synthesize previewVariant=_previewVariant - In the implementation block
@property (assign,nonatomic) int previewType;                                                                   //@synthesize previewType=_previewType - In the implementation block
@property (assign,nonatomic) char isWallpaperEdit;                                                              //@synthesize isWallpaperEdit=_isWallpaperEdit - In the implementation block
@property (assign,setter=_setStatusBarStyle:,nonatomic) int _statusBarStyle;                                    //@synthesize _statusBarStyle=__statusBarStyle - In the implementation block
@property (assign,setter=_setStatusBarHidden:,nonatomic) char _statusBarHidden;                                 //@synthesize _statusBarHidden=__statusBarHidden - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cropOverlayWasOKed:(id)arg1 ;
-(void)setSaveWallpaperData:(char)arg1 ;
-(void)_setStatusBarStyle:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)navigationItem;
-(int)preferredStatusBarStyle;
-(int)preferredStatusBarUpdateAnimation;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(int)_statusBarStyle;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setStatusBarHidden:(char)arg1 ;
-(void)_updateTitles;
-(id)initWithUIImage:(id)arg1 ;
-(char)_statusBarHidden;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg1 ;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(void)setImageAsHomeScreenClicked:(id)arg1 ;
-(void)setImageAsLockScreenClicked:(id)arg1 ;
-(void)setImageAsHomeScreenAndLockScreenClicked:(id)arg1 ;
-(void)motionToggledManually:(char)arg1 ;
-(char)uiipc_useTelephonyUI;
-(int)cropOverlayMode;
-(CGRect)_viewFrame;
-(unsigned)_contentAutoresizingMask;
-(void)setupNavigationItem;
-(unsigned)_tileAutoresizingMask;
-(char)clientIsWallpaper;
-(char)wantsStatusBarVisible;
-(int)desiredStatusBarAnimation;
-(SBSUIWallpaperPreviewViewController *)wallpaperPreviewViewController;
-(void)prepareForBackground:(id)arg1 ;
-(void)prepareForForeground:(id)arg1 ;
-(void)setPreviewVariant:(int)arg1 ;
-(void)setPreviewType:(int)arg1 ;
-(id)initWithWallpaperVariant:(int)arg1 ;
-(void)setWallpaperPreviewViewController:(SBSUIWallpaperPreviewViewController *)arg1 ;
-(void)_updatePreviewFrame:(id)arg1 ;
-(NSString *)wallpaperTitle;
-(void)_backgroundCropWallpaper;
-(void)_cropWallpaperFinished:(id)arg1 ;
-(char)saveWallpaperData;
-(void)setWallpaperSynchronouslyFromArgs:(id)arg1 ;
-(void)_savePhoto;
-(void)_displayWallpaperOptionsSheet;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(void)setWallpaperFromArgs:(id)arg1 ;
-(void)_adjustScrollViewGeometry;
-(void)setupWallpaperPreview;
-(void)setWallpaperTitle:(NSString *)arg1 ;
-(int)previewVariant;
-(int)previewType;
-(char)isWallpaperEdit;
-(void)setIsWallpaperEdit:(char)arg1 ;
-(int)imageFormat;
@end


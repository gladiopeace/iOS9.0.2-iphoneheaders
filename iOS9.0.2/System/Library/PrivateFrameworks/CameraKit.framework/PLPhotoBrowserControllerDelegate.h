/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLPhotoBrowserControllerDelegate <NSObject>
@optional
-(void)photoBrowserControllerWillBeginPaging:(id)arg1;
-(void)photoBrowserControllerDidEndPaging:(id)arg1;
-(char)photoBrowserControllerShouldShowActionItem:(id)arg1;
-(void)photoBrowserController:(id)arg1 willShowActionSheetInView:(id)arg2;
-(void)photoBrowserController:(id)arg1 photoTile:(id)arg2 didCompleteZoomWithScale:(float)arg3;
-(void)photoBrowserControllerWillBeginDragging:(id)arg1;
-(void)photoBrowserControllerDidScroll:(id)arg1;
-(id)photoBrowserController:(id)arg1 barButtonItemForDeleteAction:(int)arg2;
-(void)photoBrowserController:(id)arg1 setUsesPhotoBrowserStyleStatusBar:(char)arg2 animated:(char)arg3;
-(void)photoBrowserController:(id)arg1 photoTileViewControllerSingleTap:(id)arg2;
-(void)photoBrowserControllerWillBeginSlideshow:(id)arg1 playingOnExternalDisplay:(char)arg2;
-(void)photoBrowserControllerWillEndSlideshow:(id)arg1 playingOnExternalDisplay:(char)arg2;
-(void)photoBrowserControllerDidUpdateBars:(id)arg1 animated:(char)arg2;
-(void)photoBrowserControllerDidChangeVideoEditingMode:(id)arg1;
-(void)photoBrowserController:(id)arg1 tileController:(id)arg2 videoViewDidCreateAttachments:(id)arg3;
-(void)photoBrowserController:(id)arg1 commentControllerWillEnterEditMode:(id)arg2;
-(void)photoBrowserController:(id)arg1 commentControllerDidExitEditMode:(id)arg2;
-(void)photoBrowserController:(id)arg1 willDisplayTileController:(id)arg2;
-(void)photoBrowserController:(id)arg1 tileController:(id)arg2 willAppear:(char)arg3;
-(void)photoBrowserController:(id)arg1 tileController:(id)arg2 didAppear:(char)arg3;
-(void)photoBrowserController:(id)arg1 scrubberDidBeginScrubbing:(id)arg2;
-(void)photoBrowserController:(id)arg1 scrubberDidEndScrubbing:(id)arg2;
-(void)photoBrowserControllerWillDeleteCurrentAsset:(id)arg1;
-(void)photoBrowserControllerDidDeleteCurrentAsset:(id)arg1;
-(void)photoBrowserControllerWillBeginPlayingVideo:(id)arg1;
-(char)photoBrowserControllerOverlaysVisible:(id)arg1;
-(char)photoBrowserController:(id)arg1 isPhotoDeleteForSender:(id)arg2;
-(id)photoBrowserController:(id)arg1 customCenterOverlayForTileViewController:(id)arg2;
-(id)photoBrowserControllerRequestsCurrentAirplayRouteDictionary:(id)arg1;
-(void)photoBrowserController:(id)arg1 didFailToStreamPhotoToCurrentRouteWithError:(id)arg2 retryBlock:(/*^block*/id)arg3;
-(void)photoBrowserController:(id)arg1 willShowMenuController:(id)arg2;
-(void)photoBrowserController:(id)arg1 setRemakingVideo:(char)arg2;
-(char)photoBrowserControllerShouldHandleLibraryChangesInternally:(id)arg1;

@end


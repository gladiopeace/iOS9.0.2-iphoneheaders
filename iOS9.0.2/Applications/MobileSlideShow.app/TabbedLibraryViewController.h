/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSlideShow.app/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUTabbedLibraryViewController.h>

@class WImportViewController;

@interface TabbedLibraryViewController : PUTabbedLibraryViewController {

	WImportViewController* _importViewController;

}

@property (nonatomic,retain) WImportViewController * importViewController;              //@synthesize importViewController=_importViewController - In the implementation block
-(void)setImportViewController:(WImportViewController *)arg1 ;
-(WImportViewController *)importViewController;
-(char)shouldShowTabForContentMode:(int)arg1 ;
-(id)newRootViewControllerForContentMode:(int)arg1 ;
-(void)dealloc;
@end


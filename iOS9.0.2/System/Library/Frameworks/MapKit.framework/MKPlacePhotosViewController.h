/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>
#import <libobjc.A.dylib/MKPlacePhotosViewDelegate.h>
#import <libobjc.A.dylib/MKPlaceAttributionCellProvider.h>

@protocol MKPlaceCardPhotosControllerDelegate;
@class MKMapItem, _MKPlacePhotosCollectionView, _MKPlaceViewController, NSString;

@interface MKPlacePhotosViewController : UITableViewController <UICollectionViewDataSource, UICollectionViewDelegate, MKStackingViewControllerPreferredSizeUse, MKPlacePhotosViewDelegate, MKPlaceAttributionCellProvider> {

	char _showAddPhotoButton;
	char _showMorePhotosButton;
	char _hasAttribution;
	char _showAttribution;
	MKMapItem* _mapItem;
	id<MKPlaceCardPhotosControllerDelegate> _photosControllerDelegate;
	unsigned _photosCount;
	float _photoWidth;
	_MKPlacePhotosCollectionView* _photoGrid;
	_MKPlaceViewController* _owner;

}

@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                                //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                                  //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardPhotosControllerDelegate> photosControllerDelegate;              //@synthesize photosControllerDelegate=_photosControllerDelegate - In the implementation block
@property (assign,nonatomic) char hasAttribution;                                                                  //@synthesize hasAttribution=_hasAttribution - In the implementation block
@property (nonatomic,readonly) char showAttributionButtons; 
@property (assign,nonatomic) char showMorePhotosButton;                                                            //@synthesize showMorePhotosButton=_showMorePhotosButton - In the implementation block
@property (assign,nonatomic) char showAddPhotoButton;                                                              //@synthesize showAddPhotoButton=_showAddPhotoButton - In the implementation block
@property (assign,nonatomic) unsigned photosCount;                                                                 //@synthesize photosCount=_photosCount - In the implementation block
@property (assign,nonatomic) float photoWidth;                                                                     //@synthesize photoWidth=_photoWidth - In the implementation block
@property (nonatomic,retain) _MKPlacePhotosCollectionView * photoGrid;                                             //@synthesize photoGrid=_photoGrid - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char requiresPreferredContentSizeInStackingView; 
@property (assign,nonatomic) char showAttribution;                                                                 //@synthesize showAttribution=_showAttribution - In the implementation block
-(char)requiresPreferredContentSizeInStackingView;
-(void)setShowAttribution:(char)arg1 ;
-(char)showAttribution;
-(_MKPlacePhotosCollectionView *)photoGrid;
-(float)photoWidth;
-(void)setShowMorePhotosButton:(char)arg1 ;
-(void)_calculatePhotoSizeForSize:(CGSize)arg1 ;
-(char)showAttributionButtons;
-(void)setPhotoGrid:(_MKPlacePhotosCollectionView *)arg1 ;
-(char)showMorePhotosButton;
-(void)setShowAddPhotoButton:(char)arg1 ;
-(void)_morePhotos;
-(void)_addPhoto;
-(void)_photoTappedAtIndex:(unsigned)arg1 fromLincense:(char)arg2 ;
-(id)placePhotoViewer:(id)arg1 viewForPhotoAtIndex:(unsigned)arg2 ;
-(char)showAddPhotoButton;
-(float)_photoCellHeight;
-(void)setPhotoWidth:(float)arg1 ;
-(id<MKPlaceCardPhotosControllerDelegate>)photosControllerDelegate;
-(void)setPhotosControllerDelegate:(id<MKPlaceCardPhotosControllerDelegate>)arg1 ;
-(void)placePhotoViewer:(id)arg1 attributionTappedForPhotoAtIndex:(unsigned)arg2 ;
-(id)placePhotoViewerGetDelegatesMapItem:(id)arg1 ;
-(void)setHasAttribution:(char)arg1 ;
-(unsigned)photosCount;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(id)photos;
-(char)hasAttribution;
-(void)setPhotosCount:(unsigned)arg1 ;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(_MKPlaceViewController *)owner;
@end


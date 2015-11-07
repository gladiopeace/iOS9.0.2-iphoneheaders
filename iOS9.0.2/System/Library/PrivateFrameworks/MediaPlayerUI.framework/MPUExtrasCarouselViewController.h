/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/MPUExtrasCarouselCollectionViewDelegate.h>
#import <libobjc.A.dylib/MPUExtrasZoomingImageTransitionParticipant.h>

@protocol MPUExtrasCarouselViewControllerDataSource, MPUExtrasCarouselViewControllerDelegate, MPUExtrasCarouselCollectionViewLayout;
@class MPUExtrasCarouselCollectionView, UICollectionViewLayout, NSString;

@interface MPUExtrasCarouselViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, MPUExtrasCarouselCollectionViewDelegate, MPUExtrasZoomingImageTransitionParticipant> {

	char _revealingNavigationBarDuringTransition;
	id<MPUExtrasCarouselViewControllerDataSource> _dataSource;
	id<MPUExtrasCarouselViewControllerDelegate> _delegate;
	MPUExtrasCarouselCollectionView* _carouselCollectionView;
	UICollectionViewLayout*<MPUExtrasCarouselCollectionViewLayout> _carouselCollectionViewLayout;

}

@property (assign,nonatomic,__weak) id<MPUExtrasCarouselViewControllerDataSource> dataSource;                                          //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MPUExtrasCarouselViewControllerDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned indexOfVisibleItem; 
@property (nonatomic,retain) MPUExtrasCarouselCollectionView * carouselCollectionView;                                                 //@synthesize carouselCollectionView=_carouselCollectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewLayout*<MPUExtrasCarouselCollectionViewLayout> carouselCollectionViewLayout;              //@synthesize carouselCollectionViewLayout=_carouselCollectionViewLayout - In the implementation block
@property (assign,getter=isRevealingNavigationBarDuringTransition,nonatomic) char revealingNavigationBarDuringTransition;              //@synthesize revealingNavigationBarDuringTransition=_revealingNavigationBarDuringTransition - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)_numberOfItems;
-(void)setDataSource:(id<MPUExtrasCarouselViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<MPUExtrasCarouselViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<MPUExtrasCarouselViewControllerDataSource>)dataSource;
-(id<MPUExtrasCarouselViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(MPUExtrasCarouselCollectionView *)carouselCollectionView;
-(void)_loadCarouselCollectionViewInView:(id)arg1 withContraintsAccumulator:(id)arg2 ;
-(char)_isPhone;
-(void)_updateOpacityOfTextInVisibleCells;
-(void)_updateWindowSizeForVisibleCells;
-(UICollectionViewLayout*<MPUExtrasCarouselCollectionViewLayout>)carouselCollectionViewLayout;
-(void)setIndexOfVisibleItem:(unsigned)arg1 ;
-(void)setRevealingNavigationBarDuringTransition:(char)arg1 ;
-(id)carouselCollectionViewCellForItemAtIndex:(unsigned)arg1 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(char)isRevealingNavigationBarDuringTransition;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(char)arg2 ;
-(unsigned)indexOfVisibleItem;
-(void)setIndexOfVisibleItem:(unsigned)arg1 animated:(char)arg2 ;
-(void)setCarouselCollectionViewLayout:(UICollectionViewLayout*<MPUExtrasCarouselCollectionViewLayout>)arg1 ;
-(void)setCarouselCollectionView:(MPUExtrasCarouselCollectionView *)arg1 ;
-(void)subviewsDidChangeForCarouselCollectionView:(id)arg1 ;
@end


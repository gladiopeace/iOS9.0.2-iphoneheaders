/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Restaurants/Restaurants-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class SARestaurantRestaurantsSnippet, NSMutableArray, NSNumber, UICollectionView, NSString;

@interface SiriRestaurantsListViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	SARestaurantRestaurantsSnippet* _snippet;
	char _showTableTimes;
	char _showReviewsLabels;
	NSMutableArray* _logoButtons;
	NSNumber* _lastCompactWidth;

}

@property (nonatomic,retain) UICollectionView * view; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startDownloadingLogos:(id)arg1 ;
-(id)_restaurantsListTitleFromSnippet:(id)arg1 ;
-(void)_configureItemCell:(id)arg1 forItem:(unsigned)arg2 ;
-(void)_configureAttributionCell:(id)arg1 forItem:(unsigned)arg2 ;
-(void)_selectItemCellForItem:(unsigned)arg1 ;
-(int)_numberOfColumnsForCellOfType:(int)arg1 forWidth:(float)arg2 ;
-(CGSize)_sizeForCellOfType:(int)arg1 forCollectionViewWidth:(float)arg2 ;
-(void)_enumerateCellTypesWithBlock:(/*^block*/id)arg1 ;
-(char)_sectionIsValidCellType:(int)arg1 ;
-(id)initWithRestaurantsSnippet:(id)arg1 ;
-(void)_logoButtonPressed:(id)arg1 ;
-(float)_widthForSizing;
-(unsigned)_numberOfCellsForType:(int)arg1 ;
-(id)_reuseIdentifierForCellOfType:(int)arg1 ;
-(void)_configureCell:(id)arg1 forType:(int)arg2 item:(int)arg3 ;
-(char)_shouldSelectCellForType:(int)arg1 ;
-(void)_selectCellOfType:(int)arg1 item:(int)arg2 ;
-(float)_cellWidth;
-(float)desiredHeightForWidth:(float)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)siriDidLayoutSnippetView;
@end


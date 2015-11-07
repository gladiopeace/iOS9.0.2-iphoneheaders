/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol SiriUIViewController;
@class UICollectionView, UICollectionViewFlowLayout, NSArray, SAMovieV2TheaterShowtimeListSnippet, NSString;

@interface SiriMoviesTheatersWithShowtimesListViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	NSArray* _filteredShowtimeListCells;
	id<SiriUIViewController> _viewControllerForPushingSnippets;
	int _style;

}

@property (assign,nonatomic,__weak) id<SiriUIViewController> viewControllerForPushingSnippets;              //@synthesize viewControllerForPushingSnippets=_viewControllerForPushingSnippets - In the implementation block
@property (assign,nonatomic) int style;                                                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) SAMovieV2TheaterShowtimeListSnippet * snippet; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTheaterShowtimeListSnippet:(id)arg1 ;
-(void)setViewControllerForPushingSnippets:(id<SiriUIViewController>)arg1 ;
-(float)_cellInset;
-(char)_itemIsInLastRow:(int)arg1 ;
-(id<SiriUIViewController>)viewControllerForPushingSnippets;
-(float)desiredHeightForWidth:(float)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(float)_buttonWidth;
@end

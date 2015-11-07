/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <Game Center/GKLoadingViewController.h>
#import <Game Center/NSPopoverDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UICollectionView, GKCollectionDataSource, GKNoContentView, NSLayoutConstraint, UIView, NSString;

@interface GKDashboardCollectionViewController : GKLoadingViewController <NSPopoverDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	char _autoWidthUsesTwoColumnsWhenSpace;
	UICollectionView* _collectionView;
	GKCollectionDataSource* _dataSource;
	GKNoContentView* _noContentView;
	NSLayoutConstraint* _keyboardConstraint;
	float _keyboardConstraintDefaultConstant;
	UIView* _keyboardAdjustedView;
	UIView* _collectionContainerView;
	UIEdgeInsets _contentInsetsBeforeKeyboard;
	UIEdgeInsets _scrollInsetsBeforeKeyboard;

}

@property (nonatomic,retain) UICollectionView * collectionView;                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) char isLoading; 
@property (nonatomic,retain) GKCollectionDataSource * dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) char autoWidthUsesTwoColumnsWhenSpace;                 //@synthesize autoWidthUsesTwoColumnsWhenSpace=_autoWidthUsesTwoColumnsWhenSpace - In the implementation block
@property (nonatomic,retain) GKNoContentView * noContentView;                       //@synthesize noContentView=_noContentView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsetsBeforeKeyboard;              //@synthesize contentInsetsBeforeKeyboard=_contentInsetsBeforeKeyboard - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollInsetsBeforeKeyboard;               //@synthesize scrollInsetsBeforeKeyboard=_scrollInsetsBeforeKeyboard - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * keyboardConstraint;               //@synthesize keyboardConstraint=_keyboardConstraint - In the implementation block
@property (assign,nonatomic) float keyboardConstraintDefaultConstant;               //@synthesize keyboardConstraintDefaultConstant=_keyboardConstraintDefaultConstant - In the implementation block
@property (assign,nonatomic) UIView * keyboardAdjustedView;                         //@synthesize keyboardAdjustedView=_keyboardAdjustedView - In the implementation block
@property (assign,nonatomic) UIView * collectionContainerView;                      //@synthesize collectionContainerView=_collectionContainerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIEdgeInsets)contentInsetsBeforeKeyboard;
-(void)setContentInsetsBeforeKeyboard:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)scrollInsetsBeforeKeyboard;
-(void)setScrollInsetsBeforeKeyboard:(UIEdgeInsets)arg1 ;
-(void)setAutoWidthColumns:(int)arg1 ;
-(void)setToHorizontalLayout:(char)arg1 ;
-(void)setAutoWidthUsesTwoColumnsWhenSpace:(char)arg1 ;
-(void)dataUpdated:(char)arg1 withError:(id)arg2 ;
-(void)setupNoContentView:(id)arg1 withError:(id)arg2 ;
-(void)setupDataSource;
-(void)createCollectionViewInsideView:(id)arg1 ;
-(void)setKeyboardConstraintDefaultConstant:(float)arg1 ;
-(void)setKeyboardAdjustedView:(UIView *)arg1 ;
-(void)hideNoContentPlaceholder;
-(void)showNoContentPlaceholderForError:(id)arg1 ;
-(void)clearSelectionForCollectionView:(id)arg1 ;
-(void)setNeedsRefresh;
-(void)popoverDidClose:(id)arg1 ;
-(void)windowDidEndSheet:(id)arg1 ;
-(char)autoWidthUsesTwoColumnsWhenSpace;
-(NSLayoutConstraint *)keyboardConstraint;
-(void)setKeyboardConstraint:(NSLayoutConstraint *)arg1 ;
-(float)keyboardConstraintDefaultConstant;
-(UIView *)keyboardAdjustedView;
-(UIView *)collectionContainerView;
-(void)setCollectionContainerView:(UIView *)arg1 ;
-(void)setDataSource:(GKCollectionDataSource *)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(GKCollectionDataSource *)dataSource;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusedView;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(void)clearSelection;
-(void)setNoContentView:(GKNoContentView *)arg1 ;
-(GKNoContentView *)noContentView;
-(char)isLoading;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)didEnterLoadingState;
-(void)didEnterRefreshingState;
-(void)didExitRefreshingState;
-(char)hasData;
-(void)loadData;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end


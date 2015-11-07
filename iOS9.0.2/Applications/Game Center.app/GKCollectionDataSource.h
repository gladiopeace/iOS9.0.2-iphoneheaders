/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate_Private.h>

@class UIViewController, NSString, NSArray;

@interface GKCollectionDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate_Private> {

	char _onDarkBackground;
	char _useStandardHeaders;
	UIViewController* _presentationViewController;
	NSString* _searchText;
	NSArray* _searchTerms;

}

@property (assign,nonatomic) UIViewController * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (assign,nonatomic) char onDarkBackground;                                      //@synthesize onDarkBackground=_onDarkBackground - In the implementation block
@property (nonatomic,readonly) int itemCount; 
@property (assign,nonatomic) char useStandardHeaders;                                    //@synthesize useStandardHeaders=_useStandardHeaders - In the implementation block
@property (nonatomic,readonly) NSString * sectionHeaderText; 
@property (nonatomic,readonly) float preferredCollectionHeight; 
@property (nonatomic,copy) NSString * searchText;                                        //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) NSArray * searchTerms;                                      //@synthesize searchTerms=_searchTerms - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)preferredCollectionHeight;
-(void)setOnDarkBackground:(char)arg1 ;
-(char)onDarkBackground;
-(void)setUseStandardHeaders:(char)arg1 ;
-(char)searchMatchesItem:(id)arg1 inSection:(int)arg2 ;
-(NSString *)sectionHeaderText;
-(id)itemForIndexPath:(id)arg1 ;
-(void)searchTextHasChanged;
-(void)showViewController:(id)arg1 popoverSourceView:(id)arg2 ;
-(void)dismissViewController:(id)arg1 ;
-(char)useStandardHeaders;
-(int)itemCount;
-(UIViewController *)presentationViewController;
-(void)setSearchText:(NSString *)arg1 ;
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(NSString *)searchText;
-(void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2 ;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)searchKeyForSection:(int)arg1 ;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(NSArray *)searchTerms;
-(void)setupCollectionView:(id)arg1 ;
@end


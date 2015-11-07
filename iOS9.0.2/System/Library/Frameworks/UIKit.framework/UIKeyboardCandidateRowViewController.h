/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol UIKeyboardCandidateRowViewControllerDelegate, UIKeyboardCandidateListDelegate;
@class TIKeyboardCandidateResultSet, NSArray, UIKBCandidateCollectionView, NSString;

@interface UIKeyboardCandidateRowViewController : UIViewController <UIKeyboardCandidateList, UICollectionViewDelegate, UICollectionViewDataSource> {

	char _showsHiddenCandidates;
	id<UIKeyboardCandidateRowViewControllerDelegate> _delegate;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	TIKeyboardCandidateResultSet* _candidateSet;
	Class _cellClass;

}

@property (assign,nonatomic) id<UIKeyboardCandidateRowViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;              //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                            //@synthesize candidateSet=_candidateSet - In the implementation block
@property (assign,nonatomic) char showsHiddenCandidates;                                             //@synthesize showsHiddenCandidates=_showsHiddenCandidates - In the implementation block
@property (nonatomic,readonly) NSArray * candidates; 
@property (nonatomic,readonly) UIKBCandidateCollectionView * collectionView; 
@property (nonatomic,retain) Class cellClass;                                                        //@synthesize cellClass=_cellClass - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)suggestedHeightForCellClass:(Class)arg1 ;
-(void)setDelegate:(id<UIKeyboardCandidateRowViewControllerDelegate>)arg1 ;
-(id<UIKeyboardCandidateRowViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(Class)cellClass;
-(float)suggestedHeight;
-(void)_showCandidateAtIndex:(unsigned)arg1 scrollCellToVisible:(char)arg2 animated:(char)arg3 ;
-(NSArray *)candidates;
-(void)showCandidateAtIndex:(unsigned)arg1 ;
-(void)_stepSelectedCandidateInDirection:(char)arg1 ;
-(char)showsHiddenCandidates;
-(void)showNextCandidate;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(UIKBCandidateCollectionView *)collectionView;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(char)hasCandidates;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(float)arg4 layout:(char)arg5 ;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(id)statisticsIdentifier;
-(void)_reloadCandidates;
-(char)isExtendedList;
-(char)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(char)showCandidate:(id)arg1 ;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned)arg1 ;
-(id)keyboardBehaviors;
-(unsigned)selectedSortIndex;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(float)arg5 layout:(char)arg6 ;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(id)initWithCellClass:(Class)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2 ;
-(void)setShowsHiddenCandidates:(char)arg1 ;
-(void)setCellClass:(Class)arg1 ;
@end


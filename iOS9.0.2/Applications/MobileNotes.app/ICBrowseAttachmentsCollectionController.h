/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <MobileNotes/NSFetchedResultsControllerDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <MobileNotes/ICBrowseAttachmentsHeaderViewDelegate.h>

@class NSMutableArray, ICBrowseAttachmentsIconCell, UIView, UILabel, NSFetchedResultsController, NotesTextureBackgroundView, NSString;

@interface ICBrowseAttachmentsCollectionController : UICollectionViewController <NSFetchedResultsControllerDelegate, UICollectionViewDelegateFlowLayout, ICBrowseAttachmentsHeaderViewDelegate> {

	NSMutableArray* _sectionChanges;
	NSMutableArray* _itemChanges;
	ICBrowseAttachmentsIconCell* _defaultSizingIconCell;
	CGSize _brickCellSize;
	char _updatingAccounts;
	char _scrollViewDecelerating;
	short _attachmentSection;
	/*^block*/id _browserDidCloseHandler;
	UIView* _emptyView;
	UILabel* _noAttachmentsLabel;
	UILabel* _emptyDetailsLabel;
	NSFetchedResultsController* _fetchedResultsController;
	NotesTextureBackgroundView* _textureBackgroundView;
	NotesTextureBackgroundView* _topTextureView;

}

@property (nonatomic,copy) id browserDidCloseHandler;                                            //@synthesize browserDidCloseHandler=_browserDidCloseHandler - In the implementation block
@property (nonatomic,retain) UIView * emptyView;                                                 //@synthesize emptyView=_emptyView - In the implementation block
@property (nonatomic,retain) UILabel * noAttachmentsLabel;                                       //@synthesize noAttachmentsLabel=_noAttachmentsLabel - In the implementation block
@property (nonatomic,retain) UILabel * emptyDetailsLabel;                                        //@synthesize emptyDetailsLabel=_emptyDetailsLabel - In the implementation block
@property (assign,nonatomic) short attachmentSection;                                            //@synthesize attachmentSection=_attachmentSection - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * fetchedResultsController;              //@synthesize fetchedResultsController=_fetchedResultsController - In the implementation block
@property (nonatomic,readonly) char displayAllSections; 
@property (nonatomic,retain) NotesTextureBackgroundView * textureBackgroundView;                 //@synthesize textureBackgroundView=_textureBackgroundView - In the implementation block
@property (nonatomic,retain) NotesTextureBackgroundView * topTextureView;                        //@synthesize topTextureView=_topTextureView - In the implementation block
@property (assign,nonatomic) char updatingAccounts;                                              //@synthesize updatingAccounts=_updatingAccounts - In the implementation block
@property (assign,nonatomic) char scrollViewDecelerating;                                        //@synthesize scrollViewDecelerating=_scrollViewDecelerating - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)separatorColor;
-(char)presentAttachment:(id)arg1 fromCell:(id)arg2 ;
-(void)respondToTapGesture:(id)arg1 ;
-(void)icaxDismissAttachmentBrowser;
-(void)doneAction:(id)arg1 ;
-(void)setAttachmentSection:(short)arg1 ;
-(short)attachmentSection;
-(id)collectionViewCellAtPosition:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(id)initWithAttachmentSection:(short)arg1 ;
-(NSFetchedResultsController *)fetchedResultsController;
-(void)notesContextRefreshNotification:(id)arg1 ;
-(void)setBrowserDidCloseHandler:(id)arg1 ;
-(void)setFetchedResultsController:(NSFetchedResultsController *)arg1 ;
-(char)scrollViewDecelerating;
-(void)setScrollViewDecelerating:(char)arg1 ;
-(void)setTextureBackgroundView:(NotesTextureBackgroundView *)arg1 ;
-(NotesTextureBackgroundView *)textureBackgroundView;
-(void)setTopTextureView:(NotesTextureBackgroundView *)arg1 ;
-(NotesTextureBackgroundView *)topTextureView;
-(char)displayAllSections;
-(id)titleForAttachmentSection:(short)arg1 ;
-(void)accountsWillChange;
-(void)accountsDidChange;
-(void)updateEmptyView;
-(id)browserDidCloseHandler;
-(char)updatingAccounts;
-(int)numberOfItemsToDisplayInSection:(int)arg1 withTraitCollection:(id)arg2 ;
-(void)configureCell:(id)arg1 withBrick:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(unsigned)cellsPerRow;
-(id)headerViewAtPosition:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(void)setUpdatingAccounts:(char)arg1 ;
-(id)viewControllerForAttachmentSection:(short)arg1 ;
-(UIView *)emptyView;
-(UILabel *)noAttachmentsLabel;
-(UILabel *)emptyDetailsLabel;
-(void)showAllForAttachmentSection:(short)arg1 ;
-(id)collectionViewAtPosition:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(void)setEmptyView:(UIView *)arg1 ;
-(void)setNoAttachmentsLabel:(UILabel *)arg1 ;
-(void)setEmptyDetailsLabel:(UILabel *)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)previewViewControllerForLocation:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(void)commitPreviewViewController:(id)arg1 committedViewController:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(char)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3 ;
-(char)accessibilityPerformEscape;
-(void)contentSizeCategoryDidChange;
@end


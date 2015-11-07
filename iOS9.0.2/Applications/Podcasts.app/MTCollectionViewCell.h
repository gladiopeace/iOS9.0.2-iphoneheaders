/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol MTCollectionViewCellDelegate;
@class UIView, UIScrollView, UIImageView, UITapGestureRecognizer, SKUIFocusedTouchGestureRecognizer, UIButton, MTActionButtonContainerView, MTCollectionView, NSString;

@interface MTCollectionViewCell : UICollectionViewCell <UIScrollViewDelegate> {

	UIView* _contentView;
	UIScrollView* _scrollView;
	UIImageView* _editingControl;
	char _editing;
	char _userSwiping;
	char _showsMoreButton;
	id<MTCollectionViewCellDelegate> _delegate;
	UITapGestureRecognizer* _tapGestureRecognizer;
	SKUIFocusedTouchGestureRecognizer* _dismissOnTouchRecognizer;
	UIButton* _deleteButton;
	UIButton* _moreButton;
	MTActionButtonContainerView* _actionButtonsContainer;
	unsigned _swipeState;

}

@property (assign,getter=isEditing,nonatomic) char editing;                                             //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic,__weak) id<MTCollectionViewCellDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                             //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) SKUIFocusedTouchGestureRecognizer * dismissOnTouchRecognizer;              //@synthesize dismissOnTouchRecognizer=_dismissOnTouchRecognizer - In the implementation block
@property (nonatomic,retain) UIButton * deleteButton;                                                   //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                                                     //@synthesize moreButton=_moreButton - In the implementation block
@property (assign,getter=isSwipeEnabled,nonatomic) char swipeEnabled; 
@property (assign,nonatomic) char userSwiping;                                                          //@synthesize userSwiping=_userSwiping - In the implementation block
@property (nonatomic,readonly) char exposedActions; 
@property (assign,nonatomic) char showsMoreButton;                                                      //@synthesize showsMoreButton=_showsMoreButton - In the implementation block
@property (nonatomic,retain) MTActionButtonContainerView * actionButtonsContainer;                      //@synthesize actionButtonsContainer=_actionButtonsContainer - In the implementation block
@property (nonatomic,readonly) MTCollectionView * collectionView; 
@property (assign,nonatomic) unsigned swipeState;                                                       //@synthesize swipeState=_swipeState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)estimatedHeight;
+(id)_multiSelectCheckmarkImage;
+(id)_multiSelectNotSelectedImage;
+(float)maximumContentWidth;
+(Class)_contentViewClass;
-(void)configureSubviews;
-(MTActionButtonContainerView *)actionButtonsContainer;
-(void)setShowsMoreButton:(char)arg1 ;
-(void)removeDismissRecognizer;
-(void)setSwipeEnabled:(char)arg1 ;
-(char)exposedActions;
-(void)hideActionsAnimated:(char)arg1 ;
-(unsigned)swipeState;
-(CGRect)editingControlRect;
-(CGRect)contentRectForEditControlWidth:(float)arg1 ;
-(void)moreButtonTapped:(id)arg1 ;
-(void)moreButtonTapCancelled:(id)arg1 ;
-(void)setOpen:(char)arg1 animated:(char)arg2 ;
-(void)exposeActionsAnimated:(char)arg1 ;
-(void)addDismissRecognizer;
-(SKUIFocusedTouchGestureRecognizer *)dismissOnTouchRecognizer;
-(void)setDismissOnTouchRecognizer:(SKUIFocusedTouchGestureRecognizer *)arg1 ;
-(void)dismissDelete:(id)arg1 ;
-(void)setSwipeState:(unsigned)arg1 ;
-(float)targetXOffsetForExposedActions;
-(void)scrollViewExposedDelete;
-(void)scrollViewHidDelete;
-(char)userSwiping;
-(void)setUserSwiping:(char)arg1 ;
-(char)showsMoreButton;
-(void)setActionButtonsContainer:(MTActionButtonContainerView *)arg1 ;
-(UIButton *)moreButton;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MTCollectionViewCellDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<MTCollectionViewCellDelegate>)delegate;
-(id)scrollView;
-(id)contentView;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(void)setEditing:(char)arg1 ;
-(MTCollectionView *)collectionView;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)deleteButtonTapped:(id)arg1 ;
-(UIButton *)deleteButton;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(char)isSwipeEnabled;
-(void)setMoreButton:(UIButton *)arg1 ;
@end


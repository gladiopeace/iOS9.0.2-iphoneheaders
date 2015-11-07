/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>
#import <UIKit/UIScrollViewAccessibilityDelegate.h>
#import <libobjc.A.dylib/SKUIPerspectiveView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class UIButton, SKUIButtonViewElement, SKUICellScrollView, SKUICheckboxInputViewElement, UIImageView, UIView, SKUIHorizontalLockupView, UIColor, NSString;

@interface SKUIHorizontalLockupCollectionViewCell : SKUICollectionViewCell <UIScrollViewAccessibilityDelegate, SKUIPerspectiveView, SKUIViewElementView> {

	UIButton* _actionButton;
	SKUIButtonViewElement* _actionButtonViewElement;
	SKUICellScrollView* _actionsScrollView;
	UIEdgeInsets _contentInset;
	SKUICheckboxInputViewElement* _editModeCheckboxElement;
	UIImageView* _editModeControl;
	UIView* _highlightBackgroundView;
	SKUIHorizontalLockupView* _lockupView;
	UIColor* _lockupViewBackgroundColor;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                                                                    //@synthesize contentInset=_contentInset - In the implementation block
@property (getter=isScrollingCellToHideActionButton,nonatomic,readonly) char scrollingCellToHideActionButton; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(float)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
-(char)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(char)updateWithItemState:(id)arg1 context:(id)arg2 animated:(char)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(char)isDeleteButtonHidden;
-(char)isScrollingCellToHideActionButton;
-(void)hideDeleteButton;
-(void)_removeEditControlAnimated:(char)arg1 ;
-(void)_addEditControlAnimated:(char)arg1 ;
-(char)_isActionsScrollViewEnabled;
-(void)_reloadActionsScrollViewWithViewElement:(id)arg1 context:(id)arg2 ;
-(id)_editControlImage;
-(void)_reloadHighlightBackgroundView;
-(void)_reloadLockupViewBackgroundColor;
-(void)_actionButtonAction:(id)arg1 ;
-(id)_attributedStringForActionButton:(id)arg1 context:(id)arg2 ;
-(id)_highlightBackgroundColor;
@end


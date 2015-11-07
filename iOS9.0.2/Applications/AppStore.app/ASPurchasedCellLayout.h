/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIButton, SKUICellScrollView, SKUIFocusedTouchGestureRecognizer, NSString, _ASPurchasedCellContentView;

@interface ASPurchasedCellLayout : SKUIItemCellLayout <UIScrollViewDelegate> {

	UIButton* _actionButton;
	SKUICellScrollView* _editScrollView;
	SKUIFocusedTouchGestureRecognizer* _touchCaptureRecognizer;
	NSString* _publisher;
	NSString* _title;
	NSString* _version;
	_ASPurchasedCellContentView* _cellContentView;

}

@property (nonatomic,copy) NSString * actionButtonTitle; 
@property (assign,nonatomic) char allowsEditing; 
@property (nonatomic,copy) NSString * publisher;                                         //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,copy) NSString * restrictionsText; 
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * version;                                           //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) _ASPurchasedCellContentView * cellContentView;              //@synthesize cellContentView=_cellContentView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRestrictionsTextWithItem:(id)arg1 clientContext:(id)arg2 ;
-(_ASPurchasedCellContentView *)cellContentView;
-(NSString *)restrictionsText;
-(void)setRestrictionsText:(NSString *)arg1 ;
-(void)_removeTouchCaptureRecognizer;
-(void)_fixItemOfferButtonViewHierarchy;
-(void)_addTouchCaptureRecognizer;
-(void)setCellContentView:(_ASPurchasedCellContentView *)arg1 ;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(NSString *)actionButtonTitle;
-(void)setIconImage:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(NSString *)title;
-(void)prepareForReuse;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(void)setPublisher:(NSString *)arg1 ;
-(NSString *)publisher;
-(void)setItemOffer:(id)arg1 ;
-(void)setItemState:(id)arg1 animated:(char)arg2 ;
-(void)layoutForItemOfferChange;
-(void)_actionButtonAction:(id)arg1 ;
-(void)_touchCaptureAction:(id)arg1 ;
@end


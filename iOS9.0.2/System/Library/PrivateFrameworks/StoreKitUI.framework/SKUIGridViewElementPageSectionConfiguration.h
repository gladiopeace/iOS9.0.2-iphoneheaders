/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIGridViewElementPageSectionConfigurationDataSource;
#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSArray, UIColor, SKUIViewElementLayoutContext, SKUIStorePageSectionContext;

@interface SKUIGridViewElementPageSectionConfiguration : NSObject {

	int _cardVerticalSpacingStyle;
	float _cellContentWidth;
	char _cellPaddingNeedsReloading;
	float _cellPaddingInteriorHorizontal;
	float _cellPaddingLeftEdgeHorizontal;
	float _cellPaddingRightEdgeHorizontal;
	UIEdgeInsets _gridViewElementStyleElementPadding;
	float _gridViewElementStyleItemWidth;
	char _gridViewElementStyleItemWidthIsPercentage;
	char _gridIsEdgeToEdge;
	char _hasGridViewElementStyle;
	char _hasHeader;
	UIEdgeInsets _separatorMargins;
	int _lockupType;
	float _minimumCellHeight;
	unsigned _numberOfGridItems;
	NSArray* _positions;
	UIColor* _separatorColor;
	int _separatorStyle;
	UIEdgeInsets _separatorWidths;
	char _showsEditMode;
	NSArray* _viewElements;
	struct {
		unsigned configurePositionForItemAtIndexPath : 1;
	}  _dataSourceRespondsToSelectorFlags;
	char _rendersWithPerspective;
	SKUIViewElementLayoutContext* _cellLayoutContext;
	int _numberOfColumns;
	SKUIStorePageSectionContext* _pageSectionContext;
	id<SKUIGridViewElementPageSectionConfigurationDataSource> _dataSource;

}

@property (nonatomic,retain) SKUIViewElementLayoutContext * cellLayoutContext;                                         //@synthesize cellLayoutContext=_cellLayoutContext - In the implementation block
@property (nonatomic,readonly) float columnContentWidth; 
@property (nonatomic,readonly) float columnWidth; 
@property (assign,nonatomic) int numberOfColumns;                                                                      //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,retain) SKUIStorePageSectionContext * pageSectionContext;                                         //@synthesize pageSectionContext=_pageSectionContext - In the implementation block
@property (assign,nonatomic) char rendersWithPerspective;                                                              //@synthesize rendersWithPerspective=_rendersWithPerspective - In the implementation block
@property (nonatomic,readonly) char showsEditMode;                                                                     //@synthesize showsEditMode=_showsEditMode - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIGridViewElementPageSectionConfigurationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)setDataSource:(id<SKUIGridViewElementPageSectionConfigurationDataSource>)arg1 ;
-(int)numberOfColumns;
-(id<SKUIGridViewElementPageSectionConfigurationDataSource>)dataSource;
-(float)columnWidth;
-(void)setNumberOfColumns:(int)arg1 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(void)registerReusableClassesForCollectionView:(id)arg1 ;
-(void)setCellLayoutContext:(SKUIViewElementLayoutContext *)arg1 ;
-(void)setPageSectionContext:(SKUIStorePageSectionContext *)arg1 ;
-(char)rendersWithPerspective;
-(void)setRendersWithPerspective:(char)arg1 ;
-(SKUIStorePageSectionContext *)pageSectionContext;
-(SKUIViewElementLayoutContext *)cellLayoutContext;
-(char)showsEditMode;
-(id)backgroundColorForViewElement:(id)arg1 ;
-(void)requestCellLayoutForViewElement:(id)arg1 ;
-(id)cellForViewElement:(id)arg1 indexPath:(id)arg2 ;
-(CGSize)cellSizeForViewElement:(id)arg1 indexPath:(id)arg2 ;
-(void)reloadCellWithIndexPath:(id)arg1 forViewElement:(id)arg2 reason:(int)arg3 ;
-(UIEdgeInsets)sectionContentInsetAdjustedFromValue:(UIEdgeInsets)arg1 forGridViewElement:(id)arg2 ;
-(void)configureCell:(id)arg1 forViewElement:(id)arg2 indexPath:(id)arg3 ;
-(void)updateLayoutPropertiesForGridViewElement:(id)arg1 ;
-(void)updateStylePropertiesForGridViewElement:(id)arg1 gridItemViewElements:(id)arg2 numberOfGridItems:(unsigned)arg3 ;
-(float)_columnContentWidthPaddingForWidth:(float)arg1 ;
-(Class)_cardCellClassForCard:(id)arg1 ;
-(Class)lockupCellClassWithLockup:(id)arg1 ;
-(id)_lockupCellReuseIdentifierWithLockup:(id)arg1 ;
-(UIEdgeInsets)_cellInsetsForViewElement:(id)arg1 indexPath:(id)arg2 ;
-(float)_cellHeightForViewElement:(id)arg1 width:(float)arg2 ;
-(float)_cellContentWidth;
-(Class)cellClassForViewElement:(id)arg1 ;
-(void)_enumerateViewElementsForRowOfIndexPath:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(int)positionForIndexPath:(id)arg1 ;
-(float)_cellPaddingLeftEdgeHorizontal;
-(float)_cellPaddingRightEdgeHorizontal;
-(UIEdgeInsets)_normalizedContentInsetForViewElement:(id)arg1 indexPath:(id)arg2 ;
-(id)_cardArtworkBoundingSizeForIndexPath:(id)arg1 ;
-(int)_lockupTypeForLockup:(id)arg1 ;
-(char)viewElementIsStandardCard:(id)arg1 ;
-(int)_numberOfColumnsForWidth:(float)arg1 style:(id)arg2 ;
-(char)_isContainedWithinExploreTemplateWithGridViewElement:(id)arg1 ;
-(float)columnContentWidth;
-(float)_cellPaddingInteriorHorizontal;
-(void)_reloadCellPaddingIfNeeded;
-(char)_useOrdinalPadding;
@end


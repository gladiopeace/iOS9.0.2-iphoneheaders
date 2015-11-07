/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPickerTableViewContainerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIPickerViewScrollTesting.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UITableViewDataSource.h>

@protocol UIPickerViewDataSource, UIPickerViewDelegate;
@class NSMutableArray, UIView, UIImageView, CALayer, UIColor, _UIPickerViewTestParameters, NSString;

@interface UIPickerView : UIView <UIPickerTableViewContainerDelegate, UITableViewDelegate, UIPickerViewScrollTesting, NSCoding, UITableViewDataSource> {

	NSMutableArray* _tables;
	UIView* _topFrame;
	NSMutableArray* _dividers;
	NSMutableArray* _selectionBars;
	id<UIPickerViewDataSource> _dataSource;
	id<UIPickerViewDelegate> _delegate;
	UIView* _backgroundView;
	int _numberOfComponents;
	UIImageView* _topGradient;
	UIImageView* _bottomGradient;
	UIView* _foregroundView;
	CALayer* _maskGradientLayer;
	UIView* _topLineView;
	UIView* _bottomLineView;
	struct {
		unsigned needsLayout : 1;
		unsigned delegateRespondsToNumberOfComponentsInPickerView : 1;
		unsigned delegateRespondsToNumberOfRowsInComponent : 1;
		unsigned delegateRespondsToDidSelectRow : 1;
		unsigned delegateRespondsToViewForRow : 1;
		unsigned delegateRespondsToTitleForRow : 1;
		unsigned delegateRespondsToAttributedTitleForRow : 1;
		unsigned delegateRespondsToWidthForComponent : 1;
		unsigned delegateRespondsToRowHeightForComponent : 1;
		unsigned showsSelectionBar : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned allowSelectingCells : 1;
		unsigned soundsDisabled : 1;
		unsigned usesCheckedSelection : 1;
		unsigned skipsBackground : 1;
	}  _pickerViewFlags;
	char _usesModernStyle;
	UIColor* _textColor;
	UIColor* _textShadowColor;
	_UIPickerViewTestParameters* _currentTestParameters;
	char _isInLayoutSubviews;
	char _magnifierEnabled;

}

@property (assign,nonatomic,__weak) id<UIPickerViewDataSource> dataSource;                                               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<UIPickerViewDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsSelectionIndicator; 
@property (nonatomic,readonly) int numberOfComponents;                                                                   //@synthesize numberOfComponents=_numberOfComponents - In the implementation block
@property (assign,setter=_setMagnifierEnabled:,nonatomic) char _magnifierEnabled;                                        //@synthesize magnifierEnabled=_magnifierEnabled - In the implementation block
@property (setter=_setUsesModernStyle:,getter=_usesModernStyle) char usesModernStyle; 
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (assign,setter=_setInLayoutSubviews:,nonatomic) char _isInLayoutSubviews;                                      //@synthesize isInLayoutSubviews=_isInLayoutSubviews - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 forTraits:(id)arg2 ;
+(CGSize)defaultSizeForTraits:(id)arg1 ;
+(CGSize)defaultSizeForMainScreenTraits;
+(CGSize)sizeForMainScreenTraitsThatFits:(CGSize)arg1 ;
+(CGSize)defaultSizeForCurrentOrientation;
+(id)_modernCenterCellFont;
+(id)_modernNonCenterCellFont;
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)pickerImageNamePrefix;
-(id)_orientationImageSuffix;
-(void)setBackgroundColor:(id)arg1 ;
-(char)_isLandscapeOrientation;
-(char)_shouldDrawWithModernStyle;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataSource:(id<UIPickerViewDataSource>)arg1 ;
-(void)setDelegate:(id<UIPickerViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setNeedsLayout;
-(int)numberOfComponents;
-(int)selectedRowInComponent:(int)arg1 ;
-(void)_selectRow:(int)arg1 inComponent:(int)arg2 animated:(char)arg3 notify:(char)arg4 ;
-(void)setHidden:(char)arg1 ;
-(void)_updateSound;
-(void)setAlpha:(float)arg1 ;
-(void)didMoveToWindow;
-(void)_updateSelectedRows;
-(void)reloadAllComponents;
-(int)_delegateNumberOfComponents;
-(void)reloadData;
-(void)reloadComponent:(int)arg1 ;
-(id)_selectionBarSuffix;
-(id)_popoverSuffix;
-(id)imageForPickerPiece:(int)arg1 ;
-(CGSize)defaultSize;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(int)columnForTableView:(id)arg1 ;
-(float)_tableRowHeight;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(CATransform3D)_perspectiveTransform;
-(void)_setTextColor:(id)arg1 ;
-(float)_delegateRowHeightForComponent:(int)arg1 ;
-(void)layoutSubviews;
-(id)tableViewForColumn:(int)arg1 ;
-(int)numberOfRowsInComponent:(int)arg1 ;
-(char)_drawsBackground;
-(id)_createViewForPickerPiece:(int)arg1 ;
-(float)_delegateWidthForComponent:(int)arg1 ofCount:(int)arg2 withSizeLeft:(float)arg3 ;
-(float)_wheelShift;
-(char)_usesModernStyle;
-(id)createDividerWithFrame:(CGRect)arg1 ;
-(id)_createColumnWithTableFrame:(CGRect)arg1 rowHeight:(float)arg2 ;
-(id)_createTableWithFrame:(CGRect)arg1 forComponent:(int)arg2 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(id)_contentView;
-(CGRect)_selectionBarRectForHeight:(float)arg1 ;
-(char)_magnifierEnabled;
-(void)_addMagnifierLinesForRowHeight:(float)arg1 ;
-(void)_resetSelectionOfTables;
-(int)_delegateNumberOfRowsInComponent:(int)arg1 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 ;
-(void)_updateWithOldSize:(CGSize)arg1 newSize:(CGSize)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_noteScrollingFinishedForComponent:(int)arg1 ;
-(void)_sendSelectionChangedForComponent:(int)arg1 notify:(char)arg2 ;
-(void)_sendSelectionChangedFromTable:(id)arg1 notify:(char)arg2 ;
-(void)selectRow:(int)arg1 inComponent:(int)arg2 animated:(char)arg3 ;
-(id)_textColor;
-(id)_delegateAttributedTitleForRow:(int)arg1 forComponent:(int)arg2 ;
-(id)_delegateTitleForRow:(int)arg1 forComponent:(int)arg2 ;
-(void)_iterateOnCurrentTest;
-(void)_completeCurrentTest;
-(void)_sendCheckedRow:(int)arg1 inTableView:(id)arg2 checked:(char)arg3 ;
-(char)_soundsEnabled;
-(char)_usesCheckSelection;
-(void)_performScrollTest:(id)arg1 withIterations:(int)arg2 rowsToScroll:(int)arg3 inComponent:(int)arg4 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setSoundsEnabled:(char)arg1 ;
-(void)reload;
-(void)reloadDataForColumn:(int)arg1 ;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(char)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)scrollAnimationDuration;
-(CGSize)rowSizeForComponent:(int)arg1 ;
-(int)numberOfRowsInColumn:(int)arg1 ;
-(int)numberOfColumns;
-(id)viewForRow:(int)arg1 forComponent:(int)arg2 ;
-(void)reloadAllPickerPieces;
-(void)setShowsSelectionIndicator:(char)arg1 ;
-(char)showsSelectionIndicator;
-(char)allowsMultipleSelection;
-(void)_setUsesCheckedSelection:(char)arg1 ;
-(char)_usesCheckedSelection;
-(void)_setDrawsBackground:(char)arg1 ;
-(NSRange)visibleRowsForColumn:(int)arg1 ;
-(int)selectedRowForColumn:(int)arg1 ;
-(CGRect)_effectiveTableViewFrameForColumn:(int)arg1 ;
-(void)selectRow:(int)arg1 inColumn:(int)arg2 animated:(char)arg3 ;
-(void)_setMagnifierEnabled:(char)arg1 ;
-(void)_setUsesModernStyle:(char)arg1 ;
-(id)_highlightColor;
-(void)_setHighlightColor:(id)arg1 ;
-(id)_textShadowColor;
-(void)_setTextShadowColor:(id)arg1 ;
-(id<UIPickerViewDataSource>)dataSource;
-(id<UIPickerViewDelegate>)delegate;
-(char)_isInLayoutSubviews;
-(void)_setInLayoutSubviews:(char)arg1 ;
-(char)isAccessibilityElementByDefault;
@end


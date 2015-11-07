/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIMenuViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIPopupMenuDelegate.h>
#import <libobjc.A.dylib/SKUISortDataRequestDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIBarButtonItem, SKUIPillsControl, SKUIMenuViewController, UIPopoverController, SKUIPopupMenuHeaderView, NSMutableIndexSet, SKUIMenuPageComponent, NSString;

@interface SKUIMenuPageSection : SKUIStorePageSection <SKUIMenuViewControllerDelegate, SKUIPopupMenuDelegate, SKUISortDataRequestDelegate, UIPopoverControllerDelegate> {

	UIBarButtonItem* _cancelMenuItem;
	SKUIPillsControl* _pillsControl;
	SKUIMenuViewController* _moreListMenuViewController;
	UIPopoverController* _moreListPopoverController;
	SKUIPopupMenuHeaderView* _popupHeaderView;
	int _selectedIndex;
	NSMutableIndexSet* _sortRequestIndexSet;

}

@property (nonatomic,readonly) SKUIMenuPageComponent * pageComponent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIEdgeInsets)sectionContentInset;
-(void)dealloc;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)initWithPageComponent:(id)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(int)numberOfCells;
-(id)_contentChildView;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
-(void)sortDataRequest:(id)arg1 didFinishWithLockups:(id)arg2 ;
-(void)_cancelMenuAction:(id)arg1 ;
-(void)_setSelectedIndex:(int)arg1 ;
-(void)_dismissMenuViewController;
-(void)_restorePreviousSelection;
-(void)_showMoreList;
-(id)_pillsControl;
-(id)_popupHeaderView;
-(void)_pillAction:(id)arg1 ;
-(void)_loadSortDataIfNecessaryForMenuIndex:(int)arg1 reason:(int)arg2 ;
-(id)_newMenuViewController;
-(void)_showMenuViewController;
-(void)_showPopoverController;
-(void)popupMenuHeader:(id)arg1 didSelectMenuItemAtIndex:(int)arg2 ;
@end


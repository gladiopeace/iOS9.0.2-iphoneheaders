/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSArray, NSMutableArray, NSMutableDictionary, UITableView, UIControl, NSString, UISearchField, UILabel;

@interface SBVoiceOverTouchItemChooser : UIView <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate> {

	NSArray* _originalList;
	NSArray* _itemCategoryMappings;
	NSArray* _regionDescriptions;
	NSMutableArray* _filteredList;
	NSMutableDictionary* _items;
	int _totalItemCount;
	NSArray* _sectionHeaders;
	UITableView* _table;
	UIControl* _dimmingView;
	int _selectedRow;
	NSString* _filter;
	UISearchField* _searchField;
	CGRect _keyboardFrame;
	UILabel* _headingLabel;
	NSArray* _categories;
	int _category;
	char _activateItem;

}

@property (nonatomic,retain) NSMutableDictionary * items;              //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSArray * categories;                     //@synthesize categories=_categories - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)hide;
+(void)show:(id)arg1 ;
+(char)isVisible;
+(void)setCategories:(id)arg1 ;
-(void)_rotateWindow;
-(char)_accessibilityActivateActionChosen:(id)arg1 ;
-(void)_dimmingViewPressed;
-(void)_orientationChangeNotification;
-(void)_resizeHeaderLabel;
-(void)_handleSearchFieldTextChange:(id)arg1 ;
-(void)_resizeItemChooserView;
-(void)_displayWithList:(id)arg1 fromRotorSwitch:(char)arg2 ;
-(float)_positionAccountingForKeyboard:(CGRect)arg1 ;
-(void)_updatePositionForKeyboard:(CGRect)arg1 ;
-(void)hide;
-(void)show:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(id)accessibilityLabel;
-(NSMutableDictionary *)items;
-(void)setItems:(NSMutableDictionary *)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(char)isVisible;
-(NSArray *)categories;
-(unsigned long long)accessibilityTraits;
-(char)accessibilityScroll:(int)arg1 ;
-(char)accessibilityPerformEscape;
-(void)setCategories:(NSArray *)arg1 ;
@end


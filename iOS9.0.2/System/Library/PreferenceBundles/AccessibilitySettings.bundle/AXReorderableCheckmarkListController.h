/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSMutableArray;

@interface AXReorderableCheckmarkListController : PSListController {

	NSMutableArray* _allItems;

}
-(char)hideListItem:(id)arg1 ;
-(void)updateCellForItemAtIndex:(unsigned)arg1 ;
-(void)_updateCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)languageForItem:(id)arg1 ;
-(id)itemsFromPreferences;
-(id)cachedItems;
-(int)indexOfSectionForItems;
-(id)titleForItem:(id)arg1 ;
-(id)itemAfterTogglingEnabledState:(id)arg1 ;
-(void)updateItemsInPreferences:(id)arg1 ;
-(id)itemSpecifiers;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(char)isItemEnabled:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class UIBarButtonItem, NSArray;

@interface SafariAutoFillListController : SafariSettingsListController {

	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	NSArray* _specifiersForAddItem;

}

@property (nonatomic,copy,readonly) NSArray * specifiersForAddItem; 
-(void)toggleEditing;
-(char)canBeShownFromSuspendedState;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)_updateEditButton;
-(id)_cancelBarButtonItem;
-(void)_addItem:(id)arg1 ;
-(void)deleteButtonTapped;
-(NSArray *)specifiersForAddItem;
-(char)isSpecifierForAutoFillItem:(id)arg1 ;
-(void)updateDeleteButton;
-(char)keychainSyncIsEnabled;
-(id)deleteConfirmationTitle;
-(id)deleteConfirmationMessage;
-(void)deleteItemsForSpecifiers:(id)arg1 ;
-(id)titleForAddItem;
-(Class)controllerClassForAddItem;
-(id)_deleteBarButtonItem;
-(id)_editBarButtonItem;
-(unsigned)_autoFillItemCount;
-(void)_deleteSelectedItems;
-(void)cancelEditing;
@end


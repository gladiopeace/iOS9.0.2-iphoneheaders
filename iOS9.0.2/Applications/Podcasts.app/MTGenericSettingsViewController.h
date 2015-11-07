/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Podcasts/MTSettingsControllerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, UITapGestureRecognizer, MTSettingsController, NSString;

@interface MTGenericSettingsViewController : UITableViewController <MTSettingsControllerDelegate, UITextFieldDelegate> {

	UITextField* _activeTextField;
	UITapGestureRecognizer* _tap;
	MTSettingsController* _settingsController;

}

@property (nonatomic,retain) MTSettingsController * settingsController;              //@synthesize settingsController=_settingsController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)footerFont;
+(id)settingFont;
+(id)cellClassForSettingType:(int)arg1 inGroupWithIdentifier:(id)arg2 ;
+(id)cellIdentifierForSettingType:(int)arg1 ;
+(float)rowHeight;
+(id)selectedColor;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withDescription:(id)arg3 inGroupWithIdentifier:(id)arg4 ;
-(void)textSettingChanged:(id)arg1 value:(id)arg2 ;
-(void)setCell:(id)arg1 enabled:(char)arg2 withDescription:(id)arg3 ;
-(id)newFooterView;
-(void)settingsController:(id)arg1 reloadedGroupWithIdentifier:(id)arg2 ;
-(void)settingsController:(id)arg1 addedGroup:(id)arg2 atIndex:(int)arg3 ;
-(void)settingsController:(id)arg1 removedGroupAtIndex:(int)arg2 ;
-(void)settingsController:(id)arg1 removedSettingAtIndex:(int)arg2 inGroupWithIdentifier:(id)arg3 ;
-(void)settingsController:(id)arg1 updatedSettingAtIndex:(int)arg2 inGroupWithIdentifier:(id)arg3 ;
-(void)syncControllerOperationCompleted:(id)arg1 ;
-(void)switchSettingChanged:(id)arg1 value:(char)arg2 ;
-(id)settingAtIndexPath:(id)arg1 ;
-(id)newCellForDescriptionType:(int)arg1 inGroupWithIdentifier:(id)arg2 ;
-(void)optionSettingChanged:(id)arg1 value:(unsigned)arg2 ;
-(id)indexPathForSetting:(id)arg1 ;
-(void)dismissKeyboard:(id)arg1 ;
-(void)setSettingsController:(MTSettingsController *)arg1 ;
-(MTSettingsController *)settingsController;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)initWithStyle:(int)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)updateRowHeight;
@end


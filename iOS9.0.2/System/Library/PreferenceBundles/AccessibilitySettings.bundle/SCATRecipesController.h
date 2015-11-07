/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AXNamedItemsListController.h>

@class NSArray;

@interface SCATRecipesController : AXNamedItemsListController {

	NSArray* _launchToRecipeSpecifiers;

}

@property (nonatomic,retain) NSArray * launchToRecipeSpecifiers;              //@synthesize launchToRecipeSpecifiers=_launchToRecipeSpecifiers - In the implementation block
-(NSArray *)launchToRecipeSpecifiers;
-(id)_launchToRecipeSummary:(id)arg1 ;
-(void)setLaunchToRecipeSpecifiers:(NSArray *)arg1 ;
-(char)shouldAllowSelection;
-(id)setName:(id)arg1 forItem:(id)arg2 ;
-(SEL)settingsGetter;
-(void)didSaveItems;
-(id)nameForItem:(id)arg1 ;
-(SEL)settingsSetter;
-(id)specifiers;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@protocol UIViewControllerPreviewing;
@class NSArray, NSString;

@interface AXForceTouchController : AccessibilityBaseListController <UIViewControllerPreviewingDelegate> {

	char _forceTouchSettingsEnabled;
	id<UIViewControllerPreviewing> _viewControllerPreviewing;
	char _shouldIgnoreNextEnabledChangedNotification;
	NSArray* _forceTouchSettingItems;

}

@property (assign,nonatomic) char shouldIgnoreNextEnabledChangedNotification;              //@synthesize shouldIgnoreNextEnabledChangedNotification=_shouldIgnoreNextEnabledChangedNotification - In the implementation block
@property (nonatomic,retain) NSArray * forceTouchSettingItems;                             //@synthesize forceTouchSettingItems=_forceTouchSettingItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldIgnoreNextEnabledChangedNotification;
-(id)_specsForMasterSwitch;
-(id)_specsForSensitivity;
-(void)setForceTouchSettingItems:(NSArray *)arg1 ;
-(NSArray *)forceTouchSettingItems;
-(void)setForceTouchEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setForceTouchSensitivity:(id)arg1 specifier:(id)arg2 ;
-(id)forceTouchSensitivity:(id)arg1 ;
-(void)setShouldIgnoreNextEnabledChangedNotification:(char)arg1 ;
-(void)setForceTouchSettingsEnabled:(char)arg1 ;
-(id)forceTouchEnabled:(id)arg1 ;
-(id)_specsForTester;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
@end


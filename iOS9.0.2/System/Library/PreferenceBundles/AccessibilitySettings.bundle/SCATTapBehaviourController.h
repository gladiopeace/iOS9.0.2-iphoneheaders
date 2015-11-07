/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <AccessibilitySettings/AXEditableTableCellWithStepperDelegate.h>

@class PSSpecifier, NSDictionary, NSString;

@interface SCATTapBehaviourController : AccessibilityBaseListController <AXEditableTableCellWithStepperDelegate> {

	char _showingPicker;
	PSSpecifier* _pickerSpecifier;
	PSSpecifier* _pickerGroupSpecifier;
	PSSpecifier* _descriptionGroupSpecifier;
	NSDictionary* _behaviorFooterTextMap;

}

@property (nonatomic,retain) PSSpecifier * pickerSpecifier;                        //@synthesize pickerSpecifier=_pickerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * pickerGroupSpecifier;                   //@synthesize pickerGroupSpecifier=_pickerGroupSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * descriptionGroupSpecifier;              //@synthesize descriptionGroupSpecifier=_descriptionGroupSpecifier - In the implementation block
@property (nonatomic,retain) NSDictionary * behaviorFooterTextMap;                 //@synthesize behaviorFooterTextMap=_behaviorFooterTextMap - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)behaviorFooterTextMap;
-(double)minimumValueForSpecifier:(id)arg1 ;
-(double)maximumValueForSpecifier:(id)arg1 ;
-(double)stepValueForSpecifier:(id)arg1 ;
-(void)specifier:(id)arg1 setValue:(double)arg2 ;
-(id)stringValueForSpecifier:(id)arg1 ;
-(PSSpecifier *)descriptionGroupSpecifier;
-(void)setDescriptionGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)selectBehavior:(int)arg1 ;
-(void)setPickerGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)showPicker:(char)arg1 animated:(char)arg2 ;
-(PSSpecifier *)pickerGroupSpecifier;
-(void)setPickerSpecifier:(PSSpecifier *)arg1 ;
-(void)setBehaviorFooterTextMap:(NSDictionary *)arg1 ;
-(void)_updateSpecifierVisibility;
-(void)selectSpecifierWithBehavior:(int)arg1 ;
-(void)updateFooterTextWithBehavior:(int)arg1 animated:(char)arg2 ;
-(PSSpecifier *)pickerSpecifier;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)willResignActive;
-(void)willBecomeActive;
-(double)valueForSpecifier:(id)arg1 ;
@end


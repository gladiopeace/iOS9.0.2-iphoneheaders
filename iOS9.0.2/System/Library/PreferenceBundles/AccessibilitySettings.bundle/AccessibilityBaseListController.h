/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray;

@interface AccessibilityBaseListController : PSListController {

	char _detailItemsHidden;
	NSArray* _detailItems;

}

@property (nonatomic,retain) NSArray * detailItems;               //@synthesize detailItems=_detailItems - In the implementation block
@property (assign,nonatomic) char detailItemsHidden;              //@synthesize detailItemsHidden=_detailItemsHidden - In the implementation block
-(NSArray *)detailItems;
-(id)cellForSpecifier:(id)arg1 ;
-(id)specifierForIndexPath:(id)arg1 ;
-(void)showController:(id)arg1 withSpecifier:(id)arg2 ;
-(id)cellForSpecifierID:(id)arg1 ;
-(char)detailItemsHidden;
-(void)updateVisibleCellsWithCheckedSelection:(id)arg1 ;
-(void)updateTableCheckedSelection:(id)arg1 ;
-(void)setDetailItems:(NSArray *)arg1 ;
-(id)specifiersByRemovingDetailItemsFromOriginalSpecifiers:(id)arg1 ifHidden:(char)arg2 ;
-(void)setDetailItemsHidden:(char)arg1 ;
-(void)dealloc;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(id)specifierForKey:(id)arg1 ;
@end


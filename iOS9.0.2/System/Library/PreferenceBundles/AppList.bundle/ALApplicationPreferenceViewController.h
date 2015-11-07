/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AppList.bundle/AppList
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppList/AppList-Structs.h>
#import <Preferences/PSListController.h>

@class ALPreferencesTableDataSource, UITableView, NSString, NSArray, NSMutableDictionary, ALApplicationTableDataSource;

@interface ALApplicationPreferenceViewController : PSListController {

	ALPreferencesTableDataSource* _dataSource;
	UITableView* _tableView;
	NSString* _navigationTitle;
	NSArray* descriptors;
	id settingsDefaultValue;
	NSString* settingsPath;
	NSString* preferencesKey;
	NSMutableDictionary* settings;
	NSString* settingsKeyPrefix;
	NSString* settingsChangeNotification;
	char singleEnabledMode;

}

@property (nonatomic,retain) NSString * navigationTitle;                               //@synthesize navigationTitle=_navigationTitle - In the implementation block
@property (nonatomic,readonly) ALApplicationTableDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)_updateSections;
-(void)loadFromSpecifier:(id)arg1 ;
-(id)valueTitleForCellAtIndexPath:(id)arg1 ;
-(id)appliedValueForKey:(id)arg1 inCellDescriptor:(id)arg2 sectionDescriptor:(id)arg3 ;
-(void)settingsChanged;
-(void)cellAtIndexPath:(id)arg1 didChangeToValue:(id)arg2 ;
-(id)valueForCellAtIndexPath:(id)arg1 ;
-(void)showPreferencesFromCellDescriptor:(id)arg1 sectionDescriptor:(id)arg2 indexPath:(id)arg3 ;
-(void)launchURLFromCellDescriptor:(id)arg1 sectionDescriptor:(id)arg2 ;
-(void)viewWillBecomeVisible:(void*)arg1 ;
-(id)specifierForIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(ALApplicationTableDataSource *)dataSource;
-(id)view;
-(CGSize)contentSize;
-(void)viewDidLayoutSubviews;
-(void)setSpecifier:(id)arg1 ;
-(id)specifierForID:(id)arg1 ;
-(id)initForContentSize:(CGSize)arg1 ;
-(void)pushController:(id)arg1 ;
-(NSString *)navigationTitle;
-(void)setNavigationTitle:(NSString *)arg1 ;
@end


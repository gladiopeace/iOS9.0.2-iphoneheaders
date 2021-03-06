/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>

@class NSMutableDictionary, NSMutableArray, UsageStorageController, NSDictionary;

@interface UsageDetailController : PSEditableListController {

	NSMutableDictionary* _media;
	char _showingAll;
	NSMutableArray* _documentsGroup;
	UsageStorageController* _storageController;

}

@property (nonatomic,readonly) NSDictionary * mediaCache;                                    //@synthesize media=_media - In the implementation block
@property (assign,nonatomic,__weak) UsageStorageController * storageController;              //@synthesize storageController=_storageController - In the implementation block
+(float)totalSizeForGroups:(id)arg1 ;
+(char)hasMediaForGroups:(id)arg1 ;
+(id)mpKeyTranslations;
+(void)setupSpecifier:(id)arg1 forMediaGroups:(id)arg2 ;
+(id)mediaGroups;
-(id)dynamicSize:(id)arg1 ;
-(char)isAppController;
-(void)setStorageController:(UsageStorageController *)arg1 ;
-(char)removeMediaEntry:(id)arg1 inSection:(int)arg2 ;
-(char)updateSizesAfterDeletingMediaKind:(id)arg1 deletedSection:(char)arg2 shouldPop:(char)arg3 ;
-(void)deleteApp;
-(id)copyMediaSpecifiers;
-(id)documentsAndDataSpecifiers;
-(void)confirmAppDeletion;
-(void)showMore:(id)arg1 ;
-(NSDictionary *)mediaCache;
-(UsageStorageController *)storageController;
-(char)hasMedia;
-(char)canBeShownFromSuspendedState;
-(id)specifiers;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(void)viewDidDisappear:(char)arg1 ;
-(char)needsToShowToolbarInPrefsAppRoot;
-(id)size:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>
#import <libobjc.A.dylib/HKEmergencyCardDeletionDelegate.h>
#import <libobjc.A.dylib/HKEmergencyCardRowHeightChangeDelegate.h>

@protocol HKMedicalIDViewControllerDelegate;
@class NSArray, HKEmergencyCardGroupTableItem, HKEmergencyCardContactsTableItem, _HKMedicalIDData, HKHealthStore, NSString;

@interface HKMedicalIDViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, HKMedicalIDViewControllerDelegate, HKEmergencyCardDeletionDelegate, HKEmergencyCardRowHeightChangeDelegate> {

	NSArray* _tableItems;
	NSArray* _presentableTableItems;
	NSArray* _footers;
	HKEmergencyCardGroupTableItem* _groupItem;
	HKEmergencyCardContactsTableItem* _contactsItem;
	char _inEditMode;
	NSArray* _localeItems;
	char _allowsEditing;
	char _showsDismissButton;
	char _showsDeleteButton;
	_HKMedicalIDData* _medicalID;
	HKHealthStore* _healthStore;
	id<HKMedicalIDViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) _HKMedicalIDData * medicalID;                                       //@synthesize medicalID=_medicalID - In the implementation block
@property (assign,nonatomic) char allowsEditing;                                                 //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) char showsDismissButton;                                            //@synthesize showsDismissButton=_showsDismissButton - In the implementation block
@property (assign,nonatomic) char showsDeleteButton;                                             //@synthesize showsDeleteButton=_showsDeleteButton - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                        //@synthesize healthStore=_healthStore - In the implementation block
@property (assign,nonatomic,__weak) id<HKMedicalIDViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isSupportedOnThisDevice;
-(void)localeDidChange:(id)arg1 ;
-(id)initInEditMode:(char)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setShowsDismissButton:(char)arg1 ;
-(void)setMedicalID:(_HKMedicalIDData *)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)setShowsDeleteButton:(char)arg1 ;
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidDelete:(id)arg1 ;
-(void)_doneTapped:(id)arg1 ;
-(void)setDelegate:(id<HKMedicalIDViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<HKMedicalIDViewControllerDelegate>)delegate;
-(int)preferredStatusBarStyle;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(void)_buildTableItems;
-(void)_cancelEditingTapped:(id)arg1 ;
-(void)_doneEditingTapped:(id)arg1 ;
-(void)_editTapped:(id)arg1 ;
-(void)_contactStoreDidChange:(id)arg1 ;
-(void)_buildPresentableTableItems;
-(void)_refreshEmergencyContactsAndReload:(char)arg1 ;
-(_HKMedicalIDData *)medicalID;
-(char)showsDeleteButton;
-(id)_newViewForFooterInSection:(int)arg1 ;
-(void)deletionTableItemDidTapDelete:(id)arg1 ;
-(void)tableItem:(id)arg1 heightDidChangeForRowIndex:(int)arg2 keepRectVisible:(CGRect)arg3 inView:(id)arg4 ;
-(id)_fetchMedicalIDDataSynchronously:(char*)arg1 ;
-(char)showsDismissButton;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end


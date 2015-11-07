/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class MCUIProfile, MCBook, NSString;

@interface MCManagedMediaDetailsViewController : UITableViewController <PSStateRestoration> {

	MCUIProfile* _UIProfile;
	MCBook* _managedBook;

}

@property (nonatomic,retain) MCUIProfile * UIProfile;               //@synthesize UIProfile=_UIProfile - In the implementation block
@property (nonatomic,retain) MCBook * managedBook;                  //@synthesize managedBook=_managedBook - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)canBeShownFromSuspendedState;
-(void)_setup;
-(void)dealloc;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(int)arg1 ;
-(void)viewDidLoad;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(MCUIProfile *)UIProfile;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
-(MCBook *)managedBook;
-(void)setManagedBook:(MCBook *)arg1 ;
-(id)initWithUIProfile:(id)arg1 managedBook:(id)arg2 ;
@end


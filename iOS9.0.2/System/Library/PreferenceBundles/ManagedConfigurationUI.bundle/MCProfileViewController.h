/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@protocol MCProfileViewControllerDelegate;
@class MCUIProfile, NSString;

@interface MCProfileViewController : UITableViewController <PSStateRestoration> {

	char _profileOffersReenroll;
	char _profileOffersRemoval;
	id<MCProfileViewControllerDelegate> _profileViewControllerDelegate;
	int _profileViewMode;
	MCUIProfile* _UIProfile;

}

@property (assign,nonatomic,__weak) id<MCProfileViewControllerDelegate> profileViewControllerDelegate;              //@synthesize profileViewControllerDelegate=_profileViewControllerDelegate - In the implementation block
@property (assign,nonatomic) int profileViewMode;                                                                   //@synthesize profileViewMode=_profileViewMode - In the implementation block
@property (nonatomic,retain) MCUIProfile * UIProfile;                                                               //@synthesize UIProfile=_UIProfile - In the implementation block
@property (assign,nonatomic) char profileOffersReenroll;                                                            //@synthesize profileOffersReenroll=_profileOffersReenroll - In the implementation block
@property (assign,nonatomic) char profileOffersRemoval;                                                             //@synthesize profileOffersRemoval=_profileOffersRemoval - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)canBeShownFromSuspendedState;
-(void)_setup;
-(void)dealloc;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(void)setProfileOffersReenroll:(char)arg1 ;
-(void)setProfileOffersRemoval:(char)arg1 ;
-(char)profileOffersReenroll;
-(int)profileViewMode;
-(char)profileOffersRemoval;
-(id<MCProfileViewControllerDelegate>)profileViewControllerDelegate;
-(MCUIProfile *)UIProfile;
-(char)_shouldShowUpdateButton;
-(char)_shouldShowRemoveButton;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
-(void)_updateProfile;
-(void)_removeProfile;
-(id)initWithStyle:(int)arg1 profile:(id)arg2 profileViewMode:(int)arg3 ;
-(void)setProfileViewMode:(int)arg1 ;
-(void)setProfileViewControllerDelegate:(id<MCProfileViewControllerDelegate>)arg1 ;
-(void)setProfile:(id)arg1 ;
@end


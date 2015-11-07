/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@protocol MCInstallationConsentDelegate;
@class MCProfile, NSString;

@interface MCInstallationConsentViewController : UITableViewController <PSStateRestoration> {

	char _showInstall;
	MCProfile* _profile;
	id<MCInstallationConsentDelegate> _consentDelegate;

}

@property (nonatomic,retain) MCProfile * profile;                                                   //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) id<MCInstallationConsentDelegate> consentDelegate;              //@synthesize consentDelegate=_consentDelegate - In the implementation block
@property (assign,nonatomic) char showInstall;                                                      //@synthesize showInstall=_showInstall - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MCProfile *)profile;
-(char)canBeShownFromSuspendedState;
-(void)_setup;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(int)arg1 ;
-(void)viewDidLoad;
-(void)_installProfile;
-(void)setConsentDelegate:(id<MCInstallationConsentDelegate>)arg1 ;
-(void)setShowInstall:(char)arg1 ;
-(void)_cancelInstallProfile;
-(id<MCInstallationConsentDelegate>)consentDelegate;
-(char)showInstall;
-(void)setProfile:(MCProfile *)arg1 ;
@end


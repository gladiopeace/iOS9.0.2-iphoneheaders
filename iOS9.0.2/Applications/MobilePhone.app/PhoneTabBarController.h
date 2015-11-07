/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>
#import <MobilePhone/PhoneBaseViewController.h>

@class PhoneNavigationController, PHFavoritesViewController, PHRecentsViewController, PHContactsViewController, PHDialerViewController, PHVoicemailNavigationController, UIToolbar, UINavigationController, NSString;

@interface PhoneTabBarController : UITabBarController <PhoneBaseViewController> {

	PhoneNavigationController* _favoritesNavigationController;
	PhoneNavigationController* _recentsNavigationController;
	PHFavoritesViewController* _favoritesViewController;
	PHRecentsViewController* _recentsViewController;
	PHContactsViewController* _contactsViewController;
	PHDialerViewController* _dialerViewController;
	PHVoicemailNavigationController* _voicemailViewController;
	char _shouldSwitchToMostRecentViewType;
	UIToolbar* _toolbar;

}

@property (nonatomic,retain) UINavigationController * favoritesNavigationController;                 //@synthesize favoritesNavigationController=_favoritesNavigationController - In the implementation block
@property (nonatomic,retain) UINavigationController * recentsNavigationController;                   //@synthesize recentsNavigationController=_recentsNavigationController - In the implementation block
@property (nonatomic,retain) PHFavoritesViewController * favoritesViewController;                    //@synthesize favoritesViewController=_favoritesViewController - In the implementation block
@property (nonatomic,retain) PHRecentsViewController * recentsViewController;                        //@synthesize recentsViewController=_recentsViewController - In the implementation block
@property (nonatomic,retain) PHContactsViewController * contactsViewController;                      //@synthesize contactsViewController=_contactsViewController - In the implementation block
@property (nonatomic,retain) PHDialerViewController * dialerViewController;                          //@synthesize dialerViewController=_dialerViewController - In the implementation block
@property (nonatomic,retain) PHVoicemailNavigationController * voicemailViewController;              //@synthesize voicemailViewController=_voicemailViewController - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar;                                                    //@synthesize toolbar=_toolbar - In the implementation block
@property (assign) char shouldSwitchToMostRecentViewType;                                            //@synthesize shouldSwitchToMostRecentViewType=_shouldSwitchToMostRecentViewType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)statusBarStyle;
+(id)defaultPNGName;
-(char)shouldSnapshot;
-(void)prepareForSnapshot;
-(int)currentTabViewType;
-(PHFavoritesViewController *)favoritesViewController;
-(PHRecentsViewController *)recentsViewController;
-(PHVoicemailNavigationController *)voicemailViewController;
-(void)switchToTab:(int)arg1 ;
-(UINavigationController *)recentsNavigationController;
-(UINavigationController *)favoritesNavigationController;
-(void)showToolbarWithItems:(id)arg1 ;
-(void)hideToolbar;
-(void)setShouldSwitchToMostRecentViewType:(char)arg1 ;
-(void)showFavoritesTab:(char)arg1 recentsTab:(char)arg2 contactsTab:(char)arg3 keypadTab:(char)arg4 voicemailTab:(char)arg5 ;
-(void)_handleVoicemailUIStatusChangedNotification:(id)arg1 ;
-(void)switchToMostRecentlyUsedTabType;
-(int)tabTypeForViewController:(id)arg1 ;
-(int)defaultTabViewType;
-(void)_badgeChanged:(id)arg1 ;
-(void)registerForBadgeUpdateNotification;
-(void)_updateAllBadges:(char)arg1 ;
-(void)_startListeningForBadgeChangedNotifications:(id)arg1 ;
-(void)_stopListeningForBadgeChangedNotifications:(id)arg1 ;
-(void)popCurrentNavigationControllerToRootViewControllerIfAppropriate;
-(char)shouldSwitchToMostRecentViewType;
-(PHDialerViewController *)dialerViewController;
-(id)viewControllerForTabViewType:(int)arg1 ;
-(char)shouldDisableEdgeClip;
-(void)resetViewController;
-(void)cleanUpViewController;
-(char)handleUserActivityContinuation:(id)arg1 ;
-(void)setFavoritesNavigationController:(UINavigationController *)arg1 ;
-(void)setRecentsNavigationController:(UINavigationController *)arg1 ;
-(void)setFavoritesViewController:(PHFavoritesViewController *)arg1 ;
-(void)setRecentsViewController:(PHRecentsViewController *)arg1 ;
-(void)setDialerViewController:(PHDialerViewController *)arg1 ;
-(void)setVoicemailViewController:(PHVoicemailNavigationController *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationWillSuspend;
-(void)updateUserActivityState:(id)arg1 ;
-(void)applicationDidResume;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)_reallyWantsFullScreenLayout;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)setSelectedViewController:(id)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)transitionCompleted;
-(void)handleURL:(id)arg1 ;
-(void)setContactsViewController:(PHContactsViewController *)arg1 ;
-(PHContactsViewController *)contactsViewController;
@end


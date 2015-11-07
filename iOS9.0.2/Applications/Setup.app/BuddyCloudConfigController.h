/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/BuddyController.h>

@protocol BuddyControllerDelegate;
@class UINavigationController, BuddyCloudConfigDisclosureViewController, BuddyCloudConfigLoginViewController, BuddyCloudConfigConsentViewController, NSMutableArray, NSString;

@interface BuddyCloudConfigController : UIViewController <BuddyController> {

	id<BuddyControllerDelegate> _delegate;
	UINavigationController* _navController;
	BuddyCloudConfigDisclosureViewController* _disclosureViewController;
	BuddyCloudConfigLoginViewController* _loginViewController;
	BuddyCloudConfigConsentViewController* _consentViewController;
	int _cloudConfigState;
	NSMutableArray* _controllersToRemove;

}

@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navController;                                    //@synthesize navController=_navController - In the implementation block
@property (nonatomic,retain) BuddyCloudConfigDisclosureViewController * disclosureViewController;              //@synthesize disclosureViewController=_disclosureViewController - In the implementation block
@property (nonatomic,retain) BuddyCloudConfigLoginViewController * loginViewController;                        //@synthesize loginViewController=_loginViewController - In the implementation block
@property (nonatomic,retain) BuddyCloudConfigConsentViewController * consentViewController;                    //@synthesize consentViewController=_consentViewController - In the implementation block
@property (assign,nonatomic) int cloudConfigState;                                                             //@synthesize cloudConfigState=_cloudConfigState - In the implementation block
@property (nonatomic,retain) NSMutableArray * controllersToRemove;                                             //@synthesize controllersToRemove=_controllersToRemove - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(char)controllerNeedsToRun;
-(BuddyCloudConfigDisclosureViewController *)disclosureViewController;
-(BuddyCloudConfigLoginViewController *)loginViewController;
-(BuddyCloudConfigConsentViewController *)consentViewController;
-(void)removeViewControllers:(id)arg1 fromNavHierarchyOf:(id)arg2 ;
-(int)cloudConfigState;
-(void)setCloudConfigState:(int)arg1 ;
-(NSMutableArray *)controllersToRemove;
-(void)cloudConfigDidFinishWasApplied:(char)arg1 ;
-(void)transitionToDisclosureViewFromController:(id)arg1 ;
-(void)transitionToErrorViewInDisclosureViewControllerFromController:(id)arg1 lastError:(id)arg2 ;
-(void)transitionToLoginViewControllerFromController:(id)arg1 lastError:(id)arg2 ;
-(void)transitionToConsentViewControllerFromController:(id)arg1 profileData:(id)arg2 ;
-(void)removeControllersToRemove;
-(void)setDisclosureViewController:(BuddyCloudConfigDisclosureViewController *)arg1 ;
-(void)setLoginViewController:(BuddyCloudConfigLoginViewController *)arg1 ;
-(void)setConsentViewController:(BuddyCloudConfigConsentViewController *)arg1 ;
-(void)setControllersToRemove:(NSMutableArray *)arg1 ;
-(void)setNavController:(UINavigationController *)arg1 ;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(id<BuddyControllerDelegate>)delegate;
-(id)view;
-(id)viewController;
-(UINavigationController *)navController;
-(char)shouldAllowStartOver;
-(void)removeFromNavHierarchyOf:(id)arg1 ;
@end


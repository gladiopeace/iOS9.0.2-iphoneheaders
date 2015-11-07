/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/TencentWeiboAccountMigrationDialog.app/TencentWeiboAccountMigrationDialog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TencentWeiboAccountMigrationDialog/TencentWeiboAccountMigrationDialog-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>
#import <TencentWeiboAccountMigrationDialog/SLTencentWeiboMigrationDialogProtocol.h>
#import <TencentWeiboAccountMigrationDialog/SLTencentWeiboLoginInfoViewControllerDelegate.h>
#import <TencentWeiboAccountMigrationDialog/SLTencentWeiboMigrationPasswordViewControllerDelegate.h>

@protocol SLTencentWeiboMigrationDialogListener;
@class UIWindow, NSXPCConnection, UINavigationController, SLTencentWeiboMigrationInfoViewController, SLTencentWeiboMigrationPasswordViewController, NSString;

@interface SLTencentWeiboMigrationAppDelegate : UIResponder <UIApplicationDelegate, SLTencentWeiboMigrationDialogProtocol, SLTencentWeiboLoginInfoViewControllerDelegate, SLTencentWeiboMigrationPasswordViewControllerDelegate> {

	id<SLTencentWeiboMigrationDialogListener> _listener;
	NSXPCConnection* _listenerConnection;
	UINavigationController* _navViewController;
	SLTencentWeiboMigrationInfoViewController* _infoViewController;
	SLTencentWeiboMigrationPasswordViewController* _passwordViewController;
	NSString* _username;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)_connectToListener;
-(void)_remoteSheetDidEnd;
-(void)_disconnectFromListener;
-(void)authenticationDidSucceed;
-(void)authenticationDidFailWithErrorMessage:(id)arg1 ;
-(void)userDidCancelPasswordViewController:(id)arg1 ;
-(void)userWillSignInToPasswordViewController:(id)arg1 withPassword:(id)arg2 ;
-(void)userDidSignInToPasswordViewController:(id)arg1 ;
-(void)loginInfoViewController:(id)arg1 userDidProvideConsent:(char)arg2 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setUsername:(id)arg1 ;
@end


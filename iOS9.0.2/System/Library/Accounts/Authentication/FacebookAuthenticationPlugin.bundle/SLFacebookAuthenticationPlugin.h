/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Accounts/Authentication/FacebookAuthenticationPlugin.bundle/FacebookAuthenticationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>
#import <FacebookAuthenticationPlugin/SLFacebookMigrationDialogListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol SLFacebookMigrationDialogProtocol;
@class NSXPCListener, ACDAccountStore, ACAccount, ACAccountCredential, NSString;

@interface SLFacebookAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin, SLFacebookMigrationDialogListener, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	id<SLFacebookMigrationDialogProtocol> _migrationDialogProxy;
	ACDAccountStore* _store;
	ACAccount* _account;
	ACAccountCredential* _cachedCredential;
	/*^block*/id _completionHandler;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsAccountType:(id)arg1 ;
-(void)migrationDialogWasCanceled;
-(void)migrationDialogDidLaunch;
-(void)_renewMasterCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_displayBadCredentialsAlertForAccount:(id)arg1 clientName:(id)arg2 reason:(id)arg3 accountStore:(id)arg4 resetAuthenticatedOnAlertFailure:(char)arg5 handler:(/*^block*/id)arg6 ;
-(void)showUserAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 keyboardType:(id)arg6 withCompletionBlock:(/*^block*/id)arg7 ;
-(void)migrationDialogDidObtainPassword:(id)arg1 ;
-(void)_obtainPasswordForAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_startListeningForMigrationDialog;
-(void)_renewClientCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_stopListeningForMigrationDialog;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
@end


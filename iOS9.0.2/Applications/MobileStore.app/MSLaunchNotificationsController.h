/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileStore.app/MobileStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKUIClientContext, AAUIFamilySetupPrompter, UIViewController, NSOperationQueue;

@interface MSLaunchNotificationsController : NSObject {

	SKUIClientContext* _clientContext;
	AAUIFamilySetupPrompter* _familySetupPrompter;
	UIViewController* _parentViewController;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
-(char)_hasDisplayedFamilySetup;
-(void)_showFamilySetupPrompt;
-(void)checkForNotifications;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithParentViewController:(id)arg1 ;
@end


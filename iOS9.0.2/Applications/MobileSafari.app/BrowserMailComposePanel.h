/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileSafari/BrowserPanel.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class MFMailComposeViewController, NSString;

@interface BrowserMailComposePanel : UIViewController <BrowserPanel, UINavigationControllerDelegate> {

	MFMailComposeViewController* _mailController;

}

@property (readonly) MFMailComposeViewController * mailController;              //@synthesize mailController=_mailController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)panelType;
-(char)shouldHideOnSuspend;
-(MFMailComposeViewController *)mailController;
-(id)initWithURL:(id)arg1 mailComposeDelegate:(id)arg2 ;
-(void)dealloc;
-(void)applicationDidResume;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
@end


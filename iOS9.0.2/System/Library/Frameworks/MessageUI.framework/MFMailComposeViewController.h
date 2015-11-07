/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@interface MFMailComposeViewController : UINavigationController {

	id _internal;
	/*^block*/id _setupAnimationBlock;
	char _didChangeStatusBarStyle;
	int _savedStatusBarStyle;

}

@property (assign,nonatomic) id<MFMailComposeViewControllerDelegate> mailComposeDelegate; 
+(void)removeAutosavedMessageWithIdentifier:(id)arg1 ;
+(unsigned)maximumAttachmentSize;
+(char)hasAutosavedMessageWithIdentifier:(id)arg1 ;
+(char)canSendMail;
+(char)canSendMailSourceAccountManagement:(int)arg1 ;
-(void)setCaretPosition:(unsigned)arg1 ;
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(void)finalizeCompositionValues;
-(id)_internalViewController;
-(id<MFMailComposeViewControllerDelegate>)mailComposeDelegate;
-(id)_validEmailAddressesFromArray:(id)arg1 ;
-(id)_addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)addSetupAnimationBlock:(/*^block*/id)arg1 ;
-(void)setAutorotationDelegate:(id)arg1 ;
-(void)setToRecipients:(id)arg1 ;
-(void)currentAttachmentLimitWithHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(char)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)__viewControllerWillBePresented:(char)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setContentVisible:(char)arg1 ;
-(void)setSubject:(id)arg1 ;
-(void)autosaveWithHandler:(/*^block*/id)arg1 ;
-(void)setKeyboardVisible:(char)arg1 ;
-(void)setMailComposeDelegate:(id<MFMailComposeViewControllerDelegate>)arg1 ;
-(void)recoverAutosavedMessageWithIdentifier:(id)arg1 ;
-(void)setSourceAccountManagement:(int)arg1 ;
-(void)setMessageBody:(id)arg1 isHTML:(char)arg2 ;
-(void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(id)_addAttachmentWithFileURL:(id)arg1 mimeType:(id)arg2 ;
@end


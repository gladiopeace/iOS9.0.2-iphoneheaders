/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/MFMailComposeRemoteService.h>

@class ComposeNavigationController, _MFMailCompositionContext, NSMutableDictionary, MFAttachmentComposeManager, NSString;

@interface ComposeServiceRemoteViewController : UIViewController <MFMailComposeViewControllerDelegate, MFMailComposeRemoteService> {

	ComposeNavigationController* _navigationController;
	_MFMailCompositionContext* _compositionContext;
	NSMutableDictionary* _attachmentIdentifiersMap;
	MFAttachmentComposeManager* _attachmentManager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)_firstDraw:(id)arg1 ;
-(void)_invokeReply:(/*^block*/id)arg1 ;
-(void)serializedPlaceholderForFileName:(id)arg1 fileSize:(int)arg2 mimeType:(id)arg3 contentID:(id)arg4 withReply:(/*^block*/id)arg5 ;
-(void)securityScopeForURL:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)addAttachmentWithPlaceholderData:(id)arg1 ;
-(void)addAttachmentWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)setCompositionValues:(id)arg1 ;
-(void)commitCompositionValuesWithReply:(/*^block*/id)arg1 ;
-(void)framesForAttachmentsWithIdentifiers:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)autosaveWithReply:(/*^block*/id)arg1 ;
-(void)addAttachmentWithFileURL:(id)arg1 mimeType:(id)arg2 ;
-(void)serializedPlaceholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 withReply:(/*^block*/id)arg5 ;
-(void)serializedPlaceholderForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setContentVisible:(char)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)setUICustomizationData:(id)arg1 ;
@end


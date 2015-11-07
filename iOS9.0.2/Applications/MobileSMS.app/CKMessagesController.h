/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSMS.app/MobileSMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/CKTranscriptComposeDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class MFMailComposeViewController, CKConversation, NSMutableArray, CKConversationListController, CKTranscriptController, CKNavigationController, CKViewController, NSSet, NSString;

@interface CKMessagesController : UISplitViewController <UISplitViewControllerDelegate, UIActionSheetDelegate, CKTranscriptComposeDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, MFMailComposeViewControllerDelegate> {

	MFMailComposeViewController* _mailComposeController;
	CKConversation* _currentConversation;
	NSMutableArray* _conversationCache;
	/*^block*/id _alertViewHandler;
	unsigned _attachmentPreviewQosClass;
	CKConversationListController* _conversationListController;
	CKTranscriptController* _transcriptController;
	CKTranscriptController* _composeTranscriptController;
	CKNavigationController* _conversationListNavigationController;
	CKNavigationController* _transcriptNavigationController;
	CKNavigationController* _composeTranscriptNavigationController;
	CKViewController* _blankViewController;

}

@property (nonatomic,retain) id<NSCoding> autosaveIdentifier; 
@property (nonatomic,retain) CKConversationListController * conversationListController;                   //@synthesize conversationListController=_conversationListController - In the implementation block
@property (nonatomic,retain) CKTranscriptController * transcriptController;                               //@synthesize transcriptController=_transcriptController - In the implementation block
@property (nonatomic,retain) CKTranscriptController * composeTranscriptController;                        //@synthesize composeTranscriptController=_composeTranscriptController - In the implementation block
@property (nonatomic,retain) CKNavigationController * conversationListNavigationController;               //@synthesize conversationListNavigationController=_conversationListNavigationController - In the implementation block
@property (nonatomic,retain) CKNavigationController * transcriptNavigationController;                     //@synthesize transcriptNavigationController=_transcriptNavigationController - In the implementation block
@property (nonatomic,retain) CKNavigationController * composeTranscriptNavigationController;              //@synthesize composeTranscriptNavigationController=_composeTranscriptNavigationController - In the implementation block
@property (nonatomic,retain,readonly) NSSet * alertSuppressionContexts; 
@property (nonatomic,retain) CKConversation * currentConversation;                                        //@synthesize currentConversation=_currentConversation - In the implementation block
@property (nonatomic,readonly) char isShowingConversationListController; 
@property (nonatomic,retain) CKViewController * blankViewController;                                      //@synthesize blankViewController=_blankViewController - In the implementation block
@property (nonatomic,copy) id alertViewHandler;                                                           //@synthesize alertViewHandler=_alertViewHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showConversationList:(char)arg1 ;
-(CKConversationListController *)conversationListController;
-(CKTranscriptController *)composeTranscriptController;
-(id)ppt_TranscriptController;
-(void)showMailComposeSheetForAutosavedMessage;
-(void)setAlertViewHandler:(id)arg1 ;
-(CKNavigationController *)conversationListNavigationController;
-(void)showMailComposeSheetForAddress:(id)arg1 ;
-(char)isShowingTranscriptWithUnsentText;
-(void)showConversationAndMessageForSearchURL:(id)arg1 ;
-(char)currentCompositionHasContent;
-(char)isShowingDirtyComposeModalView;
-(char)resumeToConversation:(id)arg1 ;
-(char)showUnreadConversationsWithLastConversation:(id)arg1 ignoringMessages:(id)arg2 ;
-(char)isShowingBlankTranscript;
-(CKNavigationController *)transcriptNavigationController;
-(void)autosaveMailComposition;
-(void)cancelNewMessageComposition;
-(char)hasUnreadFilteredConversationsIgnoringMessages:(id)arg1 ;
-(char)isShowingConversationListController;
-(id)alertViewHandler;
-(void)_conversationLeft:(id)arg1 ;
-(void)_chatRegistryDidLoad:(id)arg1 ;
-(void)_appStateChange:(id)arg1 ;
-(void)keyCommandCompose:(id)arg1 ;
-(void)_setIsShowingNoSelectionUI:(char)arg1 ;
-(void)_updateAlertSuppressionContext;
-(void)_pruneConversationCache;
-(void)setComposeTranscriptController:(CKTranscriptController *)arg1 ;
-(void)setComposeTranscriptNavigationController:(CKNavigationController *)arg1 ;
-(void)setCurrentConversation:(CKConversation *)arg1 ;
-(CKNavigationController *)composeTranscriptNavigationController;
-(void)_addConversationToCache:(id)arg1 ;
-(char)_canDumpConversationFromCache:(id)arg1 ;
-(void)_prepareToDumpCachedConversation:(id)arg1 ;
-(char)_isShowingFullscreenController;
-(char)_isShowingModalTranscript;
-(void)__updateAlertSuppressionContext;
-(CKViewController *)blankViewController;
-(void)showNanoComposeWithRecipients:(id)arg1 composition:(id)arg2 animated:(char)arg3 ;
-(void)showConversation:(id)arg1 animate:(char)arg2 forceToTranscript:(char)arg3 ;
-(void)_showMailComposeSheet;
-(void)_popToConversationListAndPerformBlockAnimated:(char)arg1 block:(/*^block*/id)arg2 ;
-(void)setConversationListController:(CKConversationListController *)arg1 ;
-(void)setTranscriptController:(CKTranscriptController *)arg1 ;
-(void)setConversationListNavigationController:(CKNavigationController *)arg1 ;
-(void)setTranscriptNavigationController:(CKNavigationController *)arg1 ;
-(void)setBlankViewController:(CKViewController *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(char)becomeFirstResponder;
-(char)shouldAutorotate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)loadView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(char)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(char)_splitViewControllerShouldRestoreResponderAfterTraitCollectionTransition:(id)arg1 ;
-(void)setAutosaveIdentifier:(id<NSCoding>)arg1 ;
-(id<NSCoding>)autosaveIdentifier;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(NSSet *)alertSuppressionContexts;
-(void)parentControllerDidResume:(char)arg1 animating:(char)arg2 ;
-(void)performResumeDeferredSetup;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)didCancelComposition:(id)arg1 ;
-(void)showNewMessageCompositionForComposition:(id)arg1 ;
-(void)transcriptController:(id)arg1 didSendMessageInConversation:(id)arg2 ;
-(void)transcriptController:(id)arg1 didSelectNewConversation:(id)arg2 ;
-(void)transcriptController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3 ;
-(void)transcriptControllerDidReportSpam:(id)arg1 ;
-(char)supportsAttachments;
-(void)parentControllerDidBecomeActive;
-(char)isAnimatingMessageSend;
-(void)_chatItemsDidChange:(id)arg1 ;
-(CKConversation *)currentConversation;
-(void)showConversation:(id)arg1 animate:(char)arg2 ;
-(CKTranscriptController *)transcriptController;
-(char)isShowingTranscriptController;
-(char)isComposingMessage;
-(void)resetNewMessageCompositionRecipients;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(char)arg3 ;
-(void)showConversationAndMessageForChatGUID:(id)arg1 messageGUID:(id)arg2 animate:(char)arg3 ;
@end


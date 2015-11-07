/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileMail/MFSuggestionHandlingDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <MobileMail/EKICSPreviewControllerDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>
#import <MobileMail/MFReclaimable.h>
#import <MobileMail/MessageMiniMallObserver.h>
#import <MobileMail/ABPersonViewControllerPrivateDelegate.h>
#import <libobjc.A.dylib/ABUnknownPersonViewControllerDelegate.h>
#import <MobileMail/TransferMailboxPickerDelegate.h>
#import <MobileMail/MFMessageViewingContextDelegate.h>
#import <libobjc.A.dylib/MFPassthroughViewProvider.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>
#import <libobjc.A.dylib/AFContextProvider.h>
#import <MobileMail/MFAttachmentHandlingDelegate.h>
#import <MobileMail/MFMessageContentDisplayDelegate.h>
#import <MobileMail/MFArrowControlsViewDelegate.h>
#import <libobjc.A.dylib/MFMailMarkupDelegate.h>

@class MFMessageViewingContext, MailAccount, MessageMiniMall, MessageContentAreaLayer, ComposeNavigationController, CertificateViewController, UIView, UIBarButtonItem, LongPressableButtonItem, MFArrowControlsView, NSSet, ABPersonViewController, ABUnknownPersonViewController, MFModernAddressAtom, MFVIPSender, NSMutableDictionary, UIKeyCommand, MFSecureMIMEPersonHeaderView, MessageCallToAction, MessageSuggestionSession, MFMailMarkup, NSUndoManager, NSString;

@interface MessageViewController : UIViewController <MFSuggestionHandlingDelegate, CNContactViewControllerDelegate, EKICSPreviewControllerDelegate, EKEventViewDelegate, EKEventViewDelegatePrivate, MFReclaimable, MessageMiniMallObserver, ABPersonViewControllerPrivateDelegate, ABUnknownPersonViewControllerDelegate, TransferMailboxPickerDelegate, MFMessageViewingContextDelegate, MFPassthroughViewProvider, EKEventEditViewDelegate, UIDocumentInteractionControllerDelegate, AFContextProvider, MFAttachmentHandlingDelegate, MFMessageContentDisplayDelegate, MFArrowControlsViewDelegate, MFMailMarkupDelegate> {

	MFMessageViewingContext* _viewingContext;
	MFMessageViewingContext* _selectedViewingContext;
	MailAccount* _account;
	MessageMiniMall* _mall;
	MessageContentAreaLayer* _storedMessageLayer;
	ComposeNavigationController* _composeViewController;
	CertificateViewController* _certificateViewController;
	UIView* _composeViewContainerView;
	UIBarButtonItem* _transferButtonItem;
	LongPressableButtonItem* _deleteButtonItem;
	UIBarButtonItem* _replyButtonItem;
	UIBarButtonItem* _arrowsButtonItem;
	UIBarButtonItem* _markButtonItem;
	UIBarButtonItem* _presentedControllerDoneButtonItem;
	LongPressableButtonItem* _composeButtonItem;
	MFArrowControlsView* _arrowControlsView;
	int _lastChangeDirection;
	UIView* _suspensionPlaceholderView;
	UIView* _viewForTrashAnimation;
	NSSet* _trashedMessages;
	unsigned _deleteOrArchiveTrashedMessages;
	ABPersonViewController* _personViewController;
	ABUnknownPersonViewController* _unknownPersonViewController;
	MFModernAddressAtom* _atomPresentingPersonView;
	MFVIPSender* _currentVIP;
	NSMutableDictionary* _navigationControllersCache;
	SCD_Union_Me12 _controller;
	int _uidicState;
	int _displayStyle;
	unsigned _allowDelete : 1;
	unsigned _searching : 1;
	unsigned _showingAlternateMessageLayer : 1;
	unsigned _crossFadeNextLayer : 1;
	unsigned _blockingNetworkFetching : 1;
	unsigned _blockingInteractionEvents : 1;
	unsigned _isDeleting : 1;
	unsigned _isAboutToAnimateTrashedMessage : 1;
	unsigned _isTrashingMessage : 1;
	unsigned _shouldPopOnDeletion : 1;
	unsigned _dontMarkMessageAsRead : 1;
	unsigned _willBecomeVisible : 1;
	unsigned _shouldShowProgressOnVisible : 1;
	unsigned _needsMessageRedisplayOnAppear : 1;
	unsigned _isShowingMailboxPicker : 1;
	unsigned _isShowingArchiveButton : 1;
	unsigned _needsToSuspendView : 1;
	unsigned _preparedForTransferOfMessages : 1;
	unsigned _deleteButtonArchives : 1;
	unsigned _landscapeThreadNavigationEnabled : 1;
	unsigned _isShowingThreadNavigation : 1;
	unsigned _isInThread : 1;
	unsigned _isInCombinedInbox : 1;
	unsigned _viewDidWillAppear : 1;
	unsigned _contentAreaNeedsRefold : 1;
	UIKeyCommand* _replyKeyCommand;
	UIKeyCommand* _replyAllKeyCommand;
	UIKeyCommand* _forwardKeyCommand;
	UIKeyCommand* _markJunkKeyCommand;
	UIKeyCommand* _flagKeyCommand;
	UIKeyCommand* _markReadKeyCommand;
	UIKeyCommand* _nextMessageKeyCommand;
	UIKeyCommand* _previousMessageKeyCommand;
	char _dataDetectorsHadModification;
	unsigned _nextMessageLayerState;
	MFSecureMIMEPersonHeaderView* _existingSecureMIMEPersonHeaderView;
	char _isBeingPreviewed;
	unsigned _sourceType;
	UIBarButtonItem* _mailboxButtonItem;
	MessageCallToAction* _suggestedCallToAction;
	MessageSuggestionSession* _suggestionSession;
	MFMailMarkup* _markupExtension;

}

@property (nonatomic,retain) MessageMiniMall * mall;                                                   //@synthesize mall=_mall - In the implementation block
@property (assign,nonatomic) char allowDelete; 
@property (assign,nonatomic) char searching; 
@property (assign,nonatomic) char isBeingPreviewed;                                                    //@synthesize isBeingPreviewed=_isBeingPreviewed - In the implementation block
@property (getter=isDisplayingDraft,nonatomic,readonly) char displayingDraft; 
@property (getter=isInCombinedInbox,nonatomic,readonly) char inCombinedInbox; 
@property (assign,getter=isInThread,nonatomic) char inThread; 
@property (assign,nonatomic) unsigned sourceType;                                                      //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * mailboxButtonItem;                                    //@synthesize mailboxButtonItem=_mailboxButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * deleteButtonItem;                                     //@synthesize deleteButtonItem=_deleteButtonItem - In the implementation block
@property (nonatomic,readonly) NSUndoManager * undoManager; 
@property (nonatomic,retain) MailAccount * account;                                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ABPersonViewController * personViewController;                            //@synthesize personViewController=_personViewController - In the implementation block
@property (nonatomic,retain) ABUnknownPersonViewController * unknownPersonViewController;              //@synthesize unknownPersonViewController=_unknownPersonViewController - In the implementation block
@property (nonatomic,retain) MFModernAddressAtom * atomPresentingPersonView;                           //@synthesize atomPresentingPersonView=_atomPresentingPersonView - In the implementation block
@property (nonatomic,retain) MFVIPSender * currentVIP;                                                 //@synthesize currentVIP=_currentVIP - In the implementation block
@property (nonatomic,retain) CertificateViewController * certificateViewController;                    //@synthesize certificateViewController=_certificateViewController - In the implementation block
@property (nonatomic,retain) MessageCallToAction * suggestedCallToAction;                              //@synthesize suggestedCallToAction=_suggestedCallToAction - In the implementation block
@property (nonatomic,retain) MessageSuggestionSession * suggestionSession;                             //@synthesize suggestionSession=_suggestionSession - In the implementation block
@property (nonatomic,retain) MFMailMarkup * markupExtension;                                           //@synthesize markupExtension=_markupExtension - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
+(id)sharedController;
-(id)mailboxContentViewController;
-(void)setMessageViewingContext:(id)arg1 options:(unsigned)arg2 ;
-(void)suspendViewAfterDelay;
-(void)resumeView;
-(id)messageViewingContext;
-(MessageMiniMall *)mall;
-(id)messageContentAreaLayer;
-(void)_applicationWillUpdateDefaultImage:(id)arg1 ;
-(char)isInExpandedEnvironment;
-(void)setLandscapeThreadNavigationEnabled:(char)arg1 animated:(char)arg2 ;
-(void)purgeForMemoryReclamation;
-(void)deleteButtonLongPressed:(id)arg1 ;
-(void)transferButtonClicked:(id)arg1 ;
-(UIBarButtonItem *)deleteButtonItem;
-(void)transferMessages:(id)arg1 toMailbox:(id)arg2 ;
-(void)deleteShortcutInvoked:(id)arg1 ;
-(void)_updateViewingContextToMessage:(id)arg1 ;
-(void)setIsBeingPreviewed:(char)arg1 ;
-(void)setMall:(MessageMiniMall *)arg1 ;
-(void)setInThread:(char)arg1 ;
-(void)setAllowDelete:(char)arg1 ;
-(void)_markConversationContainingMessage:(id)arg1 shouldNotify:(char)arg2 ;
-(void)_markConversationContainingMessage:(id)arg1 shouldMute:(char)arg2 ;
-(void)previewNewIndicatorAfterSwipeAction:(unsigned)arg1 ;
-(void)miniMallMessageCountWillChange:(id)arg1 ;
-(void)miniMallMessageCountDidChange:(id)arg1 ;
-(void)miniMallMessagesAtIndexPathsChanged:(id)arg1 ;
-(void)miniMallStartFetch:(id)arg1 ;
-(void)miniMallFinishedFetch:(id)arg1 ;
-(void)miniMallCurrentMessageRemoved:(id)arg1 ;
-(void)miniMallDidLoadMessages:(id)arg1 ;
-(void)miniMallGrowingMailboxesChanged:(id)arg1 ;
-(void)miniMallDidFinishSearch:(id)arg1 ;
-(void)transferMailboxPickerController:(id)arg1 didSelectMailbox:(id)arg2 withMessages:(id)arg3 ;
-(void)transferMailboxPickerControllerDidFinish:(id)arg1 animated:(char)arg2 ;
-(void)transferMailboxPickerController:(id)arg1 animateMessageToThumbnailFrame:(CGRect)arg2 inView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)transferMailboxPickerController:(id)arg1 viewForMessage:(id)arg2 ;
-(id)mf_applicationContexts;
-(void)endedDraggingMessageView;
-(UIEdgeInsets)originalInsetsForMessageView;
-(void)showSelectedAttachment:(id)arg1 ;
-(void)showMenuForSelectedAttachment:(id)arg1 ;
-(char)canSaveAllAttachmentsInContext:(int)arg1 ;
-(id)localizedTitleForSaveAllAttachmentsAction;
-(void)saveAllAttachments;
-(/*^block*/id)_activityCompletionHandlerForAttachment:(id)arg1 ;
-(void)launchMarkupReplyWithAttachment:(id)arg1 ;
-(void)_accountsDidChange:(id)arg1 ;
-(void)clearSuggestionsBanner;
-(void)showCardForRecipientAtom:(id)arg1 ;
-(void)showCardForSenderAtom:(id)arg1 ;
-(void)clearSuggestionsBanner:(char)arg1 ;
-(void)confirmedAction:(id)arg1 sender:(id)arg2 ;
-(void)ignoredAction:(id)arg1 sender:(id)arg2 ;
-(void)displayMultipleCallsToAction:(id)arg1 sender:(id)arg2 ;
-(void)reloadSuggestionsBanner;
-(char)isInCombinedInbox;
-(void)displayMessage:(id)arg1 immediately:(char)arg2 ;
-(void)_handleResponseAction:(unsigned)arg1 forMessage:(id)arg2 options:(unsigned)arg3 ;
-(id)initWithDisplayStyle:(int)arg1 ;
-(void)updateTitleAndNavigationArrows;
-(void)_composeViewDidShow:(id)arg1 ;
-(void)_relayoutHeaderView;
-(void)messagesWereResurrectedNotification:(id)arg1 ;
-(void)_accessibilityButtonShapesWereEnabled:(id)arg1 ;
-(void)_clearController;
-(char)_hasLargeLayout;
-(void)updateToolbarButtonsAnimated:(char)arg1 ;
-(void)_redisplayMessageIfNecessary;
-(id)_previewActionsForSwipeActions:(id)arg1 excludingSwipeActions:(id)arg2 ;
-(id)_previewActionForSwipeAction:(unsigned)arg1 withMessage:(id)arg2 forSwipe:(char)arg3 ;
-(void)_toggleFlagForMessage:(id)arg1 ;
-(void)_toggleReadFlagForMessage:(id)arg1 ;
-(void)_markMessage:(id)arg1 asJunk:(char)arg2 popIfNecessary:(char)arg3 ;
-(ABPersonViewController *)personViewController;
-(ABUnknownPersonViewController *)unknownPersonViewController;
-(void)setAtomPresentingPersonView:(MFModernAddressAtom *)arg1 ;
-(void)setPersonViewController:(ABPersonViewController *)arg1 ;
-(void)setUnknownPersonViewController:(ABUnknownPersonViewController *)arg1 ;
-(void)_updateMessageDisplayUserActivity;
-(void)_meetingInformationInvalidNote:(id)arg1 ;
-(void)_suspendView;
-(void)updateMailboxInfo;
-(char)isInThread;
-(MFModernAddressAtom *)atomPresentingPersonView;
-(void)displayViewController:(id)arg1 fromAtom:(id)arg2 allowsEditing:(char)arg3 animated:(char)arg4 ;
-(id)topMessageViewController;
-(void)_redisplayCurrentAttachmentWithTransitionCoordinator:(id)arg1 ;
-(char)isDisplayingDraft;
-(void)_contentAnalysisDidTimeout;
-(void)messageContentAreaLayerDidDraw:(id)arg1 ;
-(void)dataDetectorsDidFinishURLification:(id)arg1 ;
-(void)_flushMessageLayerBuffer;
-(void)_commitTrashAnimation;
-(void)_messageDisplayDidFinish;
-(void)setSuggestionSession:(MessageSuggestionSession *)arg1 ;
-(void)_addBannersForMessage:(id)arg1 animated:(char)arg2 ;
-(void)_prepareMessageLayerBuffer;
-(void)_displayMessageWithViewingContext:(id)arg1 options:(unsigned)arg2 ;
-(void)_cleanUpPresentedPopover:(id)arg1 ;
-(id)presentedControllerDoneButtonItem;
-(void)setCurrentVIP:(MFVIPSender *)arg1 ;
-(void)_purgeMessageLayer;
-(void)showSelectedAttachment:(id)arg1 animated:(char)arg2 ;
-(void)showModalViewController:(id)arg1 fromView:(id)arg2 sourceRect:(CGRect)arg3 animated:(char)arg4 ;
-(id)_createDocumentInteractionControllerForAttachment:(id)arg1 withData:(id)arg2 ;
-(void)setSuggestedCallToAction:(MessageCallToAction *)arg1 ;
-(MessageSuggestionSession *)suggestionSession;
-(void)presentEventViewForAction:(id)arg1 sender:(id)arg2 ;
-(void)presentEventEditViewForAction:(id)arg1 sender:(id)arg2 ;
-(void)presentEventCancelViewForAction:(id)arg1 sender:(id)arg2 ;
-(void)displayEventSuggestion:(id)arg1 sender:(id)arg2 ;
-(void)displayContactSuggestion:(id)arg1 sender:(id)arg2 ;
-(MessageCallToAction *)suggestedCallToAction;
-(id)_newPersonViewControllerForPerson:(void*)arg1 emailIdentifier:(int)arg2 ;
-(void)_setupHeaderForContactCardViewController:(id)arg1 ;
-(void)_addVIPButtonToController:(id)arg1 ;
-(void)_showContactCardForAddressAtom:(id)arg1 sender:(char)arg2 ;
-(char)_shouldShowContactHeaderForCurrentMessageViewingContext;
-(void)_configureSecureMIMEPersonHeaderView:(id)arg1 withButtonFactory:(id)arg2 ;
-(void)_showCertificate:(id)arg1 ;
-(void)_trustDidChange;
-(MFVIPSender *)currentVIP;
-(void)_removeVIP:(id)arg1 ;
-(void)_addVIP:(id)arg1 ;
-(void)_certificateControllerDidFinish;
-(void)updateCertificateAction;
-(char)_certificateIsStoredInKeychain;
-(void)performCertificateActionRemove;
-(void)performCertificateActionTrustAndInstall;
-(void)performCertificateActionInstall;
-(void)_removeTrustException:(id)arg1 ;
-(void)refreshCertificateViewControllerStatus;
-(void)installCertificateWithTrustException:(char)arg1 ;
-(void)promptOrInstallCertificationWithBlock:(/*^block*/id)arg1 ;
-(void)_addTrustException:(id)arg1 ;
-(void)promptToReplaceCurrentCertificateWithBlock:(/*^block*/id)arg1 ;
-(void)_updateMailboxButtonWithTitle:(id)arg1 ;
-(void)_updateToolbarButtonsForTraitCollection:(id)arg1 animated:(char)arg2 ;
-(void)_updateToolbarButtonsForTraitCollection:(id)arg1 displayMode:(int)arg2 animated:(char)arg3 force:(char)arg4 ;
-(char)_traitCollectionIsLargeLayout:(id)arg1 ;
-(void)replyButtonClicked:(id)arg1 ;
-(void)markButtonClicked:(id)arg1 ;
-(id)_arrowControlsView;
-(id)_separatorWithWidth:(float)arg1 ;
-(void)_updateTitleAndNavigationArrowsForDisplayMode:(int)arg1 ;
-(char)allowDelete;
-(void)markMessageAsUnflagged:(id)arg1 ;
-(void)markMessageAsFlagged:(id)arg1 ;
-(void)markMessageAsUnread:(id)arg1 ;
-(void)_presentAlertController:(id)arg1 fromBarButtonItem:(id)arg2 ;
-(id)_selectedMessages;
-(void)deleteButtonAction:(id)arg1 showChoices:(char)arg2 ;
-(void)beginReallyDeletingVisibleMessage;
-(void)_promptForIncludingAttachmentsWithResponseAction:(unsigned)arg1 handler:(/*^block*/id)arg2 ;
-(void)_promptForLoadingRestOfMessageWithHandler:(/*^block*/id)arg1 ;
-(void)saveHTMLString:(id)arg1 ;
-(void)_popIfNecessaryAnimated:(char)arg1 ;
-(void)_beginIgnoringInteractionEventsForMessageRemovalAnimation;
-(void)_reallyDeleteVisibleMessage;
-(void)_prepareTrashAnimation;
-(void)_endIgnoringInteractionEventsForMessageRemovalAnimation;
-(void)_shrinkMessageToToolbarButton:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_snapshotOfCurrentMessageContentAreaLayer:(char)arg1 ;
-(void)_startTrashAnimationWithDuration:(double)arg1 ;
-(void)_trashAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_selectNextMessageWithDirection:(int)arg1 ;
-(void)replyShortcutInvoked:(id)arg1 ;
-(void)_markAsJunkKeyCommandInvoked:(id)arg1 ;
-(void)_flagMessageKeyCommandInvoked:(id)arg1 ;
-(void)_markReadKeyCommandInvoked:(id)arg1 ;
-(void)_navigateMessageKeyCommandInvoked:(id)arg1 ;
-(void)downloadAndSaveAllAttachments;
-(char)isAllowedToSaveAttachments;
-(void)_getNumberOfImages:(unsigned*)arg1 videos:(unsigned*)arg2 undownloaded:(unsigned*)arg3 ;
-(void)setContentAreaNeedsRefold;
-(void)_animateView:(id)arg1 toCenterPoint:(CGPoint)arg2 size:(CGSize)arg3 otherAnimations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(char)_isSharedController;
-(id)saPersonAttributesFromEmails:(id)arg1 addressBook:(void*)arg2 ;
-(void)exportDocument;
-(void)markupDocument;
-(void)launchMarkupReply;
-(void)arrowControlsView:(id)arg1 didTapButtonWithDirection:(int)arg2 ;
-(void)willBecomeTopViewController;
-(void)applicationSceneController:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(char)isSuggestionsLoggingEnabled;
-(void)splitViewControllerWillChangeToDisplayMode:(int)arg1 ;
-(void)transferCancelButtonClicked:(id)arg1 ;
-(void)_removeStringsFromArray:(id)arg1 thatCaseInsensitiveMatchStringsInArray:(id)arg2 ;
-(char)isBeingPreviewed;
-(UIBarButtonItem *)mailboxButtonItem;
-(MFMailMarkup *)markupExtension;
-(void)setMarkupExtension:(MFMailMarkup *)arg1 ;
-(void)deleteButtonClicked:(id)arg1 ;
-(void)personViewController:(id)arg1 willSetEditing:(char)arg2 animated:(char)arg3 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(char)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(char)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)icsPreviewControllerWantsDismissal:(id)arg1 ;
-(char)eventViewControllerShouldAlwaysShowNavBar:(id)arg1 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(id)composeView;
-(void)_suspend;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(char)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)_applicationSuspended:(id)arg1 ;
-(void)dismissMarkupViewController;
-(CGRect)markupAttachmentBoundsForAttachment:(id)arg1 ;
-(CGRect)markupAttachmentMaskForAttachment:(id)arg1 ;
-(id)attachmentIcon:(id)arg1 ;
-(void)handleMarkupError:(id)arg1 attachment:(id)arg2 ;
-(void)presentMarkupViewController:(id)arg1 ;
-(void)handleMarkupURL:(id)arg1 attachment:(id)arg2 ;
-(void)handleMarkupData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 attachment:(id)arg4 ;
-(id)markupReplacementAttachment;
-(void)_updatePersonCard;
-(char)usePadDisplayStyle;
-(void)messageViewingContextContentLoadWillBegin:(id)arg1 ;
-(void)messageViewingContextContentLoadCompleted:(id)arg1 ;
-(void)messageViewingContextFullMessageLoadFailed:(id)arg1 ;
-(void)messageViewingContext:(id)arg1 attachmentLoadCompleted:(id)arg2 withData:(id)arg3 ;
-(void)messageViewingContextMessageAnalysisCompleted:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)applicationWillSuspend;
-(id)nextResponder;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(NSUndoManager *)undoManager;
-(void)didReceiveMemoryWarning;
-(void)updateUserActivityState:(id)arg1 ;
-(void)applicationDidResume;
-(id)keyCommands;
-(void)loadView;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(char)canBecomeFirstResponder;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(int)arg2 transitionCoordinator:(id)arg3 ;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)accessibilityLargeTextDidChange;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)previewActionItems;
-(id)leadingPreviewAction;
-(id)trailingPreviewAction;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(unsigned)sourceType;
-(void)setSourceType:(unsigned)arg1 ;
-(id)passthroughViews;
-(id)_hostingViewController;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(CGRect)documentInteractionControllerRectForPreview:(id)arg1 ;
-(id)documentInteractionControllerViewForPreview:(id)arg1 ;
-(void)documentInteractionControllerWillBeginPreview:(id)arg1 ;
-(void)documentInteractionControllerDidEndPreview:(id)arg1 ;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1 ;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
-(id)excludedActivityTypesForDocumentInteractionController:(id)arg1 ;
-(id)documentInteractionControllerTransitionImageForPreview:(id)arg1 contentRect:(CGRect*)arg2 ;
-(void)previewController:(id)arg1 willMarkUpAtURL:(id)arg2 ;
-(id)documentInteractionControllerURLOfDirectoryForUnzippedDocument:(id)arg1 ;
-(char)shouldBlockRemoteImagesInPreviewForDocumentInteractionController:(id)arg1 ;
-(id)additionalActivitiesForDocumentInteractionController:(id)arg1 ;
-(void)setSearching:(char)arg1 ;
-(char)searching;
-(void)_fontSizeDidChange:(id)arg1 ;
-(CertificateViewController *)certificateViewController;
-(void)setCertificateViewController:(CertificateViewController *)arg1 ;
-(char)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(void)dismissPresentedViewController:(id)arg1 ;
-(void)reconstruct;
-(id)currentMessage;
-(void)_preferredContentSizeDidChange:(id)arg1 ;
-(void)unreadCountChanged:(id)arg1 ;
-(void)markMessageAsRead:(id)arg1 ;
-(void)setAccount:(MailAccount *)arg1 ;
-(MailAccount *)account;
@end

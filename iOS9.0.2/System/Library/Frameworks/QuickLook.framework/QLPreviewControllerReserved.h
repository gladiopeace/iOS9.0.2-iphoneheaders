/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLPreviewItem, QLPreviewContentControllerProtocol;
@class NSString, QLPreviewItemsSource, UIViewController, _UIAsyncInvocation, UINavigationController, UIBarButtonItem, QLDismissGestureRecognizer, NSArray, QLActivityItemProvider, UIView, QLArchiveViewer, UIDocumentInteractionController, NSMutableDictionary, NSURL;

@interface QLPreviewControllerReserved : NSObject {

	id<QLPreviewItem> previewItem;
	id delegate;
	id strongDelegate;
	char blockRemoteImages;
	char useCustomActionButton;
	char showActionAsDefaultButton;
	NSString* loadingTextForMissingFiles;
	unsigned crashCount;
	int mode;
	QLPreviewItemsSource* itemsSource;
	UIViewController*<QLPreviewContentControllerProtocol> previewContentController;
	_UIAsyncInvocation* cancelViewServiceRequest;
	char isDelayingPresentation;
	/*^block*/id readyBlock;
	/*^block*/id restorePreviousStateBlock;
	UIViewController* previousViewControllerForNavigationItem;
	UINavigationController* navigationController;
	int overlayState;
	UIBarButtonItem* archiveItem;
	UIBarButtonItem* listItem;
	UIBarButtonItem* titleItem;
	UIBarButtonItem* defaultActionItem;
	UIBarButtonItem* customActionItem;
	QLDismissGestureRecognizer* swipeToDismissGestureRecognizer;
	int overlayStateBeforeDismissal;
	NSArray* originalLeftBarButtonItems;
	NSArray* originalRightBarButtonItems;
	NSArray* additionalLeftBarButtonItems;
	NSArray* additionalRightBarButtonItems;
	unsigned navigationButtonsMask;
	char scrubbing;
	unsigned orbMode;
	QLActivityItemProvider* itemProvider;
	UIBarButtonItem* playButton;
	UIBarButtonItem* pauseButton;
	char hasToolBar;
	unsigned toolbarButtonsMask;
	char internalViewsLoaded;
	UIView* mainView;
	unsigned statusBarWasHidden : 1;
	unsigned toolbarWasHidden : 1;
	unsigned isInUIDICPopover : 1;
	QLArchiveViewer* archiveViewer;
	UIDocumentInteractionController* interactionController;
	NSMutableDictionary* avStateForPreviewItems;
	char sourceIsManaged;
	NSURL* lastPreviewedRealItemURL;
	NSURL* lastPreviewedCurrentItemURL;

}
-(id)init;
@end


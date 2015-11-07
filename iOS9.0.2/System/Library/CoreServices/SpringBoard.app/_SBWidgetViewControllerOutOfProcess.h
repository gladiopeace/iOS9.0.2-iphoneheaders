/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWidgetViewController.h>

@protocol OS_dispatch_queue, NSCopying, OS_dispatch_semaphore;
@class NSObject, _SBWidgetRemoteViewController, UIView, NSTimer, NSDate, NSMapTable, _SBBrokenWidgetView;

@interface _SBWidgetViewControllerOutOfProcess : SBWidgetViewController {

	char _snapshottingEnabled;
	char _requestingRemoteViewController;
	char _disconnectingRemoteViewController;
	char _encodingLayerTree;
	char _didRequestViewInset;
	char _didUpdate;
	char _blacklisted;
	NSObject*<OS_dispatch_queue> _proxyConnectionQueue;
	NSObject*<OS_dispatch_queue> _proxyDisconnectionQueue;
	NSObject*<OS_dispatch_queue> _proxyRequestQueue;
	NSObject*<OS_dispatch_queue> _diskWriteQueue;
	_SBWidgetRemoteViewController* _remoteViewController;
	id<NSCopying> _extensionRequest;
	UIView* _contentProvidingView;
	UIView* _snapshotView;
	NSTimer* _disconnectionTimer;
	NSObject*<OS_dispatch_semaphore> _viewWillAppearSemaphore;
	NSObject*<OS_dispatch_semaphore> _viewWillDisappearSemaphore;
	/*^block*/id _remoteViewControllerDisconnectionHandler;
	NSDate* _lastUnanticipatedDisconnectionDate;
	NSMapTable* _openAppearanceTransactions;
	_SBBrokenWidgetView* _brokenView;

}

@property (getter=_proxyConnectionQueue,nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> proxyConnectionQueue;                                                                      //@synthesize proxyConnectionQueue=_proxyConnectionQueue - In the implementation block
@property (getter=_proxyDisconnectionQueue,nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> proxyDisconnectionQueue;                                                                //@synthesize proxyDisconnectionQueue=_proxyDisconnectionQueue - In the implementation block
@property (getter=_proxyRequestQueue,nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> proxyRequestQueue;                                                                            //@synthesize proxyRequestQueue=_proxyRequestQueue - In the implementation block
@property (getter=_diskWriteQueue,nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> diskWriteQueue;                                                                                  //@synthesize diskWriteQueue=_diskWriteQueue - In the implementation block
@property (setter=_setRemoteViewController:,getter=_remoteViewController,nonatomic,retain) _SBWidgetRemoteViewController * remoteViewController;                                           //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (setter=_setExtensionRequest:,getter=_extensionRequest,nonatomic,copy) id<NSCopying> extensionRequest;                                                                           //@synthesize extensionRequest=_extensionRequest - In the implementation block
@property (setter=_setContentProvidingView:,getter=_contentProvidingView,nonatomic,retain) UIView * contentProvidingView;                                                                  //@synthesize contentProvidingView=_contentProvidingView - In the implementation block
@property (setter=_setSnapshotView:,getter=_snapshotView,nonatomic,retain) UIView * snapshotView;                                                                                          //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,setter=_setSnapshottingEnabled:,getter=_isSnapshottingEnabled,nonatomic) char snapshottingEnabled;                                                                       //@synthesize snapshottingEnabled=_snapshottingEnabled - In the implementation block
@property (assign,setter=_setRequestingRemoteViewController:,getter=_isRequestingRemoteViewController,nonatomic) char requestingRemoteViewController;                                      //@synthesize requestingRemoteViewController=_requestingRemoteViewController - In the implementation block
@property (assign,setter=_setDisconnectingRemoteViewController:,getter=_isDisconnectingRemoteViewController,nonatomic) char disconnectingRemoteViewController;                             //@synthesize disconnectingRemoteViewController=_disconnectingRemoteViewController - In the implementation block
@property (assign,setter=_setEncodingLayerTree:,getter=_isEncodingLayerTree,nonatomic) char encodingLayerTree;                                                                             //@synthesize encodingLayerTree=_encodingLayerTree - In the implementation block
@property (assign,setter=_setDidRequestViewInset:,getter=_didRequestViewInset,nonatomic) char didRequestViewInset;                                                                         //@synthesize didRequestViewInset=_didRequestViewInset - In the implementation block
@property (assign,setter=_setDisconnectionTimer:,getter=_disconnectionTimer,nonatomic) NSTimer * disconnectionTimer;                                                                       //@synthesize disconnectionTimer=_disconnectionTimer - In the implementation block
@property (setter=_setViewWillAppearSemaphore:,getter=_viewWillAppearSemaphore,nonatomic,retain) NSObject*<OS_dispatch_semaphore> viewWillAppearSemaphore;                                 //@synthesize viewWillAppearSemaphore=_viewWillAppearSemaphore - In the implementation block
@property (setter=_setViewWillDisappearSemaphore:,getter=_viewWillDisappearSemaphore,nonatomic,retain) NSObject*<OS_dispatch_semaphore> viewWillDisappearSemaphore;                        //@synthesize viewWillDisappearSemaphore=_viewWillDisappearSemaphore - In the implementation block
@property (setter=_setRemoteViewControllerDisconnectionHandler:,getter=_remoteViewControllerDisconnectionHandler,nonatomic,copy) id remoteViewControllerDisconnectionHandler;              //@synthesize remoteViewControllerDisconnectionHandler=_remoteViewControllerDisconnectionHandler - In the implementation block
@property (setter=_setLastUnanticipatedDisconnectionDate:,getter=_lastUnanticipatedDisconnectionDate,nonatomic,retain) NSDate * lastUnanticipatedDisconnectionDate;                        //@synthesize lastUnanticipatedDisconnectionDate=_lastUnanticipatedDisconnectionDate - In the implementation block
@property (getter=_openAppearanceTransactions,nonatomic,retain,readonly) NSMapTable * openAppearanceTransactions;                                                                          //@synthesize openAppearanceTransactions=_openAppearanceTransactions - In the implementation block
@property (assign,setter=_setDidUpdate:,getter=_didUpdate,nonatomic) char didUpdate;                                                                                                       //@synthesize didUpdate=_didUpdate - In the implementation block
@property (assign,setter=_setImplementsPerformUpdate:,nonatomic) char implementsPerformUpdate; 
@property (assign,setter=_setBlacklisted:,getter=_isBlacklisted,nonatomic) char blacklisted;                                                                                               //@synthesize blacklisted=_blacklisted - In the implementation block
@property (setter=_setBrokenView:,getter=_brokenView,nonatomic,retain) _SBBrokenWidgetView * brokenView;                                                                                   //@synthesize brokenView=_brokenView - In the implementation block
+(void)initialize;
-(CGSize)_maxSize;
-(void)invalidateCachedSnapshotWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disconnectRemoteViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)captureSnapshotWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestInsertionOfRemoteViewWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)connectRemoteViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_extensionRequest;
-(id)_contentProvidingView;
-(id)initWithWidgetIdentifier:(id)arg1 bundlePath:(id)arg2 ;
-(char)_effectiveHasContent;
-(void)_moveSnapshotsToCache;
-(void)_removeAllSnapshots;
-(void)insertSnapshotWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_loadSnapshotViewFromDiskIfNecessary:(/*^block*/id)arg1 ;
-(void)_setViewWillAppearSemaphore:(id)arg1 ;
-(void)_setViewWillDisappearSemaphore:(id)arg1 ;
-(void)_setSemaphoreInstanceVariable:(id*)arg1 toSemaphore:(id)arg2 ;
-(id)_openAppearanceTransactions;
-(void)_enqueueRemoteServiceRequest:(/*^block*/id)arg1 withDescription:(id)arg2 ;
-(char)_isRemoteViewVisible;
-(void)_beginRemoteViewControllerAppearanceTransitionIfNecessary:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_insertAppropriateViewWithContent;
-(void)_endRemoteViewControllerAppearanceTransitionIfNecessary;
-(void)_invalidateDisconnectionTimer;
-(void)_endRequestState:(int)arg1 ;
-(char)_canRequestRemoteViewController:(id*)arg1 ;
-(id)_proxyRequestQueue;
-(void)_requestRemoteViewController:(/*^block*/id)arg1 ;
-(void)_disconnectRemoteViewControllerAndCoalesce:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_viewWillDisappearSemaphore;
-(void)_writeSnapshotData:(id)arg1 toURLForLayoutMode:(int)arg2 ;
-(void)_setSnapshotView:(id)arg1 forLayoutMode:(int)arg2 ;
-(void)_packageViewWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_captureLayerTree:(/*^block*/id)arg1 ;
-(id)_snapshotIdentifierForLayoutMode:(int)arg1 ;
-(void)_invalidateSnapshotWithForce:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_canInsertRemoteView;
-(void)_setBrokenView:(id)arg1 ;
-(void)_insertRemoteViewAfterViewWillAppearWithCompletion:(/*^block*/id)arg1 ;
-(id)_viewWillAppearSemaphore;
-(void)_insertContentProvidingSubview:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_synchronizeCachedState;
-(char)_didUpdate;
-(void)_setDidUpdate:(char)arg1 ;
-(void)_setImplementsPerformUpdate:(char)arg1 ;
-(/*^block*/id)_request:(/*^block*/id)arg1 withDescription:(id)arg2 forQueue:(id)arg3 trampolinedToMainQueue:(char)arg4 ;
-(void)_enqueueRequest:(/*^block*/id)arg1 inQueue:(id)arg2 trampolinedToMainQueue:(char)arg3 withDescription:(id)arg4 ;
-(id)_diskWriteQueue;
-(id)_widgetSnapshotURLForLayoutMode:(int)arg1 ensuringDirectoryExists:(char)arg2 ;
-(void)_removeAllSnapshotsAndCache:(char)arg1 ;
-(char)_isEncodingLayerTree;
-(void)_setEncodingLayerTree:(char)arg1 ;
-(char)_isSnapshottingEnabled;
-(void)_packageViewWithBlock:(/*^block*/id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_handleRequestedViewHeight:(float)arg1 usingAutolayout:(char)arg2 requestIdentifier:(id)arg3 ;
-(void)_removeSnapshotAtURL:(id)arg1 ;
-(void)_packageViewFromURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_setContentProvidingView:(id)arg1 ;
-(char)_isDisconnectingRemoteViewController;
-(float)_updatePreferredContentSizeWithHeight:(float)arg1 ;
-(char)_isBlacklisted;
-(void)_setRequestingRemoteViewController:(char)arg1 ;
-(id)_proxyDisconnectionQueue;
-(UIEdgeInsets)_marginInsets;
-(void)_setExtensionRequest:(id)arg1 ;
-(void)_finishDisconnectingRemoteViewControllerWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_proxyConnectionQueue;
-(void)_setBlacklisted:(char)arg1 ;
-(id)_brokenView;
-(void)handleReconnectionRequest:(id)arg1 ;
-(void)_setLastUnanticipatedDisconnectionDate:(id)arg1 ;
-(char)_attemptReconnectionAfterUnanticipatedDisconnection;
-(void)_setDisconnectingRemoteViewController:(char)arg1 ;
-(char)_canDisconnectRemoteViewController:(id*)arg1 ;
-(void)_setRemoteViewControllerDisconnectionHandler:(/*^block*/id)arg1 ;
-(void)_disconnectionTimerDidFire:(id)arg1 ;
-(void)_disconnectRemoteViewController:(/*^block*/id)arg1 ;
-(/*^block*/id)_remoteViewControllerDisconnectionHandler;
-(id)_cachedStateURLEnsuringDirectoryExists:(char)arg1 ;
-(id)_valueForCachedStateKey:(id)arg1 ;
-(void)_disconnectRemoteViewControllerImmediatelyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)validateSnapshotViewForActiveLayoutMode;
-(void)setHasContent:(char)arg1 ;
-(void)_setupRequestQueue;
-(void)widget:(id)arg1 didTerminateWithError:(id)arg2 ;
-(void)_setSnapshottingEnabled:(char)arg1 ;
-(char)_isRequestingRemoteViewController;
-(char)_didRequestViewInset;
-(void)_setDidRequestViewInset:(char)arg1 ;
-(id)_disconnectionTimer;
-(void)_setDisconnectionTimer:(id)arg1 ;
-(id)_lastUnanticipatedDisconnectionDate;
-(void)_setRemoteViewController:(id)arg1 ;
-(void)_setSnapshotView:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)_snapshotView;
-(float)_contentWidth;
-(id)_remoteViewController;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setRequestState:(int)arg1 ;
-(id)auditToken;
-(id)_cancelTouches;
@end


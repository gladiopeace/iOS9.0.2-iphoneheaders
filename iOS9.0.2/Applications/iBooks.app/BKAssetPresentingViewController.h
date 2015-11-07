/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIViewController.h>
#import <iBooks/AEAssetViewControllerDelegate.h>
#import <libobjc.A.dylib/NSFilePresenter.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <iBooks/BKAssetPresenting.h>

@protocol BKBookCoverAnimating, AEAssetViewController, AEHelper, IMPinchToCloseDelegate;
@class NSURL, NSOperationQueue, UIViewController, NSDictionary, NSArray, BKTransitioningViewController, NSString, NSFileCoordinator, UIPinchGestureRecognizer, UIPercentDrivenInteractiveTransition, BKAssetLookup, BKBookInfo, BKAssetPresentingViewControllerHoldAnimationAssertion;

@interface BKAssetPresentingViewController : UIViewController <AEAssetViewControllerDelegate, NSFilePresenter, UIGestureRecognizerDelegate, BKAssetPresenting> {

	char _autoDownload;
	char _autoOpen;
	char _isResigningActive;
	char _isBeingRemovedFromParentViewController;
	char _willTerminate;
	UIViewController*<BKBookCoverAnimating> _placeholderViewController;
	NSDictionary* _openOptions;
	NSArray* _previewActionItems;
	/*^block*/id _downloadProgressBlock;
	UIViewController*<AEAssetViewController> _assetViewController;
	BKTransitioningViewController* _transitioningViewController;
	id<AEHelper> _assetHelper;
	NSURL* _assetURL;
	NSString* _bookDatabaseKey;
	NSOperationQueue* _presentedItemQueue;
	NSURL* _urlForPresentingBook;
	NSFileCoordinator* _bookCoordinator;
	UIPinchGestureRecognizer* _pinchToCloseGR;
	UIPercentDrivenInteractiveTransition* _percentDrivenTransition;
	id<IMPinchToCloseDelegate> _pinchToCloseDelegate;
	BKAssetLookup* _assetLookup;
	int _assetState;
	unsigned _stateFlags;
	BKBookInfo* _observedBookDownloadProgress;
	/*^block*/id _errorCloseBlock;
	BKAssetPresentingViewControllerHoldAnimationAssertion* _holdAnimationAssertion;
	double _autoOpenDelay;

}

@property (nonatomic,retain) UIViewController*<BKBookCoverAnimating> placeholderViewController;                                  //@synthesize placeholderViewController=_placeholderViewController - In the implementation block
@property (assign,nonatomic) char autoDownload;                                                                                  //@synthesize autoDownload=_autoDownload - In the implementation block
@property (assign,nonatomic) char autoOpen;                                                                                      //@synthesize autoOpen=_autoOpen - In the implementation block
@property (nonatomic,copy) NSDictionary * openOptions;                                                                           //@synthesize openOptions=_openOptions - In the implementation block
@property (nonatomic,copy) NSArray * previewActionItems;                                                                         //@synthesize previewActionItems=_previewActionItems - In the implementation block
@property (assign,nonatomic) double autoOpenDelay;                                                                               //@synthesize autoOpenDelay=_autoOpenDelay - In the implementation block
@property (nonatomic,copy) id downloadProgressBlock;                                                                             //@synthesize downloadProgressBlock=_downloadProgressBlock - In the implementation block
@property (nonatomic,retain) UIViewController*<AEAssetViewController> assetViewController;                                       //@synthesize assetViewController=_assetViewController - In the implementation block
@property (nonatomic,retain) BKTransitioningViewController * transitioningViewController;                                        //@synthesize transitioningViewController=_transitioningViewController - In the implementation block
@property (nonatomic,retain) id<AEHelper> assetHelper;                                                                           //@synthesize assetHelper=_assetHelper - In the implementation block
@property (nonatomic,retain) NSURL * assetURL;                                                                                   //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,copy) NSString * bookDatabaseKey;                                                                           //@synthesize bookDatabaseKey=_bookDatabaseKey - In the implementation block
@property (assign,nonatomic) char isResigningActive;                                                                             //@synthesize isResigningActive=_isResigningActive - In the implementation block
@property (assign,nonatomic) char isBeingRemovedFromParentViewController;                                                        //@synthesize isBeingRemovedFromParentViewController=_isBeingRemovedFromParentViewController - In the implementation block
@property (nonatomic,retain) NSOperationQueue * presentedItemQueue;                                                              //@synthesize presentedItemQueue=_presentedItemQueue - In the implementation block
@property (nonatomic,retain) NSURL * urlForPresentingBook;                                                                       //@synthesize urlForPresentingBook=_urlForPresentingBook - In the implementation block
@property (nonatomic,retain) NSFileCoordinator * bookCoordinator;                                                                //@synthesize bookCoordinator=_bookCoordinator - In the implementation block
@property (nonatomic,retain) UIPinchGestureRecognizer * pinchToCloseGR;                                                          //@synthesize pinchToCloseGR=_pinchToCloseGR - In the implementation block
@property (nonatomic,retain) UIPercentDrivenInteractiveTransition * percentDrivenTransition;                                     //@synthesize percentDrivenTransition=_percentDrivenTransition - In the implementation block
@property (nonatomic,retain) id<IMPinchToCloseDelegate> pinchToCloseDelegate;                                                    //@synthesize pinchToCloseDelegate=_pinchToCloseDelegate - In the implementation block
@property (nonatomic,retain) BKAssetLookup * assetLookup;                                                                        //@synthesize assetLookup=_assetLookup - In the implementation block
@property (assign,nonatomic) int assetState;                                                                                     //@synthesize assetState=_assetState - In the implementation block
@property (assign,nonatomic) unsigned stateFlags;                                                                                //@synthesize stateFlags=_stateFlags - In the implementation block
@property (assign,nonatomic) char willTerminate;                                                                                 //@synthesize willTerminate=_willTerminate - In the implementation block
@property (nonatomic,retain) BKBookInfo * observedBookDownloadProgress;                                                          //@synthesize observedBookDownloadProgress=_observedBookDownloadProgress - In the implementation block
@property (nonatomic,copy) id errorCloseBlock;                                                                                   //@synthesize errorCloseBlock=_errorCloseBlock - In the implementation block
@property (assign,nonatomic,__weak) BKAssetPresentingViewControllerHoldAnimationAssertion * holdAnimationAssertion;              //@synthesize holdAnimationAssertion=_holdAnimationAssertion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (nonatomic,readonly) NSURL * assetPresenterAssetURL; 
@property (nonatomic,readonly) UIViewController*<AEAssetViewController> assetPresenterAssetViewController; 
@property (nonatomic,readonly) char assetPresenterKeepOpenWithoutBundle; 
+(id)animatorForAsset:(id)arg1 opening:(char)arg2 largeCover:(char)arg3 ;
+(id)holdAnimationAssertion;
+(id)lastKnownSuccessfullyOpenBookId;
+(id)futureViewControllerWithAssetURL:(id)arg1 bookDatabaseKey:(id)arg2 options:(id)arg3 ;
+(void)initialize;
-(NSURL *)assetPresenterAssetURL;
-(void)setAssetViewController:(UIViewController*<AEAssetViewController>)arg1 ;
-(void)setAssetHelper:(id<AEHelper>)arg1 ;
-(UIViewController*<AEAssetViewController>)assetViewController;
-(void)_commonInitWithURL:(id)arg1 bookDatabaseKey:(id)arg2 ;
-(void)setPlaceholderViewController:(UIViewController*<BKBookCoverAnimating>)arg1 ;
-(void)setHoldAnimationAssertion:(BKAssetPresentingViewControllerHoldAnimationAssertion *)arg1 ;
-(id)_book;
-(void)_observeDownloadProgressForBook:(id)arg1 ;
-(void)setBookDatabaseKey:(NSString *)arg1 ;
-(void)setTransitioningViewController:(BKTransitioningViewController *)arg1 ;
-(BKTransitioningViewController *)transitioningViewController;
-(UIViewController*<BKBookCoverAnimating>)placeholderViewController;
-(void)setBookCoordinator:(NSFileCoordinator *)arg1 ;
-(void)_finalizeAssetVCState;
-(char)willTerminate;
-(void)_updateLastOpenBookWithURL:(id)arg1 ;
-(void)setAssetState:(int)arg1 ;
-(void)_clearCacheForBook;
-(char)autoOpen;
-(unsigned)stateFlags;
-(void)setStateFlags:(unsigned)arg1 ;
-(BKAssetLookup *)assetLookup;
-(void)_loadAssetVC;
-(void)im_dismissAnimated:(char)arg1 ;
-(void)handlePinchToCloseGR:(id)arg1 ;
-(void)setPinchToCloseGR:(UIPinchGestureRecognizer *)arg1 ;
-(UIPinchGestureRecognizer *)pinchToCloseGR;
-(NSString *)bookDatabaseKey;
-(id)_bookWithWithDatabaseKey:(id)arg1 moc:(id)arg2 ;
-(id<AEHelper>)assetHelper;
-(NSDictionary *)openOptions;
-(UIPercentDrivenInteractiveTransition *)percentDrivenTransition;
-(void)_startBookSuccessfullyOpenedTimer;
-(void)_willOpenBookAnimated:(char)arg1 ;
-(void)_didOpenBookAnimated:(char)arg1 ;
-(id)errorCloseBlock;
-(void)setErrorCloseBlock:(id)arg1 ;
-(BKAssetPresentingViewControllerHoldAnimationAssertion *)holdAnimationAssertion;
-(void)setAssetLookup:(BKAssetLookup *)arg1 ;
-(char)autoDownload;
-(double)autoOpenDelay;
-(void)setIsBeingRemovedFromParentViewController:(char)arg1 ;
-(char)isBeingRemovedFromParentViewController;
-(void)setIsResigningActive:(char)arg1 ;
-(NSURL *)urlForPresentingBook;
-(void)setWillTerminate:(char)arg1 ;
-(void)_refreshReadingState;
-(char)assetViewController:(id)arg1 requestClose:(char)arg2 withErrorBlock:(/*^block*/id)arg3 ;
-(void)_confirmBookSuccessfullyOpened;
-(char)isResigningActive;
-(id)initWithAssetURL:(id)arg1 bookDatabaseKey:(id)arg2 assetViewController:(id)arg3 helper:(id)arg4 ;
-(void)setOpenOptions:(NSDictionary *)arg1 ;
-(NSOperationQueue *)presentedItemQueue;
-(void)setPresentedItemQueue:(NSOperationQueue *)arg1 ;
-(void)setPercentDrivenTransition:(UIPercentDrivenInteractiveTransition *)arg1 ;
-(BKBookInfo *)observedBookDownloadProgress;
-(void)assetViewController:(id)arg1 willOpen:(char)arg2 ;
-(void)assetViewController:(id)arg1 willClose:(char)arg2 ;
-(char)assetViewController:(id)arg1 requestOpenURL:(id)arg2 ;
-(char)assetViewController:(id)arg1 requestClose:(char)arg2 ;
-(char)assetViewController:(id)arg1 requestJumpToStore:(char)arg2 ;
-(char)assetViewControllerRequestToBuy:(id)arg1 ;
-(void)assetViewController:(id)arg1 handleFamilyChangeError:(id)arg2 ;
-(void)assetViewControllerSignificantReadingLocationChange:(id)arg1 ;
-(void)assetViewController:(id)arg1 fadeStatusBar:(char)arg2 ;
-(void)assetPresenterChangeToLocation:(id)arg1 ;
-(void)assetPresenterDismissAnimated:(char)arg1 ;
-(void)transitionContextWillCompleteTransitionInContainerView:(id)arg1 ;
-(UIViewController*<AEAssetViewController>)assetPresenterAssetViewController;
-(char)assetPresenterKeepOpenWithoutBundle;
-(id)initWithAssetURL:(id)arg1 bookDatabaseKey:(id)arg2 placeholderViewController:(id)arg3 holdAnimationAssertion:(id)arg4 ;
-(void)setAutoOpen:(char)arg1 ;
-(void)setPreviewActionItems:(NSArray *)arg1 ;
-(void)setAutoOpenDelay:(double)arg1 ;
-(void)setUrlForPresentingBook:(NSURL *)arg1 ;
-(NSFileCoordinator *)bookCoordinator;
-(id<IMPinchToCloseDelegate>)pinchToCloseDelegate;
-(void)setPinchToCloseDelegate:(id<IMPinchToCloseDelegate>)arg1 ;
-(void)setObservedBookDownloadProgress:(BKBookInfo *)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(NSURL *)assetURL;
-(void)dealloc;
-(char)_isTransitioning;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)loadView;
-(void)_cancelInteractiveTransition;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)removeFromParentViewController;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(NSArray *)previewActionItems;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id)downloadProgressBlock;
-(void)setDownloadProgressBlock:(id)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)setAutoDownload:(char)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)setAssetURL:(NSURL *)arg1 ;
-(void)_applicationWillTerminateNotification:(id)arg1 ;
-(int)assetState;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class MainViewController, NSOperationQueue;

@interface EnqueueableManagedNavigationController : UINavigationController {

	MainViewController* _sourceViewController;
	NSOperationQueue* _showViewControllersWhenReadyQueue;

}

@property (assign,nonatomic) MainViewController * sourceViewController;                         //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (nonatomic,retain) NSOperationQueue * showViewControllersWhenReadyQueue;              //@synthesize showViewControllersWhenReadyQueue=_showViewControllersWhenReadyQueue - In the implementation block
-(void)showViewController:(id)arg1 sender:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(Class)showViewControllerOperationClass;
-(void)sourceViewController:(id)arg1 notifiesReadinessForPresentation:(char)arg2 ;
-(void)enqueueStackResetOperation;
-(void)setShowViewControllersWhenReadyQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)showViewControllersWhenReadyQueue;
-(id)_popoverPresentationOperationInQueue;
-(char)_shouldDoExternalPresentationOfManagedNavigationController;
-(void)_addDoneButtonIfNeededToViewController:(id)arg1 ;
-(void)enqueueStackResetOperationDismissingPresentations:(char)arg1 ;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(void)setSourceViewController:(MainViewController *)arg1 ;
-(void)cancelOutstandingOperations;
-(void)dealloc;
-(id)init;
-(MainViewController *)sourceViewController;
-(void)_doneButtonTapped;
@end


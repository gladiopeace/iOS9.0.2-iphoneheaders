/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SKAccountPageViewControllerDelegate, SKUIServiceAccountPageViewController;
@class NSURL, _UIAsyncInvocation, SKRemoteAccountPageViewController, SKInvocationQueueProxy;

@interface SKAccountPageViewController : UIViewController {

	NSURL* _accountURL;
	_UIAsyncInvocation* _cancelRequest;
	id<SKAccountPageViewControllerDelegate> _delegate;
	/*^block*/id _prepareBlock;
	SKRemoteAccountPageViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceAccountPageViewController> _serviceProxy;

}

@property (assign,nonatomic) id<SKAccountPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_requestRemoteViewController;
-(void)_didPrepareWithResult:(char)arg1 error:(id)arg2 ;
-(id)initWithAccountURL:(id)arg1 ;
-(void)setDelegate:(id<SKAccountPageViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SKAccountPageViewControllerDelegate>)delegate;
-(void)loadView;
-(void)_dismissViewController;
-(void)viewDidAppear:(char)arg1 ;
-(void)_addRemoteView;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
@end


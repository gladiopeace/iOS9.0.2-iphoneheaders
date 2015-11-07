/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol NSCopying;
@class UIViewController, NSExtension, _UIWaitingForRemoteViewContainerViewController;

@interface _UIResilientRemoteViewContainerViewController : UIViewController {

	UIViewController* _remoteViewController;
	char _delayingDisplayOfRemoteView;
	NSExtension* _extension;
	id<NSCopying> _extensionRequestIdentifier;
	UIViewController* _containedViewController;
	_UIWaitingForRemoteViewContainerViewController* _waitingController;
	UIViewController* _errorViewController;

}

@property (nonatomic,readonly) id remoteViewController;                                                       //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                         //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying> extensionRequestIdentifier;                                          //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (nonatomic,retain) UIViewController * containedViewController;                                      //@synthesize containedViewController=_containedViewController - In the implementation block
@property (nonatomic,retain) _UIWaitingForRemoteViewContainerViewController * waitingController;              //@synthesize waitingController=_waitingController - In the implementation block
@property (nonatomic,retain) UIViewController * errorViewController;                                          //@synthesize errorViewController=_errorViewController - In the implementation block
@property (assign,nonatomic) char delayingDisplayOfRemoteView;                                                //@synthesize delayingDisplayOfRemoteView=_delayingDisplayOfRemoteView - In the implementation block
+(id)instantiateWithExtension:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)remoteViewController;
-(void)viewDidAppear:(char)arg1 ;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)extensionRequestIdentifier;
-(void)delayDisplayOfRemoteController;
-(void)endDelayingDisplayOfRemoteController;
-(id)initWithExtension:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setWaitingController:(_UIWaitingForRemoteViewContainerViewController *)arg1 ;
-(_UIWaitingForRemoteViewContainerViewController *)waitingController;
-(void)setContainedViewController:(UIViewController *)arg1 ;
-(void)_displayRemoteViewController;
-(void)_displayError:(id)arg1 ;
-(UIViewController *)errorViewController;
-(void)setErrorViewController:(UIViewController *)arg1 ;
-(UIViewController *)containedViewController;
-(char)delayingDisplayOfRemoteView;
-(void)setDelayingDisplayOfRemoteView:(char)arg1 ;
@end


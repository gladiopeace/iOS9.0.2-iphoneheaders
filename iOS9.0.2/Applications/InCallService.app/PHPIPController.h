/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <InCallService/PHPIPWrapperViewControllerDelegateProtocol.h>
#import <InCallService/PGPictureInPictureProxyDelegate.h>

@class UIViewController, PHPIPWrapperViewController, PGPictureInPictureProxy, NSString;

@interface PHPIPController : NSObject <PHPIPWrapperViewControllerDelegateProtocol, PGPictureInPictureProxyDelegate> {

	unsigned _pipState;
	UIViewController* _pipContentViewController;
	int _pipDeviceOrientation;
	PHPIPWrapperViewController* _wrapperViewController;
	PGPictureInPictureProxy* _pipProxy;
	/*^block*/id _startCompletionBlock;
	/*^block*/id _preparedToAnimateToFullScreenCompletionBlock;
	/*^block*/id _restoreUserInterfaceForPictureInPictureStopCompletionBlock;

}

@property (assign,nonatomic) unsigned pipState;                                                        //@synthesize pipState=_pipState - In the implementation block
@property (nonatomic,retain) UIViewController * pipContentViewController;                              //@synthesize pipContentViewController=_pipContentViewController - In the implementation block
@property (assign) int pipDeviceOrientation;                                                           //@synthesize pipDeviceOrientation=_pipDeviceOrientation - In the implementation block
@property (retain) PHPIPWrapperViewController * wrapperViewController;                                 //@synthesize wrapperViewController=_wrapperViewController - In the implementation block
@property (retain) PGPictureInPictureProxy * pipProxy;                                                 //@synthesize pipProxy=_pipProxy - In the implementation block
@property (copy) id startCompletionBlock;                                                              //@synthesize startCompletionBlock=_startCompletionBlock - In the implementation block
@property (copy) id preparedToAnimateToFullScreenCompletionBlock;                                      //@synthesize preparedToAnimateToFullScreenCompletionBlock=_preparedToAnimateToFullScreenCompletionBlock - In the implementation block
@property (nonatomic,copy) id restoreUserInterfaceForPictureInPictureStopCompletionBlock;              //@synthesize restoreUserInterfaceForPictureInPictureStopCompletionBlock=_restoreUserInterfaceForPictureInPictureStopCompletionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultPIPController;
-(void)wrapperViewControllerNeedsCleanup:(id)arg1 ;
-(char)pipIsBeingResized;
-(void)setPipProxy:(PGPictureInPictureProxy *)arg1 ;
-(PGPictureInPictureProxy *)pipProxy;
-(char)callStateAllowsPIP;
-(void)callCenterCallStatusChangedNotification:(id)arg1 ;
-(int)pipDeviceOrientation;
-(void)setPipDeviceOrientation:(int)arg1 ;
-(void)setPipState:(unsigned)arg1 ;
-(void)setPipContentViewController:(UIViewController *)arg1 ;
-(void)setStartCompletionBlock:(id)arg1 ;
-(id)restoreUserInterfaceForPictureInPictureStopCompletionBlock;
-(void)setRestoreUserInterfaceForPictureInPictureStopCompletionBlock:(id)arg1 ;
-(unsigned)pipState;
-(void)setPreparedToAnimateToFullScreenCompletionBlock:(id)arg1 ;
-(id)preparedToAnimateToFullScreenCompletionBlock;
-(id)stringForPIPState:(unsigned)arg1 ;
-(void)resetIdleTimerIfNecessary;
-(id)startCompletionBlock;
-(void)manuallyStopPIPWithCompletion:(/*^block*/id)arg1 ;
-(void)resetPipContentViewControllerIfNecessary;
-(void)rotatePIPDeviceOrientationTo:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)startPIPWithViewController:(id)arg1 targetAspectRatio:(CGSize)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)stopPIPAndStealViewController:(/*^block*/id)arg1 ;
-(void)cancelPIP;
-(char)isPreparedToAnimateToFullScreen;
-(char)pipStateIsTransitory;
-(void)updatePIPSize;
-(UIViewController *)pipContentViewController;
-(void)pictureInPictureProxyDidStopPictureInPicture:(id)arg1 ;
-(CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1 ;
-(void)pictureInPictureProxyWillStopPictureInPicture:(id)arg1 ;
-(void)pictureInPictureProxyDidCancelPictureInPicture:(id)arg1 ;
-(void)pictureInPictureProxyWillCancelPictureInPicture:(id)arg1 ;
-(void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)pictureInPictureProxyFailedToStartPictureInPicture:(id)arg1 withError:(id)arg2 ;
-(void)pictureInPictureProxyDidStartPictureInPicture:(id)arg1 ;
-(void)pictureInPictureProxyWillStartPictureInPicture:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setWrapperViewController:(PHPIPWrapperViewController *)arg1 ;
-(PHPIPWrapperViewController *)wrapperViewController;
@end


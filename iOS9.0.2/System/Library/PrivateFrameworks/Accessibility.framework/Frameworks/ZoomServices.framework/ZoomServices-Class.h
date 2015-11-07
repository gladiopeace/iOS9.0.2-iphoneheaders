/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/ZoomServices.framework/ZoomServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ZoomServices/ZoomServices-Structs.h>
#import <libobjc.A.dylib/AXUIClientDelegate.h>

@protocol ZoomServicesDelegate;
@class NSMutableArray, AXUIClient, NSString;

@interface ZoomServices : NSObject <AXUIClientDelegate> {

	NSMutableArray* _zoomListeners;
	char _showingZoomLens;
	char _registeredForZoomListener;
	AXUIClient* _zoomWindowClient;
	id<ZoomServicesDelegate> _delegate;

}

@property (assign,nonatomic) id<ZoomServicesDelegate> delegate; 
@property (getter=isShowingZoomLens,nonatomic,readonly) char showingZoomLens; 
@property (nonatomic,retain) AXUIClient * zoomWindowClient;                                //@synthesize zoomWindowClient=_zoomWindowClient - In the implementation block
@property (assign,getter=isShowingZoomLens,nonatomic) char showingZoomLens;                //@synthesize showingZoomLens=_showingZoomLens - In the implementation block
@property (assign,nonatomic) id<ZoomServicesDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char registeredForZoomListener;                               //@synthesize registeredForZoomListener=_registeredForZoomListener - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)registerInterestInZoomAttributes;
-(char)notifyZoomFocusDidChangeWithType:(int)arg1 rect:(CGRect)arg2 contextId:(unsigned)arg3 ;
-(char)notifyZoomFocusDidChangeWithType:(int)arg1 rect:(CGRect)arg2 contextId:(unsigned)arg3 keyboardFrame:(CGRect)arg4 ;
-(char)notifyZoomKeyboardWillBecomeVisibleWithFrame:(CGRect)arg1 inAppWithBundleID:(id)arg2 ;
-(char)notifyZoomKeyboardWillHideInAppWithBundleID:(id)arg1 ;
-(char)notifyZoomLockButtonWasPressed;
-(char)notifyZoomAppSwitcherRevealAnimationWillBegin;
-(char)notifyZoomAppDidBecomeActive:(id)arg1 keyboardFrameIfVisible:(CGRect)arg2 ;
-(char)notifyZoomAppDidEnterBackground:(id)arg1 ;
-(double)appActivationAnimationStartDelay;
-(double)appDeactivationAnimationStartDelay;
-(char)notifyZoomAppActivationAnimationWillBegin;
-(char)notifyZoomAppDeactivationAnimationWillBegin;
-(char)notifyZoomHomeButtonWasPressed;
-(double)appSwitcherRevealAnimationStartDelay;
-(char)notifyZoomDeviceWasUnlocked;
-(float)reachabilityScaleFactor;
-(float)zoomLevel;
-(void)setDelegate:(id<ZoomServicesDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ZoomServicesDelegate>)delegate;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned)arg3 error:(id*)arg4 ;
-(id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned)arg2 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(void)_zoomChanged:(id)arg1 ;
-(AXUIClient *)zoomWindowClient;
-(void)setZoomWindowClient:(AXUIClient *)arg1 ;
-(char)registeredForZoomListener;
-(void)setRegisteredForZoomListener:(char)arg1 ;
-(char)_isPrimaryZoomWindowClient;
-(void)_handleChangedAttributes:(id)arg1 ;
-(id)registerZoomLevelChangeHandler:(/*^block*/id)arg1 ;
-(void)removeZoomLevelHandler:(id)arg1 ;
-(char)notifyZoomLensModeWasChangedInSettingsTo:(id)arg1 ;
-(char)notifyZoomIdleSlugOpacityChangedTo:(float)arg1 ;
-(char)notifyZoomReturnedToClockFaceAtIdle;
-(char)notifyZoomAppActivationAnimationDidFinish;
-(char)notifyZoomWillShowBrailleInputUI;
-(char)notifyZoomWillHideBrailleInputUI;
-(CGRect)zoomFrame;
-(char)isShowingZoomLens;
-(void)setShowingZoomLens:(char)arg1 ;
-(void)showZoomLens;
-(void)hideZoomLens;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIWindow, UIAlertController, NSProgress, NSTimer;

@interface _UIApplicationModalProgressController : NSObject {

	UIWindow* _window;
	UIAlertController* _alertController;
	/*^block*/id _dismissalHandler;
	NSProgress* _progress;
	NSTimer* _showTimer;
	NSTimer* _hideTimer;
	NSProgress* _urlProgress;
	double _displayStartTime;

}

@property (setter=_setWindow:,getter=_window,nonatomic,retain) UIWindow * window;                                                  //@synthesize window=_window - In the implementation block
@property (setter=_setAlertController:,getter=_alertController,nonatomic,retain) UIAlertController * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (setter=_setDismissalHandler:,getter=_dismissalHandler,nonatomic,copy) id dismissalHandler;                              //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (setter=_setProgress:,getter=_progress,nonatomic,retain) NSProgress * progress;                                          //@synthesize progress=_progress - In the implementation block
@property (setter=_setShowTimer:,getter=_showTimer,nonatomic,retain) NSTimer * showTimer;                                          //@synthesize showTimer=_showTimer - In the implementation block
@property (setter=_setHideTimer:,getter=_hideTimer,nonatomic,retain) NSTimer * hideTimer;                                          //@synthesize hideTimer=_hideTimer - In the implementation block
@property (assign,setter=_setDisplayStartTime:,getter=_displayStartTime,nonatomic) double displayStartTime;                        //@synthesize displayStartTime=_displayStartTime - In the implementation block
@property (nonatomic,retain) NSProgress * urlProgress;                                                                             //@synthesize urlProgress=_urlProgress - In the implementation block
+(id)sharedInstance;
-(void)displayForCopyingFileAtURL:(id)arg1 toURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reconfigureWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 dismissalHandler:(/*^block*/id)arg5 ;
-(void)displayWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 dismissalHandler:(/*^block*/id)arg5 ;
-(void)hideAfterMinimumUptimeWithDismissalHandler:(/*^block*/id)arg1 ;
-(id)_window;
-(id)_progress;
-(/*^block*/id)_dismissalHandler;
-(void)_setAlertController:(id)arg1 ;
-(id)_alertController;
-(void)_setProgress:(id)arg1 ;
-(void)_setDismissalHandler:(/*^block*/id)arg1 ;
-(void)_setShowTimer:(id)arg1 ;
-(void)_setHideTimer:(id)arg1 ;
-(void)_setWindow:(id)arg1 ;
-(void)_callAndClearDismissalHandler;
-(void)_setDisplayStartTime:(double)arg1 ;
-(void)_hideImmediately;
-(void)_hideTimerAction:(id)arg1 ;
-(void)_showTimerAction:(id)arg1 ;
-(void)displayForDownloadingURL:(id)arg1 copyToURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setUrlProgress:(NSProgress *)arg1 ;
-(void)_dismissButtonAction:(id)arg1 ;
-(void)displayForDownloadingURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_showTimer;
-(id)_hideTimer;
-(double)_displayStartTime;
-(NSProgress *)urlProgress;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBPluginBundleController.h>

@protocol SBUIPluginControllerHost;
@interface SBUIPluginController : NSObject <SBPluginBundleController> {

	id<SBUIPluginControllerHost> _host;
	char _isVisible;

}

@property (assign,nonatomic) id<SBUIPluginControllerHost> host;              //@synthesize host=_host - In the implementation block
@property (assign,getter=isVisible,nonatomic) char visible;                  //@synthesize isVisible=_isVisible - In the implementation block
-(void)setVisible:(char)arg1 ;
-(char)isVisible;
-(id<SBUIPluginControllerHost>)host;
-(void)handleViewFullyRevealed;
-(void)setHost:(id<SBUIPluginControllerHost>)arg1 ;
-(char)handledMenuButtonDownEvent;
-(char)handledMenuButtonUpEvent;
-(char)handledMenuButtonTap;
-(void)registeredWithHost;
-(char)supportedAndEnabled;
-(char)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3 ;
-(void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3 ;
-(void)cancelPendingActivationEvent:(int)arg1 ;
-(char)handleActivationEvent:(int)arg1 eventSource:(int)arg2 context:(void*)arg3 ;
-(char)handledPasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)handleBluetoothDismissal;
-(void)handlePreheatCommand;
-(char)handledWiredMicButtonTap;
-(char)handledButtonDownEventFromSource:(int)arg1 ;
-(char)handledButtonUpEventFromSource:(int)arg1 ;
-(char)handledButtonTapFromSource:(int)arg1 ;
-(id)viewControllerForActivationContext:(id)arg1 ;
-(void)viewPartiallyRevealedWithPercentRevealed:(float)arg1 ;
@end


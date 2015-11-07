/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GAXEventProcessorDelegate <NSObject>
@required
-(/*function pointer*/void**)gaxStateWithGAXEventProcessor:(id)arg1;
-(void)eventProcessor:(id)arg1 transitionToMode:(unsigned)arg2;
-(void)unlockDeviceWithEventProcessor:(id)arg1;
-(void)eventProcessor:(id)arg1 showAlertWithType:(int)arg2;
-(void)monitorForTouchIDWithEventProcessor:(id)arg1;
-(void)eventProcessor:(id)arg1 updateAssistiveTouchBootstrapPort:(unsigned)arg2;
-(void)eventProcessor:(id)arg1 shouldAllowTripleClickSheet:(char*)arg2 tripleClickAlertIsVisible:(char*)arg3;
-(id)ignoredTouchRegionsForEventProcessor:(id)arg1;

@end


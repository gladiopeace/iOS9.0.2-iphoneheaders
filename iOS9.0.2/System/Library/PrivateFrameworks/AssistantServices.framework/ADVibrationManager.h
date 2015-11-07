/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ADVibrationManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _ringVibrationState;
	int _silentVibrationState;
	int _accessiblityVibrationState;

}
+(id)sharedManager;
-(char)isVibrationDisabledInAccessibility;
-(char)vibratesForMuteMode:(int)arg1 ;
-(char)_accessibilityVibrationValue;
-(char)_silentVibrationValue;
-(char)_ringVibrationValue;
-(void)_fetchRingVibrationValue;
-(void)_fetchSilentVibrationValue;
-(void)_fetchAccessibilityVibrationValue;
-(void)handleRingVibrationValueChange;
-(void)handleSilentVibrationValueChange;
-(void)handleAccessibilityVibrationValueChange;
-(void)dealloc;
-(id)init;
@end


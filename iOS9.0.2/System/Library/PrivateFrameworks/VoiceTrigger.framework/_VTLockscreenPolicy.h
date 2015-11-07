/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface _VTLockscreenPolicy : _VTStatePolicy <MCProfileConnectionObserver> {

	char _siriRestrictedOnLockScreen;
	unsigned char _lockedState;
	int _lockscreenNotifyToken;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(char)isEnabled;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(char)_deviceLockedWithPasscode;
-(void)_registerForLockscreenUpdates;
-(void)_unregisterForLockscreenUpdates;
@end


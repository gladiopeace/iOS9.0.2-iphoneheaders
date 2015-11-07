/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>

@interface _VTSiriAssertionPolicy : _VTStatePolicy {

	unsigned char _siriAssertionState;

}
-(void)dealloc;
-(char)isEnabled;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_registerForSiriAssertionStateUpdates;
-(void)_unregisterForSiriAssertionStateUpdates;
-(void)_enableAssertionReceived;
-(void)_disableAssertionReceived;
@end


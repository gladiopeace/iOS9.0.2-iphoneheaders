/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MCPasscodeManager : NSObject
+(id)sharedManager;
+(id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1 ;
+(int)unlockScreenTypeForRestrictions:(id)arg1 ;
+(char)isDeviceUnlocked;
+(int)defaultNewPasscodeEntrySimplePasscodeType;
+(int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1 outSimplePasscodeType:(int*)arg2 ;
+(int)unlockScreenTypeForRestrictions:(id)arg1 outSimplePasscodeType:(int*)arg2 ;
+(char)passcode:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 checkHistory:(char)arg3 outError:(id*)arg4 ;
+(id)characteristicsDictionaryFromPasscode:(id)arg1 ;
+(char)_passcodeCharacteristics:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 outError:(id*)arg3 ;
+(id)deviceLockedError;
+(id)hashForPasscode:(id)arg1 usingMethod:(int)arg2 salt:(id)arg3 ;
+(id)generateSalt;
+(int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1 ;
-(char)isPasscodeSet;
-(char)isDeviceLocked;
-(id)passcodeExpiryDateOutError:(id*)arg1 ;
-(char)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg1 outError:(id*)arg2 ;
-(void)lockDeviceImmediately:(char)arg1 ;
-(char)passcode:(id)arg1 compliesWithPolicyCheckHistory:(char)arg2 outError:(id*)arg3 ;
-(void)passcodeExpiryDateCompletionBlock:(/*^block*/id)arg1 ;
-(int)currentUnlockScreenType;
-(int)currentUnlockSimplePasscodeType;
-(void)lockDevice;
-(id)_wrongPasscodeError;
-(id)_privatePasscodeDict;
-(id)_publicPasscodeDict;
-(char)_checkPasscode:(id)arg1 againstHistoryWithRestrictions:(id)arg2 outError:(id*)arg3 ;
-(id)_passcodeCharacteristics;
-(id)localizedDescriptionOfPasscodePolicy;
-(char)isCurrentPasscodeCompliantOutError:(id*)arg1 ;
-(char)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2 ;
-(int)newPasscodeEntryScreenType;
-(int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
@end


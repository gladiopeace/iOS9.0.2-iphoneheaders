/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCRestrictionManager.h>

@class NSDictionary;

@interface MCRestrictionManagerWriter : MCRestrictionManager {

	int _senderPID;
	NSDictionary* _clientTypeLoaders;

}

@property (assign,nonatomic) int senderPID;                                   //@synthesize senderPID=_senderPID - In the implementation block
@property (nonatomic,readonly) NSDictionary * clientTypeLoaders;              //@synthesize clientTypeLoaders=_clientTypeLoaders - In the implementation block
+(id)enforcedAppWhitelistRestrictions;
+(id)sharedManager;
-(char)setClientRestrictions:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarning:(id)arg5 outRestrictionsChanged:(char*)arg6 outEffectiveSettingsChanged:(char*)arg7 outRecomputedNag:(char*)arg8 outError:(id*)arg9 ;
-(char)recomputeNagMetadata;
-(void)setSenderPID:(int)arg1 ;
-(void)setIntersectionValues:(id)arg1 forSetting:(id)arg2 ;
-(void)setUnionValues:(id)arg1 forSetting:(id)arg2 ;
-(void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1 ;
-(void)recomputeEffectiveUserSettingsPasscode:(id)arg1 ;
-(char)setAllClientRestrictions:(id)arg1 outRestrictionsChanged:(char*)arg2 outEffectiveSettingsChanged:(char*)arg3 outRecomputedNag:(char*)arg4 outError:(id*)arg5 ;
-(char)setProfileRestrictions:(id)arg1 outRestrictionsChanged:(char*)arg2 outEffectiveSettingsChanged:(char*)arg3 outAppWhitelistSettingsChanged:(char*)arg4 outRecomputedNag:(char*)arg5 outError:(id*)arg6 ;
-(char)setClientRestrictions:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarning:(id)arg5 shouldRecomputeNag:(char)arg6 outRestrictionsChanged:(char*)arg7 outEffectiveSettingsChanged:(char*)arg8 outRecomputedNag:(char*)arg9 outError:(id*)arg10 ;
-(void)memberQueueCommitRestrictionsToDisk;
-(char)memberQueueRecomputeEffectiveUserSettingsPasscode:(id)arg1 ;
-(char)memberQueueSetAllClientRestrictions:(id)arg1 outRestrictionsChanged:(char*)arg2 outEffectiveSettingsChanged:(char*)arg3 outError:(id*)arg4 ;
-(void)memberQueueCommitClientRestrictionsToDisk;
-(id)_liveClientUUIDsForClientType:(id)arg1 outLoaderMissing:(char*)arg2 ;
-(void)memberQueueCommitEffectiveUserSettingsToDiskOldEffectiveUserSettings:(id)arg1 ;
-(char)memberQueueSetParametersForSettingsByType:(id)arg1 passcode:(id)arg2 ;
-(void)setBoolValue:(char)arg1 ask:(char)arg2 forSetting:(id)arg3 ;
-(void)setShowNagMessage;
-(int)senderPID;
-(NSDictionary *)clientTypeLoaders;
-(void)setBoolValue:(char)arg1 forSetting:(id)arg2 ;
-(id)_init;
-(void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 ;
-(char)removeOrphanedClientRestrictions;
-(char)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 ;
-(void)removeBoolSetting:(id)arg1 ;
-(void)removeValueSetting:(id)arg1 ;
-(void)resetAllSettingsToDefaults;
-(void)notifyClientsToRecomputeCompliance;
-(void)memberQueueCommitUserSettingsToDisk;
-(char)setParametersForSettingsByType:(id)arg1 ;
-(void)setValue:(id)arg1 forSetting:(id)arg2 ;
@end


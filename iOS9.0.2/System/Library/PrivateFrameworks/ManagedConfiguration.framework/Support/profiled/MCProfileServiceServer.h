/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <profiled/profiled-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, MCBTAJobManager, LSApplicationWorkspace, NSString;

@interface MCProfileServiceServer : NSObject <LSApplicationWorkspaceObserverProtocol> {

	char _memberQueueNeedToRecomputeNagMetadata;
	char _memberQueueHasMigrated;
	char _memberQueueHasActivationRecordChangesPending;
	NSObject*<OS_dispatch_queue> _checkInQueue;
	NSObject*<OS_dispatch_queue> _workerQueue;
	NSObject*<OS_dispatch_group> _workerGroup;
	MCBTAJobManager* _workerQueueBTAJobManager;
	NSObject*<OS_dispatch_queue> _memberQueue;
	id _powerAssertionAssertedNotificationToken;
	id _powerAssertionDeassertedNotificationToken;
	int _mobileKeybagLockStateChangeNotificationToken;
	LSApplicationWorkspace* _appWorkspace;
	double _memberQueueIdleTimeInterval;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> checkInQueue;                      //@synthesize checkInQueue=_checkInQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workerQueue;                       //@synthesize workerQueue=_workerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> workerGroup;                       //@synthesize workerGroup=_workerGroup - In the implementation block
@property (nonatomic,retain) MCBTAJobManager * workerQueueBTAJobManager;                     //@synthesize workerQueueBTAJobManager=_workerQueueBTAJobManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                       //@synthesize memberQueue=_memberQueue - In the implementation block
@property (assign,nonatomic) double memberQueueIdleTimeInterval;                             //@synthesize memberQueueIdleTimeInterval=_memberQueueIdleTimeInterval - In the implementation block
@property (assign,nonatomic) char memberQueueNeedToRecomputeNagMetadata;                     //@synthesize memberQueueNeedToRecomputeNagMetadata=_memberQueueNeedToRecomputeNagMetadata - In the implementation block
@property (assign,nonatomic) char memberQueueHasMigrated;                                    //@synthesize memberQueueHasMigrated=_memberQueueHasMigrated - In the implementation block
@property (assign,nonatomic) char memberQueueHasActivationRecordChangesPending;              //@synthesize memberQueueHasActivationRecordChangesPending=_memberQueueHasActivationRecordChangesPending - In the implementation block
@property (nonatomic,retain) id powerAssertionAssertedNotificationToken;                     //@synthesize powerAssertionAssertedNotificationToken=_powerAssertionAssertedNotificationToken - In the implementation block
@property (nonatomic,retain) id powerAssertionDeassertedNotificationToken;                   //@synthesize powerAssertionDeassertedNotificationToken=_powerAssertionDeassertedNotificationToken - In the implementation block
@property (assign,nonatomic) int mobileKeybagLockStateChangeNotificationToken;               //@synthesize mobileKeybagLockStateChangeNotificationToken=_mobileKeybagLockStateChangeNotificationToken - In the implementation block
@property (nonatomic,retain) LSApplicationWorkspace * appWorkspace;                          //@synthesize appWorkspace=_appWorkspace - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(void)setWorkerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workerQueue;
-(MCBTAJobManager *)workerQueueBTAJobManager;
-(void)_workerQueuePrepareForService;
-(void)notifyFirstUnlock;
-(void)notifyBatterySaverModeChanged;
-(void)notifyGracePeriodChanged;
-(void)notifyProvisioningProfilesChanged;
-(NSObject*<OS_dispatch_queue>)checkInQueue;
-(void)setMemberQueueHasMigrated:(char)arg1 ;
-(void)workerQueueNotifyDeviceUnlocked;
-(void)workerQueueRecomputeNagMessage;
-(void)setMemberQueueNeedToRecomputeNagMetadata:(char)arg1 ;
-(void)workerQueueDidRecomputeNagMessageWithResult:(char)arg1 ;
-(void)_sendRestrictionChangedNotification;
-(void)_sendEffectiveSettingsChangedNotification;
-(char)memberQueueHasMigrated;
-(char)memberQueueHasActivationRecordChangesPending;
-(void)mayShareToWhitelistedSourceUnmanagedTargetAppWithServiceName:(id)arg1 auditToken:(SCD_Struct_MC0)arg2 originatingAccountIsManaged:(char)arg3 completion:(/*^block*/id)arg4 ;
-(id)bookmarkDictsFromBookmarks:(id)arg1 ;
-(void)setURLsFromUserBookmarkDictsAsSettings:(id)arg1 ;
-(void)workerQueueCheckForAutoInstallProfiles;
-(void)_workerQueueRemoveAllCarrierProfiles;
-(void)_workerQueueCheckCarrierProfileForceReinstallation:(char)arg1 ;
-(void)workerQueueReadBiometricState;
-(void)updateMISTrust;
-(id)_badProvisioningProfileError;
-(void)workerQueueRemoveExpiredProfiles;
-(void)revalidateManagedApps;
-(void)workerQueueRevalidateManagedApps;
-(void)workerQueueUpdateMISTrust;
-(char)storeCloudConfigurationDetails:(id)arg1 outError:(id*)arg2 ;
-(char)_activationRecordIndicatesCloudConfigurationIsAvailable;
-(void)setMemberQueueHasActivationRecordChangesPending:(char)arg1 ;
-(id)bookmarksFromBookmarkDicts:(id)arg1 ;
-(void)considerProfilesInstalledDuringBuddyForManagement:(char)arg1 ;
-(void)installProfileData:(id)arg1 interactionClient:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateProfileIdentifier:(id)arg1 interactionClient:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)mayShareToMessagesForAuditToken:(SCD_Struct_MC0)arg1 originatingAccountIsManaged:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)mayShareToAirDropForAuditToken:(SCD_Struct_MC0)arg1 originatingAccountIsManaged:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 messageSendingAppBundleID:(id)arg2 hostAppBundleID:(id)arg3 accountIsManaged:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)setAutoCorrectionAllowed:(char)arg1 senderPID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPredictiveKeyboardAllowed:(char)arg1 senderPID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)setKeyboardShortcutsAllowed:(char)arg1 senderPID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSpellCheckAllowed:(char)arg1 senderPID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAllowedURLStrings:(id)arg1 senderPID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)addAllowedURLString:(id)arg1 senderPID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)addBookmark:(id)arg1 senderPID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeWebContentFilterUserBlacklistedURLString:(id)arg1 senderPID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 senderPID:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)setUserBookmarks:(id)arg1 senderPID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)stashUserBookmarks:(id)arg1 withLabel:(id)arg2 senderPID:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)unstashUserBookmarksFromLabel:(id)arg1 senderPID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)stashBlacklistURLStringsWithSenderPID:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)unstashBlacklistURLStringsWithSenderPID:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)stashWhitelistURLStringsWithSenderPID:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)unstashWhitelistURLStringsWithSenderPID:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCheckInQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_group>)workerGroup;
-(void)setWorkerGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setWorkerQueueBTAJobManager:(MCBTAJobManager *)arg1 ;
-(double)memberQueueIdleTimeInterval;
-(void)setMemberQueueIdleTimeInterval:(double)arg1 ;
-(char)memberQueueNeedToRecomputeNagMetadata;
-(id)powerAssertionAssertedNotificationToken;
-(void)setPowerAssertionAssertedNotificationToken:(id)arg1 ;
-(id)powerAssertionDeassertedNotificationToken;
-(void)setPowerAssertionDeassertedNotificationToken:(id)arg1 ;
-(int)mobileKeybagLockStateChangeNotificationToken;
-(void)setMobileKeybagLockStateChangeNotificationToken:(int)arg1 ;
-(void)localeChanged;
-(id)init;
-(void)start;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(LSApplicationWorkspace *)appWorkspace;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)setAppWorkspace:(LSApplicationWorkspace *)arg1 ;
-(void)checkInWithCompletion:(/*^block*/id)arg1 ;
-(void)checkCarrierProfileAndForceReinstallation:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)allowedOpenInAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingIsManaged:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)allowedImportFromAppBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingIsManaged:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)waitForMigrationIncludingPostRestoreMigration:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyDeviceUnlockedWithCompletion:(/*^block*/id)arg1 ;
-(void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(/*^block*/id)arg1 ;
-(void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(/*^block*/id)arg1 ;
-(void)removeProfileWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)changePasscode:(id)arg1 oldPasscode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeOrphanedClientRestrictionsWithCompletion:(/*^block*/id)arg1 ;
-(void)managedSystemConfigurationServiceIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)managedWiFiNetworkNamesWithCompletion:(/*^block*/id)arg1 ;
-(void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(char)arg2 forceAllowHostPairing:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeBoolSetting:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeValueSetting:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openSensitiveURL:(id)arg1 unlock:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)storeCertificateData:(id)arg1 forIPCUIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installProvisioningProfileData:(id)arg1 managingProfileIdentifer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeProvisioningProfileWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyStartComplianceTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recomputeUserComplianceWarningWithCompletion:(/*^block*/id)arg1 ;
-(void)recomputePerClientUserComplianceWithCompletion:(/*^block*/id)arg1 ;
-(void)resetAllSettingsToDefaultsIsUserInitiated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)managedAppIDsWithFlags:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeExpiredProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)profileDataStoredForPurpose:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)rereadManagedAppAttributesWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudConfigurationMachineInfoDataWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudConfigurationStoreDetails:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createActivationLockBypassCodeWithCompletion:(/*^block*/id)arg1 ;
-(void)storeActivationRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeExpiredProfiles;
-(void)fetchConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)mayOpenFromManagedToUnmanaged;
-(char)mayOpenFromUnmanagedToManaged;
-(char)isOpenInRestrictionInEffect;
@end


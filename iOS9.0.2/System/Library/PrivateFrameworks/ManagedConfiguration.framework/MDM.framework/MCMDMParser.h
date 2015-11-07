/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCTunnelParser.h>

@class MCMDMServer, NSString;

@interface MCMDMParser : MCTunnelParser {

	char _isChaperoned;
	char _isMDM;
	MCMDMServer* _server;
	NSString* _managingProfileIdentifier;

}

@property (assign,nonatomic,__weak) MCMDMServer * server;                       //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) char isChaperoned;                               //@synthesize isChaperoned=_isChaperoned - In the implementation block
@property (assign,nonatomic) char isMDM;                                        //@synthesize isMDM=_isMDM - In the implementation block
@property (nonatomic,retain) NSString * managingProfileIdentifier;              //@synthesize managingProfileIdentifier=_managingProfileIdentifier - In the implementation block
+(id)malformedRequestErrorResult;
+(id)errorChainFromError:(id)arg1 ;
-(MCMDMServer *)server;
-(void)setServer:(MCMDMServer *)arg1 ;
-(id)_allCommands;
-(id)_invalidRequestTypeError:(id)arg1 ;
-(id)_unavailableCommandsWhileLocked;
-(id)_unavailableCommandsWhileInAppWhitelistModes;
-(id)unavailableCommandsDuringBuddy;
-(id)_deviceInformationWithRequest:(id)arg1 accessRights:(int)arg2 ;
-(id)_installProfile:(id)arg1 accessRights:(int)arg2 ;
-(id)_removeProfile:(id)arg1 ;
-(void)_processRequest:(id)arg1 accessRights:(int)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_notAuthorizedError;
-(id)_deviceLock:(id)arg1 ;
-(id)_clearPasscode:(id)arg1 ;
-(id)_requestUnlockToken:(id)arg1 ;
-(id)_profileList:(id)arg1 ;
-(id)_eraseDevice:(id)arg1 ;
-(id)_certificateList:(id)arg1 ;
-(id)_provisioningProfileList:(id)arg1 ;
-(id)_installProvisioningProfile:(id)arg1 ;
-(id)_removeProvisioningProfile:(id)arg1 ;
-(id)_installedApplicationList:(id)arg1 ;
-(id)_restrictions:(id)arg1 ;
-(id)_securityInfo:(id)arg1 ;
-(id)_settings:(id)arg1 accessRights:(int)arg2 ;
-(void)_installApplication:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_applyRedemptionCode:(id)arg1 assertion:(id)arg2 ;
-(id)_managedApplicationList:(id)arg1 ;
-(id)_managedApplicationConfiguration:(id)arg1 ;
-(id)_managedApplicationAttributes:(id)arg1 ;
-(id)_managedApplicationFeedback:(id)arg1 ;
-(id)_removeApplication:(id)arg1 ;
-(void)_requestMirroringRequest:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_stopMirroringRequest:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_inviteToProgramRequest:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_activationLockBypassCodeRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_clearActivationLockBypassCodeRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_clearRestrictionsPasswordRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_installMedia:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_managedMediaList:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_removeMedia:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_deviceConfigured:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_scheduleOSUpdate:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_scheduleOSUpdateScan:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_availableOSUpdates:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_statusOfOSUpdates:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_profileList:(id)arg1 filterFlags:(int)arg2 ;
-(void)_performQuery:(id)arg1 withResultDictionary:(id)arg2 ;
-(char)_isProvisioningProfileUUIDManaged:(id)arg1 ;
-(char)isMDM;
-(id)_removeProfileWithIdentifier:(id)arg1 ;
-(char)_isProfileIdentifierManaged:(id)arg1 ;
-(id)_allSettingsItems;
-(id)_notManagedErrorAppID:(id)arg1 ;
-(id)approvedAppAttributesFromAttributes:(id)arg1 ;
-(id)_performSetDeviceName:(id)arg1 ;
-(id)_performSetWallpaper:(id)arg1 ;
-(id)_performSetDataRoaming:(id)arg1 ;
-(id)_performSetVoiceRoaming:(id)arg1 ;
-(id)_performSetPersonalHotspot:(id)arg1 ;
-(id)_performSetAppConfig:(id)arg1 outAdditionalResponseKeys:(id*)arg2 ;
-(id)_performSetAppAttributes:(id)arg1 outAdditionalResponseKeys:(id*)arg2 ;
-(id)_performSetOrganizationInfo:(id)arg1 ;
-(id)_performSetMDMOptions:(id)arg1 ;
-(char)_validateSetting:(id)arg1 accessRights:(int)arg2 outError:(id*)arg3 ;
-(id)_performSetting:(id)arg1 outAdditionalResponseKeys:(id*)arg2 outRestartAppleTVApp:(char*)arg3 ;
-(id)managedFeedbackDictionaryForBundleID:(id)arg1 delete:(char)arg2 ;
-(void)_scheduleOSUpdate:(id)arg1 tryDownload:(char)arg2 tryInstall:(char)arg3 assertion:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(char)shouldReportErrorCode:(int)arg1 ;
-(id)statusStringForErrorCode:(int)arg1 ;
-(id)_iosUpdateProductKey:(id)arg1 ;
-(id)initWithManagingProfileIdentifier:(id)arg1 ;
-(void)processRequest:(id)arg1 accessRights:(int)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_appStoreDisabledError;
-(void)setIsMDM:(char)arg1 ;
-(NSString *)managingProfileIdentifier;
-(void)setManagingProfileIdentifier:(NSString *)arg1 ;
-(char)isChaperoned;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/IDSUTunDeliveryControllerConnectivityDelegate.h>
#import <identityservicesd/IDSDLocalDeviceControllerDelegate.h>

@class NSMutableDictionary, IDSAppleRegistration, IDSDService, NSString, NSMutableArray, IDSRegistrationPushHandler, IMTimer, NSDate, NSMutableSet, NSDictionary, NSArray;

@interface IDSDAccount : NSObject <IDSUTunDeliveryControllerConnectivityDelegate, IDSDLocalDeviceControllerDelegate> {

	NSMutableDictionary* _accountInfo;
	IDSAppleRegistration* _registrationInfo;
	IDSDService* _service;
	NSString* _uniqueID;
	NSMutableArray* _setupHandlers;
	IDSRegistrationPushHandler* _pushHandler;
	IMTimer* _restoreTimer;
	NSDate* _dateOfLastHandlesCheck;
	NSMutableSet* _localServices;
	char _disabledAutomatically;
	char _duringInit;
	char _createdDuringSetup;
	char _shouldRequeryHandles;
	char _issuingDependentCheck;
	char _issuingHandlesCheck;
	char _pendingDependantCheck;
	char _pendingHandlesCheck;
	char _pendingAuthenticate;
	char _pendingReIdentify;
	char _pendingReRegister;
	char _isRegistrationActive;
	char _pendingAccountInfoBroadcast;
	char _isBeingRemoved;

}

@property (nonatomic,retain,readonly) NSString * uniqueID; 
@property (nonatomic,retain) NSString * loginID; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain,readonly) NSString * dsHandle; 
@property (nonatomic,retain,readonly) NSString * dsID; 
@property (nonatomic,retain,readonly) IDSDService * service; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,retain,readonly) IDSAppleRegistration * registration;                            //@synthesize registrationInfo=_registrationInfo - In the implementation block
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) int registrationErrorReason; 
@property (nonatomic,readonly) int registrationError; 
@property (nonatomic,readonly) char isRegistered; 
@property (nonatomic,readonly) char isEnabled; 
@property (nonatomic,readonly) char hasEverRegistered; 
@property (assign,nonatomic) char wasDisabledAutomatically;                                           //@synthesize disabledAutomatically=_disabledAutomatically - In the implementation block
@property (nonatomic,readonly) char isUsableForSending; 
@property (nonatomic,readonly) char shouldAutoRegisterAllHandles; 
@property (nonatomic,readonly) char shouldRegisterUsingDSHandle; 
@property (nonatomic,retain,readonly) NSDictionary * accountInfo;                                     //@synthesize accountInfo=_accountInfo - In the implementation block
@property (nonatomic,retain,readonly) NSArray * dependentRegistrations; 
@property (nonatomic,retain,readonly) NSDictionary * defaultPairedDependentRegistration; 
@property (nonatomic,retain,readonly) NSArray * aliasStrings; 
@property (nonatomic,retain,readonly) NSArray * uris; 
@property (nonatomic,retain,readonly) NSArray * linkedAccounts; 
@property (assign,nonatomic) char isBeingRemoved;                                                     //@synthesize isBeingRemoved=_isBeingRemoved - In the implementation block
@property (assign,nonatomic) char isUserDisabled; 
@property (nonatomic,retain,readonly) IDSDAccount * superAccount; 
@property (nonatomic,retain,readonly) NSDictionary * accountSetupInfo; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)dependentRegistration:(id)arg1 findDeviceUniqueID:(id*)arg2 btID:(id*)arg3 forURI:(id)arg4 token:(id)arg5 ;
+(char)dependentRegistration:(id)arg1 hasDependentRegistrationWithURI:(id)arg2 token:(id)arg3 ;
+(void)_splitDestinations:(id)arg1 intoLocalDestinations:(id*)arg2 remoteDestinations:(id*)arg3 threadContext:(id)arg4 ;
+(void)_sendLocallyWithSendParameters:(id)arg1 service:(id)arg2 uriToLocalDestination:(id)arg3 data:(id)arg4 protobuf:(id)arg5 threadContext:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
+(void)sendMessageWithSendParameters:(id)arg1 service:(id)arg2 threadContext:(id)arg3 willSendBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(char)isAdHocAccount;
-(NSString *)dsHandle;
-(id)primaryRegistration;
-(NSArray *)uris;
-(char)isDeviceRegistered;
-(void)registrationControllerNeedsNewRegistration:(id)arg1 ;
-(void)registrationController:(id)arg1 registrationUpdated:(id)arg2 ;
-(void)registrationController:(id)arg1 registrationWillStart:(id)arg2 ;
-(void)registrationController:(id)arg1 registrationFailed:(id)arg2 error:(int)arg3 info:(id)arg4 ;
-(void)registrationController:(id)arg1 registrationSucceeded:(id)arg2 ;
-(void)registrationController:(id)arg1 deregistrationWillStart:(id)arg2 ;
-(char)shouldRegisterUsingDSHandle;
-(void)center:(id)arg1 succeededIdentification:(id)arg2 phoneNumber:(id)arg3 token:(id)arg4 ;
-(void)center:(id)arg1 startedAuthenticating:(id)arg2 ;
-(void)center:(id)arg1 succeededAuthentication:(id)arg2 ;
-(void)center:(id)arg1 succeededLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3 ;
-(void)center:(id)arg1 succeededUnlinkHandleRequest:(id)arg2 handle:(id)arg3 ;
-(void)center:(id)arg1 succeededEmailValidationRequest:(id)arg2 emailAddress:(id)arg3 ;
-(void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(char)arg6 ;
-(void)center:(id)arg1 failedAuthentication:(id)arg2 error:(int)arg3 info:(id)arg4 ;
-(void)center:(id)arg1 failedLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3 error:(int)arg4 info:(id)arg5 ;
-(void)center:(id)arg1 failedUnlinkHandleRequest:(id)arg2 handle:(id)arg3 error:(int)arg4 info:(id)arg5 ;
-(void)center:(id)arg1 failedEmailValidationRequest:(id)arg2 emailAddress:(id)arg3 error:(int)arg4 info:(id)arg5 ;
-(void)center:(id)arg1 failedRegionValidation:(id)arg2 error:(int)arg3 info:(id)arg4 ;
-(void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3 ;
-(void)sendMessageWithSendParameters:(id)arg1 willSendBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)smallDescription;
-(void)clearDisplayName;
-(id)initWithLoginID:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountConfig:(id)arg5 ;
-(NSArray *)linkedAccounts;
-(void)_updateAccountWithAccountInfo:(id)arg1 ;
-(NSDictionary *)accountSetupInfo;
-(NSArray *)dependentRegistrations;
-(NSDictionary *)defaultPairedDependentRegistration;
-(void)setIsBeingRemoved:(char)arg1 ;
-(void)cleanupAccount;
-(id)adHocAccounts;
-(void)setIsUserDisabled:(char)arg1 ;
-(void)deactivateRegistration;
-(void)activateRegistration;
-(char)hasAliasURI:(id)arg1 ;
-(void)refreshAdHocServiceNames;
-(id)initAdHocAccountWithLoginID:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountConfig:(id)arg5 primaryAccount:(id)arg6 ;
-(id)primaryAccountUniqueID;
-(id)initWithDictionary:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 ;
-(void)setupAccountWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)shouldAutoRegisterAllHandles;
-(char)isUserDisabled;
-(void)_issueDependantCheck;
-(void)_updateHandles:(char)arg1 ;
-(char)deviceIDisNearby:(id)arg1 ;
-(char)hasEverRegistered;
-(void)_writeAccountDefaults:(id)arg1 force:(char)arg2 ;
-(void)_resetVariables;
-(void)_cleanupAccount;
-(void)_notifyDelegatesAddedLocalDevice:(id)arg1 ;
-(int)registrationErrorReason;
-(void)_setupAccount;
-(id)_initWithLoginID:(id)arg1 service:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountConfig:(id)arg5 primaryAccount:(id)arg6 isAdHocAccount:(char)arg7 ;
-(void)_broadcastAccountInfoChanged;
-(char)_stopRegistrationAgent;
-(id)_dependentRegistrationsForDefaultPairedDevice:(char)arg1 ;
-(id)accountAndAdHocAccounts;
-(void)_broadcastAccountMessageBlock:(/*^block*/id)arg1 ;
-(void)_notifyListenersWithChanges:(id)arg1 ;
-(void)_notifyClientDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)didAddPairedDevice:(id)arg1 ;
-(void)didRemovePairedDevice:(id)arg1 ;
-(void)didUpdatePairedDevice:(id)arg1 ;
-(void)authenticationChanged;
-(id)_certForFromURI:(id)arg1 ;
-(char)isUsableForSending;
-(void)findDeviceUniqueID:(id*)arg1 btID:(id*)arg2 forURI:(id)arg3 token:(id)arg4 ;
-(char)hasDependentRegistrationWithURI:(id)arg1 token:(id)arg2 ;
-(id)fromIDForCBUUID:(id)arg1 ;
-(IDSDAccount *)superAccount;
-(void)recoverSMSSignature;
-(void)_updateVettedAliases:(id)arg1 emailInfo:(id)arg2 addToCurrentHandlesIfNeeded:(char)arg3 ;
-(int)_validationStatusForAlias:(id)arg1 ;
-(void)_addAliases:(id)arg1 ;
-(void)_setValidationStatus:(int)arg1 error:(int)arg2 forAlias:(id)arg3 info:(id)arg4 addToCurrentHandlesIfNeeded:(char)arg5 forceAdd:(char)arg6 ;
-(int)_neededRegistrationType;
-(char)_rebuildRegistrationInfo:(char)arg1 ;
-(id)_aliasStrings;
-(void)_registerAccount;
-(void)_registrationAbilityChanged:(id)arg1 ;
-(void)_identityReloaded:(id)arg1 ;
-(void)_identityRegenerated:(id)arg1 ;
-(void)_keychainMigrationComplete:(id)arg1 ;
-(void)_updateRegistrationStatusWithError:(int)arg1 info:(id)arg2 ;
-(void)_checkRegistration;
-(void)_refreshRegistration;
-(void)_removeAliases:(id)arg1 ;
-(void)_reregister;
-(void)_registerForDeviceCenterNotifications;
-(void)_unregisterAccount;
-(void)_deregisterDeviceCenterNotifications;
-(void)_authenticateAccount;
-(void)_retryRegister;
-(char)_migrateRegistrationIfNeeded;
-(char)isDeviceAuthenticated;
-(void)_validateAliases:(id)arg1 validateAlreadyValid:(char)arg2 ;
-(void)sendMessage:(id)arg1 bulkedPayload:(id)arg2 fromID:(id)arg3 toDestinations:(id)arg4 useDictAsTopLevel:(char)arg5 dataToEncrypt:(id)arg6 encryptPayload:(char)arg7 wantsResponse:(char)arg8 expirationDate:(id)arg9 command:(id)arg10 wantsDeliveryStatus:(char)arg11 deliveryStatusContext:(id)arg12 messageUUID:(id)arg13 priority:(int)arg14 localDelivery:(char)arg15 willSendBlock:(/*^block*/id)arg16 completionBlock:(/*^block*/id)arg17 ;
-(void)_validateAliases:(id)arg1 ;
-(void)_unvalidateAliases:(id)arg1 ;
-(char)isRegistrationActive;
-(void)handler:(id)arg1 reregisterUserID:(id)arg2 style:(id)arg3 service:(id)arg4 ;
-(void)handler:(id)arg1 reloadBag:(id)arg2 ;
-(void)handler:(id)arg1 profile:(id)arg2 deviceUpdated:(id)arg3 service:(id)arg4 ;
-(void)handler:(id)arg1 profileHandlesUpdated:(id)arg2 status:(id)arg3 ;
-(void)handler:(id)arg1 profile:(id)arg2 emailConfirmed:(id)arg3 status:(id)arg4 ;
-(void)registrationController:(id)arg1 deregistrationSucceeded:(id)arg2 ;
-(void)refreshVettedAliases;
-(void)reportSpamWithMessages:(id)arg1 toURI:(id)arg2 ;
-(id)pushHandler;
-(void)_sendRemotelyWithSendParameters:(id)arg1 data:(id)arg2 protobuf:(id)arg3 willSendBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(char)shouldIncludeDefaultDeviceAsDestinationForMessageForFromID:(id)arg1 ;
-(void)_splitDestinations:(id)arg1 intoLocalDestinations:(id*)arg2 remoteDestinations:(id*)arg3 ;
-(void)_sendLocallyWithSendParameters:(id)arg1 uriToLocalDestination:(id)arg2 data:(id)arg3 protobuf:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_sendMessageWithSendParametersOnMainThread:(id)arg1 filteredDestinations:(id)arg2 data:(id)arg3 compressedData:(id)arg4 protobufToSend:(id)arg5 willSendBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)newSendMessageContext;
-(void)sendServerMessage:(id)arg1 command:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)decryptMessageData:(id)arg1 myURI:(id)arg2 fromURI:(id)arg3 token:(id)arg4 encryptionType:(int)arg5 completionBlock:(/*^block*/id)arg6 ;
-(char)isRegistered;
-(void)dealloc;
-(NSString *)description;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(char)isEnabled;
-(NSString *)displayName;
-(char)isBeingRemoved;
-(void)_updatePhoneNumberCallerID;
-(void)_acceptIncomingPushes;
-(void)_ignoreIncomingPushes;
-(NSString *)uniqueID;
-(IDSDService *)service;
-(int)accountType;
-(void)systemDidStartBackup;
-(void)systemDidFinishMigration;
-(void)systemRestoreStateDidChange;
-(void)systemDidLeaveFirstDataProtectionLock;
-(id)serviceType;
-(NSArray *)aliasStrings;
-(void)setLoginID:(NSString *)arg1 ;
-(id)primaryServiceName;
-(void)deactivateAndPurgeIdentify;
-(void)handler:(id)arg1 pushTokenChanged:(id)arg2 ;
-(id)aliases;
-(id)vettedAliases;
-(id)_aliases;
-(void)authenticateAccount;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(int)validationStatusForAlias:(id)arg1 ;
-(void)registerAccount;
-(void)unregisterAccount;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(void)writeAccountDefaults:(id)arg1 ;
-(char)wasDisabledAutomatically;
-(void)setWasDisabledAutomatically:(char)arg1 ;
-(void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3 ;
-(NSString *)loginID;
-(void)passwordUpdated;
-(void)_reregisterAndReidentify:(char)arg1 ;
-(void)reregister;
-(void)reIdentify;
-(NSDictionary *)accountInfo;
-(void)setDisplayName:(NSString *)arg1 ;
-(IDSAppleRegistration *)registration;
-(int)registrationStatus;
-(NSString *)dsID;
-(id)primaryAccount;
-(int)registrationError;
@end


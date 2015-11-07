/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDUserManagementOperationDelegate.h>
#import <libobjc.A.dylib/HMDAccessoryManagerDelegate.h>
#import <libobjc.A.dylib/HMMessageReceiver.h>
#import <libobjc.A.dylib/HMDRelayManagerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class HMDUser, NSString, HMDHomeManager, NSUUID, HMDHomeLocationHandler, NSObject, HMMessageDispatcher, HMDAccessoryManager, HMDRelayManager, NSMutableArray, NSMutableDictionary, HMDRoom, HMDCharacteristicNotificationRegistry, NSMutableSet;

@interface HMDHome : NSObject <HMDUserManagementOperationDelegate, HMDAccessoryManagerDelegate, HMMessageReceiver, HMDRelayManagerDelegate, NSSecureCoding> {

	char _remoteAccessIsEnabled;
	char _adminUser;
	char _registeredNotificationWithRemoteGateway;
	char _allowsRemoteAccess;
	HMDUser* _currentUser;
	HMDUser* _administrator;
	NSString* _name;
	HMDHomeManager* _homeManager;
	NSUUID* _uuid;
	HMDHomeLocationHandler* _homeLocationHandler;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMMessageDispatcher* _msgDispatcher;
	HMDAccessoryManager* _accessoryManager;
	HMDRelayManager* _relayManager;
	NSMutableArray* _rooms;
	NSMutableArray* _zones;
	NSMutableArray* _accessories;
	NSMutableArray* _services;
	NSMutableArray* _serviceGroups;
	NSMutableArray* _actionSets;
	NSMutableArray* _triggers;
	NSMutableArray* _outgoingInvitations;
	NSMutableDictionary* _pendingAccessoriesToAdd;
	NSMutableArray* _users;
	NSMutableArray* _unconfiguredResidentDevices;
	HMDRoom* _roomForEntireHome;
	int _lastKnownReachableIPAccessoryCount;
	int _lastKnownReachableAccessoryCount;
	int _configurationVersion;
	NSString* _administratorName;
	HMDCharacteristicNotificationRegistry* _characteristicNotificationRegistry;
	NSMutableSet* _heartbeatPingMessagesQueuedWithServer;
	NSMutableSet* _pendingResponsesForRemoteAccessSetup;

}

@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,retain) NSString * name;                                                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                                                     //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMDHomeLocationHandler * homeLocationHandler;                                            //@synthesize homeLocationHandler=_homeLocationHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                                                     //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMDAccessoryManager * accessoryManager;                                                  //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (nonatomic,retain) HMDRelayManager * relayManager;                                                          //@synthesize relayManager=_relayManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * rooms;                                                                  //@synthesize rooms=_rooms - In the implementation block
@property (nonatomic,retain) NSMutableArray * zones;                                                                  //@synthesize zones=_zones - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessories;                                                            //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,retain) NSMutableArray * services;                                                               //@synthesize services=_services - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceGroups;                                                          //@synthesize serviceGroups=_serviceGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionSets;                                                             //@synthesize actionSets=_actionSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * triggers;                                                               //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) NSMutableArray * outgoingInvitations;                                                    //@synthesize outgoingInvitations=_outgoingInvitations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingAccessoriesToAdd;                                           //@synthesize pendingAccessoriesToAdd=_pendingAccessoriesToAdd - In the implementation block
@property (nonatomic,readonly) HMDUser * currentUser;                                                                 //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,retain) NSMutableArray * users;                                                                  //@synthesize users=_users - In the implementation block
@property (nonatomic,retain) NSMutableArray * unconfiguredResidentDevices;                                            //@synthesize unconfiguredResidentDevices=_unconfiguredResidentDevices - In the implementation block
@property (nonatomic,retain) HMDRoom * roomForEntireHome;                                                             //@synthesize roomForEntireHome=_roomForEntireHome - In the implementation block
@property (assign,nonatomic) int lastKnownReachableIPAccessoryCount;                                                  //@synthesize lastKnownReachableIPAccessoryCount=_lastKnownReachableIPAccessoryCount - In the implementation block
@property (assign,nonatomic) int lastKnownReachableAccessoryCount;                                                    //@synthesize lastKnownReachableAccessoryCount=_lastKnownReachableAccessoryCount - In the implementation block
@property (assign,nonatomic) int configurationVersion;                                                                //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (nonatomic,retain) NSString * administratorName;                                                            //@synthesize administratorName=_administratorName - In the implementation block
@property (nonatomic,readonly) HMDUser * administrator;                                                               //@synthesize administrator=_administrator - In the implementation block
@property (nonatomic,retain) HMDCharacteristicNotificationRegistry * characteristicNotificationRegistry;              //@synthesize characteristicNotificationRegistry=_characteristicNotificationRegistry - In the implementation block
@property (assign,nonatomic) char remoteAccessIsEnabled;                                                              //@synthesize remoteAccessIsEnabled=_remoteAccessIsEnabled - In the implementation block
@property (nonatomic,retain) NSMutableSet * heartbeatPingMessagesQueuedWithServer;                                    //@synthesize heartbeatPingMessagesQueuedWithServer=_heartbeatPingMessagesQueuedWithServer - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingResponsesForRemoteAccessSetup;                                     //@synthesize pendingResponsesForRemoteAccessSetup=_pendingResponsesForRemoteAccessSetup - In the implementation block
@property (assign,getter=isAdminUser,nonatomic) char adminUser;                                                       //@synthesize adminUser=_adminUser - In the implementation block
@property (assign,nonatomic) char registeredNotificationWithRemoteGateway;                                            //@synthesize registeredNotificationWithRemoteGateway=_registeredNotificationWithRemoteGateway - In the implementation block
@property (assign,nonatomic) char allowsRemoteAccess;                                                                 //@synthesize allowsRemoteAccess=_allowsRemoteAccess - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(char)supportsSecureCoding;
+(char)isObjectContainedInHome:(id)arg1 ;
+(id)filterTunneledAccessories:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(id)url;
-(NSString *)contextID;
-(NSUUID *)uuid;
-(id)addName:(id)arg1 ;
-(HMDHomeManager *)homeManager;
-(id)accessoryWithUUID:(id)arg1 ;
-(HMMessageDispatcher *)msgDispatcher;
-(NSMutableArray *)actionSets;
-(void)saveWithReason:(id)arg1 postSyncNotification:(char)arg2 ;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForMessages;
-(id)actionSetWithUUID:(id)arg1 ;
-(id)replaceName:(id)arg1 withNewName:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSMutableArray *)accessories;
-(void)setAccessoryManager:(HMDAccessoryManager *)arg1 ;
-(char)configure:(id)arg1 ;
-(HMDAccessoryManager *)accessoryManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)_handleActiveAccountChanged:(id)arg1 ;
-(id)roomWithUUID:(id)arg1 ;
-(HMDRoom *)roomForEntireHome;
-(NSMutableArray *)serviceGroups;
-(HMDCharacteristicNotificationRegistry *)characteristicNotificationRegistry;
-(void)setCharacteristicNotificationRegistry:(HMDCharacteristicNotificationRegistry *)arg1 ;
-(HMDUser *)currentUser;
-(NSMutableArray *)users;
-(void)_modifyAllRegistrationsForNotificationsInNotificationRegistry:(char)arg1 ;
-(id)filterBuiltinActionSets:(id)arg1 ;
-(id)_createBuiltinActionSets;
-(char)_mergeResidentsMissingInCloud:(id)arg1 homeManager:(id)arg2 ;
-(id)_residentUsers;
-(char)_doesResidentExistInMyCircleWithAddress:(id)arg1 homeManager:(id)arg2 ;
-(NSMutableArray *)outgoingInvitations;
-(void)__handleCompletedOutgoingInvitation:(id)arg1 ;
-(void)setAdminUser:(char)arg1 ;
-(HMDHomeLocationHandler *)homeLocationHandler;
-(NSMutableArray *)rooms;
-(NSMutableArray *)zones;
-(char)isAdminUser;
-(id)_currentUser;
-(void)handleDidReceiveIDSMessageWithNoListener:(id)arg1 ;
-(void)setRelayManager:(HMDRelayManager *)arg1 ;
-(HMDRelayManager *)relayManager;
-(void)_updateCloudRelaySupport;
-(char)allowsRemoteAccess;
-(char)isDeviceLocked;
-(void)_subscribeForNotificationFromRemoteGateway;
-(void)_modifyNotificationOnResident:(char)arg1 ignoreDeviceUnlockRequirement:(char)arg2 forCharacteristics:(id)arg3 ;
-(void)_modifyNotificationsOnResidentWithPayload:(id)arg1 enableNotification:(char)arg2 ;
-(char)registeredNotificationWithRemoteGateway;
-(id)_characteristicNotificationPayloadForRemoteGatewayForAccessories:(id)arg1 ;
-(void)setRegisteredNotificationWithRemoteGateway:(char)arg1 ;
-(void)_modifyNotificationsWithPayload:(id)arg1 enableNotification:(char)arg2 withRemoteGateway:(id)arg3 ;
-(id)_populateCharacteristicsThatNeedNotificationsFromDictionary:(id)arg1 error:(id*)arg2 ;
-(void)saveToLocalStoreWithReason:(id)arg1 ;
-(void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(char)arg3 ;
-(int)configurationVersion;
-(void)setConfigurationVersion:(int)arg1 ;
-(void)_removeService:(id)arg1 ;
-(void)_removeCharacteristic:(id)arg1 ;
-(void)_removeAllAccessoriesWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_updateWoWState;
-(void)_reachabilityChangedForAccessory:(id)arg1 reachable:(char)arg2 ;
-(void)_writeCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_notifyChangedCharacteristics:(id)arg1 ;
-(void)_handleRename:(id)arg1 ;
-(void)_handleAddRoom:(id)arg1 ;
-(void)_handleRemoveRoom:(id)arg1 ;
-(void)_handleAddZone:(id)arg1 ;
-(void)_handleRemoveZone:(id)arg1 ;
-(void)_handleAddServiceGroup:(id)arg1 ;
-(void)_handleRemoveServiceGroup:(id)arg1 ;
-(void)_handleAddActionSet:(id)arg1 ;
-(void)_handleRemoveActionSet:(id)arg1 ;
-(void)_handleExecuteActionSet:(id)arg1 ;
-(void)_handleAddEventTrigger:(id)arg1 ;
-(void)_handleAddTimerTrigger:(id)arg1 ;
-(void)_handleRemoveTrigger:(id)arg1 ;
-(void)_handleAddAccessory:(id)arg1 ;
-(void)_handleContinuePairingAccessory:(id)arg1 ;
-(void)_handleCancelPairingAccessory:(id)arg1 ;
-(void)_handleRemoveAccessory:(id)arg1 ;
-(void)_handleAddUser:(id)arg1 ;
-(void)_handleUserInvitations:(id)arg1 ;
-(void)_handleRemoveUser:(id)arg1 ;
-(void)_handleUnblock:(id)arg1 ;
-(void)_handleMultipleCharacteristicWrite:(id)arg1 ;
-(void)_handleMultipleCharacteristicRead:(id)arg1 ;
-(void)_handleAddUserToRelayAccessories:(id)arg1 ;
-(void)_handleAddRelayAccessTokens:(id)arg1 ;
-(void)_handleQueryUserIsAdmin:(id)arg1 ;
-(void)_handleModifyCharacteristicNotifications:(id)arg1 ;
-(void)_handleCharacterisiticsChangedNotification:(id)arg1 ;
-(void)_handleQueryRemoteAccess:(id)arg1 ;
-(void)_handleEnableRemoteAccess:(id)arg1 ;
-(void)_handleUpdateOutgoingInvitationState:(id)arg1 ;
-(void)_handleUpdateRequestForHomeInvitationFromInvitee:(id)arg1 ;
-(id)roomWithName:(id)arg1 ;
-(id)removeName:(id)arg1 ;
-(id)zoneWithName:(id)arg1 ;
-(id)zoneWithUUID:(id)arg1 ;
-(id)serviceGroupWithName:(id)arg1 ;
-(id)serviceGroupWithUUID:(id)arg1 ;
-(id)actionSetWithName:(id)arg1 ;
-(char)_validateAddingNewTriggerWithName:(id)arg1 message:(id)arg2 ;
-(void)_addNewTrigger:(id)arg1 message:(id)arg2 notification:(id)arg3 payloadAnnex:(id)arg4 ;
-(id)triggerWithName:(id)arg1 ;
-(id)triggerWithUUID:(id)arg1 ;
-(/*^block*/id)_setupCodeProviderForMessage:(id)arg1 ;
-(void)_addNewAccessories:(id)arg1 bridgeAccessory:(id)arg2 message:(id)arg3 ;
-(NSMutableDictionary *)pendingAccessoriesToAdd;
-(void)_presentPairingPasswordDialogForAccessory:(id)arg1 setupCodeAvailable:(/*^block*/id)arg2 ;
-(void)_processPairingRequestForMessage:(id)arg1 cancelPairing:(char)arg2 ;
-(id)_addAccessory:(id)arg1 configurationApp:(id)arg2 ;
-(char)remoteAccessIsEnabled;
-(void)remoteAccessEnabled:(char)arg1 ;
-(void)_addAllUsersToAccessories:(id)arg1 ;
-(void)_removeAccessoryWithUUID:(id)arg1 message:(id)arg2 ;
-(void)_removeAccessories:(id)arg1 bridgeAccessory:(id)arg2 message:(id)arg3 ;
-(void)_removeAllUsersFromAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeService:(id)arg1 ;
-(void)_removeTunneledAccessories:(id)arg1 ;
-(id)_removeAccessoriesCommon:(id)arg1 message:(id)arg2 ;
-(id)_administrator;
-(char)_verifyUserManagementPermissionForAccessory:(id)arg1 error:(id*)arg2 ;
-(id)_prepareUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 type:(unsigned)arg3 error:(id*)arg4 ;
-(id)_prepareUserManagementOperationForUser:(id)arg1 accessories:(id)arg2 type:(unsigned)arg3 error:(id*)arg4 ;
-(char)_isUserValid:(id)arg1 error:(id*)arg2 ;
-(void)_addUser:(id)arg1 userPrivilege:(unsigned)arg2 confirm:(char)arg3 message:(id)arg4 ;
-(void)_updateOutgoingInvitationForUser:(id)arg1 invitationState:(int)arg2 error:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_sendInviteRequestForUser:(id)arg1 inviteIdentifier:(id)arg2 userPrivilege:(unsigned)arg3 confirm:(char)arg4 expiryDate:(id)arg5 message:(id)arg6 ;
-(void)_addRegularUsersWithIDs:(id)arg1 message:(id)arg2 ;
-(void)_postOutgoingInvitationStateChangedNotification:(id)arg1 newInvitationState:(int)arg2 ;
-(void)_sendAccessTokensToUser:(id)arg1 user:(id)arg2 error:(id)arg3 ;
-(void)_removeUser:(id)arg1 message:(id)arg2 ;
-(void)__handleAcceptedOutgoingInvitationResponse:(id)arg1 destinationAddress:(id)arg2 publicKey:(id)arg3 username:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_sendInvitationCancelationRequestToInvitee:(id)arg1 ;
-(void)__handleCancelledOutgoingInvitation:(id)arg1 ;
-(void)_updateConfigurationStateForResidentDevice:(id)arg1 desiredConfigState:(unsigned)arg2 message:(id)arg3 ;
-(int)reachableAccessories;
-(int)lastKnownReachableAccessoryCount;
-(void)setLastKnownReachableAccessoryCount:(int)arg1 ;
-(unsigned)reachableIPAccessories;
-(int)lastKnownReachableIPAccessoryCount;
-(void)setLastKnownReachableIPAccessoryCount:(int)arg1 ;
-(void)_handleRetrievalForBlockedAccessory:(id)arg1 hapAccessory:(id)arg2 blockedBridgedAccessories:(id)arg3 unblockMessage:(id)arg4 ;
-(id)_notificationPayloadForChangedCharacterisitics:(id)arg1 ;
-(void)_notifyRemoteUsersOfChangedCharacteristics:(id)arg1 ;
-(void)_postInternalNotificationForChangedCharacterisitics:(id)arg1 modifiedAccessories:(id)arg2 changedByThisDevice:(char)arg3 ;
-(void)_notifyChangedCharacteristics:(id)arg1 toUserDeviceAddress:(id)arg2 ;
-(void)_updateBulletinBoardOfChangedCharacteristics:(id)arg1 ;
-(void)_postInternalNotificationForChangedCharacterisitics:(id)arg1 modifiedAccessories:(id)arg2 ;
-(id)_applyDeviceLockCheck:(id)arg1 ;
-(unsigned)_appendCharacteristicsToAccessoryList:(id)arg1 responseTuples:(id)arg2 forMultipleCharacteristicsRemoteWrite:(id)arg3 ;
-(void)_addResponseTuplesFromDictionary:(id)arg1 accessoryRequestMapTable:(id)arg2 responseTuples:(id)arg3 completedGroup:(id)arg4 ;
-(void)redispatchToResidentMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 ;
-(void)_notifyChangedCharacteristics:(id)arg1 identifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)writeRequestTuplesFromMessage:(id)arg1 ;
-(char)applyDeviceLockStatus:(id)arg1 ;
-(void)_readCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(unsigned)_appendCharacteristicsToAccessoryList:(id)arg1 responseTuples:(id)arg2 forMultipleCharacteristicsRemoteRead:(id)arg3 ;
-(id)_prepareMultipleCharacteristicRead:(id)arg1 ;
-(void)_remoteAccessEnabled:(char)arg1 ;
-(void)setRemoteAccessIsEnabled:(char)arg1 ;
-(NSMutableSet *)heartbeatPingMessagesQueuedWithServer;
-(id)__accessoryIdentifiers;
-(NSMutableSet *)pendingResponsesForRemoteAccessSetup;
-(void)_sendResidentInviteWithDestination:(id)arg1 ;
-(void)_addResidentWithUsername:(id)arg1 publicKey:(id)arg2 destination:(id)arg3 ;
-(NSMutableArray *)unconfiguredResidentDevices;
-(void)setAllowsRemoteAccess:(char)arg1 ;
-(void)_configureConfiguredResident:(id)arg1 desiredConfigState:(unsigned)arg2 message:(id)arg3 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 entireRoomUUID:(id)arg3 administrator:(id)arg4 homeManager:(id)arg5 ;
-(NSString *)administratorName;
-(void)_encodeObjectsWithAcessoriesWithCoder:(id)arg1 ;
-(void)_encodeActionSets:(id)arg1 coder:(id)arg2 ;
-(char)_shouldAddAccessory:(id)arg1 ;
-(void)_updateOutgoingInviationsWithCompleteUserManagementOperation:(id)arg1 ;
-(void)_configureUnconfiguredResident:(id)arg1 desiredConfigState:(unsigned)arg2 ;
-(void)_handleDidReceiveIDSMessageWithNoListenerFromAddress:(id)arg1 ;
-(char)_residentDeviceAvailable;
-(void)_remoteAccessHealthMonitorTimerDidFire;
-(void)_handleResponseForElectMessageToResident:(id)arg1 error:(id)arg2 ;
-(void)userManagementOperationDidFinish:(id)arg1 ;
-(void)accessoryManager:(id)arg1 didFindNewAccessory:(id)arg2 ;
-(void)accessoryManager:(id)arg1 didAddPairedAccessories:(id)arg2 toBridgeAccessory:(id)arg3 ;
-(void)accessoryManager:(id)arg1 didRemovePairedAccessories:(id)arg2 fromBridgeAccessory:(id)arg3 ;
-(void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2 ;
-(void)fixupReplacementAccessories:(id)arg1 commonAccessories:(id)arg2 idsDataSync:(char)arg3 dataVersion:(int)arg4 locallyAdded:(id)arg5 ;
-(void)takeOwnershipOfTriggers:(id)arg1 triggersToReactivate:(id)arg2 ;
-(void)takeOwnershipOfNotificationRegistry:(id)arg1 ;
-(void)fixupBridgeForBridgedAccessories:(id)arg1 potentialBridgeAccessories:(id)arg2 ;
-(void)computeBridgedAccessoriesForAllBridges;
-(void)takeOwnershipOfBuiltinActionSets:(id)arg1 ;
-(void)createBuiltinActionSets;
-(void)fixupUserResidentIdentifiersWithResidents:(id)arg1 ;
-(char)mergeUsersWithExistingUsers:(id)arg1 remoteAdminUser:(id)arg2 homeManager:(id)arg3 dataVersion:(int)arg4 ;
-(char)mergeOutgoingInvitations:(id)arg1 dataVersion:(int)arg2 ;
-(void)configureWithRelayManager:(id)arg1 ;
-(void)addCompanionAsResidentUser:(id)arg1 ;
-(void)modifyNotificationOnResident:(char)arg1 ignoreDeviceUnlockRequirement:(char)arg2 forCharacteristics:(id)arg3 ;
-(void)addAccessoryToCollection:(id)arg1 ;
-(id)accessoryWithName:(id)arg1 ;
-(id)userWithUUID:(id)arg1 ;
-(void)reEvaluateTriggers;
-(void)removeCharacteristic:(id)arg1 ;
-(void)removeAllAccessoriesWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)reachabilityChangedForAccessory:(id)arg1 reachable:(char)arg2 ;
-(void)writeCharacteristicValues:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)notifyChangedCharacteristics:(id)arg1 ;
-(void)checkTimerTriggers;
-(void)handleBackgroundTaskAgentJob:(id)arg1 ;
-(id)builtInActionSetInfo;
-(void)executeActionSet:(id)arg1 ;
-(void)removeTunneledAccessories:(id)arg1 ;
-(HMDUser *)administrator;
-(void)addUserToRelayAccessoriesWithConsentTokens:(id)arg1 ;
-(void)sendAccessTokensToUser:(id)arg1 user:(id)arg2 ;
-(void)removeUser:(id)arg1 ;
-(unsigned)countOfIPAccessories;
-(void)notifyOfChangedCharacterisitic:(id)arg1 ;
-(void)writeCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)readCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)updateNetworkConnectivity:(char)arg1 companionReachable:(char)arg2 ;
-(void)notifyNewRemotePeersFound:(char)arg1 remoteUsersRemoved:(id)arg2 ;
-(id)_generateWhitelistForContainer:(id)arg1 blacklistedAccessoryUUIDs:(id)arg2 ;
-(void)addUnconfiguredResidentDeviceWithName:(id)arg1 userID:(id)arg2 deviceIdentifier:(id)arg3 ;
-(void)removeUnconfiguredResidentDeviceWithUserID:(id)arg1 ;
-(void)remoteAccessHealthMonitorTimerDidFire;
-(void)setHomeLocationHandler:(HMDHomeLocationHandler *)arg1 ;
-(void)setRooms:(NSMutableArray *)arg1 ;
-(void)setZones:(NSMutableArray *)arg1 ;
-(void)setAccessories:(NSMutableArray *)arg1 ;
-(void)setServiceGroups:(NSMutableArray *)arg1 ;
-(void)setActionSets:(NSMutableArray *)arg1 ;
-(void)setOutgoingInvitations:(NSMutableArray *)arg1 ;
-(void)setPendingAccessoriesToAdd:(NSMutableDictionary *)arg1 ;
-(void)setUsers:(NSMutableArray *)arg1 ;
-(void)setUnconfiguredResidentDevices:(NSMutableArray *)arg1 ;
-(void)setRoomForEntireHome:(HMDRoom *)arg1 ;
-(void)setAdministratorName:(NSString *)arg1 ;
-(void)setHeartbeatPingMessagesQueuedWithServer:(NSMutableSet *)arg1 ;
-(void)setPendingResponsesForRemoteAccessSetup:(NSMutableSet *)arg1 ;
-(id)assistantUniqueIdentifier;
-(NSMutableArray *)services;
-(void)setServices:(NSMutableArray *)arg1 ;
-(NSMutableArray *)triggers;
-(void)setTriggers:(NSMutableArray *)arg1 ;
@end


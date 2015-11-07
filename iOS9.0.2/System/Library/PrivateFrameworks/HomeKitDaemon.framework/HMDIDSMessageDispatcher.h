/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/HMMessageDispatcher.h>

@class HMMessageDispatcher, NSMutableDictionary, HMDMessageFilterChain, HMDAdminEnforcementMessageFilter, HMDIdentityRegistry, HMDNotificationRelay, HMDIDSMessageTransport, HMDHomeManager, HMDSecureSessionNotifications, NSArray;

@interface HMDIDSMessageDispatcher : HMMessageDispatcher {

	HMMessageDispatcher* _recvDispatcher;
	NSMutableDictionary* _remoteGateways;
	HMDMessageFilterChain* _msgFilterChain;
	HMDAdminEnforcementMessageFilter* _adminMsgFilter;
	NSMutableDictionary* _activeClientSecureSessions;
	NSMutableDictionary* _activeServerSecureSessions;
	HMDIdentityRegistry* _identityRegistry;
	HMDNotificationRelay* _notificationRelay;
	HMMessageDispatcher* _notificationDispatcher;
	HMDIDSMessageTransport* _idsProxyTransport;
	HMDHomeManager* _homeManager;
	NSMutableDictionary* _currentHomeConfigurations;
	HMDSecureSessionNotifications* _sessionNotifications;

}

@property (getter=isAccountActive,nonatomic,readonly) char accountActive; 
@property (nonatomic,readonly) NSArray * residentDevices; 
@property (nonatomic,readonly) NSArray * transientDevices; 
@property (nonatomic,readonly) NSArray * pairedWatchDevices; 
@property (nonatomic,readonly) NSArray * reachableCompanionDevices; 
@property (nonatomic,readonly) NSArray * reachableWatchDevices; 
@property (nonatomic,retain) HMMessageDispatcher * recvDispatcher;                              //@synthesize recvDispatcher=_recvDispatcher - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remoteGateways;                              //@synthesize remoteGateways=_remoteGateways - In the implementation block
@property (nonatomic,retain) HMDMessageFilterChain * msgFilterChain;                            //@synthesize msgFilterChain=_msgFilterChain - In the implementation block
@property (nonatomic,retain) HMDAdminEnforcementMessageFilter * adminMsgFilter;                 //@synthesize adminMsgFilter=_adminMsgFilter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeClientSecureSessions;                  //@synthesize activeClientSecureSessions=_activeClientSecureSessions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeServerSecureSessions;                  //@synthesize activeServerSecureSessions=_activeServerSecureSessions - In the implementation block
@property (nonatomic,retain) HMDIdentityRegistry * identityRegistry;                            //@synthesize identityRegistry=_identityRegistry - In the implementation block
@property (nonatomic,retain) HMDNotificationRelay * notificationRelay;                          //@synthesize notificationRelay=_notificationRelay - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * notificationDispatcher;                      //@synthesize notificationDispatcher=_notificationDispatcher - In the implementation block
@property (assign,nonatomic,__weak) HMDIDSMessageTransport * idsProxyTransport;                 //@synthesize idsProxyTransport=_idsProxyTransport - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                               //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentHomeConfigurations;                   //@synthesize currentHomeConfigurations=_currentHomeConfigurations - In the implementation block
@property (nonatomic,retain) HMDSecureSessionNotifications * sessionNotifications;              //@synthesize sessionNotifications=_sessionNotifications - In the implementation block
+(char)isWhitelistedLocalMessage:(id)arg1 ;
-(HMDHomeManager *)homeManager;
-(void)deregisterReceiver:(id)arg1 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(/*^block*/id)arg3 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(void)setMsgFilterChain:(HMDMessageFilterChain *)arg1 ;
-(void)setIdentityRegistry:(HMDIdentityRegistry *)arg1 ;
-(void)setIdsProxyTransport:(HMDIDSMessageTransport *)arg1 ;
-(HMDIDSMessageTransport *)idsProxyTransport;
-(HMDMessageFilterChain *)msgFilterChain;
-(HMDIdentityRegistry *)identityRegistry;
-(id)initWithIDSTransport:(id)arg1 idsProxyTransport:(id)arg2 messageFilterChain:(id)arg3 identityRegistry:(id)arg4 notificationRelayDispatcher:(id)arg5 ;
-(void)configureNotificationDispatcher:(id)arg1 ;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)configureHomeManager:(id)arg1 ;
-(NSArray *)residentDevices;
-(void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 completionQueue:(id)arg3 deliveryCompletionHandler:(/*^block*/id)arg4 ;
-(void)dispatchMessage:(id)arg1 target:(id)arg2 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(HMMessageDispatcher *)recvDispatcher;
-(void)deregisterForMessage:(id)arg1 receiver:(id)arg2 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setRecvDispatcher:(HMMessageDispatcher *)arg1 ;
-(HMDNotificationRelay *)notificationRelay;
-(HMDSecureSessionNotifications *)sessionNotifications;
-(void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 ;
-(void)setNotificationRelay:(HMDNotificationRelay *)arg1 ;
-(void)setSessionNotifications:(HMDSecureSessionNotifications *)arg1 ;
-(char)isAccountActive;
-(NSArray *)transientDevices;
-(NSMutableDictionary *)currentHomeConfigurations;
-(HMDAdminEnforcementMessageFilter *)adminMsgFilter;
-(NSMutableDictionary *)remoteGateways;
-(id)_pairedWatchDevices;
-(NSArray *)pairedWatchDevices;
-(id)_pairedCompanionDevices;
-(id)_reachableCompanionDevices;
-(NSArray *)reachableCompanionDevices;
-(id)_reachableWatchDevices;
-(NSArray *)reachableWatchDevices;
-(void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)_sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(char)_watchCompanionCommunication:(id)arg1 ;
-(void)_sendSecureMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)_setRemoteAccessPeer:(id)arg1 forHome:(id)arg2 sendNotification:(char)arg3 ;
-(void)setNotificationDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)_handleElectDeviceForUserResponse:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)activeClientSecureSessions;
-(char)_checkTransportProtocol;
-(char)_checkAuthorizationForMessage:(id)arg1 errorReason:(id*)arg2 ;
-(char)_handleInternalIDSMessage:(id)arg1 fromID:(id)arg2 ;
-(char)_haveAllCapabilities:(id)arg1 ;
-(id)prepareAnswerForRequestedCapabilities:(id)arg1 ;
-(void)_handleSecureClientMessage:(id)arg1 fromID:(id)arg2 ;
-(void)_handleSecureServerMessage:(id)arg1 fromID:(id)arg2 ;
-(void)_handleElectDeviceForIDSSession:(id)arg1 ;
-(NSMutableDictionary *)activeServerSecureSessions;
-(void)updateHome:(id)arg1 configurationVersion:(int)arg2 ;
-(void)removeHome:(id)arg1 ;
-(void)updateLocalAdministratorName;
-(void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 toResidentForHomeWithUUID:(id)arg4 ;
-(id)pairedCompanionDevices;
-(void)setRemoteAccessPeer:(id)arg1 forHome:(id)arg2 ;
-(void)disableRemoteSessionForAddresses:(id)arg1 ;
-(void)setRemoteGateways:(NSMutableDictionary *)arg1 ;
-(void)setAdminMsgFilter:(HMDAdminEnforcementMessageFilter *)arg1 ;
-(void)setActiveClientSecureSessions:(NSMutableDictionary *)arg1 ;
-(void)setActiveServerSecureSessions:(NSMutableDictionary *)arg1 ;
-(HMMessageDispatcher *)notificationDispatcher;
-(void)setCurrentHomeConfigurations:(NSMutableDictionary *)arg1 ;
@end


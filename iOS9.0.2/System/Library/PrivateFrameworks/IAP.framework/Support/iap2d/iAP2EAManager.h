/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iap2d/iap2d-Structs.h>
@class NSLock, NSMutableDictionary;

@interface iAP2EAManager : NSObject {

	NSLock* _connectedAccessoriesLock;
	BOOL _bLocationDeviceEnabled;
	BOOL _bCameraDeviceEnabled;
	NSMutableDictionary* _clients;
	NSLock* _clientLock;

}

@property (nonatomic,readonly) NSLock * connectedAccessoriesLock;              //@synthesize connectedAccessoriesLock=_connectedAccessoriesLock - In the implementation block
+(void)removeConnectionFromAlertList:(id)arg1 ;
+(id)newPlistForAccessory:(id)arg1 ;
+(unsigned)generateClientID;
+(id)stringForClientID:(unsigned)arg1 ;
+(void)_updatePlistWithAccessoryProtocolsInternal:(id)arg1 ;
+(id)sharedManager;
-(void)updateTimeSyncInfo:(unsigned)arg1 withNewOffset:(id)arg2 ;
-(void)updateAccessory:(id)arg1 ;
-(void)updatePointOfInterestInformationStatusForIdentifier:(id)arg1 didSucceed:(char)arg2 parametersUsed:(id)arg3 ;
-(void)detachAccessory:(id)arg1 ;
-(void)setLocationDeviceEnabled:(BOOL)arg1 forClientID:(unsigned)arg2 ;
-(void)locationDeviceSetFilter:(id)arg1 ;
-(unsigned)addClientWithCapabilities:(unsigned)arg1 auditToken:(SCD_Struct_iA17)arg2 currentClientID:(unsigned)arg3 xpcConnection:(id)arg4 andBundleId:(id)arg5 ;
-(char)accessoryForConnection:(id)arg1 ;
-(char)openSessionForClientID:(unsigned)arg1 connection:(id)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short*)arg4 ;
-(id)sessionForAccessoryWithConnection:(id)arg1 andSessionID:(unsigned short)arg2 ;
-(char)closeSessionForConnection:(id)arg1 sessionID:(unsigned short)arg2 notifyApp:(char)arg3 ;
-(void)notifyOfAccessoryConnectionEvent:(BOOL)arg1 ;
-(char)sessionsOpenForDisplayIdentifer:(const char*)arg1 ;
-(void)attachAccessory:(id)arg1 ;
-(void)removeClientForXPCConnection:(id)arg1 ;
-(BOOL)isLocationDeviceEnabled;
-(void)locationDeviceNMEAAvailable;
-(void)updateCameraUpdate:(unsigned)arg1 withNewUpdate:(id)arg2 ;
-(NSLock *)connectedAccessoriesLock;
-(id)_EADirectProtocolArrayForDeviceID:(unsigned long long)arg1 ;
-(void)_shouldPostNoAppAlert:(id)arg1 ;
-(void)_takeClientAssertionsForAccessoryConnection;
-(void)logAccessoryAttach:(id)arg1 reason:(id)arg2 ;
-(void)_notifyiapdOfAccessoryConnectionEvent:(BOOL)arg1 ;
-(void)updateValueFromIap:(id)arg1 forPort:(id)arg2 andPortProperty:(id)arg3 forAccessory:(unsigned)arg4 updateApp:(BOOL)arg5 ;
-(void)_takeClientAssertionsForAccessoryDisconnection;
-(void)logAccessoryDetach:(id)arg1 reason:(id)arg2 ;
-(char)isAllowedToOpenSessionForConnection:(id)arg1 andProtocolID:(id)arg2 ;
-(char)_isProtocolContainedInWhitelist:(id)arg1 ;
-(void)_unregisteredClientAssertionTimerFired:(id)arg1 ;
-(id)connectionIDObjectForConnectionID:(unsigned)arg1 ;
-(void)removeClientWithID:(unsigned)arg1 ;
-(void)updateValueFromIap:(id)arg1 forPort:(id)arg2 andPortProperty:(id)arg3 forAccessory:(unsigned)arg4 ;
-(void)updateValueFromApp:(id)arg1 ;
-(id)valueForProperty:(id)arg1 forAccessoryConnection:(id)arg2 ;
-(void)takeProcessAssertionForBundleID:(id)arg1 ;
-(void)updateOOBBTPairingStatusForConnectionID:(unsigned long long)arg1 withMACAddress:(id)arg2 withStatus:(unsigned char)arg3 ;
-(void)updateVehicleStatus:(unsigned)arg1 withNewStatus:(id)arg2 ;
-(void)updatePlistWithProtocolsForConnection:(id)arg1 ;
-(id)connectedAccessories;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)removeAllClients;
-(void)_applicationStateChanged:(id)arg1 ;
@end


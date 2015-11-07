/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAPAccessoryServer.h>
#import <libobjc.A.dylib/HAPHTTPClientDelegate.h>
#import <libobjc.A.dylib/HAPHTTPClientDebugDelegate.h>

@class NSString, NSDictionary, HAPAccessoryServerBrowserIP, NSArray, NSMutableArray, HAPAccessory, HAPHTTPClient;

@interface HAPAccessoryServerIP : HAPAccessoryServer <HAPHTTPClientDelegate, HAPHTTPClientDebugDelegate> {

	MFiSAPRef _mfiSAP;
	PairingSessionPrivateRef _pairingSession;
	unsigned long long _featureFlags;
	char _establishingSecureConnection;
	char _hasTunnelService;
	NSString* _deviceID;
	NSString* _model;
	NSString* _protocolVersion;
	NSString* _sourceVersion;
	unsigned _configNumber;
	unsigned _statusFlags;
	NSDictionary* _bonjourDeviceInfo;
	HAPAccessoryServerBrowserIP* _browser;
	NSString* _accessoryServerName;
	NSArray* _ipServices;
	NSMutableArray* _queuedOperations;
	HAPAccessory* _primaryAccessoryForServer;
	HAPHTTPClient* _httpClient;
	/*^block*/id _pairVerifyCompletionBlock;
	NSString* _controllerUsername;
	/*^block*/id _netServiceResolveCompletionBlock;

}

@property (nonatomic,copy) NSString * deviceID;                                         //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) NSString * model;                                            //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * protocolVersion;                                  //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,copy) NSString * sourceVersion;                                    //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (assign,nonatomic) unsigned configNumber;                                     //@synthesize configNumber=_configNumber - In the implementation block
@property (assign,nonatomic) unsigned statusFlags;                                      //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,retain) NSDictionary * bonjourDeviceInfo;                          //@synthesize bonjourDeviceInfo=_bonjourDeviceInfo - In the implementation block
@property (assign,nonatomic,__weak) HAPAccessoryServerBrowserIP * browser;              //@synthesize browser=_browser - In the implementation block
@property (nonatomic,copy) NSString * accessoryServerName;                              //@synthesize accessoryServerName=_accessoryServerName - In the implementation block
@property (nonatomic,retain) NSArray * ipServices;                                      //@synthesize ipServices=_ipServices - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedOperations;                         //@synthesize queuedOperations=_queuedOperations - In the implementation block
@property (nonatomic,retain) HAPAccessory * primaryAccessoryForServer;                  //@synthesize primaryAccessoryForServer=_primaryAccessoryForServer - In the implementation block
@property (nonatomic,retain) HAPHTTPClient * httpClient;                                //@synthesize httpClient=_httpClient - In the implementation block
@property (nonatomic,copy) id pairVerifyCompletionBlock;                                //@synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock - In the implementation block
@property (nonatomic,retain) NSString * controllerUsername;                             //@synthesize controllerUsername=_controllerUsername - In the implementation block
@property (nonatomic,copy) id netServiceResolveCompletionBlock;                         //@synthesize netServiceResolveCompletionBlock=_netServiceResolveCompletionBlock - In the implementation block
@property (assign) char establishingSecureConnection;                                   //@synthesize establishingSecureConnection=_establishingSecureConnection - In the implementation block
@property (assign,nonatomic) char hasTunnelService;                                     //@synthesize hasTunnelService=_hasTunnelService - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)name;
-(void)setCategory:(id)arg1 ;
-(void)invalidate;
-(id)identifier;
-(NSString *)model;
-(void)_reset;
-(void)setModel:(NSString *)arg1 ;
-(void)setQueuedOperations:(NSMutableArray *)arg1 ;
-(void)setEstablishingSecureConnection:(char)arg1 ;
-(void)setHasTunnelService:(char)arg1 ;
-(char)_parseAndValidateTXTRecord;
-(void)_tearDownSession;
-(id)_deviceID;
-(HAPHTTPClient *)httpClient;
-(void)setHttpClient:(HAPHTTPClient *)arg1 ;
-(unsigned)configNumber;
-(unsigned)statusFlags;
-(char)_checkPairedState;
-(NSString *)accessoryServerName;
-(void)_updateWithBonjourDeviceInfo:(id)arg1 ;
-(void)setBonjourDeviceInfo:(NSDictionary *)arg1 ;
-(char)_delegateRespondsToSelector:(SEL)arg1 ;
-(char)_isSessionEstablished;
-(void)_getAttributeDatabase;
-(void)_establishSecureConnectionAndFetchAttributeDatabase;
-(NSArray *)ipServices;
-(id)_serverIdentifier;
-(char)establishingSecureConnection;
-(void)setPairVerifyCompletionBlock:(id)arg1 ;
-(void)_establishSecureSession;
-(void)_isAccessoryPublicKeyPresent:(char*)arg1 registeredWithHomeKit:(char*)arg2 ;
-(long)_pairSetupStart;
-(long)_continuePairingAfterAuthPrompt;
-(long)_pairSetupTryPassword:(id)arg1 ;
-(void)_error:(id)arg1 forReadCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableArray *)queuedOperations;
-(void)_error:(id)arg1 forWriteCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_startAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(char)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_enableEvents:(char)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)_queueReadCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleReadResponseObject:(id)arg1 type:(unsigned)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 queue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_handleHTTPClientErrors;
-(void)_queueWriteCharacteristicValues:(id)arg1 queue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_handleWriteResponseObject:(id)arg1 type:(unsigned)arg2 httpStatus:(int)arg3 error:(id)arg4 requestTuples:(id)arg5 queue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_handleUpdatesForCharacteristics:(id)arg1 ;
-(void)_queueEnableEvents:(char)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)_handleEventResponseObject:(id)arg1 type:(unsigned)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 requestedEventState:(char)arg6 completion:(/*^block*/id)arg7 queue:(id)arg8 ;
-(char)_processEvent:(id)arg1 matchedCharacteristic:(id*)arg2 ;
-(NSDictionary *)bonjourDeviceInfo;
-(char)_parseTXTRecordDictionary:(id)arg1 ;
-(void)_setDeviceIDWithString:(id)arg1 ;
-(void)setConfigNumber:(unsigned)arg1 ;
-(void)setStatusFlags:(unsigned)arg1 ;
-(void)_processQueuedOperationsWithError:(id)arg1 ;
-(void)_parseAttributeDatabase:(id)arg1 transaction:(id)arg2 ;
-(void)setPrimaryAccessoryForServer:(HAPAccessory *)arg1 ;
-(char)_updateAccessories:(id)arg1 ;
-(void)__registerForInternalCharacteristicNotifications;
-(char)_mergeExistingAccessory:(id)arg1 withNewAccessory:(id)arg2 ;
-(char)_mergeExistingService:(id)arg1 withNewService:(id)arg2 ;
-(long)_pairVerifyStart;
-(long)_ensureHTTPClientSetUp;
-(id)pairVerifyCompletionBlock;
-(HAPAccessoryServerBrowserIP *)browser;
-(NSString *)controllerUsername;
-(long)_handlePairSetupCompletionWithData:(id)arg1 ;
-(long)_ensurePairingSessionIsInitializedWithType:(unsigned)arg1 ;
-(long)_handlePairVerifyCompletionWithData:(id)arg1 ;
-(void)_queueAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(char)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handlePairingsResponseObject:(id)arg1 type:(unsigned)arg2 httpStatus:(int)arg3 httpError:(id)arg4 removeRequest:(char)arg5 completionQueue:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)httpClient:(id)arg1 didReceiveEvent:(id)arg2 ;
-(void)httpClientDidCloseConnectionDueToServer:(id)arg1 ;
-(void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3 ;
-(void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3 ;
-(id)initWithBonjourDeviceInfo:(id)arg1 keyStore:(id)arg2 browser:(id)arg3 ;
-(id)_serverName;
-(void)updateWithBonjourDeviceInfo:(id)arg1 ;
-(void)handleUpdatesForCharacteristics:(id)arg1 ;
-(char)isSessionEstablised;
-(void)setBrowser:(HAPAccessoryServerBrowserIP *)arg1 ;
-(void)setAccessoryServerName:(NSString *)arg1 ;
-(void)setIpServices:(NSArray *)arg1 ;
-(HAPAccessory *)primaryAccessoryForServer;
-(void)setControllerUsername:(NSString *)arg1 ;
-(id)netServiceResolveCompletionBlock;
-(void)setNetServiceResolveCompletionBlock:(id)arg1 ;
-(char)hasTunnelService;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(void)setSourceVersion:(NSString *)arg1 ;
-(NSString *)sourceVersion;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
-(void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)isPaired;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enableEvents:(char)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(char)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(char)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(char)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)primaryAccessory;
-(void)startPairing;
-(char)stopPairingWithError:(id*)arg1 ;
-(char)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(void)continuePairingAfterAuthPrompt;
-(void)discoverAccessories;
-(id)services;
-(int)linkType;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_parameters;
@class NSObject, NSString, NSData, NSSet, NSUUID, NSURL, NSDictionary, NWAddressEndpoint, NWInterface;

@interface NWParameters : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_parameters> _internalParameters;

}

@property (copy) NSString * account; 
@property (assign) unsigned trafficClass; 
@property (assign) char prohibitExpensivePaths; 
@property (assign) char reduceBuffering; 
@property (assign) char disableNagleAlgorithm; 
@property (assign) char enableTLS; 
@property (copy) NSData * TLSSessionID; 
@property (copy) NSSet * SSLCipherSuites; 
@property (assign) unsigned minimumSSLProtocolVersion; 
@property (assign) unsigned maximumSSLProtocolVersion; 
@property (copy,readonly) NSString * privateDescription; 
@property (assign) unsigned short ipProtocol; 
@property (assign) int pid; 
@property (assign) unsigned uid; 
@property (copy) NSUUID * processUUID; 
@property (copy) NSUUID * effectiveProcessUUID; 
@property (copy) NSString * effectiveBundleID; 
@property (assign) char useLongOutstandingQueries; 
@property (assign) char useAWDL; 
@property (assign) char useP2P; 
@property (assign) char resolvePTR; 
@property (assign) char allowPowerNap; 
@property (assign) char requirePower; 
@property (assign) int dataProtectionClass; 
@property (assign) char multipath; 
@property (assign) char persistent; 
@property (assign) unsigned char requiredAddressFamily; 
@property (copy) NSURL * url; 
@property (copy) NSDictionary * proxyConfiguration; 
@property (retain) NWAddressEndpoint * localAddress; 
@property (assign) char reuseLocalAddress; 
@property (retain) NWInterface * requiredInterface; 
@property (assign) int requiredInterfaceType; 
@property (assign) unsigned long long startTime; 
@property (assign) unsigned long long duration; 
@property (assign) unsigned long long workload; 
@property (assign) char enableTFO; 
@property (assign) char enableExtendedBackgroundIdle; 
@property (retain) NSObject*<OS_nw_parameters> internalParameters;              //@synthesize internalParameters=_internalParameters - In the implementation block
@property (assign) char indefinite; 
@property (assign) char noProxy; 
@property (getter=isValid,readonly) char valid; 
@property (readonly) char isConditionalConnection; 
@property (readonly) char prohibitCellular; 
@property (readonly) NSString * requiredCellularService; 
@property (assign) long long ledbellyID; 
@property (retain) NSObject*<OS_xpc_object> ledbellyEndpoints; 
@property (retain) NSString * poolName; 
@property (assign) long long poolPriority; 
@property (retain) NSString * launchOnDemandLabel; 
@property (assign) unsigned long long launchOnDemandJob; 
@property (assign) char prohibitFallback; 
@property (getter=isPassive) char passive; 
@property (assign) char useDUET; 
@property (assign) char connectedBySocket; 
@property (assign) char connectedByLaunchOnDemand; 
@property (assign) char passiveConditionalConnection; 
@property (assign) char forceFallbackEligibility; 
@property (assign) char forceFallbackWin; 
-(char)persistent;
-(void)setPoolPriority:(long long)arg1 ;
-(NSString *)privateDescription;
-(void)setRequiredInterface:(NWInterface *)arg1 ;
-(void)setEnableTLS:(char)arg1 ;
-(NSData *)TLSSessionID;
-(void)setTLSSessionID:(NSData *)arg1 ;
-(NSSet *)SSLCipherSuites;
-(void)setSSLCipherSuites:(NSSet *)arg1 ;
-(unsigned)minimumSSLProtocolVersion;
-(void)setMinimumSSLProtocolVersion:(unsigned)arg1 ;
-(unsigned)maximumSSLProtocolVersion;
-(void)setMaximumSSLProtocolVersion:(unsigned)arg1 ;
-(void)setIpProtocol:(unsigned short)arg1 ;
-(unsigned short)ipProtocol;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)duration;
-(NSURL *)url;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setStartTime:(unsigned long long)arg1 ;
-(char)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPersistent:(char)arg1 ;
-(unsigned)uid;
-(unsigned long long)startTime;
-(id)initWithParameters:(id)arg1 ;
-(int)dataProtectionClass;
-(NWAddressEndpoint *)localAddress;
-(void)setLocalAddress:(NWAddressEndpoint *)arg1 ;
-(void)setUid:(unsigned)arg1 ;
-(void)setDataProtectionClass:(int)arg1 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(char)arg2 ;
-(char)connectedBySocket;
-(void)setPassiveConditionalConnection:(char)arg1 ;
-(void)prohibitInterfaceType:(int)arg1 ;
-(void)setSourceApplicationWithToken:(SCD_Struct_NW7)arg1 ;
-(char)copyEffectiveAuditToken:(SCD_Struct_NW7*)arg1 ;
-(char)noProxy;
-(int)requiredInterfaceType;
-(void)setUseLongOutstandingQueries:(char)arg1 ;
-(NSUUID *)processUUID;
-(void)prohibitInterfaceSubtype:(int)arg1 ;
-(void)setIndefinite:(char)arg1 ;
-(long long)poolPriority;
-(NSUUID *)effectiveProcessUUID;
-(void)setRequiredAddressFamily:(unsigned char)arg1 ;
-(void)setWorkload:(unsigned long long)arg1 ;
-(NSString *)poolName;
-(void)setInternalParameters:(NSObject*<OS_nw_parameters>)arg1 ;
-(void)setUseP2P:(char)arg1 ;
-(void)setUseDUET:(char)arg1 ;
-(char)enableExtendedBackgroundIdle;
-(char)useLongOutstandingQueries;
-(void)setEffectiveProcessUUID:(NSUUID *)arg1 ;
-(void)setPoolName:(NSString *)arg1 ;
-(void)setUseAWDL:(char)arg1 ;
-(void)setNoProxy:(char)arg1 ;
-(void)prohibitInterface:(id)arg1 ;
-(id)copyStrippedParameters;
-(char)enableTLS;
-(char)useDUET;
-(void)setResolvePTR:(char)arg1 ;
-(void)prohibitNetworkAgentWithUUID:(id)arg1 ;
-(void)setConnectedByLaunchOnDemand:(char)arg1 ;
-(char)resolvePTR;
-(NSString *)launchOnDemandLabel;
-(unsigned long long)workload;
-(char)enableTFO;
-(NSDictionary *)proxyConfiguration;
-(char)isConditionalConnection;
-(int)sslProtocolWithTLSVersion:(unsigned short)arg1 ;
-(char)hasDelegatedProcessUUID;
-(void)setLaunchOnDemandLabel:(NSString *)arg1 ;
-(char)connectedByLaunchOnDemand;
-(void)requireNetworkAgentWithUUID:(id)arg1 ;
-(void)requireNetworkAgentWithDomain:(id)arg1 type:(id)arg2 ;
-(void)setProcessUUID:(NSUUID *)arg1 ;
-(void)setAllowPowerNap:(char)arg1 ;
-(char)forceFallbackWin;
-(void)setSourceApplicationWithBundleID:(id)arg1 ;
-(char)requirePower;
-(char)useP2P;
-(unsigned char)requiredAddressFamily;
-(void)setConnectedBySocket:(char)arg1 ;
-(char)disableNagleAlgorithm;
-(char)reduceBuffering;
-(void)setRequirePower:(char)arg1 ;
-(void)setReuseLocalAddress:(char)arg1 ;
-(char)prohibitFallback;
-(NSString *)requiredCellularService;
-(void)setLaunchOnDemandJob:(unsigned long long)arg1 ;
-(char)multipath;
-(char)hasProhibitedNetworkAgents;
-(void)setLedbellyID:(long long)arg1 ;
-(char)hasDelegatedPIDForOriginatingPID:(int)arg1 ;
-(long long)ledbellyID;
-(void)setEnableExtendedBackgroundIdle:(char)arg1 ;
-(char)reuseLocalAddress;
-(char)hasRequiredNetworkAgents;
-(void)setForceFallbackWin:(char)arg1 ;
-(unsigned long long)launchOnDemandJob;
-(char)prohibitExpensivePaths;
-(void)setProxyConfiguration:(NSDictionary *)arg1 ;
-(void)setPassive:(char)arg1 ;
-(unsigned short)tlsVersionWithSSLProtocol:(int)arg1 ;
-(void)setEnableTFO:(char)arg1 ;
-(void)setMultipath:(char)arg1 ;
-(NSObject*<OS_xpc_object>)ledbellyEndpoints;
-(NSObject*<OS_nw_parameters>)internalParameters;
-(void)setForceFallbackEligibility:(char)arg1 ;
-(void)setReduceBuffering:(char)arg1 ;
-(void)setLedbellyEndpoints:(NSObject*<OS_xpc_object>)arg1 ;
-(char)useAWDL;
-(void)setProhibitExpensivePaths:(char)arg1 ;
-(char)passiveConditionalConnection;
-(char)forceFallbackEligibility;
-(NWInterface *)requiredInterface;
-(char)isPassive;
-(char)prohibitCellular;
-(char)indefinite;
-(char)allowPowerNap;
-(void)setDisableNagleAlgorithm:(char)arg1 ;
-(void)setProhibitFallback:(char)arg1 ;
-(void)setAccount:(NSString *)arg1 ;
-(NSString *)account;
-(void)setRequiredInterfaceType:(int)arg1 ;
-(void)prohibitNetworkAgentsWithDomain:(id)arg1 type:(id)arg2 ;
-(NSString *)effectiveBundleID;
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setTrafficClass:(unsigned)arg1 ;
-(unsigned)trafficClass;
@end


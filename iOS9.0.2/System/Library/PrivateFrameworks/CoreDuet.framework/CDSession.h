/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CDDClientConnection, NSSet, NSMutableDictionary, NSObject, NSArray;

@interface CDSession : NSObject {

	CDDClientConnection* _cddClientConnection;
	NSSet* _deviceList;
	NSMutableDictionary* _cachedAttributes;
	NSMutableDictionary* _cachedBudgets;
	NSObject*<OS_dispatch_queue> _cacheSerializerQ;
	unsigned long long _clientId;
	char _verbose;
	char _enabledCaching;
	int _deviceChangeToken;
	int duetRestartToken;
	NSArray* nonBundles;
	/*^block*/id _deviceHandler;
	char _unlocked;

}

@property (readonly) CDDClientConnection * cddClientConnection;                //@synthesize cddClientConnection=_cddClientConnection - In the implementation block
@property (assign) unsigned long long clientId;                                //@synthesize clientId=_clientId - In the implementation block
@property (assign) char unlocked;                                              //@synthesize unlocked=_unlocked - In the implementation block
@property (retain) NSSet * deviceList;                                         //@synthesize deviceList=_deviceList - In the implementation block
@property (retain) NSMutableDictionary * cachedAttributes;                     //@synthesize cachedAttributes=_cachedAttributes - In the implementation block
@property (retain) NSMutableDictionary * cachedBudgets;                        //@synthesize cachedBudgets=_cachedBudgets - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> cacheSerializerQ;              //@synthesize cacheSerializerQ=_cacheSerializerQ - In the implementation block
@property (assign) char verbose;                                               //@synthesize verbose=_verbose - In the implementation block
@property (assign) char enabledCaching;                                        //@synthesize enabledCaching=_enabledCaching - In the implementation block
@property (assign) int deviceChangeToken;                                      //@synthesize deviceChangeToken=_deviceChangeToken - In the implementation block
@property (copy) id deviceHandler;                                             //@synthesize deviceHandler=_deviceHandler - In the implementation block
+(id)sharedSessionWithClientId:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(char)deleteClientDataWithError:(id*)arg1 ;
-(CDDClientConnection *)cddClientConnection;
-(id)copyDevicesUncached;
-(id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(int)arg3 withOptions:(unsigned)arg4 error:(id*)arg5 ;
-(int)deviceChangeToken;
-(id)initWithClientId:(unsigned long long)arg1 enableCaching:(char)arg2 ;
-(char)loadDylibs;
-(char)isClassCLocked;
-(void)setUnlocked:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheSerializerQ;
-(NSMutableDictionary *)cachedAttributes;
-(id)attributeForName:(id)arg1 type:(int)arg2 clientId:(unsigned long long)arg3 error:(id*)arg4 ;
-(NSMutableDictionary *)cachedBudgets;
-(id)attributeComponentsFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)attributeFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)getDevicesInternal;
-(id)deviceHandler;
-(char)registerForDeviceChanges;
-(char)setNonAppBundleIdWithError:(id)arg1 error:(id*)arg2 ;
-(id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(int)arg3 error:(id*)arg4 ;
-(id)attributeFromFullname:(id)arg1 error:(id*)arg2 ;
-(id)representationStringFromAttribute:(id)arg1 value:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)attributeExtendedComponentsFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)getDevices;
-(char)setDevicesChangedHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)getDeviceFromDescription:(id)arg1 error:(id*)arg2 ;
-(char)broadcastSystemDataWithError:(id*)arg1 ;
-(char)setActiveComplications:(id)arg1 error:(id*)arg2 ;
-(char)setGlancesLingeredOn:(id)arg1 error:(id*)arg2 ;
-(char)unlocked;
-(void)setCachedAttributes:(NSMutableDictionary *)arg1 ;
-(void)setCachedBudgets:(NSMutableDictionary *)arg1 ;
-(void)setCacheSerializerQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)verbose;
-(void)setVerbose:(char)arg1 ;
-(char)enabledCaching;
-(void)setEnabledCaching:(char)arg1 ;
-(void)setDeviceChangeToken:(int)arg1 ;
-(void)setDeviceHandler:(id)arg1 ;
-(NSSet *)deviceList;
-(void)setDeviceList:(NSSet *)arg1 ;
-(char)setNonAppBundlIdWithError:(id)arg1 error:(id*)arg2 ;
-(id)initWithClientId:(unsigned long long)arg1 ;
-(id)attributeForName:(id)arg1 type:(int)arg2 error:(id*)arg3 ;
-(id)budgetForName:(id)arg1 type:(int)arg2 error:(id*)arg3 ;
-(id)attributeNamesWithError:(id*)arg1 ;
-(id)registerAttributeWithName:(id)arg1 type:(int)arg2 dataProtectionClass:(id)arg3 error:(id*)arg4 ;
-(id)representationStringFromAttribute:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)budgetNamesWithError:(id*)arg1 ;
-(void)setClientId:(unsigned long long)arg1 ;
-(unsigned long long)clientId;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface IDSDAccountSendMessageContext : NSObject {

	char _serviceIsDSBased;
	char _serviceWantsReflectedSend;
	char _serviceAllowProxyDelivery;
	char _serviceAllowLocalDelivery;
	char _serviceAllowWiProxDelivery;
	char _serviceUseiMessageCallerID;
	char _isRegistrationActive;
	char _shouldIncludeDefaultDevice;
	NSString* _serviceIdentifier;
	NSString* _servicePushTopic;
	NSArray* _serviceDuetIdentifiers;
	unsigned _serviceAdHocType;
	int _accountType;
	NSString* _primaryRegistrationDSHandle;
	NSArray* _primaryRegistrationURIs;
	NSArray* _dependentRegistrations;
	NSDictionary* _defaultPairedDependentRegistrations;
	NSArray* _appleIDPrimaryDependentRegistrations;
	NSArray* _aliasStrings;
	NSString* _accountDescription;
	NSString* _accountDisplayName;
	id _listenerID;
	NSDictionary* _entitlements;
	unsigned _dataProtectionClass;
	NSString* _subService;

}

@property (nonatomic,retain) NSString * serviceIdentifier;                                    //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * servicePushTopic;                                     //@synthesize servicePushTopic=_servicePushTopic - In the implementation block
@property (nonatomic,retain) NSArray * serviceDuetIdentifiers;                                //@synthesize serviceDuetIdentifiers=_serviceDuetIdentifiers - In the implementation block
@property (assign,nonatomic) unsigned serviceAdHocType;                                       //@synthesize serviceAdHocType=_serviceAdHocType - In the implementation block
@property (assign,nonatomic) char serviceIsDSBased;                                           //@synthesize serviceIsDSBased=_serviceIsDSBased - In the implementation block
@property (assign,nonatomic) char serviceWantsReflectedSend;                                  //@synthesize serviceWantsReflectedSend=_serviceWantsReflectedSend - In the implementation block
@property (assign,nonatomic) char serviceAllowProxyDelivery;                                  //@synthesize serviceAllowProxyDelivery=_serviceAllowProxyDelivery - In the implementation block
@property (assign,nonatomic) char serviceAllowLocalDelivery;                                  //@synthesize serviceAllowLocalDelivery=_serviceAllowLocalDelivery - In the implementation block
@property (assign,nonatomic) char serviceAllowWiProxDelivery;                                 //@synthesize serviceAllowWiProxDelivery=_serviceAllowWiProxDelivery - In the implementation block
@property (assign,nonatomic) char serviceUseiMessageCallerID;                                 //@synthesize serviceUseiMessageCallerID=_serviceUseiMessageCallerID - In the implementation block
@property (assign,nonatomic) int accountType;                                                 //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,retain) NSString * primaryRegistrationDSHandle;                          //@synthesize primaryRegistrationDSHandle=_primaryRegistrationDSHandle - In the implementation block
@property (nonatomic,retain) NSArray * primaryRegistrationURIs;                               //@synthesize primaryRegistrationURIs=_primaryRegistrationURIs - In the implementation block
@property (assign,nonatomic) char isRegistrationActive;                                       //@synthesize isRegistrationActive=_isRegistrationActive - In the implementation block
@property (nonatomic,retain) NSArray * dependentRegistrations;                                //@synthesize dependentRegistrations=_dependentRegistrations - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultPairedDependentRegistrations;              //@synthesize defaultPairedDependentRegistrations=_defaultPairedDependentRegistrations - In the implementation block
@property (nonatomic,retain) NSArray * appleIDPrimaryDependentRegistrations;                  //@synthesize appleIDPrimaryDependentRegistrations=_appleIDPrimaryDependentRegistrations - In the implementation block
@property (nonatomic,retain) NSArray * aliasStrings;                                          //@synthesize aliasStrings=_aliasStrings - In the implementation block
@property (nonatomic,retain) NSString * accountDescription;                                   //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain) NSString * accountDisplayName;                                   //@synthesize accountDisplayName=_accountDisplayName - In the implementation block
@property (nonatomic,retain) id listenerID;                                                   //@synthesize listenerID=_listenerID - In the implementation block
@property (nonatomic,retain) NSDictionary * entitlements;                                     //@synthesize entitlements=_entitlements - In the implementation block
@property (assign,nonatomic) char shouldIncludeDefaultDevice;                                 //@synthesize shouldIncludeDefaultDevice=_shouldIncludeDefaultDevice - In the implementation block
@property (assign,nonatomic) unsigned dataProtectionClass;                                    //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (nonatomic,retain) NSString * subService;                                           //@synthesize subService=_subService - In the implementation block
-(NSArray *)dependentRegistrations;
-(char)isRegistrationActive;
-(NSString *)servicePushTopic;
-(void)setServicePushTopic:(NSString *)arg1 ;
-(NSArray *)serviceDuetIdentifiers;
-(void)setServiceDuetIdentifiers:(NSArray *)arg1 ;
-(unsigned)serviceAdHocType;
-(void)setServiceAdHocType:(unsigned)arg1 ;
-(char)serviceIsDSBased;
-(void)setServiceIsDSBased:(char)arg1 ;
-(char)serviceWantsReflectedSend;
-(void)setServiceWantsReflectedSend:(char)arg1 ;
-(char)serviceAllowProxyDelivery;
-(void)setServiceAllowProxyDelivery:(char)arg1 ;
-(char)serviceAllowLocalDelivery;
-(void)setServiceAllowLocalDelivery:(char)arg1 ;
-(char)serviceAllowWiProxDelivery;
-(void)setServiceAllowWiProxDelivery:(char)arg1 ;
-(char)serviceUseiMessageCallerID;
-(void)setServiceUseiMessageCallerID:(char)arg1 ;
-(NSString *)primaryRegistrationDSHandle;
-(void)setPrimaryRegistrationDSHandle:(NSString *)arg1 ;
-(NSArray *)primaryRegistrationURIs;
-(void)setPrimaryRegistrationURIs:(NSArray *)arg1 ;
-(void)setIsRegistrationActive:(char)arg1 ;
-(void)setDependentRegistrations:(NSArray *)arg1 ;
-(NSDictionary *)defaultPairedDependentRegistrations;
-(void)setDefaultPairedDependentRegistrations:(NSDictionary *)arg1 ;
-(NSArray *)appleIDPrimaryDependentRegistrations;
-(void)setAppleIDPrimaryDependentRegistrations:(NSArray *)arg1 ;
-(void)setAliasStrings:(NSArray *)arg1 ;
-(NSString *)accountDisplayName;
-(void)setAccountDisplayName:(NSString *)arg1 ;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(char)shouldIncludeDefaultDevice;
-(void)setShouldIncludeDefaultDevice:(char)arg1 ;
-(void)setListenerID:(id)arg1 ;
-(id)listenerID;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setAccountDescription:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(void)dealloc;
-(int)accountType;
-(unsigned)dataProtectionClass;
-(NSDictionary *)entitlements;
-(void)setSubService:(NSString *)arg1 ;
-(NSArray *)aliasStrings;
-(NSString *)subService;
-(void)setDataProtectionClass:(unsigned)arg1 ;
-(NSString *)accountDescription;
-(void)setAccountType:(int)arg1 ;
@end


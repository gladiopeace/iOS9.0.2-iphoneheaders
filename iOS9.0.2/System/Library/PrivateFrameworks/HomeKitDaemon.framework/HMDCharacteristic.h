/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDAccessory, HMDService, NSData, NSString, NSNumber, HMDCharacteristicMetadata, NSMutableSet, NSDictionary, HMDBulletinCategory;

@interface HMDCharacteristic : NSObject <NSSecureCoding> {

	char _notificationEnabled;
	HMDAccessory* _accessory;
	HMDService* _service;
	NSData* _authorizationData;
	NSString* _characteristicType;
	id _lastKnownValue;
	NSNumber* _characteristicInstanceID;
	int _characteristicProperties;
	HMDCharacteristicMetadata* _characteristicMetadata;
	NSMutableSet* _notificationRegistrations;
	NSMutableSet* _hapCharacteristicTuples;
	unsigned long long _lastKnownValueUpdateTime;

}

@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,readonly) NSDictionary * bulletinContext; 
@property (nonatomic,readonly) HMDBulletinCategory * category; 
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                                    //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMDService * service;                                        //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSNumber * instanceID; 
@property (nonatomic,readonly) int properties; 
@property (nonatomic,copy,readonly) id value; 
@property (nonatomic,readonly) HMDCharacteristicMetadata * metadata; 
@property (getter=isNotificationEnabled,nonatomic,readonly) char notificationEnabled;              //@synthesize notificationEnabled=_notificationEnabled - In the implementation block
@property (nonatomic,copy) NSData * authorizationData;                                             //@synthesize authorizationData=_authorizationData - In the implementation block
@property (nonatomic,retain) NSString * characteristicType;                                        //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,retain) id lastKnownValue;                                                    //@synthesize lastKnownValue=_lastKnownValue - In the implementation block
@property (assign,nonatomic) unsigned long long lastKnownValueUpdateTime;                          //@synthesize lastKnownValueUpdateTime=_lastKnownValueUpdateTime - In the implementation block
@property (nonatomic,retain) NSNumber * characteristicInstanceID;                                  //@synthesize characteristicInstanceID=_characteristicInstanceID - In the implementation block
@property (assign,nonatomic) int characteristicProperties;                                         //@synthesize characteristicProperties=_characteristicProperties - In the implementation block
@property (nonatomic,retain) HMDCharacteristicMetadata * characteristicMetadata;                   //@synthesize characteristicMetadata=_characteristicMetadata - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationRegistrations;                             //@synthesize notificationRegistrations=_notificationRegistrations - In the implementation block
@property (nonatomic,retain) NSMutableSet * hapCharacteristicTuples;                               //@synthesize hapCharacteristicTuples=_hapCharacteristicTuples - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(HMDBulletinCategory *)category;
-(NSString *)type;
-(id)value;
-(NSString *)contextID;
-(int)properties;
-(HMDService *)service;
-(HMDAccessory *)accessory;
-(NSNumber *)instanceID;
-(NSDictionary *)bulletinContext;
-(id)localizedCategoryName;
-(id)localizedCategoryState;
-(NSData *)authorizationData;
-(void)setAuthorizationData:(NSData *)arg1 ;
-(char)isNotificationEnabled;
-(void)setNotificationEnabled:(char)arg1 forClientIdentifier:(id)arg2 ;
-(char)isNotificationEnabledForClientIdentifier:(id)arg1 ;
-(NSString *)characteristicType;
-(id)validateValue:(id)arg1 outValue:(id*)arg2 ;
-(void)unconfigure;
-(void)unconfigureForServerIdentifier:(id)arg1 linkType:(int)arg2 ;
-(id)characteristicForHAPAccessory:(id)arg1 ;
-(void)updateValue:(id)arg1 ;
-(char)deregisterNotificationForClientIdentifier:(id)arg1 ;
-(NSMutableSet *)notificationRegistrations;
-(void)configureWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3 ;
-(id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3 ;
-(void)updateLastKnownValue;
-(NSMutableSet *)hapCharacteristicTuples;
-(id)hapCharacteristicTupleWithIdentifier:(id)arg1 linkType:(int)arg2 ;
-(NSNumber *)characteristicInstanceID;
-(int)characteristicProperties;
-(id)lastKnownValue;
-(void)setLastKnownValue:(id)arg1 ;
-(void)setLastKnownValueUpdateTime:(unsigned long long)arg1 ;
-(unsigned long long)lastKnownValueUpdateTime;
-(HMDCharacteristicMetadata *)characteristicMetadata;
-(void)unconfigureAll;
-(id)characteristicForServerIdentifier:(id)arg1 linkType:(int)arg2 ;
-(void)updateValue:(id)arg1 serverIdentifier:(id)arg2 linkType:(int)arg3 ;
-(void)setCharacteristicType:(NSString *)arg1 ;
-(void)setCharacteristicInstanceID:(NSNumber *)arg1 ;
-(void)setCharacteristicProperties:(int)arg1 ;
-(void)setCharacteristicMetadata:(HMDCharacteristicMetadata *)arg1 ;
-(void)setNotificationRegistrations:(NSMutableSet *)arg1 ;
-(void)setHapCharacteristicTuples:(NSMutableSet *)arg1 ;
-(HMDCharacteristicMetadata *)metadata;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HAPTimerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMDUserManagementOperationDelegate, OS_dispatch_queue;
@class NSMutableArray, HMDUserManagementOperationManager, NSUUID, HMDUser, HMDAccessory, NSDate, NSObject, HAPTimer, NSArray, NSString;

@interface HMDUserManagementOperation : NSObject <HAPTimerDelegate, NSSecureCoding> {

	NSMutableArray* _dependencies;
	char _executing;
	char _backingOff;
	unsigned _state;
	HMDUserManagementOperationManager* _operationManager;
	id<HMDUserManagementOperationDelegate> _delegate;
	NSUUID* _identifier;
	unsigned _operationType;
	HMDUser* _user;
	HMDAccessory* _accessory;
	NSDate* _expirationDate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HAPTimer* _expirationTimer;
	HAPTimer* _backoffTimer;
	double _backoffInterval;

}

@property (__weak) id<HMDUserManagementOperationDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned operationType;                                          //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) HMDUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) HMDAccessory * accessory;                                          //@synthesize accessory=_accessory - In the implementation block
@property (assign,getter=isExecuting,nonatomic) char executing;                                 //@synthesize executing=_executing - In the implementation block
@property (getter=isFinished,nonatomic,readonly) char finished; 
@property (getter=isCancelled,nonatomic,readonly) char cancelled; 
@property (getter=isReady,nonatomic,readonly) char ready; 
@property (getter=isExpired,nonatomic,readonly) char expired; 
@property (nonatomic,readonly) NSDate * expirationDate;                                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                      //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,nonatomic) unsigned state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) HAPTimer * expirationTimer;                                      //@synthesize expirationTimer=_expirationTimer - In the implementation block
@property (nonatomic,retain) HMDUserManagementOperationManager * operationManager;              //@synthesize operationManager=_operationManager - In the implementation block
@property (nonatomic,readonly) double backoffInterval;                                          //@synthesize backoffInterval=_backoffInterval - In the implementation block
@property (nonatomic,retain) HAPTimer * backoffTimer;                                           //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (assign,getter=isBackingOff,nonatomic) char backingOff;                               //@synthesize backingOff=_backingOff - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)addUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 ;
+(id)removeUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 ;
-(char)isReady;
-(char)_isFinished;
-(NSArray *)dependencies;
-(HMDUser *)user;
-(void)cancel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<HMDUserManagementOperationDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<HMDUserManagementOperationDelegate>)delegate;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSUUID *)identifier;
-(char)isValid;
-(char)isCancelled;
-(id)shortDescription;
-(char)isFinished;
-(char)isExecuting;
-(void)_setupExpirationTimer;
-(void)setExecuting:(char)arg1 ;
-(void)addDependency:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(HMDAccessory *)accessory;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(char)mergeWithOperation:(id)arg1 ;
-(void)setAccessory:(HMDAccessory *)arg1 ;
-(void)executeWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)timerDidFire:(id)arg1 ;
-(void)setOperationManager:(HMDUserManagementOperationManager *)arg1 ;
-(id)initWithOperationType:(unsigned)arg1 user:(id)arg2 accessory:(id)arg3 expiration:(id)arg4 ;
-(HAPTimer *)expirationTimer;
-(char)isBackingOff;
-(HMDUserManagementOperationManager *)operationManager;
-(double)backoffInterval;
-(double)nextBackoffInterval;
-(void)setBackingOff:(char)arg1 ;
-(void)setBackoffTimer:(HAPTimer *)arg1 ;
-(void)_startBackoffTimer;
-(void)_addPairingToAccessory:(id)arg1 identifier:(id)arg2 publicKey:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_removePairingFromAccessory:(id)arg1 identifier:(id)arg2 publicKey:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(HAPTimer *)backoffTimer;
-(void)_endBackoffTimer;
-(char)isExpired;
-(unsigned)operationType;
@end


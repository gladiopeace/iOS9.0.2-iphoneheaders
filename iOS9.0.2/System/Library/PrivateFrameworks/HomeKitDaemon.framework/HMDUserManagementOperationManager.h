/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HAPTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, HAPTimer, NSHashTable, NSArray, NSString;

@interface HMDUserManagementOperationManager : NSObject <HAPTimerDelegate> {

	NSMutableArray* _operations;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HAPTimer* _saveTimer;
	NSHashTable* _observedAccessories;

}

@property (nonatomic,readonly) NSArray * operations; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) HAPTimer * saveTimer;                                    //@synthesize saveTimer=_saveTimer - In the implementation block
@property (nonatomic,readonly) NSHashTable * observedAccessories;                       //@synthesize observedAccessories=_observedAccessories - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)initialize;
+(void)setSharedManager:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)cancelAllOperations;
-(void)addOperation:(id)arg1 ;
-(id)shortDescription;
-(NSArray *)operations;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)initWithOperations:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)removeOperation:(id)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(HAPTimer *)saveTimer;
-(void)__registerIfNeededForReachablityChangeNotifications;
-(void)_handleAddedOperation:(id)arg1 ;
-(void)__save;
-(void)__registerIfNeededForReachablityChangeNotificationsForAccessory:(id)arg1 ;
-(void)__executeOperation:(id)arg1 ;
-(void)_handleRemovedOperation:(id)arg1 ;
-(void)__deregisterIfNeededForReachablityChangeNotificationsForAccessory:(id)arg1 ;
-(void)__removeOperationAndProcessDependantOperations:(id)arg1 ;
-(id)_filteredOperationsWithDependency:(id)arg1 ;
-(id)_filteredOperationsForAccessory:(id)arg1 ;
-(NSHashTable *)observedAccessories;
-(void)_handleAccessoryIsReachable:(id)arg1 ;
-(void)_reallySave;
-(void)operationCancelled:(id)arg1 ;
-(void)operationStoppedBackingOff:(id)arg1 ;
@end


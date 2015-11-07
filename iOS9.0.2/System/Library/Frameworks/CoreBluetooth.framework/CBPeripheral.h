/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBPeer.h>

@protocol CBPeripheralDelegate;
@class CBCentralManager, NSMutableArray, NSMutableDictionary, NSString, NSNumber, NSArray;

@interface CBPeripheral : CBPeer {

	CBCentralManager* _centralManager;
	struct {
		unsigned didUpdateName : 1;
		unsigned didModifyServices : 1;
		unsigned didReadRSSI : 1;
		unsigned didUpdateRSSI : 1;
		unsigned didDiscoverServices : 1;
		unsigned didDiscoverIncludedServices : 1;
		unsigned didDiscoverCharacteristics : 1;
		unsigned didUpdateCharacteristicValue : 1;
		unsigned didWriteCharacteristicValue : 1;
		unsigned didNotifyCharacteristicValue : 1;
		unsigned didDiscoverDescriptors : 1;
		unsigned didUpdateDescriptorValue : 1;
		unsigned didWriteDescriptorValue : 1;
		unsigned didReceiveTimeSync : 1;
	}  _delegateFlags;
	NSMutableArray* _services;
	NSMutableDictionary* _attributes;
	char _isConnectedToSystem;
	id<CBPeripheralDelegate> _delegate;
	NSString* _name;
	NSNumber* _RSSI;
	int _state;

}

@property (assign,nonatomic) id<CBPeripheralDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (retain) NSNumber * RSSI;                                          //@synthesize RSSI=_RSSI - In the implementation block
@property (assign) int state;                                                //@synthesize state=_state - In the implementation block
@property (retain) NSArray * services;                                       //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) char isConnectedToSystem;                     //@synthesize isConnectedToSystem=_isConnectedToSystem - In the implementation block
-(void)sendMsg:(int)arg1 args:(id)arg2 ;
-(id)sendSyncMsg:(int)arg1 args:(id)arg2 ;
-(id)initWithCentralManager:(id)arg1 info:(id)arg2 ;
-(void)handleDisconnection;
-(void)setOrphan;
-(void)setAttribute:(id)arg1 forHandle:(id)arg2 ;
-(void)handleSuccessfulConnection:(id)arg1 ;
-(void)handleFailedConnection;
-(void)handleConnectionStateUpdated:(char)arg1 ;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(void)removeAttributeForHandle:(id)arg1 ;
-(id)attributeForHandle:(id)arg1 ;
-(void)sendMsg:(int)arg1 requiresConnected:(char)arg2 args:(id)arg3 ;
-(void)handleNameUpdated:(id)arg1 ;
-(void)handleServicesChanged:(id)arg1 ;
-(void)handleRSSIUpdated:(id)arg1 ;
-(void)handleServicesDiscovered:(id)arg1 ;
-(void)handleTimeSyncResponse:(id)arg1 ;
-(void)handleServiceIncludedServicesDiscovered:(id)arg1 ;
-(void)handleServiceCharacteristicsDiscovered:(id)arg1 ;
-(void)handleCharacteristicValueUpdated:(id)arg1 ;
-(void)handleCharacteristicValueWritten:(id)arg1 ;
-(void)handleCharacteristicValueNotifying:(id)arg1 ;
-(void)handleCharacteristicDescriptorsDiscovered:(id)arg1 ;
-(void)handleDescriptorValueUpdated:(id)arg1 ;
-(void)handleDescriptorValueWritten:(id)arg1 ;
-(void)setRSSI:(NSNumber *)arg1 ;
-(void)invalidateAllAttributes;
-(void)handleAttributeEvent:(id)arg1 args:(id)arg2 attributeSelector:(SEL)arg3 delegateSelector:(SEL)arg4 delegateFlag:(char)arg5 ;
-(void)handleServiceEvent:(id)arg1 serviceSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(char)arg4 ;
-(void)handleCharacteristicEvent:(id)arg1 characteristicSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(char)arg4 ;
-(void)handleDescriptorEvent:(id)arg1 descriptorSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(char)arg4 ;
-(void)discoverIncludedServices:(id)arg1 forService:(id)arg2 ;
-(unsigned)maximumWriteValueLengthForType:(int)arg1 ;
-(void)setBroadcastValue:(char)arg1 forCharacteristic:(id)arg2 ;
-(void)writeValue:(id)arg1 forDescriptor:(id)arg2 ;
-(void)getTimeSyncData;
-(NSNumber *)RSSI;
-(char)isConnectedToSystem;
-(void)setDelegate:(id<CBPeripheralDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<CBPeripheralDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)hasTag:(id)arg1 ;
-(void)untag:(id)arg1 ;
-(void)tag:(id)arg1 ;
-(void)discoverDescriptorsForCharacteristic:(id)arg1 ;
-(void)readValueForDescriptor:(id)arg1 ;
-(void)readValueForCharacteristic:(id)arg1 ;
-(void)setNotifyValue:(char)arg1 forCharacteristic:(id)arg2 ;
-(void)readRSSI;
-(void)discoverCharacteristics:(id)arg1 forService:(id)arg2 ;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(int)arg3 ;
-(void)discoverServices:(id)arg1 ;
-(NSArray *)services;
-(void)setServices:(NSArray *)arg1 ;
@end


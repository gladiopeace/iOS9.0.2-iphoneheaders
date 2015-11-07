/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CBCharacteristic.h>

@class NSMutableArray, NSNumber, NSArray, NSData;

@interface CBMutableCharacteristic : CBCharacteristic {

	NSMutableArray* _subscribedCentrals;
	unsigned _permissions;
	NSNumber* _ID;

}

@property (assign,nonatomic) unsigned permissions;                     //@synthesize permissions=_permissions - In the implementation block
@property (retain,readonly) NSArray * subscribedCentrals;              //@synthesize subscribedCentrals=_subscribedCentrals - In the implementation block
@property (assign,nonatomic) unsigned properties; 
@property (retain) NSData * value; 
@property (retain) NSArray * descriptors; 
@property (retain) NSNumber * ID;                                      //@synthesize ID=_ID - In the implementation block
-(id)initWithService:(id)arg1 dictionary:(id)arg2 ;
-(id)initWithType:(id)arg1 properties:(unsigned)arg2 value:(id)arg3 permissions:(unsigned)arg4 ;
-(char)handleCentralSubscribed:(id)arg1 ;
-(char)handleCentralUnsubscribed:(id)arg1 ;
-(void)handlePowerNotOn;
-(NSArray *)subscribedCentrals;
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSNumber *)ID;
-(void)setID:(NSNumber *)arg1 ;
-(unsigned)permissions;
-(void)setPermissions:(unsigned)arg1 ;
@end


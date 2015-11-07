/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CoreRCDeviceDelegate;
@class CoreRCManager, NSUUID;

@interface CoreRCDevice : NSObject <NSCopying, NSSecureCoding> {

	id<CoreRCDeviceDelegate> _delegate;
	CoreRCManager* _manager;
	unsigned _owningClients;
	char _isLocalDevice;
	NSUUID* _uniqueID;
	NSUUID* _busUniqueID;

}

@property (nonatomic,readonly) char isLocalDevice;                //@synthesize isLocalDevice=_isLocalDevice - In the implementation block
@property (nonatomic,copy) NSUUID * uniqueID;                     //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSUUID * busUniqueID;              //@synthesize busUniqueID=_busUniqueID - In the implementation block
+(char)supportsSecureCoding;
-(void)setManager:(id)arg1 ;
-(id)manager;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(NSUUID *)uniqueID;
-(char)setExtendedProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)extendedPropertyForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithBus:(id)arg1 local:(char)arg2 ;
-(char)isLocalDevice;
-(void)receivedHIDEvent:(id)arg1 fromDevice:(id)arg2 ;
-(id)mergeProperties;
-(NSUUID *)busUniqueID;
-(id)bus;
-(char)sendHIDEvent:(id)arg1 target:(id)arg2 error:(id*)arg3 ;
-(void)readyToSend;
-(void)mergePropertiesFromDevice:(id)arg1 ;
-(char)sendHIDEvent:(id)arg1 error:(id*)arg2 ;
-(char)sendCommand:(unsigned)arg1 target:(id)arg2 withDuration:(unsigned)arg3 error:(id*)arg4 ;
-(void)willAddToBus:(id)arg1 ;
-(void)didAddToBus:(id)arg1 ;
-(void)willRemoveFromBus:(id)arg1 ;
-(void)didRemoveFromBus:(id)arg1 ;
-(unsigned)removeOwningClient:(id)arg1 ;
-(unsigned)addOwningClient:(id)arg1 ;
-(void)setUniqueID:(NSUUID *)arg1 ;
@end


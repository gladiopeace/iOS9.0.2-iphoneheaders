/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HKDevice : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _hardwareVersion;
	NSString* _firmwareVersion;
	NSString* _softwareVersion;
	NSString* _localIdentifier;
	NSString* _UDIDeviceIdentifier;

}

@property (readonly) NSString * name; 
@property (readonly) NSString * manufacturer; 
@property (readonly) NSString * model; 
@property (readonly) NSString * hardwareVersion; 
@property (readonly) NSString * firmwareVersion; 
@property (readonly) NSString * softwareVersion; 
@property (readonly) NSString * localIdentifier; 
@property (readonly) NSString * UDIDeviceIdentifier; 
+(char)supportsSecureCoding;
+(id)localDevice;
-(void)_setHardwareVersion:(id)arg1 ;
-(void)_setSoftwareVersion:(id)arg1 ;
-(void)_setLocalIdentifier:(id)arg1 ;
-(void)_setUDIDeviceIdentifier:(id)arg1 ;
-(NSString *)localIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)model;
-(NSString *)manufacturer;
-(void)_setName:(id)arg1 ;
-(NSString *)firmwareVersion;
-(NSString *)softwareVersion;
-(id)initWithName:(id)arg1 manufacturer:(id)arg2 model:(id)arg3 hardwareVersion:(id)arg4 firmwareVersion:(id)arg5 softwareVersion:(id)arg6 localIdentifier:(id)arg7 UDIDeviceIdentifier:(id)arg8 ;
-(NSString *)UDIDeviceIdentifier;
-(void)_setModel:(id)arg1 ;
-(void)_setManufacturer:(id)arg1 ;
-(void)_setFirmwareVersion:(id)arg1 ;
-(NSString *)hardwareVersion;
@end


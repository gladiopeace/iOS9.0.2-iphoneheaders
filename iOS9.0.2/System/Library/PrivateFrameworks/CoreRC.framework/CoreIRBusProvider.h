/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreIRBus.h>
#import <libobjc.A.dylib/IRInterfaceDelegate.h>

@class CoreIRDeviceProvider, IRInterface, NSString;

@interface CoreIRBusProvider : CoreIRBus <IRInterfaceDelegate> {

	CoreIRDeviceProvider* _localDevice;
	IRInterface* _interface;

}

@property (nonatomic,retain,readonly) IRInterface * interface;              //@synthesize interface=_interface - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)setManager:(id)arg1 ;
-(void)dealloc;
-(Class)classForCoder;
-(IRInterface *)interface;
-(id)addDeviceWithType:(unsigned)arg1 matching:(id)arg2 error:(id*)arg3 ;
-(id)addDeviceWithType:(unsigned)arg1 matching:(id)arg2 learningSession:(id)arg3 error:(id*)arg4 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)propertyForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithInterface:(id)arg1 ;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleFromDispatchQueue:(id)arg1 ;
-(char)recreateDevices;
-(void)migrateOldRemotes;
-(void)didAddToManager:(id)arg1 ;
-(void)didAddDevice:(id)arg1 ;
-(void)updateAllowHibernation;
-(id)getExistingDeviceWithType:(unsigned)arg1 matching:(id)arg2 ;
-(id)_addDeviceWithType:(unsigned)arg1 matching:(id)arg2 transportProperties:(id)arg3 error:(id*)arg4 ;
-(char)saveDevicePrefsWithDict:(id)arg1 error:(id*)arg2 ;
-(char)addMappingsFromRemote:(id)arg1 toLearningSession:(id)arg2 ;
-(id)copyDevicePrefs:(id*)arg1 ;
-(char)deleteDevicePrefsWithUUID:(id)arg1 UUIDKey:(id)arg2 ;
-(void)willRemoveDevice:(id)arg1 ;
-(char)setPrefsPropertyForUUID:(id)arg1 UUIDKey:(id)arg2 object:(id)arg3 key:(id)arg4 ;
-(id)copyPrefsPropertyForUUID:(id)arg1 UUIDKey:(id)arg2 key:(id)arg3 ;
-(void)_removeMappingForCommand:(unsigned)arg1 from:(id)arg2 ;
-(void)interface:(id)arg1 receivedCommand:(id)arg2 ;
-(void)interface:(id)arg1 receivedHIDEvent:(id)arg2 ;
-(char)updatePersistentValue:(id)arg1 forProperty:(id)arg2 ofDevice:(id)arg3 ;
-(char)mergePersistentMappingsFromSession:(id)arg1 ofDevice:(id)arg2 ;
-(id)localDevice;
-(void)didRemoveDevice:(id)arg1 ;
@end


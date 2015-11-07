/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Diagnostics/Diagnostics-Structs.h>
#import <Diagnostics/DAHIDEventManager.h>

@interface DAAmbientLightSensorDataTest : DAHIDEventManager {

	char _enTestMode;
	char _enMonitorMode;
	IOHIDServiceClientRef _AmbientLightPlugin;
	int _placement;

}

@property (assign,nonatomic) IOHIDServiceClientRef AmbientLightPlugin;              //@synthesize AmbientLightPlugin=_AmbientLightPlugin - In the implementation block
@property (assign,nonatomic) char enTestMode;                                       //@synthesize enTestMode=_enTestMode - In the implementation block
@property (assign,nonatomic) char enMonitorMode;                                    //@synthesize enMonitorMode=_enMonitorMode - In the implementation block
@property (assign,nonatomic) int placement;                                         //@synthesize placement=_placement - In the implementation block
-(id)checkPresence;
-(char)enTestMode;
-(char)enMonitorMode;
-(BOOL)setIntegrationMode;
-(void)setEnMonitorMode:(char)arg1 ;
-(void)setEnTestMode:(char)arg1 ;
-(int)registerAmbientLightCallbackIOKit:(float)arg1 testMode:(char)arg2 monitorMode:(char)arg3 placement:(long)arg4 ;
-(IOHIDServiceClientRef)AmbientLightPlugin;
-(void)setAmbientLightPlugin:(IOHIDServiceClientRef)arg1 ;
-(id)init;
-(int)placement;
-(void)setPlacement:(int)arg1 ;
@end


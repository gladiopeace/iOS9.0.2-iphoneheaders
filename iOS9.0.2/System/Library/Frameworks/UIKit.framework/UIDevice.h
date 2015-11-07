/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString, NSUUID;

@interface UIDevice : NSObject {

	int _numDeviceOrientationObservers;
	float _batteryLevel;
	struct {
		unsigned batteryMonitoringEnabled : 1;
		unsigned proximityMonitoringEnabled : 1;
		unsigned expectsFaceContactInLandscape : 1;
		unsigned orientation : 3;
		unsigned batteryState : 2;
		unsigned proximityState : 1;
		unsigned hasTouchPadOverride : 1;
		unsigned hasTouchPad : 1;
	}  _deviceFlags;

}

@property (assign,nonatomic) int orientation; 
@property (nonatomic,retain,readonly) NSString * buildVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * localizedModel; 
@property (nonatomic,readonly) NSString * systemName; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) int orientation; 
@property (nonatomic,readonly) NSUUID * identifierForVendor; 
@property (getter=isGeneratingDeviceOrientationNotifications,nonatomic,readonly) char generatesDeviceOrientationNotifications; 
@property (assign,getter=isBatteryMonitoringEnabled,nonatomic) char batteryMonitoringEnabled; 
@property (nonatomic,readonly) int batteryState; 
@property (nonatomic,readonly) float batteryLevel; 
@property (assign,getter=isProximityMonitoringEnabled,nonatomic) char proximityMonitoringEnabled; 
@property (nonatomic,readonly) char proximityState; 
@property (getter=isMultitaskingSupported,nonatomic,readonly) char multitaskingSupported; 
@property (nonatomic,readonly) int userInterfaceIdiom; 
@property (assign,setter=_setBacklightLevel:,nonatomic) float _backlightLevel; 
+(id)currentDevice;
+(int)currentDeviceOrientationAllowingAmbiguous:(char)arg1 ;
+(char)_isWatch;
+(char)_isWatchCompanion;
+(id)modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
+(char)_isLowEnd;
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(int)_graphicsQualityIncludingMediumN41:(char)arg1 ;
-(id)_mediumQualityProductsIncludingN41:(char)arg1 ;
-(id)_currentProduct;
-(int)sbf_bannerGraphicsQuality;
-(int)sbf_controlCenterGraphicsQuality;
-(int)userInterfaceIdiom;
-(void)_unregisterForSystemSounds:(id)arg1 ;
-(void)_registerForSystemSounds:(id)arg1 ;
-(NSString *)name;
-(void)setOrientation:(int)arg1 ;
-(char)isGeneratingDeviceOrientationNotifications;
-(void)setOrientation:(int)arg1 animated:(char)arg2 ;
-(int)orientation;
-(void)_setActiveUserInterfaceIdiom:(int)arg1 ;
-(void)_setBacklightLevel:(float)arg1 ;
-(float)_backlightLevel;
-(void)setProximityMonitoringEnabled:(char)arg1 ;
-(char)isProximityMonitoringEnabled;
-(void)_setProximityState:(char)arg1 ;
-(NSString *)systemVersion;
-(int)_graphicsQuality;
-(char)_isSystemSoundEnabled;
-(void)beginGeneratingDeviceOrientationNotifications;
-(void)endGeneratingDeviceOrientationNotifications;
-(NSString *)model;
-(id)_tapticEngine;
-(void)_playSystemSound:(unsigned long)arg1 ;
-(char)_hasTouchPad;
-(char)_supportsForceTouch;
-(void)_enableDeviceOrientationEvents:(char)arg1 ;
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(NSUUID *)identifierForVendor;
-(void)_updateSystemSoundActiveStatus:(id)arg1 ;
-(NSString *)localizedModel;
-(NSString *)systemName;
-(NSString *)buildVersion;
-(id)uniqueIdentifier;
-(char)isBatteryMonitoringEnabled;
-(void)setBatteryMonitoringEnabled:(char)arg1 ;
-(int)batteryState;
-(float)batteryLevel;
-(void)_setExpectsFaceContactInLandscape:(char)arg1 ;
-(char)proximityState;
-(char)isMultitaskingSupported;
-(void)playInputClick;
-(float)_softwareDimmingAlpha;
-(void)_playInputSelectSound;
-(void)_playInputDeleteSound;
-(char)_hasGraphicsQualityOverride;
-(void)_setBatteryState:(int)arg1 ;
-(void)_setBatteryLevel:(float)arg1 ;
-(char)_isTTYEnabled;
-(void)_setHasTouchPad:(char)arg1 ;
-(void)_setGraphicsQualityOverride:(int)arg1 ;
-(void)_clearGraphicsQualityOverride;
-(int)_keyboardGraphicsQuality;
-(int)_predictionGraphicsQuality;
-(char)_supportsHapticFeedback;
@end


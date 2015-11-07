/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSMutableArray, SUScriptColor, NSArray, NSNumber, NSString;

@interface SUScriptDevice : SUScriptObject {

	NSMutableArray* _scriptFunctions;

}

@property (readonly) id accessibilityBoldTextEnabled; 
@property (readonly) id accessibilityButtonShapesEnabled; 
@property (readonly) id accessibilityDarkenSystemColors; 
@property (readonly) id accessibilityEnhanceBackgroundContrast; 
@property (readonly) id accessibilityReduceMotion; 
@property (readonly) id accessibilitySingleColorSelected; 
@property (readonly) SUScriptColor * accessibilitySingleColor; 
@property (readonly) id accessibilityUseDarkerKeyboard; 
@property (readonly) int activeNetworkType; 
@property (readonly) NSArray * automaticDownloadMediaTypes; 
@property (readonly) unsigned long deviceTypeIdentifier; 
@property (readonly) NSNumber * diskSpaceAvailable; 
@property (readonly) int hardwareType; 
@property (readonly) NSNumber * mainScreenScale; 
@property (readonly) NSNumber * metricsPostFrequencyOverride; 
@property (readonly) id needsToneRegrantOption; 
@property (readonly) NSString * capabilityNameEmail; 
@property (readonly) NSString * capabilityNameExplicitMedia; 
@property (readonly) NSString * capabilityNameHDVideo; 
@property (readonly) NSString * capabilityNameHDVideo1080p; 
@property (readonly) NSString * capabilityNameHDVideo720p; 
@property (readonly) NSString * capabilityNamePodcasts; 
@property (readonly) NSString * capabilityNameWiFi; 
@property (readonly) int freeSpaceEffortLevelDoNothing; 
@property (readonly) int freeSpaceEffortLevelAutomaticOnly; 
@property (readonly) int freeSpaceEffortLevelManualSpaceManagement; 
@property (readonly) int freeSpaceEffortLevelPromptUser; 
@property (readonly) NSString * freeSpaceOptionEffortLevel; 
@property (readonly) int hardwareTypeAppleTVJ33; 
@property (readonly) int hardwareTypeAppleTVK66; 
@property (readonly) int hardwareTypeIPadJ1; 
@property (readonly) int hardwareTypeIPadJ2; 
@property (readonly) int hardwareTypeIPadJ2a; 
@property (readonly) int hardwareTypeIPadK93; 
@property (readonly) int hardwareTypeIPadK93a; 
@property (readonly) int hardwareTypeIPadK94; 
@property (readonly) int hardwareTypeIPadK95; 
@property (readonly) int hardwareTypeIPhoneM68; 
@property (readonly) int hardwareTypeIPhoneN82; 
@property (readonly) int hardwareTypeIPhoneN88; 
@property (readonly) int hardwareTypeIPhoneN90; 
@property (readonly) int hardwareTypeIPhoneN92; 
@property (readonly) int hardwareTypeIPhoneN94; 
@property (readonly) int hardwareTypeIPodTouchN45; 
@property (readonly) int hardwareTypeIPodTouchN18; 
@property (readonly) int hardwareTypeIPodTouchN72; 
@property (readonly) int hardwareTypeIPodTouchN81; 
@property (readonly) int hardwareTypeIPodTouchN81a; 
@property (readonly) int hardwareTypeUnknown; 
@property (readonly) int hardwareTypeWildcatK48; 
@property (readonly) int networkTypeNone; 
@property (readonly) int networkType2G; 
@property (readonly) int networkType3G; 
@property (readonly) int networkType4G; 
@property (readonly) int networkType5G; 
@property (readonly) int networkType6G; 
@property (readonly) int networkType7G; 
@property (readonly) int networkType8G; 
@property (readonly) int networkType9G; 
@property (readonly) int networkTypeWiFi; 
@property (readonly) NSString * orientationStringLandscapeLeft; 
@property (readonly) NSString * orientationStringLandscapeRight; 
@property (readonly) NSString * orientationStringPortrait; 
@property (readonly) NSString * orientationStringPortraitUpsideDown; 
@property (readonly) int restrictionBoolNo; 
@property (readonly) int restrictionBoolNoData; 
@property (readonly) int restrictionBoolYes; 
@property (readonly) NSString * restrictionAccountModificationAllowed; 
@property (readonly) NSString * restrictionAllowGlobalBackgroundFetchWhenRoaming; 
@property (readonly) NSString * restrictionAllowVoiceDialing; 
@property (readonly) NSString * restrictionAppInstallationAllowed; 
@property (readonly) NSString * restrictionAppRemovalAllowed; 
@property (readonly) NSString * restrictionBookStoreAllowed; 
@property (readonly) NSString * restrictionBookStoreEroticaAllowed; 
@property (readonly) NSString * restrictionCameraAllowed; 
@property (readonly) NSString * restrictionCellularHDUploadsAllowed; 
@property (readonly) NSString * restrictionITunesAllowed; 
@property (readonly) NSString * restrictionITunesSocialAllowed; 
@property (readonly) NSString * restrictionMultiplayerGamingAllowed; 
@property (readonly) NSString * restrictionSafariAllowed; 
@property (readonly) NSString * restrictionScreenShotAllowed; 
@property (readonly) NSString * restrictionVideoConferencingAllowed; 
@property (readonly) NSString * restrictionYouTubeAllowed; 
@property (readonly) NSString * restrictionTypeApplications; 
@property (readonly) NSString * restrictionTypeMovies; 
@property (readonly) NSString * restrictionTypeTelevision; 
@property (readonly) NSString * UTIImage; 
@property (readonly) NSString * UTIMovie; 
@property (readonly) NSString * UTIText; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(char)arg2 ;
-(int)activeNetworkType;
-(NSString *)capabilityNamePodcasts;
-(id)hasCapability:(id)arg1 ;
-(NSString *)capabilityNameEmail;
-(NSNumber *)diskSpaceAvailable;
-(int)hardwareType;
-(NSString *)capabilityNameExplicitMedia;
-(void)_autoDownloadKindsChangedNotification:(id)arg1 ;
-(void)_accessibilitySettingsChangedNotification:(id)arg1 ;
-(int)_deviceCapabilityForString:(id)arg1 ;
-(void)_addScriptFunction:(id)arg1 ;
-(NSString *)freeSpaceOptionEffortLevel;
-(void)_removeScriptFunction:(id)arg1 ;
-(NSString *)restrictionTypeApplications;
-(NSString *)restrictionTypeMovies;
-(NSString *)restrictionTypeTelevision;
-(int)networkType2G;
-(int)networkType3G;
-(int)networkType4G;
-(int)networkType5G;
-(int)networkType6G;
-(int)networkType7G;
-(int)networkType8G;
-(int)networkType9G;
-(int)networkTypeWiFi;
-(int)networkTypeNone;
-(unsigned long)deviceTypeIdentifier;
-(int)hardwareTypeAppleTVJ33;
-(int)hardwareTypeAppleTVK66;
-(int)hardwareTypeIPadJ1;
-(int)hardwareTypeIPadJ2;
-(int)hardwareTypeIPadJ2a;
-(int)hardwareTypeIPadK93;
-(int)hardwareTypeIPadK93a;
-(int)hardwareTypeIPadK94;
-(int)hardwareTypeIPadK95;
-(int)hardwareTypeIPhoneM68;
-(int)hardwareTypeIPhoneN82;
-(int)hardwareTypeIPhoneN88;
-(int)hardwareTypeIPhoneN90;
-(int)hardwareTypeIPhoneN92;
-(int)hardwareTypeIPhoneN94;
-(int)hardwareTypeIPodTouchN45;
-(int)hardwareTypeIPodTouchN72;
-(int)hardwareTypeIPodTouchN18;
-(int)hardwareTypeIPodTouchN81;
-(int)hardwareTypeIPodTouchN81a;
-(int)hardwareTypeWildcatK48;
-(int)hardwareTypeUnknown;
-(NSString *)capabilityNameHDVideo;
-(NSString *)capabilityNameHDVideo1080p;
-(NSString *)capabilityNameHDVideo720p;
-(NSString *)capabilityNameWiFi;
-(int)boolValueForRestriction:(id)arg1 ;
-(id)getMachineIdentifierForAccountIdentifier:(id)arg1 ;
-(void)requestFreeSpaceWithBytes:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(id)restrictionLevelForType:(id)arg1 ;
-(void)setAutomaticDownloadKinds:(id)arg1 withCompletionHandler:(id)arg2 ;
-(id)UTIForURL:(id)arg1 ;
-(id)valueForRestriction:(id)arg1 ;
-(id)accessibilityBoldTextEnabled;
-(id)accessibilityButtonShapesEnabled;
-(id)accessibilityDarkenSystemColors;
-(id)accessibilityEnhanceBackgroundContrast;
-(id)accessibilityReduceMotion;
-(id)accessibilitySingleColorSelected;
-(SUScriptColor *)accessibilitySingleColor;
-(id)accessibilityUseDarkerKeyboard;
-(NSArray *)automaticDownloadMediaTypes;
-(NSNumber *)mainScreenScale;
-(NSNumber *)metricsPostFrequencyOverride;
-(id)needsToneRegrantOption;
-(NSString *)orientationStringLandscapeLeft;
-(NSString *)orientationStringLandscapeRight;
-(NSString *)orientationStringPortrait;
-(NSString *)orientationStringPortraitUpsideDown;
-(int)freeSpaceEffortLevelDoNothing;
-(int)freeSpaceEffortLevelAutomaticOnly;
-(int)freeSpaceEffortLevelManualSpaceManagement;
-(int)freeSpaceEffortLevelPromptUser;
-(int)restrictionBoolNo;
-(int)restrictionBoolNoData;
-(int)restrictionBoolYes;
-(NSString *)restrictionAccountModificationAllowed;
-(NSString *)restrictionAllowGlobalBackgroundFetchWhenRoaming;
-(NSString *)restrictionAllowVoiceDialing;
-(NSString *)restrictionAppInstallationAllowed;
-(NSString *)restrictionAppRemovalAllowed;
-(NSString *)restrictionBookStoreAllowed;
-(NSString *)restrictionBookStoreEroticaAllowed;
-(NSString *)restrictionCameraAllowed;
-(NSString *)restrictionCellularHDUploadsAllowed;
-(NSString *)restrictionITunesAllowed;
-(NSString *)restrictionITunesSocialAllowed;
-(NSString *)restrictionMultiplayerGamingAllowed;
-(NSString *)restrictionSafariAllowed;
-(NSString *)restrictionScreenShotAllowed;
-(NSString *)restrictionVideoConferencingAllowed;
-(NSString *)restrictionYouTubeAllowed;
-(NSString *)UTIImage;
-(NSString *)UTIMovie;
-(NSString *)UTIText;
@end


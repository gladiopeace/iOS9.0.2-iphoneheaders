/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSLock, NSMutableSet, NSMutableDictionary, NSDictionary, NSString, NSArray, NSSet, NSUUID, NSOrderedSet, NSNumber, NSDate, NSURL;

@interface AXSettings : NSObject {

	NSLock* _synchronizeDomainsLock;
	NSMutableSet* _migratedSwitchControlMenuItemsPreferenceKeys;
	NSMutableSet* _registeredNotifications;
	NSMutableDictionary* _synchronizeDomains;
	NSMutableDictionary* _updateBlocks;

}

@property (assign,nonatomic) char assistiveTouchAlwaysShowMenuEnabled; 
@property (assign,nonatomic) char assistiveTouchOpenMenuSwaggleEnabled; 
@property (assign,nonatomic) double assistiveTouchSpeed; 
@property (nonatomic,retain) NSDictionary * assistiveTouchMainScreenCustomization; 
@property (nonatomic,retain) NSString * assistiveTouchOrbAction; 
@property (nonatomic,retain) NSArray * assistiveTouchCustomGestures; 
@property (nonatomic,retain) NSArray * assistiveTouchRecentGestures; 
@property (nonatomic,retain) NSArray * assistiveTouchSavedGestures; 
@property (assign,nonatomic) int assistiveTouchScanningMode; 
@property (assign,nonatomic) int assistiveTouchPreferredPointPicker; 
@property (assign,nonatomic) char assistiveTouchGroupElementsEnabled; 
@property (assign,nonatomic) char assistiveTouchScannerCompactMenuEnabled; 
@property (assign,nonatomic) char assistiveTouchScannerMenuLabelsEnabled; 
@property (assign,nonatomic) double assistiveTouchStepInterval; 
@property (assign,nonatomic) double assistiveTouchInputCoalescingDuration; 
@property (assign,nonatomic) char assistiveTouchInputCoalescingEnabled; 
@property (assign,nonatomic) double assistiveTouchInputHoldDuration; 
@property (assign,nonatomic) char assistiveTouchInputHoldEnabled; 
@property (assign,nonatomic) double assistiveTouchLongPressDuration; 
@property (assign,nonatomic) char assistiveTouchLongPressEnabled; 
@property (assign,nonatomic) double assistiveTouchDelayAfterInput; 
@property (assign,nonatomic) char assistiveTouchDelayAfterInputEnabled; 
@property (assign,nonatomic) float assistiveTouchAxisSweepSpeed; 
@property (assign,nonatomic) double assistiveTouchActionRepeatInterval; 
@property (assign,nonatomic) char assistiveTouchActionRepeatEnabled; 
@property (assign,nonatomic) int assistiveTouchScanCycles; 
@property (assign,nonatomic) double assistiveTouchScanTimeout; 
@property (assign,nonatomic) char assistiveTouchScanTimeoutEnabled; 
@property (assign,nonatomic) char assistiveTouchScannerSoundEnabled; 
@property (assign,nonatomic) char assistiveTouchScannerCursorHighVisibilityEnabled; 
@property (assign,nonatomic) char assistiveTouchScannerSpeechIsInterruptedByScanning; 
@property (assign,nonatomic) char assistiveTouchScannerPointPickerDefaultsToRescan; 
@property (assign,nonatomic) int assistiveTouchCursorColor; 
@property (assign,nonatomic) int assistiveTouchHeadMovementSensitivity; 
@property (assign,nonatomic) char assistiveTouchSwitchUsageConfirmed; 
@property (nonatomic,retain) NSSet * assistiveTouchSwitches; 
@property (assign,nonatomic) char assistiveTouchScannerSpeechEnabled; 
@property (assign,nonatomic) double assistiveTouchScannerSpeechRate; 
@property (nonatomic,retain) NSString * assistiveTouchScannerDefaultDialect; 
@property (assign,nonatomic) char assistiveTouchScannerAddedTripleClickAutomatically; 
@property (nonatomic,retain) NSArray * switchControlRecipes; 
@property (nonatomic,retain) NSUUID * switchControlLaunchRecipeUUID; 
@property (nonatomic,retain) NSArray * switchControlTopLevelMenuItems; 
@property (nonatomic,readonly) char switchControlHasEmptyTopLevelMenu; 
@property (assign,nonatomic) char switchControlShouldUseShortFirstPage; 
@property (nonatomic,retain) NSArray * switchControlGesturesMenuItems; 
@property (nonatomic,retain) NSArray * switchControlDeviceMenuItems; 
@property (nonatomic,retain) NSArray * switchControlSettingsMenuItems; 
@property (assign,nonatomic) int switchControlTapBehavior; 
@property (assign,nonatomic) double switchControlAutoTapTimeout; 
@property (assign,nonatomic) char switchControlShouldAlwaysActivateKeyboardKeys; 
@property (assign,nonatomic) int switchControlScanningStyle; 
@property (assign,nonatomic) double switchControlDwellTime; 
@property (assign,nonatomic) char zoomPreferencesWereInitialized; 
@property (assign,nonatomic) CGRect zoomWindowFrame; 
@property (assign,nonatomic) float zoomScale; 
@property (assign,nonatomic) CGPoint zoomPanOffset; 
@property (assign,nonatomic) CGPoint zoomSlugNormalizedPosition; 
@property (nonatomic,retain) NSString * zoomCurrentLensEffect; 
@property (nonatomic,retain) NSString * zoomCurrentLensMode; 
@property (assign,nonatomic) char zoomInStandby; 
@property (assign,nonatomic) char zoomShouldFollowFocus; 
@property (assign,nonatomic) char zoomShouldShowSlug; 
@property (assign,nonatomic) char zoomPeekZoomEnabled; 
@property (assign,nonatomic) char zoomPeekZoomEverEnabled; 
@property (assign,nonatomic) char zoomAlwaysUseWindowedZoomForTyping; 
@property (nonatomic,retain) NSString * zoomPreferredCurrentLensMode; 
@property (assign,nonatomic) float zoomPreferredMaximumZoomScale; 
@property (nonatomic,retain) NSOrderedSet * zoomPreferredLensModes; 
@property (assign,nonatomic) float zoomIdleSlugOpacity; 
@property (assign,nonatomic) char zoomShouldAllowFullscreenAutopanning; 
@property (assign,nonatomic) char zoomDebugDisableZoomLensScaleTransform; 
@property (assign,nonatomic) char zoomDebugShowExternalFocusRect; 
@property (assign,nonatomic) int guidedAccessUsageCount; 
@property (assign,nonatomic) char guidedAccessAXFeaturesEnabled; 
@property (assign,nonatomic) char guidedAccessAllowsUnlockWithTouchID; 
@property (assign,nonatomic) char guidedAccessShouldSpeakForTimeRestrictionEvents; 
@property (nonatomic,copy) NSString * guidedAccessToneIdentifierForTimeRestrictionEvents; 
@property (nonatomic,readonly) NSString * guidedAccessDefaultToneIdentifierForTimeRestrictionEvents; 
@property (nonatomic,retain) NSDictionary * gaxInternalSettingsUserAppProfile; 
@property (nonatomic,retain) NSDictionary * gaxInternalSettingsUserGlobalProfile; 
@property (nonatomic,retain) NSDictionary * gaxInternalSettingsSavedAccessibilityFeatures; 
@property (nonatomic,retain) NSArray * gaxInternalSettingsSavedAccessibilityTripleClickOptions; 
@property (nonatomic,retain) NSArray * gaxInternalSettingsUserConfiguredAppIDs; 
@property (nonatomic,copy) NSNumber * gaxInternalSettingsActiveAppOrientation; 
@property (nonatomic,copy) NSString * gaxInternalSettingsActiveAppID; 
@property (assign,nonatomic) char gaxInternalSettingsTimeRestrictionHasExpired; 
@property (assign,nonatomic) char gaxInternalSettingsIsActiveAppSelfLocked; 
@property (assign,nonatomic) char gaxInternalSettingsSystemDidRestartDueToLowBattery; 
@property (nonatomic,copy) NSString * gaxInternalSettingsDeviceID; 
@property (nonatomic,copy) NSString * gaxInternalSettingsProductBuildVersion; 
@property (nonatomic,retain) NSDate * gaxInternalSettingsLastActivationDate; 
@property (nonatomic,retain) NSDate * gaxInternalSettingsLastPasscodeSetDate; 
@property (assign,nonatomic) char stickyKeysEnabled; 
@property (assign,nonatomic) char stickyKeysShiftToggleEnabled; 
@property (assign,nonatomic) char stickyKeysBeepEnabled; 
@property (assign,nonatomic) char assistiveTouchCameraSwitchPreviewEnabled; 
@property (assign,nonatomic) char assistiveTouchHeadlessModeEnabled; 
@property (assign,nonatomic) int internalLoggingColorTheme; 
@property (assign,nonatomic) char validateSecondPartyApps; 
@property (assign,nonatomic) char includeBacktraceInLogs; 
@property (nonatomic,retain) NSArray * logToFileSubsystems; 
@property (assign,nonatomic) char writeAXLogsToFile; 
@property (assign,nonatomic) char ignoreAXAsserts; 
@property (assign,nonatomic) char ignoreAXServerEntitlements; 
@property (assign,nonatomic) char logAXNotificationPosting; 
@property (assign,nonatomic) char voiceOverHearingAidRoutingEnabled; 
@property (assign,nonatomic) char skipHearingAidMFiAuth; 
@property (assign,nonatomic) char enableHearingAidReporter; 
@property (assign,nonatomic) char guidedAccessDisallowDirectInactiveToActiveTransition; 
@property (nonatomic,retain) NSNumber * guidedAccessOverrideTimeRestrictionDuration; 
@property (assign,nonatomic) char enableVoiceOverCaptions; 
@property (assign,nonatomic) char speakCorrectionsEnabled; 
@property (nonatomic,retain) NSURL * alexLocalAssetURL; 
@property (nonatomic,retain) NSArray * allAvailableVoices; 
@property (assign,nonatomic) float quickSpeakSpeakingRate; 
@property (assign,nonatomic) char quickSpeakHighlightText; 
@property (assign,nonatomic) float quickSpeakVolume; 
@property (assign,nonatomic) CGPoint quickSpeakNubbitNormalizedPosition; 
@property (assign,nonatomic) char voiceOverLargeCursorEnabled; 
@property (assign,nonatomic) int voiceOverHelpMode; 
@property (assign,nonatomic) int voiceOverNavigateImagesOption; 
@property (assign,nonatomic) int voiceOverPhoneticsFeedback; 
@property (assign,nonatomic) int voiceOverHardwareTypingFeedback; 
@property (assign,nonatomic) int voiceOverSoftwareTypingFeedback; 
@property (assign,nonatomic) int voiceOverBrailleGesturesTypingFeedback; 
@property (assign,nonatomic) int voiceOverKeyboardModifierChoice; 
@property (assign,nonatomic) double voiceOverBrailleAlertDisplayDuration; 
@property (assign,nonatomic) char voiceOverCompactVoiceEnabled; 
@property (nonatomic,readonly) char voiceOverHandwritingEnabled; 
@property (nonatomic,readonly) char voiceOverBrailleGesturesEnabled; 
@property (assign,nonatomic) char voiceOverHintsEnabled; 
@property (assign,nonatomic) char voiceOverAudioDuckingEnabled; 
@property (assign,nonatomic) char voiceOverPitchChangeEnabled; 
@property (assign,nonatomic) char voiceOverSoundEffectsEnabled; 
@property (assign,nonatomic) char voiceOverSpeakingRateInRotorEnabled; 
@property (assign,nonatomic) char voiceOverSpeakNotificationsEnabled; 
@property (nonatomic,copy) NSArray * voiceOverRotorItems; 
@property (nonatomic,copy) NSString * voiceOverBrailleTableIdentifier; 
@property (assign,nonatomic) char voiceOverAlwaysUseNemethCodeForMathEnabled; 
@property (assign,nonatomic) char voiceOverShowSoftwareKeyboardWithBraille; 
@property (nonatomic,copy) NSString * voiceOverDefaultDialect; 
@property (assign,nonatomic) int voiceOverActivationWorkaround; 
@property (assign,nonatomic) char voiceOverShouldOutputToHearingAid; 
@property (nonatomic,retain) NSNumber * voiceOverHandwritingWasNativeAutocorrectEnabled; 
@property (nonatomic,retain) NSArray * voiceOverPronunciationDictionary; 
@property (assign,nonatomic) char voiceOverTouchBraillePanningAutoTurnsReadingContent; 
@property (assign,nonatomic) char voiceOverTouchSingleLetterQuickNavEnabled; 
@property (assign,nonatomic) int voiceOverTouchBrailleDisplayInputMode; 
@property (assign,nonatomic) int voiceOverTouchBrailleGesturesInputMode; 
@property (assign,nonatomic) int voiceOverTouchBrailleDisplayOutputMode; 
@property (assign,nonatomic) char voiceOverTouchBrailleGesturesShouldUseLockedConfiguration; 
@property (assign,nonatomic) int voiceOverTouchBrailleGesturesLockedOrientation; 
@property (assign,nonatomic) int voiceOverTouchBrailleGesturesLockedTypingMode; 
@property (assign,nonatomic) char voiceOverTouchBrailleGesturesDidPlayCalibrationHint; 
@property (assign,nonatomic) char voiceOverBrailleGradeTwoAutoTranslateEnabled; 
@property (assign,nonatomic) double voiceOverDoubleTapInterval; 
@property (assign,nonatomic) int voiceOverNavigationDirectionMode; 
@property (nonatomic,retain) NSDictionary * pairedHearingAids; 
@property (assign,nonatomic) char independentHearingAidSettings; 
@property (assign,nonatomic) char allowHearingAidControlOnLockScreen; 
@property (assign,nonatomic) char shouldStreamToLeftAid; 
@property (assign,nonatomic) char shouldStreamToRightAid; 
@property (assign,nonatomic) char touchAccommodationsEnabled; 
@property (nonatomic,readonly) char touchAccommodationsAreConfigured; 
@property (assign,nonatomic) char touchAccommodationsUsageConfirmed; 
@property (assign,nonatomic) char touchAccommodationsTripleClickConfirmed; 
@property (assign,nonatomic) char touchAccommodationsHoldDurationEnabled; 
@property (assign,nonatomic) double touchAccommodationsHoldDuration; 
@property (assign,nonatomic) char touchAccommodationsIgnoreRepeatEnabled; 
@property (assign,nonatomic) double touchAccommodationsIgnoreRepeatDuration; 
@property (assign,nonatomic) int touchAccommodationsTapActivationMethod; 
@property (assign,nonatomic) double touchAccommodationsTapActivationTimeout; 
@property (assign,nonatomic) char gizmoApplicationAccessibilityEnabled; 
@property (assign,nonatomic) float reduceWhitePointLevel; 
@property (nonatomic,retain) NSMutableSet * registeredNotifications;                                              //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * synchronizeDomains;                                            //@synthesize synchronizeDomains=_synchronizeDomains - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                                                  //@synthesize updateBlocks=_updateBlocks - In the implementation block
+(id)sharedInstance;
+(void)initialize;
-(NSMutableDictionary *)updateBlocks;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(float)zoomScale;
-(void)setZoomScale:(float)arg1 ;
-(char)includeBacktraceInLogs;
-(char)writeAXLogsToFile;
-(NSArray *)assistiveTouchCustomGestures;
-(char)ignoreAXAsserts;
-(float)quickSpeakSpeakingRate;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(id)quickSpeakAlternativeVoiceForLanguage:(id)arg1 ;
-(float)quickSpeakSpeakingRateForLanguage:(id)arg1 ;
-(char)quickSpeakCompactPreference:(id)arg1 ;
-(void)setQuickSpeakSpeakingRate:(float)arg1 forLanguage:(id)arg2 ;
-(void)setQuickSpeakSpeakingRate:(float)arg1 ;
-(char)assistiveTouchAlwaysShowMenuEnabled;
-(char)assistiveTouchOpenMenuSwaggleEnabled;
-(double)assistiveTouchSpeed;
-(NSArray *)assistiveTouchRecentGestures;
-(NSArray *)assistiveTouchSavedGestures;
-(int)assistiveTouchScanningMode;
-(int)assistiveTouchPreferredPointPicker;
-(char)assistiveTouchAutoScanningEnabled;
-(char)assistiveTouchGroupElementsEnabled;
-(char)assistiveTouchScannerCompactMenuEnabled;
-(char)assistiveTouchScannerMenuLabelsEnabled;
-(double)assistiveTouchStepInterval;
-(int)assistiveTouchScanCycles;
-(double)assistiveTouchScanTimeout;
-(char)assistiveTouchScannerSoundEnabled;
-(char)assistiveTouchScannerSpeechEnabled;
-(double)assistiveTouchScannerSpeechRate;
-(NSSet *)assistiveTouchSwitches;
-(char)assistiveTouchScannerCursorHighVisibilityEnabled;
-(char)assistiveTouchScannerSpeechIsInterruptedByScanning;
-(double)assistiveTouchInputCoalescingDuration;
-(char)assistiveTouchInputCoalescingEnabled;
-(double)assistiveTouchInputHoldDuration;
-(double)assistiveTouchLongPressDuration;
-(char)assistiveTouchInputHoldEnabled;
-(char)assistiveTouchLongPressEnabled;
-(double)assistiveTouchDelayAfterInput;
-(char)assistiveTouchDelayAfterInputEnabled;
-(float)assistiveTouchAxisSweepSpeed;
-(double)assistiveTouchActionRepeatInterval;
-(char)assistiveTouchActionRepeatEnabled;
-(char)assistiveTouchScannerPointPickerDefaultsToRescan;
-(char)assistiveTouchScanTimeoutEnabled;
-(int)assistiveTouchCursorColor;
-(int)assistiveTouchHeadMovementSensitivity;
-(char)assistiveTouchSwitchUsageConfirmed;
-(char)assistiveTouchCameraSwitchPreviewEnabled;
-(char)assistiveTouchHeadlessModeEnabled;
-(char)assistiveTouchScannerAddedTripleClickAutomatically;
-(NSString *)assistiveTouchScannerDefaultDialect;
-(NSDictionary *)assistiveTouchMainScreenCustomization;
-(NSString *)assistiveTouchOrbAction;
-(NSArray *)switchControlRecipes;
-(NSUUID *)switchControlLaunchRecipeUUID;
-(NSArray *)switchControlTopLevelMenuItems;
-(char)switchControlShouldUseShortFirstPage;
-(NSArray *)switchControlGesturesMenuItems;
-(NSArray *)switchControlDeviceMenuItems;
-(NSArray *)switchControlSettingsMenuItems;
-(int)switchControlScanningStyle;
-(double)switchControlDwellTime;
-(int)switchControlTapBehavior;
-(double)switchControlAutoTapTimeout;
-(char)switchControlShouldAlwaysActivateKeyboardKeys;
-(char)zoomPreferencesWereInitialized;
-(CGRect)zoomWindowFrame;
-(CGPoint)zoomPanOffset;
-(CGPoint)zoomSlugNormalizedPosition;
-(NSString *)zoomCurrentLensEffect;
-(NSString *)zoomCurrentLensMode;
-(char)zoomPeekZoomEnabled;
-(char)zoomPeekZoomEverEnabled;
-(char)zoomShouldFollowFocus;
-(char)zoomShouldShowSlug;
-(char)zoomAlwaysUseWindowedZoomForTyping;
-(NSString *)zoomPreferredCurrentLensMode;
-(float)zoomPreferredMaximumZoomScale;
-(NSOrderedSet *)zoomPreferredLensModes;
-(float)zoomIdleSlugOpacity;
-(char)zoomShouldAllowFullscreenAutopanning;
-(char)zoomInStandby;
-(char)zoomDebugDisableZoomLensScaleTransform;
-(char)zoomDebugShowExternalFocusRect;
-(int)guidedAccessUsageCount;
-(char)guidedAccessAXFeaturesEnabled;
-(char)guidedAccessAllowsUnlockWithTouchID;
-(NSString *)guidedAccessToneIdentifierForTimeRestrictionEvents;
-(char)guidedAccessShouldSpeakForTimeRestrictionEvents;
-(NSDictionary *)gaxInternalSettingsUserAppProfile;
-(NSDictionary *)gaxInternalSettingsUserGlobalProfile;
-(NSDictionary *)gaxInternalSettingsSavedAccessibilityFeatures;
-(NSArray *)gaxInternalSettingsSavedAccessibilityTripleClickOptions;
-(NSArray *)gaxInternalSettingsUserConfiguredAppIDs;
-(NSNumber *)gaxInternalSettingsActiveAppOrientation;
-(NSString *)gaxInternalSettingsActiveAppID;
-(char)gaxInternalSettingsIsActiveAppSelfLocked;
-(char)gaxInternalSettingsTimeRestrictionHasExpired;
-(char)gaxInternalSettingsSystemDidRestartDueToLowBattery;
-(NSString *)gaxInternalSettingsDeviceID;
-(NSString *)gaxInternalSettingsProductBuildVersion;
-(NSDate *)gaxInternalSettingsLastActivationDate;
-(NSDate *)gaxInternalSettingsLastPasscodeSetDate;
-(int)internalLoggingColorTheme;
-(char)validateSecondPartyApps;
-(NSArray *)logToFileSubsystems;
-(char)ignoreAXServerEntitlements;
-(char)logAXNotificationPosting;
-(char)voiceOverHearingAidRoutingEnabled;
-(char)skipHearingAidMFiAuth;
-(char)enableHearingAidReporter;
-(char)guidedAccessDisallowDirectInactiveToActiveTransition;
-(NSNumber *)guidedAccessOverrideTimeRestrictionDuration;
-(char)speakCorrectionsEnabled;
-(char)quickSpeakHighlightText;
-(float)quickSpeakVolume;
-(CGPoint)quickSpeakNubbitNormalizedPosition;
-(char)voiceOverLargeCursorEnabled;
-(int)voiceOverHelpMode;
-(int)voiceOverNavigateImagesOption;
-(int)voiceOverPhoneticsFeedback;
-(int)voiceOverHardwareTypingFeedback;
-(int)voiceOverSoftwareTypingFeedback;
-(int)voiceOverBrailleGesturesTypingFeedback;
-(char)voiceOverCompactVoiceEnabled;
-(char)voiceOverHintsEnabled;
-(char)voiceOverPitchChangeEnabled;
-(char)voiceOverSoundEffectsEnabled;
-(char)voiceOverSpeakingRateInRotorEnabled;
-(char)voiceOverSpeakNotificationsEnabled;
-(NSArray *)voiceOverRotorItems;
-(NSString *)voiceOverBrailleTableIdentifier;
-(char)voiceOverAlwaysUseNemethCodeForMathEnabled;
-(NSString *)voiceOverDefaultDialect;
-(NSNumber *)voiceOverHandwritingWasNativeAutocorrectEnabled;
-(float)voiceOverSpeakingRateForLanguage:(id)arg1 ;
-(int)voiceOverActivationWorkaround;
-(char)voiceOverShowSoftwareKeyboardWithBraille;
-(char)voiceOverBrailleGradeTwoAutoTranslateEnabled;
-(char)voiceOverShouldOutputToHearingAid;
-(NSArray *)voiceOverPronunciationDictionary;
-(id)voiceOverAlternativeVoiceIdentifier:(id)arg1 ;
-(char)voiceOverPrefersCompact:(id)arg1 ;
-(char)voiceOverTouchBraillePanningAutoTurnsReadingContent;
-(char)voiceOverAudioDuckingEnabled;
-(int)voiceOverTouchBrailleDisplayInputMode;
-(int)voiceOverTouchBrailleGesturesInputMode;
-(int)voiceOverTouchBrailleDisplayOutputMode;
-(char)enableVoiceOverCaptions;
-(char)voiceOverTouchBrailleGesturesShouldUseLockedConfiguration;
-(int)voiceOverTouchBrailleGesturesLockedOrientation;
-(int)voiceOverTouchBrailleGesturesLockedTypingMode;
-(char)voiceOverTouchBrailleGesturesDidPlayCalibrationHint;
-(double)voiceOverDoubleTapInterval;
-(double)voiceOverBrailleAlertDisplayDuration;
-(int)voiceOverNavigationDirectionMode;
-(int)voiceOverKeyboardModifierChoice;
-(char)allowHearingAidControlOnLockScreen;
-(char)shouldStreamToLeftAid;
-(char)shouldStreamToRightAid;
-(NSDictionary *)pairedHearingAids;
-(char)independentHearingAidSettings;
-(float)reduceWhitePointLevel;
-(NSURL *)alexLocalAssetURL;
-(NSArray *)allAvailableVoices;
-(char)touchAccommodationsEnabled;
-(char)touchAccommodationsUsageConfirmed;
-(char)touchAccommodationsTripleClickConfirmed;
-(char)touchAccommodationsHoldDurationEnabled;
-(double)touchAccommodationsHoldDuration;
-(char)touchAccommodationsIgnoreRepeatEnabled;
-(double)touchAccommodationsIgnoreRepeatDuration;
-(int)touchAccommodationsTapActivationMethod;
-(double)touchAccommodationsTapActivationTimeout;
-(char)stickyKeysEnabled;
-(char)stickyKeysShiftToggleEnabled;
-(char)stickyKeysBeepEnabled;
-(CFStringRef)_domainNameForDomain:(int)arg1 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(char)_switchFromRootUserIfNecessary:(/*^block*/id)arg1 ;
-(int)_domainForPreferenceKey:(id)arg1 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(void)_synchronizeIfNecessary:(id)arg1 domain:(int)arg2 ;
-(void)_registerForNotification:(id)arg1 ;
-(id)_migratePreferenceIfNecessary:(id)arg1 ;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(void)setAssistiveTouchMainScreenCustomization:(NSDictionary *)arg1 ;
-(void)setSwitchControlRecipes:(NSArray *)arg1 ;
-(id)_switchControlMigratePreMonarchIncludedMenuItemsForNewTypes:(id)arg1 ;
-(char)_switchControlHasEmptyTopLevelMenuItems:(id)arg1 ;
-(id)_switchControlMenuItemsForPreferenceKey:(id)arg1 allTypes:(id)arg2 ;
-(NSString *)guidedAccessDefaultToneIdentifierForTimeRestrictionEvents;
-(char)_voiceOverRotorItemEnabled:(id)arg1 ;
-(char)_anyUserPreferredLangaugeIsRTL;
-(char)touchAccommodationsAreConfigured;
-(void)_updateTouchAccommodationsTripleClickSetting;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(char)preferenceHasExistingValue:(SEL)arg1 ;
-(void)clearExistingValueForPreference:(SEL)arg1 ;
-(void)setAssistiveTouchAlwaysShowMenuEnabled:(char)arg1 ;
-(void)setAssistiveTouchOpenMenuSwaggleEnabled:(char)arg1 ;
-(void)setAssistiveTouchSpeed:(double)arg1 ;
-(void)setAssistiveTouchCustomGestures:(NSArray *)arg1 ;
-(void)setAssistiveTouchRecentGestures:(NSArray *)arg1 ;
-(void)setAssistiveTouchSavedGestures:(NSArray *)arg1 ;
-(void)setAssistiveTouchPreferredPointPicker:(int)arg1 ;
-(void)setAssistiveTouchScannerSpeechIsInterruptedByScanning:(char)arg1 ;
-(void)setAssistiveTouchScannerCursorHighVisibilityEnabled:(char)arg1 ;
-(void)setAssistiveTouchScanningMode:(int)arg1 ;
-(void)setAssistiveTouchScannerPointPickerDefaultsToRescan:(char)arg1 ;
-(void)setAssistiveTouchGroupElementsEnabled:(char)arg1 ;
-(void)setAssistiveTouchScannerCompactMenuEnabled:(char)arg1 ;
-(void)setAssistiveTouchScannerMenuLabelsEnabled:(char)arg1 ;
-(void)setAssistiveTouchAxisSweepSpeed:(float)arg1 ;
-(void)setAssistiveTouchActionRepeatInterval:(double)arg1 ;
-(void)setAssistiveTouchActionRepeatEnabled:(char)arg1 ;
-(void)setAssistiveTouchDelayAfterInput:(double)arg1 ;
-(void)setAssistiveTouchDelayAfterInputEnabled:(char)arg1 ;
-(void)setAssistiveTouchInputHoldDuration:(double)arg1 ;
-(void)setAssistiveTouchInputHoldEnabled:(char)arg1 ;
-(void)setAssistiveTouchLongPressDuration:(double)arg1 ;
-(void)setAssistiveTouchLongPressEnabled:(char)arg1 ;
-(void)setAssistiveTouchInputCoalescingDuration:(double)arg1 ;
-(void)setAssistiveTouchInputCoalescingEnabled:(char)arg1 ;
-(void)setAssistiveTouchStepInterval:(double)arg1 ;
-(void)setAssistiveTouchScanTimeoutEnabled:(char)arg1 ;
-(void)setAssistiveTouchScanTimeout:(double)arg1 ;
-(void)setAssistiveTouchScanCycles:(int)arg1 ;
-(void)setAssistiveTouchScannerSoundEnabled:(char)arg1 ;
-(void)setAssistiveTouchScannerSpeechEnabled:(char)arg1 ;
-(void)setAssistiveTouchScannerSpeechRate:(double)arg1 ;
-(void)setAssistiveTouchSwitches:(NSSet *)arg1 ;
-(void)setAssistiveTouchCursorColor:(int)arg1 ;
-(void)setAssistiveTouchHeadMovementSensitivity:(int)arg1 ;
-(void)setAssistiveTouchSwitchUsageConfirmed:(char)arg1 ;
-(void)setAssistiveTouchScannerAddedTripleClickAutomatically:(char)arg1 ;
-(void)setAssistiveTouchScannerDefaultDialect:(NSString *)arg1 ;
-(void)setAssistiveTouchScannerPrefersCompact:(char)arg1 forLanguage:(id)arg2 ;
-(char)assistiveTouchScannerPrefersCompact:(id)arg1 ;
-(void)setAssistiveTouchOrbAction:(NSString *)arg1 ;
-(void)setAssistiveTouchScannerAlternativeVoiceId:(id)arg1 forLanguage:(id)arg2 ;
-(id)assistiveTouchScannerAlternativeVoiceId:(id)arg1 ;
-(void)setSwitchControlLaunchRecipeUUID:(NSUUID *)arg1 ;
-(void)setSwitchControlTopLevelMenuItems:(NSArray *)arg1 ;
-(char)switchControlHasEmptyTopLevelMenu;
-(void)setSwitchControlShouldUseShortFirstPage:(char)arg1 ;
-(void)setSwitchControlGesturesMenuItems:(NSArray *)arg1 ;
-(void)setSwitchControlDeviceMenuItems:(NSArray *)arg1 ;
-(void)setSwitchControlSettingsMenuItems:(NSArray *)arg1 ;
-(void)setSwitchControlScanningStyle:(int)arg1 ;
-(void)setSwitchControlDwellTime:(double)arg1 ;
-(void)setSwitchControlTapBehavior:(int)arg1 ;
-(void)setSwitchControlAutoTapTimeout:(double)arg1 ;
-(void)setSwitchControlShouldAlwaysActivateKeyboardKeys:(char)arg1 ;
-(void)_switchControlClearMenuItemPreferences;
-(void)_switchControlClearMenuItemMigrationTracking;
-(void)setZoomPreferencesWereInitialized:(char)arg1 ;
-(void)setZoomWindowFrame:(CGRect)arg1 ;
-(void)setZoomPanOffset:(CGPoint)arg1 ;
-(void)setZoomSlugNormalizedPosition:(CGPoint)arg1 ;
-(void)setZoomCurrentLensEffect:(NSString *)arg1 ;
-(void)setZoomInStandby:(char)arg1 ;
-(void)setZoomCurrentLensMode:(NSString *)arg1 ;
-(void)setZoomShouldFollowFocus:(char)arg1 ;
-(void)setZoomShouldShowSlug:(char)arg1 ;
-(void)setZoomPeekZoomEnabled:(char)arg1 ;
-(void)setZoomPeekZoomEverEnabled:(char)arg1 ;
-(void)setZoomAlwaysUseWindowedZoomForTyping:(char)arg1 ;
-(void)setZoomPreferredCurrentLensMode:(NSString *)arg1 ;
-(void)setZoomPreferredMaximumZoomScale:(float)arg1 ;
-(void)setZoomPreferredLensModes:(NSOrderedSet *)arg1 ;
-(void)setZoomIdleSlugOpacity:(float)arg1 ;
-(void)setZoomShouldAllowFullscreenAutopanning:(char)arg1 ;
-(void)zoomUserHadLegacyZoomEnabled:(char*)arg1 wasZoomedIn:(char*)arg2 withScale:(float*)arg3 ;
-(void)setZoomDebugDisableZoomLensScaleTransform:(char)arg1 ;
-(void)setZoomDebugShowExternalFocusRect:(char)arg1 ;
-(void)setGuidedAccessUsageCount:(int)arg1 ;
-(void)setGuidedAccessAXFeaturesEnabled:(char)arg1 ;
-(void)setGuidedAccessAllowsUnlockWithTouchID:(char)arg1 ;
-(void)setGuidedAccessToneIdentifierForTimeRestrictionEvents:(NSString *)arg1 ;
-(void)setGuidedAccessShouldSpeakForTimeRestrictionEvents:(char)arg1 ;
-(void)setGaxInternalSettingsUserAppProfile:(NSDictionary *)arg1 ;
-(void)setGaxInternalSettingsUserGlobalProfile:(NSDictionary *)arg1 ;
-(void)setGaxInternalSettingsSavedAccessibilityFeatures:(NSDictionary *)arg1 ;
-(void)setGaxInternalSettingsSavedAccessibilityTripleClickOptions:(NSArray *)arg1 ;
-(void)setGaxInternalSettingsUserConfiguredAppIDs:(NSArray *)arg1 ;
-(void)setGaxInternalSettingsActiveAppOrientation:(NSNumber *)arg1 ;
-(void)setGaxInternalSettingsActiveAppID:(NSString *)arg1 ;
-(void)setGaxInternalSettingsTimeRestrictionHasExpired:(char)arg1 ;
-(void)setGaxInternalSettingsIsActiveAppSelfLocked:(char)arg1 ;
-(void)setGaxInternalSettingsSystemDidRestartDueToLowBattery:(char)arg1 ;
-(void)setGaxInternalSettingsDeviceID:(NSString *)arg1 ;
-(void)setGaxInternalSettingsProductBuildVersion:(NSString *)arg1 ;
-(void)setGaxInternalSettingsLastActivationDate:(NSDate *)arg1 ;
-(void)setGaxInternalSettingsLastPasscodeSetDate:(NSDate *)arg1 ;
-(void)setAssistiveTouchCameraSwitchPreviewEnabled:(char)arg1 ;
-(void)setAssistiveTouchHeadlessModeEnabled:(char)arg1 ;
-(void)setValidateSecondPartyApps:(char)arg1 ;
-(void)setIncludeBacktraceInLogs:(char)arg1 ;
-(void)setWriteAXLogsToFile:(char)arg1 ;
-(void)setLogToFileSubsystems:(NSArray *)arg1 ;
-(void)setIgnoreAXAsserts:(char)arg1 ;
-(void)setIgnoreAXServerEntitlements:(char)arg1 ;
-(void)setLogAXNotificationPosting:(char)arg1 ;
-(void)setInternalLoggingColorTheme:(int)arg1 ;
-(void)setEnableVoiceOverCaptions:(char)arg1 ;
-(void)setAllAvailableVoices:(NSArray *)arg1 ;
-(void)setVoiceOverKeyboardModifierChoice:(int)arg1 ;
-(void)setVoiceOverHearingAidRoutingEnabled:(char)arg1 ;
-(void)setSkipHearingAidMFiAuth:(char)arg1 ;
-(void)setEnableHearingAidReporter:(char)arg1 ;
-(void)setGuidedAccessDisallowDirectInactiveToActiveTransition:(char)arg1 ;
-(void)setGuidedAccessOverrideTimeRestrictionDuration:(NSNumber *)arg1 ;
-(void)setSpeakCorrectionsEnabled:(char)arg1 ;
-(void)setQuickSpeakVolume:(float)arg1 ;
-(void)setQuickSpeakHighlightText:(char)arg1 ;
-(void)setQuickSpeakCompactPreference:(id)arg1 prefersCompact:(char)arg2 ;
-(void)setQuickSpeakAlternativeVoice:(id)arg1 forLanguage:(id)arg2 ;
-(id)_quickSpeakSpeakingRateLanguages;
-(void)setQuickSpeakNubbitNormalizedPosition:(CGPoint)arg1 ;
-(void)setVoiceOverPronunciationDictionary:(NSArray *)arg1 ;
-(void)setVoiceOverTouchBraillePanningAutoTurnsReadingContent:(char)arg1 ;
-(void)setVoiceOverTouchBrailleDisplayInputMode:(int)arg1 ;
-(void)setVoiceOverTouchBrailleDisplayOutputMode:(int)arg1 ;
-(void)setVoiceOverTouchBrailleGesturesInputMode:(int)arg1 ;
-(void)setVoiceOverTouchSingleLetterQuickNavEnabled:(char)arg1 ;
-(char)voiceOverTouchSingleLetterQuickNavEnabled;
-(void)setVoiceOverLargeCursorEnabled:(char)arg1 ;
-(void)setVoiceOverHelpMode:(int)arg1 ;
-(void)setVoiceOverNavigateImagesOption:(int)arg1 ;
-(void)setVoiceOverPhoneticsFeedback:(int)arg1 ;
-(void)setVoiceOverHardwareTypingFeedback:(int)arg1 ;
-(void)setVoiceOverSoftwareTypingFeedback:(int)arg1 ;
-(void)setVoiceOverBrailleGesturesTypingFeedback:(int)arg1 ;
-(void)setVoiceOverActivationWorkaround:(int)arg1 ;
-(void)setVoiceOverCompactVoiceEnabled:(char)arg1 ;
-(char)voiceOverHandwritingEnabled;
-(char)voiceOverBrailleGesturesEnabled;
-(void)setVoiceOverHintsEnabled:(char)arg1 ;
-(void)setVoiceOverAudioDuckingEnabled:(char)arg1 ;
-(void)setVoiceOverPitchChangeEnabled:(char)arg1 ;
-(void)setVoiceOverSoundEffectsEnabled:(char)arg1 ;
-(void)setVoiceOverSpeakingRateInRotorEnabled:(char)arg1 ;
-(void)setVoiceOverSpeakNotificationsEnabled:(char)arg1 ;
-(void)setVoiceOverRotorItems:(NSArray *)arg1 ;
-(void)setVoiceOverBrailleTableIdentifier:(NSString *)arg1 ;
-(void)setVoiceOverAlwaysUseNemethCodeForMathEnabled:(char)arg1 ;
-(void)setVoiceOverDefaultDialect:(NSString *)arg1 ;
-(void)setVoiceOverHandwritingWasNativeAutocorrectEnabled:(NSNumber *)arg1 ;
-(void)setVoiceOverBrailleGradeTwoAutoTranslateEnabled:(char)arg1 ;
-(void)setVoiceOverShowSoftwareKeyboardWithBraille:(char)arg1 ;
-(void)setVoiceOverPrefersCompact:(char)arg1 forLanguage:(id)arg2 ;
-(void)clearVoicePrefersCompactSettings;
-(void)setVoiceOverAlternativeVoiceIdentifier:(id)arg1 forLanguage:(id)arg2 ;
-(id)_voiceOverTouchSpeakingRateLanguages;
-(void)setVoiceOverSpeakingRate:(float)arg1 forLanguage:(id)arg2 ;
-(void)setVoiceOverShouldOutputToHearingAid:(char)arg1 ;
-(void)setVoiceOverTouchBrailleGesturesShouldUseLockedConfiguration:(char)arg1 ;
-(void)setVoiceOverTouchBrailleGesturesLockedOrientation:(int)arg1 ;
-(void)setVoiceOverTouchBrailleGesturesLockedTypingMode:(int)arg1 ;
-(void)setVoiceOverTouchBrailleGesturesDidPlayCalibrationHint:(char)arg1 ;
-(void)setVoiceOverBrailleAlertDisplayDuration:(double)arg1 ;
-(void)setVoiceOverDoubleTapInterval:(double)arg1 ;
-(void)setVoiceOverNavigationDirectionMode:(int)arg1 ;
-(void)setPairedHearingAids:(NSDictionary *)arg1 ;
-(void)setIndependentHearingAidSettings:(char)arg1 ;
-(void)setAllowHearingAidControlOnLockScreen:(char)arg1 ;
-(void)setShouldStreamToLeftAid:(char)arg1 ;
-(void)setShouldStreamToRightAid:(char)arg1 ;
-(void)setTouchAccommodationsEnabled:(char)arg1 ;
-(void)setTouchAccommodationsTripleClickConfirmed:(char)arg1 ;
-(void)setTouchAccommodationsUsageConfirmed:(char)arg1 ;
-(void)setTouchAccommodationsHoldDurationEnabled:(char)arg1 ;
-(void)setTouchAccommodationsHoldDuration:(double)arg1 ;
-(void)setTouchAccommodationsIgnoreRepeatEnabled:(char)arg1 ;
-(void)setTouchAccommodationsIgnoreRepeatDuration:(double)arg1 ;
-(void)setTouchAccommodationsTapActivationMethod:(int)arg1 ;
-(void)setTouchAccommodationsTapActivationTimeout:(double)arg1 ;
-(void)setStickyKeysEnabled:(char)arg1 ;
-(void)setStickyKeysShiftToggleEnabled:(char)arg1 ;
-(void)setStickyKeysBeepEnabled:(char)arg1 ;
-(char)gizmoApplicationAccessibilityEnabled;
-(void)setGizmoApplicationAccessibilityEnabled:(char)arg1 ;
-(void)setAlexLocalAssetURL:(NSURL *)arg1 ;
-(void)setReduceWhitePointLevel:(float)arg1 ;
-(NSMutableDictionary *)synchronizeDomains;
-(void)setSynchronizeDomains:(NSMutableDictionary *)arg1 ;
-(id)_switchWithAction:(int)arg1 excludedUUIDs:(id)arg2 needsToSupportLongPress:(char)arg3 ;
-(char)_hasSwitchWithUUID:(id)arg1 ;
-(id)_switchWithAnyActionExcludingUUIDs:(id)arg1 needsToSupportLongPress:(char)arg2 ;
-(char)updateRecipe:(id)arg1 ;
-(char)_updateWithoutSavingExistingRecipe:(id)arg1 allRecipes:(id)arg2 ;
-(void)_assignDefaultTitleIfNeededToRecipe:(id)arg1 ;
-(void)saveRecipe:(id)arg1 ;
-(char)validateAndUpdateRecipeIfNeeded:(id)arg1 ;
-(char)isNewRecipe:(id)arg1 ;
-(id)createAndSaveRecipeForInterfaceOrientedPoint:(CGPoint)arg1 ;
-(id)switchForUUID:(id)arg1 ;
-(NSMutableSet *)registeredNotifications;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
@end


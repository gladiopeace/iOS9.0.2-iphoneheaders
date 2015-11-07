/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ToneLibrary/ToneLibrary-Structs.h>
@class NSMutableDictionary, NSDictionary, NPSDomainAccessor, TLAccessQueue;

@interface TLVibrationManager : NSObject {

	char _needsRefresh;
	char _allowsAutoRefresh;
	unsigned _specialBehaviors;
	NSMutableDictionary* _cachedSystemVibrationCompleteSubdirectories;
	NSMutableDictionary* _cachedSystemVibrationIdentifiers;
	NSDictionary* _synchronizedVibrationPatternFromToneIdentifierMapping;
	NSDictionary* _cachedUserGeneratedVibrationPatterns;
	NPSDomainAccessor* _transientNanoPreferencesDomainAccessor;
	TLAccessQueue* _accessQueue;

}

@property (assign,nonatomic) char needsRefresh;                                                                                                                                  //@synthesize needsRefresh=_needsRefresh - In the implementation block
@property (assign,nonatomic) char allowsAutoRefresh; 
@property (nonatomic,readonly) char shouldVibrateForCurrentRingerSwitchState; 
@property (nonatomic,readonly) char shouldVibrateOnRing; 
@property (nonatomic,readonly) char shouldVibrateOnSilent; 
@property (assign,setter=_setAllowsAutoRefresh:,nonatomic) char _allowsAutoRefresh;                                                                                              //@synthesize allowsAutoRefresh=_allowsAutoRefresh - In the implementation block
@property (assign,setter=_setSpecialBehaviors:,nonatomic) unsigned _specialBehaviors;                                                                                            //@synthesize specialBehaviors=_specialBehaviors - In the implementation block
@property (getter=_isUnitTestingModeEnabled,nonatomic,readonly) char _unitTestingModeEnabled; 
@property (setter=_setCachedSystemVibrationIdentifiers:,nonatomic,retain) NSMutableDictionary * _cachedSystemVibrationIdentifiers;                                               //@synthesize cachedSystemVibrationIdentifiers=_cachedSystemVibrationIdentifiers - In the implementation block
@property (setter=_setCachedSystemVibrationCompleteSubdirectories:,nonatomic,retain) NSMutableDictionary * _cachedSystemVibrationCompleteSubdirectories;                         //@synthesize cachedSystemVibrationCompleteSubdirectories=_cachedSystemVibrationCompleteSubdirectories - In the implementation block
@property (nonatomic,readonly) NSDictionary * _userGeneratedVibrationPatterns; 
@property (setter=_setCachedUserGeneratedVibrationPatterns:,nonatomic,retain) NSDictionary * _cachedUserGeneratedVibrationPatterns;                                              //@synthesize cachedUserGeneratedVibrationPatterns=_cachedUserGeneratedVibrationPatterns - In the implementation block
@property (setter=_setSynchronizedVibrationPatternFromToneIdentifierMapping:,nonatomic,copy) NSDictionary * _synchronizedVibrationPatternFromToneIdentifierMapping;              //@synthesize synchronizedVibrationPatternFromToneIdentifierMapping=_synchronizedVibrationPatternFromToneIdentifierMapping - In the implementation block
@property (setter=_setAccessQueue:,retain) TLAccessQueue * _accessQueue;                                                                                                         //@synthesize accessQueue=_accessQueue - In the implementation block
@property (setter=_setTransientNanoPreferencesDomainAccessor:,nonatomic,retain) NPSDomainAccessor * _transientNanoPreferencesDomainAccessor;                                     //@synthesize transientNanoPreferencesDomainAccessor=_transientNanoPreferencesDomainAccessor - In the implementation block
+(id)sharedVibrationManager;
+(CFStringRef)_copySharedResourcesPreferencesDomainForDomain:(CFStringRef)arg1 ;
+(void)_handleVibrationPreferencesDidChangeNotificationForPreferencesKinds:(unsigned)arg1 atInitiativeOfVibrationManager:(id)arg2 ;
+(void)_handleVibrateOnRingOrSilentDidChangeNotification;
-(void)_handleUserGeneratedVibrationsDidChangeNotification;
-(char)vibrationWithIdentifierIsValid:(id)arg1 ;
-(void)setAllowsAutoRefresh:(char)arg1 ;
-(id)nameOfVibrationWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 ;
-(char)needsRefresh;
-(id)currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2 ;
-(id)defaultVibrationIdentifierForAlertType:(int)arg1 ;
-(void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3 ;
-(char)refresh;
-(id)_currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2 correspondingToneIdentifier:(id)arg3 ;
-(id)patternForVibrationWithIdentifier:(id)arg1 ;
-(id)noneVibrationPattern;
-(char)shouldVibrateForCurrentRingerSwitchState;
-(id)patternForVibrationWithIdentifier:(id)arg1 repeating:(char)arg2 ;
-(id)_currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2 ;
-(id)_sanitizeVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3 correspondingToneIdentifier:(id)arg4 didFallbackToCurrentVibrationIdentifier:(char*)arg5 ;
-(id)currentVibrationIdentifierForAlertType:(int)arg1 ;
-(id)noneVibrationName;
-(id)allUserSelectableSystemVibrationIdentifiers;
-(id)allUserGeneratedVibrationIdentifiers;
-(char)_areSynchronizedVibrationsAllowedForAlertType:(int)arg1 ;
-(id)_synchronizedVibrationIdentifierForToneIdentifier:(id)arg1 ;
-(char)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(char)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)_setAccessQueue:(id)arg1 ;
-(TLAccessQueue *)_accessQueue;
-(void)_performBlockInAccessQueue:(/*^block*/id)arg1 ;
-(void)_setTransientNanoPreferencesDomainAccessor:(id)arg1 ;
-(id)_newServiceConnection;
-(NPSDomainAccessor *)_transientNanoPreferencesDomainAccessor;
-(id)_initWithSpecialBehaviors:(unsigned)arg1 ;
-(void)_setSynchronizedVibrationPatternFromToneIdentifierMapping:(id)arg1 ;
-(void)_setSpecialBehaviors:(unsigned)arg1 ;
-(void)_setAllowsAutoRefresh:(char)arg1 ;
-(char)_isUnitTestingModeEnabled;
-(void)_setCachedSystemVibrationIdentifiers:(id)arg1 ;
-(void)_setCachedSystemVibrationCompleteSubdirectories:(id)arg1 ;
-(void)_setCachedUserGeneratedVibrationPatterns:(id)arg1 ;
-(char)_allowsAutoRefresh;
-(unsigned)_specialBehaviors;
-(NSDictionary *)_cachedUserGeneratedVibrationPatterns;
-(void)_setNeedsRefresh:(char)arg1 ;
-(NSDictionary *)_userGeneratedVibrationPatterns;
-(id)_systemWideVibrationPatternPreferenceKeyForAlertType:(int)arg1 ;
-(id)_currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2 correspondingToneIdentifier:(id)arg3 allowsNoneDefaultToAnyActualVibrationSubstitution:(char)arg4 ;
-(id)_sanitizeVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3 correspondingToneIdentifier:(id)arg4 useDefaultVibrationAsFallback:(char)arg5 allowsNoneDefaultToAnyActualVibrationSubstitution:(char)arg6 didFallback:(char*)arg7 ;
-(id)_defaultVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2 correspondingToneIdentifier:(id)arg3 ;
-(void)_didSetVibrationPreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned)arg3 ;
-(id)_patternForSystemVibrationWithIdentifier:(id)arg1 shouldLogAssetPath:(char)arg2 ;
-(id)_systemVibrationIdentifiersForSubdirectory:(id)arg1 ;
-(NSMutableDictionary *)_cachedSystemVibrationCompleteSubdirectories;
-(NSMutableDictionary *)_cachedSystemVibrationIdentifiers;
-(id)_completeSystemVibrationsSubdirectoryForSubdirectory:(id)arg1 ;
-(id)_localizedNameForVibrationWithIdentifier:(id)arg1 ;
-(id)_nameOfVibrationWithIdentifier:(id)arg1 ;
-(NSDictionary *)_synchronizedVibrationPatternFromToneIdentifierMapping;
-(id)_retrieveUserGeneratedVibrationPatternsUsingService;
-(char)_setUserGeneratedVibrationPatternsUsingService:(id)arg1 error:(id*)arg2 ;
-(void)_didChangeUserGeneratedVibrationPatterns;
-(char)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id*)arg2 ;
-(char)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(id*)arg1 ;
-(char)_booleanPreferenceForKey:(CFStringRef)arg1 defaultValue:(char)arg2 ;
-(char)shouldVibrateOnSilent;
-(char)shouldVibrateOnRing;
-(unsigned)_storedSystemVibrationDataMigrationVersion;
-(void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
-(int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2 ;
-(int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2 didFindPersistedWatchAlertPolicy:(char*)arg3 ;
-(id)_currentVibrationWatchAlertPolicyPreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2 ;
-(void)_setCurrentVibrationWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3 ;
-(char)allowsAutoRefresh;
-(id)currentVibrationNameForAlertType:(int)arg1 ;
-(id)currentVibrationPatternForAlertType:(int)arg1 ;
-(id)defaultVibrationNameForAlertType:(int)arg1 ;
-(id)defaultVibrationPatternForAlertType:(int)arg1 ;
-(char)_vibrationIsSettableForAlertType:(int)arg1 ;
-(unsigned)_numberOfUserGeneratedVibrations;
-(char)_removeAllUserGeneratedVibrationsWithError:(id*)arg1 ;
-(char)_migrateLegacySettings;
-(int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg1 ;
-(void)_setCurrentVibrationWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDHealthDaemon, OS_dispatch_queue;
@class NSDictionary, NSMutableDictionary, NSHashTable, NSObject;

@interface HDUnitPreferencesManager : NSObject {

	id<HDHealthDaemon> _healthDaemon;
	NSDictionary* _unitPreferences;
	NSMutableDictionary* _defaultPreferredUnits;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}
-(void)dealloc;
-(id)initWithHealthDaemon:(id)arg1 ;
-(id)_authorizationStatusesForTypes:(id)arg1 authorizationServer:(id)arg2 error:(id*)arg3 ;
-(id)_queue_unitPreferenceDictionary:(id*)arg1 ;
-(id)_queue_unitForType:(id)arg1 preferencesDictionary:(id)arg2 ;
-(id)_queue_defaultUnitForType:(id)arg1 ;
-(void)_queue_updateUnitPreferenceCacheWithUnit:(id)arg1 type:(id)arg2 ;
-(void)_persistUnitPreferenceForType:(id)arg1 unit:(id)arg2 ;
-(void)_queue_notifyObserversWithUnitPreferences;
-(id)_queue_generateUnitPreferences:(id*)arg1 ;
-(id)_unitPreferencesDictionaryFromKeyValueDictionary:(id)arg1 ;
-(id)_stringFromQuantityType:(id)arg1 ;
-(id)_quantityTypeFromKeyString:(id)arg1 ;
-(id)_unitFromValueString:(id)arg1 quantityType:(id)arg2 ;
-(id)unitPreferencesDictionaryForTypes:(id)arg1 authorizationServer:(id)arg2 error:(id*)arg3 ;
-(char)setPreferredUnit:(id)arg1 forType:(id)arg2 error:(id*)arg3 ;
-(void)setPreferredUnitToDefaultIfNotSetForType:(id)arg1 ;
-(void)addUnitPreferenceObserver:(id)arg1 ;
-(void)removeUnitPreferenceObserver:(id)arg1 ;
-(void)_unitPreferencesDidChange;
-(void)_localeDidChange:(id)arg1 ;
@end


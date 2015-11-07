/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/Support/carkitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CRVehicleStore : NSObject
+(id)_itemClassKeychainAttributes;
+(id)_identifyingKeychainAttributesForVehicle:(id)arg1 ;
+(void)_addKeychainAttributesForVehicle:(id)arg1 toDictionary:(id)arg2 ;
+(id)_allKeychainAttributesForVehicle:(id)arg1 ;
+(id)_keychainAttributesMatchingQuery:(id)arg1 ;
+(id)_updateKeychainAttributesForVehicle:(id)arg1 ;
+(id)_creationKeychainAttributesForVehicle:(id)arg1 ;
+(id)_preferencesAttributesForVehicle:(id)arg1 ;
+(id)_allPreferencesPairings;
+(char)_addPreferencesPairingForVehicle:(id)arg1 ;
+(char)_addKeychainPairingForVehicle:(id)arg1 ;
+(void)postPairingsDidChangeNotification;
+(char)_removePreferencesPairingForVehicle:(id)arg1 ;
+(char)_removeKeychainPairingForVehicle:(id)arg1 ;
+(id)_keychainItemAttributesForAllVehicles;
+(void)_applyPreferencesAttributes:(id)arg1 toVehicle:(id)arg2 ;
-(void)handleAvailabilityDidChange:(id)arg1 ;
-(id)saveVehicle:(id)arg1 withMergePolicy:(/*^block*/id)arg2 ;
-(id)allStoredVehicles;
-(void)dealloc;
-(id)init;
-(char)removeVehicle:(id)arg1 ;
-(id)saveVehicle:(id)arg1 ;
@end


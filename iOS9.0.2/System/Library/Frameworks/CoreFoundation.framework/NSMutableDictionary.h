/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@interface NSMutableDictionary : NSDictionary
+(char)_processArgumentWithMutableDictionary:(id)arg1 object:(id)arg2 key:(id)arg3 ;
+(id)vmDictionaryWithObjectsAndKeys:(id)arg1 ;
+(id)MSASDictionaryWithCopyOfDictionary:(id)arg1 ;
+(id)_dictionaryWithContentsOfDictionaries:(id)arg1 ;
+(id)nonRetainingDictionary;
+(id)retainingKeyDictionary;
+(id)nonRetainingKeyAndValueDictionary;
+(id)dictionaryWithCapacity:(unsigned)arg1 ;
+(id)dictionaryWithSharedKeySet:(id)arg1 ;
-(void)setObject:(id)arg1 forInt:(int)arg2 ;
-(void)naui_safeSetObject:(id)arg1 forKey:(id)arg2 ;
-(void)blj_setObjectIfNotNil:(id)arg1 forKey:(id)arg2 ;
-(void)cr_setNonNilObject:(id)arg1 forKey:(id)arg2 ;
-(void)vmSetObject:(id)arg1 forKey:(id)arg2 ;
-(id)mf_objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(void)mf_setBool:(char)arg1 forKey:(id)arg2 ;
-(void)mf_setInteger:(int)arg1 forKey:(id)arg2 ;
-(void)mf_addObject:(id)arg1 forKey:(id)arg2 ;
-(id)CALsafeObjectForKey:(id)arg1 calculatedWithBlock:(/*^block*/id)arg2 ;
-(void)CDVAddObjectsAndKeys:(id)arg1 ;
-(void)pl_applyOrientation:(int)arg1 toNormalizedPointWithXKey:(id)arg2 yKey:(id)arg3 ;
-(void)pl_enforceCorrectValuesForMinKey:(id)arg1 maxKey:(id)arg2 ;
-(id)MSASAddDictionary:(id)arg1 ;
-(id)MSASAddIsGlobalResetSync;
-(id)MSASAddIsAlbumResetSyncAlbumGUID:(id)arg1 ;
-(id)MSASAddIsLocalChange;
-(id)MSASAddEventIsDueToAlbumDeletionAlbumGUID:(id)arg1 ;
-(id)MSASAddEventIsDueToAssetCollectionDeletionAssetCollectionGUID:(id)arg1 ;
-(id)MSASAddNotInterestingKey;
-(id)MSASAddIsErrorRecovery;
-(void)mf_fixupRFC2231Values;
-(void)safelyMapKey:(id)arg1 toObject:(id)arg2 ;
-(void)safelySetObject:(id)arg1 forKey:(id)arg2 ;
-(void)mergeWithDictionary:(id)arg1 ;
-(void)_cn_setNonNilObject:(id)arg1 forKey:(id)arg2 ;
-(void)_webkit_setInt:(int)arg1 forKey:(id)arg2 ;
-(void)_webkit_setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)_webkit_setBool:(char)arg1 forKey:(id)arg2 ;
-(void)_webkit_setLongLong:(long long)arg1 forKey:(id)arg2 ;
-(void)_webkit_setUnsignedLongLong:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)_webkit_setUnsignedInt:(unsigned)arg1 forKey:(id)arg2 ;
-(void)_web_setObjectIfNotNil:(id)arg1 forKey:(id)arg2 ;
-(void)bw_addEntriesFromDictionaryWithRecursion:(id)arg1 ;
-(id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(char)arg3 outError:(id*)arg4 ;
-(id)MCValidateAndRemoveObjectOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(char)arg3 outError:(id*)arg4 ;
-(id)MCValidateAndRemoveNonZeroLengthStringWithKey:(id)arg1 isRequired:(char)arg2 outError:(id*)arg3 ;
-(id)MCMutableDictionaryContainingValidatedKeysAndClasses:(id)arg1 removeKeys:(char)arg2 outError:(id*)arg3 ;
-(void)MCFixUpRestrictionsDictionaryForMDMReporting;
-(void)MCDeepCopyEntriesFromDictionary:(id)arg1 ;
-(void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1 ;
-(void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2 ;
-(void)MCSetBoolRestriction:(id)arg1 value:(char)arg2 ;
-(void)MCDeleteBoolRestriction:(id)arg1 ;
-(void)MCSetValueRestriction:(id)arg1 value:(id)arg2 ;
-(void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2 ;
-(void)MCSetUnionRestriction:(id)arg1 values:(id)arg2 ;
-(void)sbs_setSafeObject:(id)arg1 forKey:(id)arg2 ;
-(void)bs_setSafeObject:(id)arg1 forKey:(id)arg2 ;
-(id)bs_takeObjectForKey:(id)arg1 ;
-(void)logCounter_incrementForSubtype:(id)arg1 ;
-(unsigned)logCounter_getForSubtype:(id)arg1 ;
-(void)_web_setInt:(int)arg1 forKey:(id)arg2 ;
-(void)_web_setBool:(char)arg1 forKey:(id)arg2 ;
-(void)_web_setObject:(id)arg1 forUncopiedKey:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)__addObject:(id)arg1 forKey:(id)arg2 ;
-(void)replaceObject:(id)arg1 forKey:(id)arg2 ;
-(void)__setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_mutate;
-(void)removeEntriesWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)addObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(void)addObjects:(id)arg1 forKeys:(id)arg2 ;
-(void)removeEntriesInDictionary:(id)arg1 ;
-(void)removeEntriesPassingTest:(/*^block*/id)arg1 ;
-(void)removeKeysForObject:(id)arg1 ;
-(void)replaceObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(void)replaceObjects:(id)arg1 forKeys:(id)arg2 ;
-(void)setEntriesFromDictionary:(id)arg1 ;
-(void)setObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(void)setDictionary:(id)arg1 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)invert;
-(void)setObjects:(id)arg1 forKeys:(id)arg2 ;
@end


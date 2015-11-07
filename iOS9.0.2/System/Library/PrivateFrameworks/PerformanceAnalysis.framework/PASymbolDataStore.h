/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <libobjc.A.dylib/PASerializable.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface PASymbolDataStore : NSObject <PASerializable> {

	NSMutableDictionary* _uuidToSymbolOwnerDictionary;
	NSMutableDictionary* _uuidToSharedCacheImageInfoDictionary;
	NSMutableSet* _sharedCacheUUIDsAlreadySearchedFor;
	NSMutableDictionary* _uuidToCSSymbolOwnerCache;
	NSMutableDictionary* _pidToCSSymbolicatorCache;
	char _shouldSymbolicate;
	char _shouldUseDsymForUUIDToFindBinaries;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char shouldSymbolicate;                               //@synthesize shouldSymbolicate=_shouldSymbolicate - In the implementation block
@property (assign) char shouldUseDsymForUUIDToFindBinaries;              //@synthesize shouldUseDsymForUUIDToFindBinaries=_shouldUseDsymForUUIDToFindBinaries - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)dealloc;
-(id)init;
-(CSTypeRef)csSymbolicatorForPid:(int)arg1 ;
-(void)_addNewSymbolOwnerForCSSymbolOwnerRef:(CSTypeRef)arg1 ;
-(void)_fillUUIDCacheWithKernelSymbolOwners;
-(void)_fillUUIDCacheWithSymbolOwnersFromCurrentProcesses;
-(id)symbolHandleForAddress:(unsigned long long)arg1 inLivingPid:(int)arg2 ;
-(id)_symbolHandleForOffsetInBinary:(unsigned long long)arg1 inImageUUID:(id)arg2 andImageMappingSlide:(unsigned long long)arg3 andPidHint:(int)arg4 ;
-(id)_PACSSymbolOwnerForImageUUID:(id)arg1 andPath:(id)arg2 andPidHint:(int)arg3 ;
-(id)_symbolHandleForOffsetIntoSymbolOwner:(unsigned long long)arg1 withSymbolOwner:(id)arg2 andSymbolOwnerBaseAddress:(unsigned long long)arg3 andPidHint:(int)arg4 ;
-(id)_sharedCacheMappingsForSharedCacheUUID:(id)arg1 ;
-(id)_symbolHandleForAddress:(unsigned long long)arg1 withImageUUIDMappings:(id)arg2 andImageMappingSlide:(unsigned long long)arg3 andPidHint:(int)arg4 ;
-(id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 withBinaryOffsetInTask:(unsigned long long)arg3 inLivingPid:(int)arg4 ;
-(id)symbolHandleForAddress:(unsigned long long)arg1 withSymbolicator:(CSTypeRef)arg2 ;
-(void)makeSureKernelBinariesAreKnown;
-(void)_populateSharedCacheMappingsDictionaryWithSharedCachesInLivingProcesses;
-(void)_populateCSSymbolOwnerCacheWithLivingProcesses;
-(id)symbolHandleForAddress:(unsigned long long)arg1 inSampleTask:(id)arg2 isLiving:(char)arg3 ;
-(id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 inLivingPid:(int)arg3 ;
-(id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 inSampleTask:(id)arg3 isLiving:(char)arg4 ;
-(void)cacheSymbolicatorForPid:(int)arg1 ;
-(void)flushCachedSymbolicatorForPid:(int)arg1 ;
-(void)flushSymbolicatorCache;
-(id)copySymbolicationInfoForLivingPid:(int)arg1 ;
-(char)_isLikelyToBeKernelAddress:(unsigned long long)arg1 ;
-(char)shouldSymbolicate;
-(void)setShouldSymbolicate:(char)arg1 ;
-(char)shouldUseDsymForUUIDToFindBinaries;
-(void)setShouldUseDsymForUUIDToFindBinaries:(char)arg1 ;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)ownerContainingSymbol:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDDataEntity.h>

@interface HDSampleEntity : HDDataEntity
+(id)columnsDefinition;
+(id)_databaseTable;
+(Class)_associatedDataObjectClass;
+(id)_propertySettersForDataObject;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)codableRepresentationEncoderForHealthDaemon:(id)arg1 database:(id)arg2 ;
+(id)sourceIDsForSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(id)mostRecentSampleWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(id)columnNameForSortIdentifier:(id)arg1 ;
+(void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 orderBy:(id)arg6 directions:(id)arg7 limit:(unsigned)arg8 handler:(/*^block*/id)arg9 ;
+(void)_deleteSamplesWithPredicate:(id)arg1 limit:(unsigned)arg2 generateDeletedObjects:(char)arg3 database:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(Class)_deletedEntityClass;
+(void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 limit:(unsigned)arg6 anchor:(id*)arg7 withHandler:(/*^block*/id)arg8 ;
+(id)_predicateWithSampleType:(id)arg1 predicate:(id)arg2 ;
+(int)preferredEntityType;
+(char)requiresSampleTypePredicate;
+(void)_columnNamesAndSortOrderingsForDataType:(id)arg1 sortDescriptors:(id)arg2 withBlock:(/*^block*/id)arg3 ;
+(id)_predicateWithSampleType:(id)arg1 sourceIdentifier:(id)arg2 predicate:(id)arg3 ;
+(int)countOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 withError:(id*)arg4 ;
+(void)deleteSamplesWithTypes:(id)arg1 sourceIdentifier:(id)arg2 healthDaemon:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned)arg2 generateDeletedObjects:(char)arg3 healthDaemon:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)samplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 limit:(unsigned)arg4 anchor:(id*)arg5 error:(id*)arg6 ;
+(void)enumerateUUIDsOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingFilter:(id)arg3 limit:(unsigned)arg4 withHandler:(/*^block*/id)arg5 ;
+(void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 filter:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 sortDescriptors:(id)arg6 limit:(unsigned)arg7 handler:(/*^block*/id)arg8 ;
+(void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 filter:(id)arg3 predicate:(id)arg4 sourceIdentifier:(id)arg5 authorizationFilter:(/*^block*/id)arg6 sortDescriptors:(id)arg7 limit:(unsigned)arg8 anchor:(id*)arg9 handler:(/*^block*/id)arg10 ;
+(void)enumerateObjectsWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 limit:(unsigned)arg6 anchor:(id)arg7 includeDeletedObjects:(char)arg8 deletedObjectsAnchor:(id)arg9 handler:(/*^block*/id)arg10 ;
+(int)countOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingFilter:(id)arg3 withError:(id*)arg4 ;
+(id)sampleCountAndDatesOfType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 cancellationBlock:(/*^block*/id)arg4 ;
+(id)samplesTypesForSamplesMatchingPredicate:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)anySampleOfType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(id)predicateForNanoSyncRestoreWithDeviceSourceIdentifier:(id)arg1 sampleTypesByAgeInDays:(id)arg2 nowDate:(id)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)objectsForNanoSyncRestoreWithStore:(id)arg1 sampleTypesByAgeInDays:(id)arg2 nowDate:(id)arg3 syncAnchorRange:(HDSyncAnchorRange)arg4 lastSyncAnchor:(long long*)arg5 healthDaemon:(id)arg6 error:(id*)arg7 ;
+(long long)finalAnchorForNanoSyncRestoreWithStore:(id)arg1 sampleTypesByAgeInDays:(id)arg2 nowDate:(id)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
-(id)_sampleTypeInDatabase:(id)arg1 ;
@end


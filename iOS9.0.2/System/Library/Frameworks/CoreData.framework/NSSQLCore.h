/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStore.h>
#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSQLModel, NSSQLAdapter, NSSQLConnection, NSMutableArray, NSManagedObjectContext, NSSQLEntity, NSSQLRowCache, NSSet, NSSaveChangesRequest, NSMutableSet, NSMutableDictionary, NSSQLRow, NSString;

@interface NSSQLCore : NSPersistentStore <NSFilePresenter> {

	NSSQLModel* _model;
	NSSQLAdapter* _adapter;
	NSSQLConnection* _connection;
	NSMutableArray* _channels;
	NSManagedObjectContext* _currentContext;
	NSSQLEntity* _lastEntity;
	NSSQLRowCache* _rowCache;
	NSSet* _newInserts;
	CFDictionaryRef _changeCache;
	CFDictionaryRef _insertCache;
	CFDictionaryRef _toManyCache;
	id* _prefetchRequestsByEntity;
	NSSaveChangesRequest* _currentSaveRequest;
	NSMutableSet* _rowsInCurrentSave;
	NSMutableDictionary* _updatedFOKRowsInCurrentSave;
	NSMutableDictionary* _deletedFOKRowsInCurrentSave;
	int _lazyFaultDebugLevel;
	NSMutableDictionary* _batchFaultBuffer;
	NSMutableDictionary* _batchToManyFaultBuffer;
	NSScalarObjectID* _currentGlobalID;
	NSSQLRow* _currentRow;
	id _observer;
	NSMutableSet* _missingObjectGIDs;
	NSMutableDictionary* _storeMetadata;
	NSMutableArray* _externalDataReferencesToSave;
	NSMutableSet* _externalDataReferencesToDelete;
	NSString* _externalDataReferencesDirectory;
	NSString* _externalDataLinksDirectory;
	int _transactionInMemorySequence;
	int _moreOtherReserved;
	struct {
		unsigned beganTransaction : 1;
		unsigned ignoreEntityCaching : 1;
		unsigned storeMetadataClean : 1;
		unsigned useToManyCaching : 1;
		unsigned useSyntaxColoredLogging : 1;
		unsigned checkedExternalReferences : 1;
		unsigned fileProtectionType : 3;
		unsigned notifyFOKChanges : 1;
		unsigned _RESERVED : 22;
	}  _sqlCoreFlags;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(char)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(char)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(void)setDebugDefault:(int)arg1 ;
+(Class)migrationManagerClass;
+(char)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5 ;
+(char)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1 ;
+(char)SQLGenerationV1Default;
+(char)coloredLoggingDefault;
+(int)debugDefault;
+(char)sanityCheckFileAtURL:(id)arg1 error:(id*)arg2 ;
+(void)setColoredLoggingDefault:(char)arg1 ;
+(void)setSQLGenerationV1Default:(char)arg1 ;
+(id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(void)initialize;
-(id)objectIDFactoryForEntity:(id)arg1 ;
-(id)externalDataReferencesDirectory;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(char)load:(id*)arg1 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(id)entityForEntityDescription:(id)arg1 ;
-(id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2 ;
-(id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)databaseUUID;
-(char)_unload:(id*)arg1 ;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(Class)_objectIDClass;
-(char)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)_storeInfoForEntityDescription:(id)arg1 ;
-(void)clearCachedInformationForRequestWithIdentifier:(id)arg1 ;
-(id)_externalDataLinksDirectory;
-(void)_disconnect;
-(id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2 ;
-(CFArrayRef)_deleteAllRowsNoRelationshipIntegrityForEntityWithAllSubentities:(id)arg1 ;
-(void)setDatabaseUUID:(id)arg1 ;
-(id)rowForObjectID:(id)arg1 ;
-(id)cachedStatementForRequest:(id)arg1 ;
-(void)incrementInUseCounterForCachedStatementForRequest:(id)arg1 ;
-(id)entityForFetchRequest:(id)arg1 ;
-(id)adapter;
-(void)setExclusiveLockingMode:(char)arg1 ;
-(id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1 ;
-(void)_performPostSaveTasks;
-(void)cacheStatement:(id)arg1 forRequest:(id)arg2 ;
-(id)channels;
-(void)resetExternalDataReferencesDirectories;
-(Class)objectIDFactoryForSQLEntity:(id)arg1 ;
-(NSScalarObjectID*)newObjectIDForEntity:(id)arg1 pk:(long long)arg2 ;
-(id)_newAdapterForModel:(id)arg1 ;
-(void)_ensureDatabaseMatchesModel;
-(id)rowCache;
-(id)rowForObjectID:(id)arg1 after:(double)arg2 ;
-(id)fetchRowForObjectID:(NSScalarObjectID*)arg1 ;
-(id)newFetchedPKsForSourceID:(NSScalarObjectID*)arg1 andRelationship:(id)arg2 ;
-(void)_beginTransaction:(id)arg1 ;
-(void)beginTransaction_core;
-(void)commitTransaction_core;
-(void)rollbackTransaction_core;
-(id)changeSnapshotForObjectID:(id)arg1 ;
-(void)recordChangeSnapshot:(id)arg1 forObjectID:(id)arg2 ;
-(id)_availableChannelFromRegisteredChannels;
-(void)registerChannel:(id)arg1 ;
-(id)_availableChannel;
-(id)externalDataLinksDirectory;
-(int)fileProtectionLevel;
-(id)_prepareDictionaryResultsFromResultSet:(SCD_Struct_NS13*)arg1 usingFetchPlan:(id)arg2 ;
-(id)_prepareResultsFromResultSet:(SCD_Struct_NS13*)arg1 usingFetchPlan:(id)arg2 withMatchingRows:(id*)arg3 ;
-(id)_obtainOpenChannel;
-(void)_prefetchWithFetchRequest:(id)arg1 subkeys:(id)arg2 withObjectIDs:(id)arg3 inContext:(id)arg4 ;
-(long long)_knownPrimaryKeyForObjectID:(id)arg1 ;
-(unsigned)_knownEntityKeyForObjectID:(id)arg1 ;
-(void)_populateOrderKeysInOrderedSet:(id)arg1 usingSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 newIndexes:(unsigned*)arg4 reorderedIndexes:(char**)arg5 ;
-(unsigned)_orderKeyForObject:(id)arg1 fromSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 inOrderedSet:(id)arg4 ;
-(long long)_knownPrimaryKeyForObject:(id)arg1 ;
-(unsigned)_knownEntityKeyForObject:(id)arg1 ;
-(unsigned)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 inverseToMany:(id)arg3 ;
-(id)externalDataReferencesToDelete;
-(void)recordToManyChangesForObject:(id)arg1 inRow:(id)arg2 usingTimestamp:(double)arg3 inserted:(char)arg4 ;
-(id)entityForObject:(id)arg1 ;
-(char)shouldNotifyFOKChanges;
-(void)registerChangedFOKs:(id)arg1 deletions:(id)arg2 forSourceObject:(id)arg3 andRelationship:(id)arg4 ;
-(id)_newRowCacheRowForToManyUpdatesForRelationship:(id)arg1 rowCacheOriginal:(id)arg2 originalSnapshot:(id)arg3 value:(id)arg4 added:(id)arg5 deleted:(id)arg6 sourceRowPK:(long long)arg7 properties:(id)arg8 sourceObject:(id)arg9 newIndexes:(unsigned*)arg10 reorderedIndexes:(char**)arg11 ;
-(id)findOrCreateChangeSnapshotForGlobalID:(id)arg1 ;
-(id)correlationTableUpdateTrackerForRelationship:(id)arg1 ;
-(void)insertEntity:(id)arg1 intoOrderingArray:(id)arg2 withDependencies:(id)arg3 processingSet:(id)arg4 ;
-(void)_populateRow:(id)arg1 fromObject:(id)arg2 timestamp:(double)arg3 inserted:(char)arg4 ;
-(void)_prepareForDeletionOfExternalDataReferencesForObject:(id)arg1 ;
-(void)createCorrelationTrackerUpdatesForDeletedObject:(id)arg1 ;
-(void)removeChangeSnapshotForObjectID:(id)arg1 ;
-(void)beginTransaction_NotificationFree;
-(void)commitTransaction_NotificationFree;
-(CFArrayRef)_rowsForConflictDetection:(id)arg1 withChannel:(id)arg2 ;
-(id)_newObjectGraphStyleForSQLRow:(id)arg1 withObject:(id)arg2 ;
-(id)_newConflictRecordForObject:(id)arg1 originalRow:(id)arg2 newRow:(id)arg3 ;
-(id)_performExhaustiveOptimisticLockCheckingForObjects:(id)arg1 withChannel:(id)arg2 ;
-(id)_performExhaustiveUniqueAttributeConflictCheckForGroupedObjects:(id)arg1 withChannel:(id)arg2 ;
-(id)_performExhaustiveMulticolumnConstraintCheckingForGroupedObjects:(id)arg1 withChannel:(id)arg2 ;
-(id)_mergeVersionFailures:(id)arg1 attributeUniquenessFailures:(id)arg2 andMulticolumnConstraintFailures:(id)arg3 ;
-(void)forgetChangeSnapshotForObjectID:(id)arg1 ;
-(char)_performFastConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2 ;
-(void)writeChanges;
-(void)_cleanUpAfterSave;
-(id)newRowsForFetchPlan:(id)arg1 ;
-(id)_newRowsForFetchPlan:(id)arg1 selectedBy:(SEL)arg2 withArgument:(id)arg3 ;
-(void)prepareForSave:(id)arg1 ;
-(void)performChanges;
-(id)writeExternalDataReferences;
-(void)commitChanges:(id)arg1 ;
-(void)deleteExternalDataReferences:(id)arg1 ;
-(void)rollbackChanges;
-(id)_performExhaustiveConflictDetectionForObjects:(id)arg1 withUniqueness:(id)arg2 withChannel:(id)arg3 ;
-(int)executeBatchDeleteStatements:(id)arg1 ;
-(id)objectsForFetchRequest:(id)arg1 inContext:(id)arg2 ;
-(id)countForFetchRequest:(id)arg1 inContext:(id)arg2 ;
-(id)saveChanges:(id)arg1 ;
-(id)refreshObjects:(id)arg1 ;
-(id)performBatchUpdate:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)performBatchDelete:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)_checkAndRepairCorrelationTables:(char)arg1 storeVersionNumber:(id)arg2 ;
-(id)_dissectCorrelationTableCreationSQL:(id)arg1 ;
-(id)_collectSkewedComponents:(id*)arg1 ;
-(void)_repairDatabaseCorrelationTables:(id)arg1 brokenHashModel:(id)arg2 storeVersionNumber:(id)arg3 recurse:(char)arg4 ;
-(char)hasCachedModel;
-(id)_loadAndSetMetadata;
-(id)_loadAndSetMetadataReadOnly;
-(id)rawSQLTextForToManyFaultStatement:(id)arg1 stripBindVariables:(char)arg2 swapEKPK:(char)arg3 ;
-(id)hackQueryForManyToManyPrefetching:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3 ;
-(id)newFaultingPredicateForSourceID:(NSScalarObjectID*)arg1 andRelationship:(id)arg2 ;
-(id)newSortDescriptorForOrderedRelationship:(id)arg1 ;
-(id)cachedModelWithError:(id*)arg1 ;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)newObjectIDSetsForToManyPrefetchingRequest:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2 withToken:(id)arg3 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(void)_prefetchRelationshipKey:(id)arg1 sourceEntityDescription:(id)arg2 sourceObjectIDs:(id)arg3 prefetchRelationshipKeys:(id)arg4 inContext:(id)arg5 ;
-(void)generatePrimaryKeysForEntity:(id)arg1 ;
-(NSScalarObjectID*)newForeignKeyID:(long long)arg1 entity:(id)arg2 ;
-(void)_useModel:(id)arg1 ;
-(void)_cacheRows:(id)arg1 ;
-(void)_uncacheRows:(id)arg1 ;
-(id)newAdapterForModel:(id)arg1 ;
-(void)unregisterChannel:(id)arg1 ;
-(id)createChannel;
-(id)availableChannel;
-(id)_processRawRows:(SCD_Struct_NS13*)arg1 forFetchPlan:(id)arg2 selectedBy:(SEL)arg3 withArgument:(id)arg4 ;
-(unsigned)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 orderedManyToMany:(id)arg3 ;
-(id)_entityForObject:(id)arg1 ;
-(id)externalLocationForFileWithUUID:(id)arg1 ;
-(id)safeguardLocationForFileWithUUID:(id)arg1 ;
-(id)externalDataReferencesToSave;
-(id)_ubiquityDictionaryForAttribute:(id)arg1 onObject:(id)arg2 ;
-(void)_purgeRowCache;
-(void)recomputePrimaryKeyMaxForEntities:(id)arg1 ;
-(id)_newReservedKeysForEntities:(id)arg1 counts:(id)arg2 ;
-(id)_newObjectIDForEntity:(id)arg1 referenceData64:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)identifier;
-(id)type;
-(id)model;
-(void)commitTransaction;
-(void)setURL:(id)arg1 ;
-(id)connection;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)setCurrentContext:(id)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)metadata;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(char)loadMetadata:(id*)arg1 ;
-(id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3 ;
-(void)rollbackTransaction;
-(void)beginTransaction;
-(id)currentContext;
@end


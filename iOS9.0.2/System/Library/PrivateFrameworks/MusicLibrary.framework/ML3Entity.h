/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3MusicLibrary;

@interface ML3Entity : NSObject {

	ML3MusicLibrary* _library;
	long long _persistentID;

}

@property (__weak) ML3MusicLibrary * library;              //@synthesize library=_library - In the implementation block
@property (readonly) long long persistentID;               //@synthesize persistentID=_persistentID - In the implementation block
@property (readonly) char existsInLibrary; 
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(id)spotlightPropertyForMPMediaEntityProperty:(id)arg1 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(char)arg4 options:(long long)arg5 ;
+(id)entityFromURL:(id)arg1 inLibrary:(id)arg2 ;
+(id)anyInLibrary:(id)arg1 predicate:(id)arg2 ;
+(id)newWithPersistentID:(long long)arg1 inLibrary:(id)arg2 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 ;
+(char)setValues:(id)arg1 forProperties:(id)arg2 forEntityPersistentIDs:(id)arg3 inLibrary:(id)arg4 usingConnection:(id)arg5 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 options:(long long)arg3 ;
+(id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 ;
+(char)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned)arg4 ;
+(char)removeFromMyLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned)arg4 ;
+(int)revisionTrackingCode;
+(id)defaultOrderingTerms;
+(id)allItemsQueryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(char)arg4 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(char)arg4 ;
+(id)unrestrictedAllItemsQueryWithlibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 ;
+(id)aggregateQueryWithUnitQuery:(id)arg1 foreignPersistentIDProperty:(id)arg2 ;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(char)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 connection:(id)arg4 ;
+(id)persistentIDColumnForTable:(id)arg1 ;
+(char)incrementRevisionForRevisionTypeContentWithConnection:(id)arg1 deletionType:(int)arg2 persistentIDs:(id)arg3 ;
+(char)_shouldIncrementRevisionForType:(int)arg1 persistentID:(long long)arg2 usingConnection:(id)arg3 ;
+(char)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4 usingConnection:(id)arg5 ;
+(id)unsettableProperties;
+(id)foreignColumnForProperty:(id)arg1 ;
+(char)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 library:(id)arg4 ;
+(id)extraTablesToInsert;
+(char)insertionChangesLibraryContents;
+(char)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4 ;
+(id)allProperties;
+(id)predicateIncludingSystemwidePredicatesWithPredicate:(id)arg1 library:(id)arg2 options:(long long)arg3 ;
+(id)newSelectSQLForProperties:(const id*)arg1 count:(unsigned)arg2 predicate:(id)arg3 ;
+(id)disambiguatedSelectSQLForProperty:(id)arg1 ;
+(id)entityFromURL:(id)arg1 inLibrary:(id)arg2 verifyExistence:(char)arg3 ;
+(id)entityURLScheme;
+(id)URLForEntityWithPersistentID:(long long)arg1 libraryUID:(id)arg2 ;
+(id)predicateByOptimizingComparisonPredicate:(id)arg1 ;
+(char)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(id)widthLimitedSetValuesQueue;
+(void)_didChangeValueForProperties:(id)arg1 inLibrary:(id)arg2 ;
+(char)libraryContentsChangeForProperty:(id)arg1 ;
+(char)libraryDynamicChangeForProperty:(id)arg1 ;
+(char)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned)arg4 usingConnection:(id)arg5 ;
+(char)_deleteRowForPersistentIDs:(const long long*)arg1 count:(unsigned)arg2 library:(id)arg3 table:(id)arg4 usingColumn:(id)arg5 usingConnection:(id)arg6 ;
+(id)extraTablesToDelete;
+(id)collectionClassesToUpdateBeforeDelete;
+(char)incrementRevisionForRevisionTypeContentWithConnection:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned)arg4 ;
+(id)predisambiguatedProperties;
+(char)incrementRevisionForRevisionTypeContentWithLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(id)arg3 ;
+(void)enumeratePersistentIDsInLibrary:(id)arg1 matchingPredicate:(id)arg2 orderingTerms:(id)arg3 persistentIDs:(const long long*)arg4 count:(unsigned)arg5 options:(long long)arg6 usingBlock:(/*^block*/id)arg7 ;
+(id)subselectStatementForProperty:(id)arg1 ;
+(id)subselectPropertyForProperty:(id)arg1 ;
+(id)newSelectAllEntitiesSQLForProperties:(const id*)arg1 count:(unsigned)arg2 predicate:(id)arg3 ;
+(id)defaultFilterPredicates;
+(id)predicateByOptimizingPredicate:(id)arg1 ;
+(id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 ;
+(id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4 ;
+(id)sectionPropertyForProperty:(id)arg1 ;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(void)predisambiguateProperties:(id)arg1 toDictionary:(id)arg2 ;
+(id)indexableSQLForProperties:(id)arg1 ;
+(id)orderingSQLForProperties:(id)arg1 directionality:(id)arg2 ;
+(void)enumeratePersistentIDsInLibrary:(id)arg1 afterRevision:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
+(id)anyInLibrary:(id)arg1 predicate:(id)arg2 options:(long long)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 usingSections:(char)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 usingSections:(char)arg4 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirectionMappings:(id)arg4 usingSections:(char)arg5 ;
+(id)directCollectionQueryWithAggregateQuery:(id)arg1 predicate:(id)arg2 usingSections:(char)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4 options:(long long)arg5 ;
+(id)unrestrictedQueryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 ;
+(id)replacerWithProperties:(id)arg1 library:(id)arg2 ;
-(ML3MusicLibrary *)library;
-(char)existsInLibrary;
-(id)initWithPersistentID:(long long)arg1 inLibrary:(id)arg2 ;
-(void)setValues:(id)arg1 forProperties:(id)arg2 async:(char)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned)arg3 ;
-(void)setLibrary:(ML3MusicLibrary *)arg1 ;
-(long long)persistentID;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)URL;
-(id)valueForProperty:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4 ;
-(id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 ;
-(char)setValues:(id)arg1 forProperties:(id)arg2 ;
-(char)setValues:(id)arg1 forProperties:(id)arg2 usingConnection:(id)arg3 ;
-(id)copyInLibrary:(id)arg1 ;
-(char)matchesPredicate:(id)arg1 ;
-(id)getValuesForProperties:(id)arg1 ;
-(char)setValuesForPropertiesWithDictionary:(id)arg1 ;
-(void)didChangeValueForProperties:(id)arg1 ;
-(char)deleteFromLibrary;
-(void)incrementRevision;
-(char)setValue:(id)arg1 forProperty:(id)arg2 ;
-(char)setValues:(const id*)arg1 forProperties:(const id*)arg2 count:(unsigned)arg3 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomAnalytics/SymptomAnalytics-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel, NSXPCConnection;

@interface AnalyticsWorkspace : NSObject <NSCopying> {

	NSString* backingStore;
	char readOnly;
	char pathKnownToFail;
	NSString* revision;
	NSString* storeKind;
	NSString* storeProt;
	NSPersistentStoreCoordinator* __persistentStoreCoordinator;
	NSManagedObjectContext* __mainObjectContext;
	NSManagedObjectModel* __objectModel;
	/*^block*/id __resetCompletionBlock;
	NSXPCConnection* __connection;

}

@property (nonatomic,retain,readonly) NSManagedObjectModel * objectModel;                                     //@synthesize _objectModel=__objectModel - In the implementation block
@property (nonatomic,retain,readonly) NSManagedObjectContext * mainObjectContext;                             //@synthesize _mainObjectContext=__mainObjectContext - In the implementation block
@property (nonatomic,retain,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize _persistentStoreCoordinator=__persistentStoreCoordinator - In the implementation block
@property (nonatomic,retain,readonly) NSXPCConnection * connection;                                           //@synthesize _connection=__connection - In the implementation block
@property (nonatomic,copy) id resetCompletionBlock;                                                           //@synthesize _resetCompletionBlock=__resetCompletionBlock - In the implementation block
+(id)defaultWorkspace;
+(id)workspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(char)arg3 ;
-(char)save;
-(void)dealloc;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSXPCConnection *)connection;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)initWorkspaceWithService:(id)arg1 ;
-(id)initWorkspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(char)arg3 ;
-(NSManagedObjectModel *)objectModel;
-(id)_initWithName:(id)arg1 useReadOnly:(char)arg2 ;
-(char)_primePath:(id)arg1 ;
-(id)createNewContext;
-(id)resetCompletionBlock;
-(void)setResetCompletionBlock:(id)arg1 ;
-(NSManagedObjectContext *)mainObjectContext;
@end


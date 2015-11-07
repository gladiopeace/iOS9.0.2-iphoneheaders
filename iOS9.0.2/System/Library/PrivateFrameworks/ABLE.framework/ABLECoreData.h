/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ABLECoreData : NSObject {

	NSManagedObjectModel* _cdModel;
	NSManagedObjectContext* _cdcontext;
	NSPersistentStoreCoordinator* _cdcoordinator;

}

@property (readonly) NSManagedObjectModel * cdModel;                            //@synthesize cdModel=_cdModel - In the implementation block
@property (readonly) NSManagedObjectContext * cdcontext;                        //@synthesize cdcontext=_cdcontext - In the implementation block
@property (readonly) NSPersistentStoreCoordinator * cdcoordinator;              //@synthesize cdcoordinator=_cdcoordinator - In the implementation block
-(void)removeFileAt:(id)arg1 ;
-(void)obliterateDatabasePath:(id)arg1 dueToError:(id)arg2 ;
-(id)createCoordinatorFromDatabasePath:(id)arg1 ;
-(id)newContextWithCoordinator:(id)arg1 ;
-(void)saveContext:(id)arg1 withDB:(id)arg2 withCoordinator:(id)arg3 ;
-(void)saveEntries;
-(void)savePrediction:(/*^block*/id)arg1 ;
-(void)savePredictedEvents:(/*^block*/id)arg1 ;
-(void)saveResponseData:(/*^block*/id)arg1 ;
-(NSManagedObjectModel *)cdModel;
-(NSManagedObjectContext *)cdcontext;
-(NSPersistentStoreCoordinator *)cdcoordinator;
-(id)init;
-(id)context;
-(id)model;
-(id)coordinator;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/NSFetchedResultsControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSManagedObjectContext, NSFetchedResultsController, NSMutableArray, NSMapTable, NSString;

@interface BKSeriesCoverManager : NSObject <NSFetchedResultsControllerDelegate> {

	NSDictionary* _map;
	NSObject*<OS_dispatch_queue> _sync;
	NSObject*<OS_dispatch_queue> _access;
	NSObject*<OS_dispatch_queue> _notify;
	NSManagedObjectContext* _moc;
	NSFetchedResultsController* _frc;
	NSMutableArray* _changedSeries;
	NSMapTable* _observers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_rebuild;
-(void)_startSeriesInfoFetch;
-(void)invalidateCacheForSeriesId:(id)arg1 ;
-(void)withBooksInSeries:(id)arg1 performBlockAsync:(/*^block*/id)arg2 ;
-(void)addSeriesCoverObserver:(id)arg1 ;
-(void)removeSeriesCoverObserver:(id)arg1 ;
-(void)prewarm;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end


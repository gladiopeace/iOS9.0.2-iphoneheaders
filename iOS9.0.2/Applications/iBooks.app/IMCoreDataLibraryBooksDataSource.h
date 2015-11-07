/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMLibraryBooksDataSource.h>
#import <iBooks/NSFetchedResultsControllerDelegate.h>

@class NSManagedObjectContext, NSFetchedResultsController, NSFetchRequest, NSString;

@interface IMCoreDataLibraryBooksDataSource : IMLibraryBooksDataSource <NSFetchedResultsControllerDelegate> {

	NSManagedObjectContext* _moc;
	NSFetchedResultsController* _fetchedResultsController;
	NSFetchRequest* _fetchRequest;
	NSString* _entityName;

}

@property (nonatomic,retain) NSManagedObjectContext * moc;                                                //@synthesize moc=_moc - In the implementation block
@property (nonatomic,__weak,readonly) NSFetchedResultsController * fetchedResultsController; 
@property (nonatomic,retain) NSString * entityName;                                                       //@synthesize entityName=_entityName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)currentSectionNameKeyPath;
-(id)objectsInSection:(int)arg1 ;
-(unsigned)numberOfObjectsInSection:(int)arg1 ;
-(id)checkedObjectAtIndexPath:(id)arg1 ;
-(id)nameForSection:(int)arg1 ;
-(void)_releaseFetchedResultsController;
-(void)_initializeFetchedResultsController;
-(NSFetchedResultsController *)fetchedResultsController;
-(int)_changeTypeForFetchChangeType:(unsigned)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned)arg4 newIndexPath:(id)arg5 ;
-(void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned)arg3 forChangeType:(unsigned)arg4 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(id)controller:(id)arg1 sectionIndexTitleForSectionName:(id)arg2 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(int)sectionForSectionIndexTitle:(id)arg1 atIndex:(int)arg2 ;
-(void)dealloc;
-(void)reloadData;
-(id)allObjects;
-(id)sectionIndexTitles;
-(void)setEntityName:(NSString *)arg1 ;
-(unsigned)sectionsCount;
-(NSString *)entityName;
-(NSManagedObjectContext *)moc;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
@end


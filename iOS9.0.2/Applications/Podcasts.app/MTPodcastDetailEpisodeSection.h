/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/NSFetchedResultsControllerDelegate.h>

@protocol MTPodcastDetailEpisodeSectionDelegate;
@class NSString, NSPredicate, NSArray, NSFetchedResultsController;

@interface MTPodcastDetailEpisodeSection : NSObject <NSFetchedResultsControllerDelegate> {

	char _showTitleWithNoEpisodes;
	NSString* _title;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned _sectionType;
	id<MTPodcastDetailEpisodeSectionDelegate> _delegate;
	NSFetchedResultsController* _frc;

}

@property (nonatomic,copy) NSString * title;                                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                                              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) unsigned sectionType;                                                   //@synthesize sectionType=_sectionType - In the implementation block
@property (assign,nonatomic) char showTitleWithNoEpisodes;                                           //@synthesize showTitleWithNoEpisodes=_showTitleWithNoEpisodes - In the implementation block
@property (assign,nonatomic,__weak) id<MTPodcastDetailEpisodeSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * frc;                                       //@synthesize frc=_frc - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)episodes;
-(NSFetchedResultsController *)frc;
-(void)setFrc:(NSFetchedResultsController *)arg1 ;
-(void)initializeFrc;
-(unsigned)indexOfEpisode:(id)arg1 ;
-(char)showTitleWithNoEpisodes;
-(void)setShowTitleWithNoEpisodes:(char)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(unsigned)sectionType;
-(void)setSectionType:(unsigned)arg1 ;
-(void)setDelegate:(id<MTPodcastDetailEpisodeSectionDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(id<MTPodcastDetailEpisodeSectionDelegate>)delegate;
-(NSString *)title;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)loadData;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKPaginationOperationController.h>

@class AEAnnotationProvider, NSManagedObjectID, AEBookInfo, NSString, ContentStyle, NSArray, NSOperationQueue, NSManagedObjectContext, BKPaginationFactory, BKNavigationHistory, BKBookLayoutGeometry, NSPersistentStoreCoordinator;

@interface BKPaginationController : NSObject <BKPaginationOperationController> {

	NSManagedObjectID* _bookObjectID;
	AEBookInfo* _bookObject;
	NSString* _bookDatabaseKey;
	NSString* _bookLanguage;
	char _bookSample;
	NSString* _lookupKey;
	ContentStyle* _style;
	int _bookDirection;
	NSArray* _paginationInfo;
	NSArray* _chapterInfo;
	NSArray* _bookmarkPageCounts;
	NSArray* _physicalPagesInfo;
	int _pageTotal;
	int _paginationBatchSize;
	int _paginationBatchProgress;
	unsigned long _jobGeneration;
	NSOperationQueue* _resultsQueue;
	NSOperationQueue* _layoutQueue;
	NSManagedObjectContext* _primaryMOC;
	int _pauseCount;
	BKPaginationFactory* _operationFactory;
	BKNavigationHistory* _navigationHistory;
	BKBookLayoutGeometry* _layoutGeometry;
	char _bookShouldDisableOptimizeSpeed;

}

@property (nonatomic,readonly) AEBookInfo * book;                                                      //@synthesize bookObject=_bookObject - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * bookObjectID;                                       //@synthesize bookObjectID=_bookObjectID - In the implementation block
@property (nonatomic,readonly) NSString * bookDatabaseKey;                                             //@synthesize bookDatabaseKey=_bookDatabaseKey - In the implementation block
@property (nonatomic,readonly) NSString * bookLanguage;                                                //@synthesize bookLanguage=_bookLanguage - In the implementation block
@property (nonatomic,readonly) char bookShouldDisableOptimizeSpeed;                                    //@synthesize bookShouldDisableOptimizeSpeed=_bookShouldDisableOptimizeSpeed - In the implementation block
@property (assign,nonatomic) int bookDirection;                                                        //@synthesize bookDirection=_bookDirection - In the implementation block
@property (getter=isBookSample,nonatomic,readonly) char bookSample;                                    //@synthesize bookSample=_bookSample - In the implementation block
@property (nonatomic,retain) ContentStyle * style;                                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) float progress; 
@property (assign) unsigned long jobGeneration;                                                        //@synthesize jobGeneration=_jobGeneration - In the implementation block
@property (retain) BKNavigationHistory * navigationHistory;                                            //@synthesize navigationHistory=_navigationHistory - In the implementation block
@property (nonatomic,copy) BKBookLayoutGeometry * layoutGeometry;                                      //@synthesize layoutGeometry=_layoutGeometry - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator; 
@property (retain) NSArray * bookmarkPageCounts;                                                       //@synthesize bookmarkPageCounts=_bookmarkPageCounts - In the implementation block
@property (nonatomic,readonly) AEAnnotationProvider * bookAnnotationProvider; 
+(id)newPaginationControllerForBook:(id)arg1 ;
-(NSString *)bookDatabaseKey;
-(NSRange)pageRangeForChapterAtIndex:(unsigned)arg1 ;
-(id)initWithBook:(id)arg1 ;
-(AEBookInfo *)book;
-(NSRange)pageRangeForAnnotation:(id)arg1 ;
-(void)setLayoutGeometry:(BKBookLayoutGeometry *)arg1 ;
-(id)pageLocationForPageNumber:(unsigned)arg1 ;
-(id)resultsQueue;
-(BKBookLayoutGeometry *)layoutGeometry;
-(NSString *)bookLanguage;
-(unsigned)pageNumberForDocumentOrdinal:(int)arg1 ;
-(void)releasePaginationInfo;
-(void)repaginateWithStyle:(id)arg1 geometry:(id)arg2 ;
-(void)setNavigationHistory:(BKNavigationHistory *)arg1 ;
-(int)pagesInDocumentOrdinal:(int)arg1 ;
-(id)pageTitleForChapter:(id)arg1 ;
-(NSRange)pageRangeForChapter:(id)arg1 ;
-(id)currentLookupKey;
-(NSRange)pageRangeForChapterAtPageNumber:(unsigned)arg1 ;
-(id)titleForChapterAtPageNumber:(unsigned)arg1 ;
-(id)physicalPageTitlesForPageNumber:(unsigned)arg1 ;
-(void)cancelPagination;
-(int)pageTotal;
-(unsigned)pageNumberForLocation:(id)arg1 ;
-(AEAnnotationProvider *)bookAnnotationProvider;
-(int)bookDirection;
-(void)setBookDirection:(int)arg1 ;
-(id)_lookupKey;
-(unsigned long)jobGeneration;
-(void)setJobGeneration:(unsigned long)arg1 ;
-(void)_releaseData:(char)arg1 ;
-(void)setOperationFactory:(id)arg1 ;
-(void)setBookmarkPageCounts:(NSArray *)arg1 ;
-(void)postPaginationLoadedNotification;
-(void)addResultSentinel:(id)arg1 ;
-(void)abortCurrentBatch;
-(void)destroyIvars;
-(id)documentPageCountForDocumentOrdinal:(int)arg1 ;
-(void)updatePaginationCache;
-(void)addPrepareJob:(id)arg1 ;
-(id)paginationInfoForPageNumber:(unsigned)arg1 ;
-(unsigned)physicalPageIndexForPageNumber:(unsigned)arg1 ;
-(unsigned)chapterIndexForPageNumber:(unsigned)arg1 ;
-(id)chapterForPageNumber:(unsigned)arg1 ;
-(unsigned)chapterIndexForHref:(id)arg1 ;
-(id)fetchBookmarkPageCounts;
-(NSManagedObjectID *)bookObjectID;
-(id)paginationArrayWithLookupKey:(id)arg1 ;
-(id)chapterArrayWithLookupKey:(id)arg1 ;
-(id)physicalPagesArrayWithLookupKey:(id)arg1 ;
-(NSArray *)bookmarkPageCounts;
-(void)addLayoutJob:(id)arg1 ;
-(void)addLayoutCompleteJob:(id)arg1 ;
-(void)addResultJob:(id)arg1 ;
-(void)addTOCParseJob:(id)arg1 ;
-(void)addTOCResultJob:(id)arg1 ;
-(int)incrementBatchProgress;
-(void)batchEnded:(char)arg1 ;
-(id)paginationRevision;
-(char)bookShouldDisableOptimizeSpeed;
-(id)prepareQueue;
-(char)isBookSample;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(ContentStyle *)style;
-(void)setStyle:(ContentStyle *)arg1 ;
-(void)cancelAllOperations;
-(void)resume;
-(float)progress;
-(void)waitUntilAllOperationsAreFinished;
-(void)pause;
-(void)updateProgress;
-(void)quit;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(BKNavigationHistory *)navigationHistory;
-(id)layoutQueue;
@end


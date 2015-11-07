/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSFilePresenter.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSURL, NSOperationQueue, NSProgress, NSUserActivity, NSLock, NSString, NSUndoManager, NSDate, NSObject, NSTimer, NSMutableArray, NSDocumentDifferenceSize;

@interface UIDocument : NSObject <NSFilePresenter, NSProgressReporting> {

	NSUserActivity* _currentUserActivity;
	NSLock* _activityContinuationLock;
	NSURL* _fileURL;
	NSString* _fileType;
	NSString* _localizedName;
	NSUndoManager* _undoManager;
	NSDate* _fileModificationDate;
	NSObject*<OS_dispatch_queue> _fileAccessQueue;
	NSObject*<OS_dispatch_queue> _openingQueue;
	NSObject*<OS_dispatch_semaphore> _fileAccessSemaphore;
	NSOperationQueue* _filePresenterQueue;
	id _differenceDueToRecentChanges;
	id _differenceSincePreservingPreviousVersion;
	id _differenceSinceSaving;
	NSTimer* _autosavingTimer;
	double _lastSaveTime;
	double _lastPreservationTime;
	id _versionWithoutRecentChanges;
	NSMutableArray* _versions;
	NSLock* _documentPropertyLock;
	id _alertPresenter;
	id _progressSubscriber;
	struct {
		unsigned inClose : 1;
		unsigned isOpen : 1;
		unsigned inOpen : 1;
		unsigned isAutosavingBecauseOfTimer : 1;
		unsigned versionWithoutRecentChangesIsNotLastOpened : 1;
		unsigned ignoreUndoAndRedoNotifications : 1;
		unsigned editingDisabled : 1;
		unsigned isRegisteredAsFilePresenter : 1;
		unsigned movingFile : 1;
		unsigned savingError : 1;
		unsigned inConflict : 1;
		unsigned needToStopAccessingSecurityScopedResource : 1;
	}  _docFlags;
	NSProgress* _progress;

}

@property (setter=_setEditingDisabled:,getter=_isEditingDisabled) char editingDisabled; 
@property (readonly) NSURL * fileURL; 
@property (copy,readonly) NSString * localizedName; 
@property (copy,readonly) NSString * fileType; 
@property (copy) NSDate * fileModificationDate; 
@property (readonly) unsigned documentState; 
@property (retain) NSUndoManager * undoManager; 
@property (nonatomic,readonly) NSDocumentDifferenceSize * differenceDueToRecentChanges;                          //@synthesize differenceDueToRecentChanges=_differenceDueToRecentChanges - In the implementation block
@property (nonatomic,readonly) NSDocumentDifferenceSize * differenceSincePreservingPreviousVersion;              //@synthesize differenceSincePreservingPreviousVersion=_differenceSincePreservingPreviousVersion - In the implementation block
@property (nonatomic,readonly) NSDocumentDifferenceSize * differenceSinceSaving;                                 //@synthesize differenceSinceSaving=_differenceSinceSaving - In the implementation block
@property (retain) NSProgress * progress;                                                                        //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
+(void)initialize;
+(id)_fileModificationDateForURL:(id)arg1 ;
+(id)_typeForContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(char)arg4 ;
+(char)_url:(id)arg1 matchesURL:(id)arg2 ;
+(void)_autosavingTimerDidFireSoContinue:(id)arg1 ;
+(id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryAttempter:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSUndoManager *)undoManager;
-(void)updateUserActivityState:(id)arg1 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(NSString *)localizedName;
-(id)userActivity;
-(void)setUserActivity:(id)arg1 ;
-(unsigned)documentState;
-(void)_setProgress:(id)arg1 ;
-(NSProgress *)progress;
-(void)_setFileURL:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_unregisterAsFilePresenterIfNecessary;
-(void)_releaseUndoManager;
-(void)_performBlockSynchronouslyOnMainThread:(/*^block*/id)arg1 ;
-(NSURL *)fileURL;
-(id)_userInfoForActivityContinuation;
-(id)_titleForActivityContinuation;
-(NSString *)fileType;
-(id)_activityTypeIdentifierForCloudDocument:(char*)arg1 ;
-(char)_documentIsUbiquitous;
-(void)_invalidateCurrentUserActivity;
-(id)_userActivityWithActivityType:(id)arg1 ;
-(void)_reallyManageUserActivity;
-(void)_setUserActivity:(id)arg1 ;
-(void)autosaveWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)_isInOpen;
-(void)_setInOpen:(char)arg1 ;
-(void)_registerAsFilePresenterIfNecessary;
-(char)readFromURL:(id)arg1 error:(id*)arg2 ;
-(void)setFileModificationDate:(NSDate *)arg1 ;
-(void)_updateLocalizedName;
-(void)_setOpen:(char)arg1 ;
-(void)handleError:(id)arg1 userInteractionPermitted:(char)arg2 ;
-(void)_clearUserActivity;
-(void)_manageUserActivity;
-(void)_performBlock:(/*^block*/id)arg1 synchronouslyOnQueue:(id)arg2 ;
-(void)performAsynchronousFileAccessUsingBlock:(/*^block*/id)arg1 ;
-(void)_progressPublished:(id)arg1 ;
-(void)_progressUnpublished;
-(void)_updateConflictState;
-(void)disableEditing;
-(void)enableEditing;
-(void)_sendStateChangedNotification;
-(char)_isOpen;
-(void)_setEditingDisabled:(char)arg1 ;
-(void)setFileType:(NSString *)arg1 ;
-(void)updateChangeCount:(int)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(char)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(int)arg3 originalContentsURL:(id)arg4 error:(id*)arg5 ;
-(id)savingFileType;
-(id)fileNameExtensionForType:(id)arg1 saveOperation:(int)arg2 ;
-(id)contentsForType:(id)arg1 error:(id*)arg2 ;
-(id)changeCountTokenForSaveOperation:(int)arg1 ;
-(id)fileAttributesToWriteToURL:(id)arg1 forSaveOperation:(int)arg2 error:(id*)arg3 ;
-(char)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(int)arg4 error:(id*)arg5 ;
-(void)_finishSavingToURL:(id)arg1 forSaveOperation:(int)arg2 changeCount:(id)arg3 ;
-(char)_coordinateWritingItemAtURL:(id)arg1 error:(id*)arg2 byAccessor:(/*^block*/id)arg3 ;
-(void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(int)arg2 ;
-(char)hasUnsavedChanges;
-(void)_scheduleAutosaving;
-(void)_autosaveWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)_autosavingDelay;
-(void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(char)arg2 ;
-(void)_rescheduleAutosaving;
-(void)_autosavingCompletedSuccessfully:(char)arg1 ;
-(void)saveToURL:(id)arg1 forSaveOperation:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_saveUnsavedChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDocumentDifferenceSize *)differenceSinceSaving;
-(char)_hasUnsavedChanges;
-(NSDocumentDifferenceSize *)differenceDueToRecentChanges;
-(NSDocumentDifferenceSize *)differenceSincePreservingPreviousVersion;
-(void)_changeWasUndone:(id)arg1 ;
-(void)_changeWasRedone:(id)arg1 ;
-(void)_changeWasDone:(id)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)finishedHandlingError:(id)arg1 recovered:(char)arg2 ;
-(void)_setHasSavingError:(char)arg1 ;
-(char)_shouldAllowWritingInResponseToPresenterMessage;
-(char)_isEditingDisabled;
-(void)revertToContentsOfURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDate *)fileModificationDate;
-(void)_setInConflict:(char)arg1 ;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1 ;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidLoseVersion:(id)arg1 ;
-(void)presentedItemDidResolveConflictVersion:(id)arg1 ;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentedSubitemDidAppearAtURL:(id)arg1 ;
-(void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg1 ;
-(void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2 ;
-(void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2 ;
-(void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id)initWithFileURL:(id)arg1 ;
-(char)_hasSavingError;
-(char)_isInConflict;
-(void)_lockFileAccessQueueAndPerformBlock:(/*^block*/id)arg1 ;
-(void)_unlockFileAccessQueue;
-(id)_presentableFileNameForSaveOperation:(int)arg1 url:(id)arg2 ;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)userInteractionNoLongerPermittedForError:(id)arg1 ;
-(void)presentedItemHasUnsavedChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_fileOpeningQueue;
@end


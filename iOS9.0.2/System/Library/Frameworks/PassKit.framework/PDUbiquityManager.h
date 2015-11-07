/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@protocol OS_dispatch_queue, PDUbiquityManagerDelegate;
@class NSURL, NSOperationQueue, NSObject, NSString;

@interface PDUbiquityManager : NSObject <NSFilePresenter> {

	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	int _ubiquityState;
	char _addedToFilePresenter;
	id<PDUbiquityManagerDelegate> _delegate;
	NSURL* _ubiquitousURL;

}

@property (assign,nonatomic) id<PDUbiquityManagerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSURL * ubiquitousURL;                                                //@synthesize ubiquitousURL=_ubiquitousURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
+(void)removeLastEventIdentifier;
-(id)_queue_passUniqueIDs;
-(void)updateUbiquitousPass:(id)arg1 ;
-(void)updateUbiquitousCatalog:(id)arg1 ;
-(void)removeUbiquitousPassWithUniqueID:(id)arg1 ;
-(void)_handleUbiquityIdentityChanged:(id)arg1 ;
-(void)setUbiquitousURL:(NSURL *)arg1 ;
-(void)_queue_startAlreadyUbiquitous;
-(void)_queue_startNotYetUbiquitousWithDestinationURL:(id)arg1 ;
-(void)_queue_removeFromFilePresenter;
-(NSURL *)ubiquitousURL;
-(id)_urlForCardWithUniqueID:(id)arg1 relativeToDirectoryURL:(id)arg2 ;
-(id)_urlForCatalogRelativeToDirectoryURL:(id)arg1 ;
-(void)_queue_addToFilePresenter;
-(void)_queue_mergeUbiquityWithLocalStore;
-(void)_queue_copyPassesFromUbiquityToLocalStore:(id)arg1 ;
-(void)_queue_copyPassesFromLocalStoreToUbiquity:(id)arg1 ;
-(void)_queue_comparePassesAndTakeNewerVersion:(id)arg1 ;
-(void)_queue_compareCatalogsAndTakeNewerVersion;
-(void)_attemptCoordinatedReadWithoutChangesAtURL:(id)arg1 withAccessor:(/*^block*/id)arg2 ;
-(void)_queue_copyCatalogToUbiquity:(id)arg1 ;
-(void)_queue_copyCatalogToLocalStore:(id)arg1 ;
-(void)_queue_addedToFilePresenter;
-(void)_queue_resolveURLIfNecessary:(id)arg1 fileCoordinator:(id)arg2 ;
-(void)_presentedSubitemDidChangeAtURL:(id)arg1 ;
-(void)_queue_resolveURLIfNecessary:(id)arg1 ;
-(void)_queue_handlePassUpdate:(id)arg1 ;
-(void)_queue_handleCatalogUpdate;
-(unsigned long long)lastPresentedItemEventIdentifier;
-(void)presentedSubitemUbiquityDidChangeAtURL:(id)arg1 ;
-(void)setLastPresentedItemEventIdentifier:(unsigned long long)arg1 ;
-(void)restart;
-(void)setDelegate:(id<PDUbiquityManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<PDUbiquityManagerDelegate>)delegate;
-(void)start;
-(id)initWithDelegate:(id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentedSubitemDidAppearAtURL:(id)arg1 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
@end


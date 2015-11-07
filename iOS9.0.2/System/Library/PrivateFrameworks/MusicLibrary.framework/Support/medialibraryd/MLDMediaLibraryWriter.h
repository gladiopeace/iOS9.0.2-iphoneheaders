/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MLDMediaLibraryWriterDelegate;
@class NSObject, NSMutableDictionary, NSOperationQueue, NSTimer;

@interface MLDMediaLibraryWriter : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _transactionMap;
	NSOperationQueue* _databaseOperationQueue;
	NSOperationQueue* _databaseOperationSerialQueue;
	NSTimer* _watchdogTimer;
	id<MLDMediaLibraryWriterDelegate> _delegate;
	double _transactionTimeout;

}

@property (assign,nonatomic,__weak) id<MLDMediaLibraryWriterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double transactionTimeout;                                      //@synthesize transactionTimeout=_transactionTimeout - In the implementation block
+(id)writerErrorWithCode:(int)arg1 description:(id)arg2 ;
-(char)endTransaction:(id)arg1 shouldCommit:(char)arg2 error:(id*)arg3 ;
-(id)_transactionForIdentifier:(id)arg1 ;
-(id)beginTransactionForLibrary:(id)arg1 withClient:(id)arg2 options:(unsigned)arg3 error:(id*)arg4 ;
-(void)setTransactionTimeout:(double)arg1 ;
-(void)cancelAllActiveTransactions;
-(char)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id*)arg4 ;
-(id)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 error:(id*)arg5 ;
-(void)performDatabaseOperation:(unsigned)arg1 onLibrary:(id)arg2 withAttributes:(id)arg3 options:(id)arg4 fromClient:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_registerTransaction:(id)arg1 ;
-(void)cancelActiveTransactionForClient:(id)arg1 ;
-(void)_unregisterTransaction:(id)arg1 ;
-(void)_setupWatchdogTimer;
-(void)_tearDownWatchdogTimer;
-(id)_createNewTransactionForLibrary:(id)arg1 fromClient:(id)arg2 readOnly:(char)arg3 ;
-(void)_destroyTransactionForIdentifier:(id)arg1 forceRelinquishConnection:(char)arg2 ;
-(id)_allDatabaseOperations;
-(void)cancelAllActiveDatabaseOperationsAndWaitUntilFinished:(char)arg1 ;
-(void)_destroyTransaction:(id)arg1 forceRelinquishConnection:(char)arg2 ;
-(void)_watchdogTimerFired:(id)arg1 ;
-(char)_shouldWatchdogTransaction:(id)arg1 ;
-(double)transactionTimeout;
-(void)setDelegate:(id<MLDMediaLibraryWriterDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<MLDMediaLibraryWriterDelegate>)delegate;
-(void)reset;
@end


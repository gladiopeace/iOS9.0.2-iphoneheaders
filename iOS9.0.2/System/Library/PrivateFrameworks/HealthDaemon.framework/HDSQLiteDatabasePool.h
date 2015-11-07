/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, HDSQLiteDatabasePoolDelegate;
@class NSObject, NSMutableSet, NSMapTable, NSString;

@interface HDSQLiteDatabasePool : NSObject <HDDiagnosticObject> {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSMutableSet* _cache;
	unsigned _cacheGeneration;
	NSObject*<OS_dispatch_queue> _checkoutQueue;
	NSMapTable* _checkoutMap;
	NSObject*<OS_dispatch_semaphore> _readerSemaphore;
	NSObject*<OS_dispatch_semaphore> _writerSemaphore;
	unsigned _cacheSize;
	int _backgroundReadersWaiting;
	int _writersWaiting;
	id<HDSQLiteDatabasePoolDelegate> _delegate;
	unsigned _maxConcurrentBackgroundReaders;
	unsigned _maxConcurrentWriters;

}

@property (assign) id<HDSQLiteDatabasePoolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned cacheSize; 
@property (readonly) unsigned maxConcurrentBackgroundReaders;              //@synthesize maxConcurrentBackgroundReaders=_maxConcurrentBackgroundReaders - In the implementation block
@property (readonly) unsigned maxConcurrentWriters;                        //@synthesize maxConcurrentWriters=_maxConcurrentWriters - In the implementation block
@property (readonly) unsigned backgroundReadersWaiting; 
@property (readonly) unsigned writersWaiting; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<HDSQLiteDatabasePoolDelegate>)arg1 ;
-(void)dealloc;
-(id<HDSQLiteDatabasePoolDelegate>)delegate;
-(void)flush;
-(id)diagnosticDescription;
-(id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned)arg2 ;
-(void)setCacheSize:(unsigned)arg1 ;
-(void)checkInDatabase:(id)arg1 ;
-(id)writerDatabaseWithError:(id*)arg1 ;
-(id)readerDatabaseWithPriority:(int)arg1 error:(id*)arg2 ;
-(id)_databaseWithType:(int)arg1 error:(id*)arg2 ;
-(id)_semaphoreForDatabaseType:(int)arg1 waitCounter:(int*)arg2 ;
-(unsigned)backgroundReadersWaiting;
-(unsigned)writersWaiting;
-(unsigned)cacheSize;
-(unsigned)maxConcurrentBackgroundReaders;
-(unsigned)maxConcurrentWriters;
@end


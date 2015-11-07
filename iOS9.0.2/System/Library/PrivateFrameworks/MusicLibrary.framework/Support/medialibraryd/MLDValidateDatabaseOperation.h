/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, ML3MusicLibrary, NSError, NSArray;

@interface MLDValidateDatabaseOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _completionBlocks;
	char _success;
	ML3MusicLibrary* _library;
	NSError* _error;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;               //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSArray * completionBlocks; 
@property (nonatomic,readonly) char success;                            //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                         //@synthesize error=_error - In the implementation block
-(void)removeAllCompletionBlocks;
-(char)_validateLibraryDatabaseIfNecessary:(id)arg1 withError:(id*)arg2 ;
-(char)_internalUserAgreesToRebuildUnmigratableDatabase;
-(char)_performDatabasePreprocessingWithLibrary:(id)arg1 error:(id*)arg2 ;
-(char)_performSchemaUpgradeWithLibrary:(id)arg1 error:(id*)arg2 ;
-(ML3MusicLibrary *)library;
-(id)initWithLibrary:(id)arg1 ;
-(NSError *)error;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(NSArray *)completionBlocks;
-(char)success;
@end


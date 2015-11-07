/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLClientServerTransaction.h>

@protocol OS_dispatch_semaphore;
@class NSSet, NSString, NSObject;

@interface _PLClientTransaction : PLClientServerTransaction {

	NSSet* _changeScopes;
	int _addChangeScopesBatch;
	NSSet* _batchScopes;
	int _fileDescriptor;
	id _processAssertion;
	NSString* _path;
	NSObject*<OS_dispatch_semaphore> _fdResourceSemaphore;

}

@property (assign,nonatomic) int fileDescriptor;                                                //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,retain) id processAssertion;                                               //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,retain) NSString * path;                                                   //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_semaphore> fdResourceSemaphore;              //@synthesize fdResourceSemaphore=_fdResourceSemaphore - In the implementation block
+(id)_fdIsolationQueue;
+(id)_fdResourceSemaphore;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)completeTransactionScope:(id)arg1 ;
-(void)completeTransaction;
-(void)setFileDescriptor:(int)arg1 ;
-(int)fileDescriptor;
-(void)pushChangeScopesBatch;
-(void)popChangeScopesBatch;
-(void)abortTransaction;
-(id)changeScopes;
-(void)setProcessAssertion:(id)arg1 ;
-(void)persistTransactionScopes:(id)arg1 ;
-(id)processAssertion;
-(void)addChangeScopes:(id)arg1 ;
-(char)isClientTransaction;
-(NSObject*<OS_dispatch_semaphore>)fdResourceSemaphore;
-(void)setFdResourceSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end


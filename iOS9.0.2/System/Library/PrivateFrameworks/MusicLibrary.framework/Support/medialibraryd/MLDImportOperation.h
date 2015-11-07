/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MLDServiceDatabaseImport, NSError, NSData;

@interface MLDImportOperation : NSOperation {

	/*^block*/id _clientCompletionHandler;
	char _suspended;
	char _success;
	MLDServiceDatabaseImport* _import;
	float _progress;
	/*^block*/id _progressBlock;
	NSError* _error;
	NSData* _returnData;

}

@property (nonatomic,readonly) unsigned importSource; 
@property (nonatomic,readonly) MLDServiceDatabaseImport * import;              //@synthesize import=_import - In the implementation block
@property (assign,getter=isSuspended,nonatomic) char suspended;                //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,readonly) float progress;                                 //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id progressBlock;                                   //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,readonly) char success;                                   //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSData * returnData;                            //@synthesize returnData=_returnData - In the implementation block
+(id)importOperationWithSourceType:(unsigned)arg1 databaseImport:(id)arg2 ;
-(void)_setClientCompletionHandler:(/*^block*/id)arg1 ;
-(MLDServiceDatabaseImport *)import;
-(unsigned)importSource;
-(/*^block*/id)_clientCompletionHandler;
-(void)_writerTransactionWithBlock:(/*^block*/id)arg1 ;
-(id)initWithDatabaseImport:(id)arg1 ;
-(NSError *)error;
-(char)isSuspended;
-(id)init;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)main;
-(void)setSuspended:(char)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(id)longDescription;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(char)success;
-(void)setSuccess:(char)arg1 ;
-(void)setReturnData:(NSData *)arg1 ;
-(NSData *)returnData;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol BKExtractFileOperationDelegate;
@class NSString, NSDictionary;

@interface BKExtractFileOperation : NSOperation {

	unsigned long long _totalBytes;
	unsigned long long _progressBytes;
	id<BKExtractFileOperationDelegate> _delegate;
	char _success;
	char _skipCleanupDestinationFile;
	long long _activeFileBytesCopied;
	NSString* _activeFilePath;
	NSString* _destinationFilePath;
	double _lastSnapshotTime;
	NSString* _sourceFilePath;
	int _sourceFileType;
	id _userContext;
	NSDictionary* _options;

}

@property (nonatomic,copy) NSDictionary * options;                                     //@synthesize options=_options - In the implementation block
@property (readonly) float progress; 
@property (assign,nonatomic) id<BKExtractFileOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * destinationFilePath;                           //@synthesize destinationFilePath=_destinationFilePath - In the implementation block
@property (nonatomic,retain) NSString * sourceFilePath;                                //@synthesize sourceFilePath=_sourceFilePath - In the implementation block
@property (retain) id userContext;                                                     //@synthesize userContext=_userContext - In the implementation block
@property (assign) int sourceFileType;                                                 //@synthesize sourceFileType=_sourceFileType - In the implementation block
@property (readonly) char skipCleanupDestinationFile;                                  //@synthesize skipCleanupDestinationFile=_skipCleanupDestinationFile - In the implementation block
-(char)skipCleanupDestinationFile;
-(NSString *)destinationFilePath;
-(NSString *)sourceFilePath;
-(void)setSourceFilePath:(NSString *)arg1 ;
-(void)setDestinationFilePath:(NSString *)arg1 ;
-(void)setSourceFileType:(int)arg1 ;
-(void)_initializeProgress;
-(int)sourceFileType;
-(void)_performCopy;
-(void)_performMove;
-(void)_performZipExtraction;
-(void)_copierUpdatedFileWithPath:(const char*)arg1 size:(long long)arg2 ;
-(void)_updateProgressWithByteCount:(long long)arg1 ;
-(id)_zipExtractionPath;
-(void)_copierFinishedFileWithPath:(const char*)arg1 size:(long long)arg2 ;
-(void)_copierStartedFileWithPath:(const char*)arg1 size:(long long)arg2 ;
-(void)setDelegate:(id<BKExtractFileOperationDelegate>)arg1 ;
-(void)dealloc;
-(id<BKExtractFileOperationDelegate>)delegate;
-(float)progress;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(void)main;
-(id)userContext;
-(void)setUserContext:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSString;

@interface TransactionLog : CHSynchronizedLoggable {

	NSString* _path;
	NSString* _defaultLogDirectory;
	NSString* _defaultLogFileName;
	unsigned _transactionCount;
	unsigned long long _fileOffset;

}

@property (retain) NSString * path;                                      //@synthesize path=_path - In the implementation block
@property (readonly) NSString * defaultLogDirectory;                     //@synthesize defaultLogDirectory=_defaultLogDirectory - In the implementation block
@property (readonly) NSString * defaultLogFileName;                      //@synthesize defaultLogFileName=_defaultLogFileName - In the implementation block
@property (assign,nonatomic) unsigned long long fileOffset;              //@synthesize fileOffset=_fileOffset - In the implementation block
@property (assign) unsigned transactionCount;                            //@synthesize transactionCount=_transactionCount - In the implementation block
+(id)serializeTransaction:(id)arg1 ;
-(void)setFileOffset:(unsigned long long)arg1 ;
-(unsigned long long)fileOffset;
-(void)handleDeviceUnlocked;
-(id)initWithFileName:(id)arg1 withDescription:(id)arg2 ;
-(id)getTransactions;
-(id)getSomeTransactions;
-(void)readTransactionsProcessed:(unsigned)arg1 ;
-(unsigned)getTransactionCount;
-(NSString *)defaultLogDirectory;
-(void)migrateFromKeyedArchiverSync;
-(void)initializeTransactionCountSync;
-(id)getSomeTransactionsSync;
-(void)setTransactionCount:(unsigned)arg1 ;
-(void)readFileOffset;
-(id)getDefaultLogDirectory;
-(void)appendSync:(id)arg1 ;
-(void)appendTransactionSync:(id)arg1 withFileHandle:(id)arg2 ;
-(void)clearSync;
-(void)writeFileOffset;
-(id)getNTransactionsSync:(unsigned)arg1 ;
-(void)readTransactionsProcessedSync:(unsigned)arg1 ;
-(void)createLogDirectoryAndFile;
-(id)getNTransactions:(unsigned)arg1 ;
-(NSString *)defaultLogFileName;
-(id)initWithDescription:(id)arg1 ;
-(id)init;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)clear;
-(void)registerForNotifications;
-(unsigned)transactionCount;
-(void)append:(id)arg1 ;
@end


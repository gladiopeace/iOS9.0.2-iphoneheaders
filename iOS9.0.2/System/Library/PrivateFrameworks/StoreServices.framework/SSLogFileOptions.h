/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSLogFileOptions : NSObject <NSCopying> {

	NSString* _directoryPath;
	NSString* _fileName;
	int _maxNumberOfLogFiles;
	unsigned long _maxSizeInBytes;

}

@property (nonatomic,copy) NSString * logDirectoryPath;                 //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,copy) NSString * logFileBaseName;                  //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) unsigned long maxLogFileSize;              //@synthesize maxSizeInBytes=_maxSizeInBytes - In the implementation block
@property (assign,nonatomic) int maxNumberOfLogFiles;                   //@synthesize maxNumberOfLogFiles=_maxNumberOfLogFiles - In the implementation block
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)logDirectoryPath;
-(void)setLogDirectoryPath:(NSString *)arg1 ;
-(NSString *)logFileBaseName;
-(void)setLogFileBaseName:(NSString *)arg1 ;
-(unsigned long)maxLogFileSize;
-(void)setMaxLogFileSize:(unsigned long)arg1 ;
-(int)maxNumberOfLogFiles;
-(void)setMaxNumberOfLogFiles:(int)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TSUtility/TSUZipWriter.h>

@protocol TSURandomWriteChannel;
@interface TSUZipFileWriter : TSUZipWriter {

	id<TSURandomWriteChannel> _writeChannel;

}
+(void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)writeChannel;
-(id)initWithURL:(id)arg1 ;
@end


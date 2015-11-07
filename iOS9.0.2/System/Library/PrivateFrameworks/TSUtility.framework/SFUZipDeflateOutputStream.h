/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/SFUOutputStream.h>

@protocol SFUOutputStream;
@class NSString;

@interface SFUZipDeflateOutputStream : NSObject <SFUOutputStream> {

	id<SFUOutputStream> mOutputStream;
	z_stream_s* mDeflateStream;
	char* mOutBuffer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)offset;
-(void)close;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(char)canCreateInputStream;
-(char)canSeek;
-(id)closeLocalStream;
-(id)initWithOutputStream:(id)arg1 ;
-(id)inputStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
@end


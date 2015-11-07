/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUOutputStream.h>

@protocol SFUOutputStream;
@class OISFUCryptor, NSString;

@interface OISFUCryptoOutputStream : NSObject <SFUOutputStream> {

	id<SFUOutputStream> mBaseStream;
	OISFUCryptor* mCryptor;
	char mIsClosed;
	char mComputeCrc32;
	unsigned mCrc32;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2 ;
-(void)dealloc;
-(long long)offset;
-(void)close;
-(id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(char)arg3 ;
-(id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 ;
-(unsigned)crc32;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(char)canCreateInputStream;
-(char)canSeek;
-(id)closeLocalStream;
-(id)inputStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
@end


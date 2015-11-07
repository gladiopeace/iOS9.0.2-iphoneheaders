/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OISFUDataRepresentation.h>

@protocol SFUZipArchiveDataRepresentation;
@class OISFUDataRepresentation, OISFUCryptoKey;

@interface OISFUZipEntry : OISFUDataRepresentation {

	OISFUDataRepresentation*<SFUZipArchiveDataRepresentation> mArchiveDataRepresentation;
	int mCompressionMethod;
	unsigned long long mCompressedSize;
	unsigned long long mUncompressedSize;
	unsigned long long mOffset;
	unsigned mCrc;
	unsigned long long mDataOffset;
	char mHasDataOffset;
	unsigned long long mEncodedLength;
	char mHasEncodedLength;
	OISFUCryptoKey* mCryptoKey;

}
-(unsigned long long)dataOffset;
-(void)dealloc;
-(id)data;
-(long long)encodedLength;
-(id)inputStream;
-(long long)dataLength;
-(unsigned)crc;
-(void)setDataLength:(long long)arg1 ;
-(void)setCryptoKey:(id)arg1 ;
-(void)copyToFile:(id)arg1 ;
-(char)isEncrypted;
-(id)initFromCentralFileHeader:(const char*)arg1 dataRepresentation:(id)arg2 ;
-(void)readZip64ExtraField:(const char*)arg1 size:(unsigned long)arg2 ;
-(char)isReadable;
-(id)initWithDataRepresentation:(id)arg1 compressionMethod:(int)arg2 compressedSize:(unsigned long long)arg3 uncompressedSize:(unsigned long long)arg4 offset:(unsigned long long)arg5 crc:(unsigned)arg6 ;
-(char)isCompressed;
-(void)setCompressionFlags:(unsigned short)arg1 ;
-(unsigned long long)calculateEncodedLength;
-(char)isBackedByFile;
-(id)backingFilePath;
-(unsigned long long)backingFileDataOffset;
@end


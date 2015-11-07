/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
@class NSData;

@interface PBDataReader : NSObject {

	unsigned _pos;
	char _error;
	const char* _bytes;
	NSData* _data;
	unsigned _length;

}

@property (assign) unsigned length;                //@synthesize length=_length - In the implementation block
@property (assign) unsigned position;              //@synthesize pos=_pos - In the implementation block
-(void)dealloc;
-(unsigned)length;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(unsigned)offset;
-(void)setLength:(unsigned)arg1 ;
-(char)isAtEnd;
-(id)readData;
-(float)readFloat;
-(id)readString;
-(char)seekToOffset:(unsigned)arg1 ;
-(id)readBytes:(unsigned)arg1 ;
-(long long)readInt64;
-(void)recall:(const SCD_Struct_PB0*)arg1 ;
-(unsigned short)readBigEndianFixed16;
-(int)readSfixed32;
-(char)readBOOL;
-(unsigned long long)readBigEndianFixed64;
-(unsigned long long)readUint64;
-(double)readDouble;
-(long long)readSfixed64;
-(unsigned)readUint32;
-(long long)readSint64;
-(void)readTag:(unsigned short*)arg1 andType:(char*)arg2 ;
-(char)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2 ;
-(int)readInt32;
-(char)mark:(SCD_Struct_PB0*)arg1 ;
-(char)readInt8;
-(int)readSint32;
-(unsigned long long)readFixed64;
-(id)readBigEndianShortThenString;
-(unsigned)readFixed32;
-(unsigned)readBigEndianFixed32;
-(long long)readVarInt;
-(id)readProtoBuffer;
-(void)updateData:(id)arg1 ;
-(char)hasMoreData;
-(char)hasError;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSDeserializerStream.h>

@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {

	const void* memory;
	const char* current;
	unsigned left;
	unsigned max;
	char freeWhenDone;

}
-(id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned)arg2 freeWhenDone:(char)arg3 ;
-(int)readInt;
-(unsigned)readAlignedDataSize;
-(void)readData:(void*)arg1 length:(unsigned)arg2 ;
-(id)initFromPath:(id)arg1 ;
-(void)dealloc;
-(void)finalize;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ECPackedDataUtils : NSObject
+(char*)prepareForDataOfLength:(unsigned)arg1 atIndex:(unsigned)arg2 withPreviousLength:(unsigned)arg3 inPackedData:(CFDataRef)arg4 packedDataSize:(unsigned)arg5 ;
+(BOOL)setData:(char*)arg1 ofLength:(unsigned)arg2 atIndex:(unsigned)arg3 withPreviousLength:(unsigned)arg4 inPackedData:(CFDataRef)arg5 packedDataSize:(unsigned)arg6 ;
+(id)readStringFromData:(char*)arg1 atOffset:(unsigned)arg2 withLength:(unsigned)arg3 ;
+(void)writeString:(id)arg1 toPackedData:(CFDataRef)arg2 packedDataSize:(unsigned)arg3 atIndex:(unsigned)arg4 withPreviousLength:(unsigned short)arg5 outLength:(unsigned short*)arg6 ;
+(id)dumpDataToHexadecimalString:(char*)arg1 start:(unsigned)arg2 stop:(unsigned)arg3 nicelyFormatted:(BOOL)arg4 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLTextureArgument : MTLArgumentInternal {

	unsigned short _textureType;
	unsigned short _textureDataType;

}
-(id)initWithName:(id)arg1 access:(unsigned)arg2 isActive:(char)arg3 locationIndex:(unsigned)arg4 arraySize:(unsigned)arg5 dataType:(unsigned)arg6 textureType:(unsigned)arg7 ;
-(unsigned)textureDataType;
-(unsigned)textureType;
-(id)description;
@end


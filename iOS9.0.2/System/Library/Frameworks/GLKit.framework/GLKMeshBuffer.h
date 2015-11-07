/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GLKit/GLKit-Structs.h>
#import <libobjc.A.dylib/MDLMeshBuffer.h>

@class GLKMeshBufferZone, GLKMeshBufferAllocator, NSString;

@interface GLKMeshBuffer : NSObject <MDLMeshBuffer> {

	unsigned _mapCount;
	void* _mapPtr;
	unsigned _target;
	GLKMeshBufferZone* _zone;
	unsigned _length;
	GLKMeshBufferAllocator* _allocator;
	unsigned _glBufferName;
	unsigned _offset;
	unsigned _type;

}

@property (nonatomic,readonly) unsigned length;                                 //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) GLKMeshBufferAllocator * allocator;              //@synthesize allocator=_allocator - In the implementation block
@property (nonatomic,readonly) unsigned glBufferName;                           //@synthesize glBufferName=_glBufferName - In the implementation block
@property (nonatomic,readonly) unsigned offset;                                 //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) id<MDLMeshBufferZone> zone;                      //@synthesize zone=_zone - In the implementation block
@property (nonatomic,readonly) unsigned type;                                   //@synthesize type=_type - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initWithLength:(unsigned)arg1 offset:(unsigned)arg2 zone:(id)arg3 type:(unsigned)arg4 ;
-(GLKMeshBufferAllocator *)allocator;
-(unsigned)glBufferName;
-(id)_initWithBytes:(const void*)arg1 length:(unsigned)arg2 offset:(unsigned)arg3 allocator:(id)arg4 zone:(id)arg5 type:(unsigned)arg6 ;
-(void)fillData:(id)arg1 offset:(unsigned)arg2 ;
-(id)_initWithLength:(unsigned)arg1 allocator:(id)arg2 type:(unsigned)arg3 ;
-(id)_initWithData:(id)arg1 allocator:(id)arg2 type:(unsigned)arg3 ;
-(void)dealloc;
-(id<MDLMeshBufferZone>)zone;
-(unsigned)length;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)offset;
-(id)map;
@end


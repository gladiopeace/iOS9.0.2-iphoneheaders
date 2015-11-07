/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLMeshBufferAllocator.h>

@protocol MTLDevice;
@class NSString;

@interface MTKMeshBufferAllocator : NSObject <MDLMeshBufferAllocator> {

	id<MTLDevice> _device;

}

@property (nonatomic,readonly) id<MTLDevice> device;                //@synthesize device=_device - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newBuffer:(unsigned)arg1 type:(unsigned)arg2 ;
-(id)newBufferFromZone:(id)arg1 length:(unsigned)arg2 type:(unsigned)arg3 ;
-(id)newZone:(unsigned)arg1 ;
-(id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2 ;
-(id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned)arg3 ;
-(id)newBufferWithData:(id)arg1 type:(unsigned)arg2 ;
-(char)isEqual:(id)arg1 ;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLBuffer;

@interface SCNMetalMeshElement : NSObject {

	unsigned _primitiveType;
	int _indexCount;
	unsigned _instanceCount;
	int _offset;
	SCNMTLBuffer* _indexBuffer;
	unsigned _indexType;

}

@property (assign,nonatomic) int indexCount;                          //@synthesize indexCount=_indexCount - In the implementation block
@property (assign,nonatomic) unsigned instanceCount;                  //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) int offset;                              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) SCNMTLBuffer * indexBuffer;              //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (assign,nonatomic) unsigned indexType;                      //@synthesize indexType=_indexType - In the implementation block
@property (assign,nonatomic) unsigned primitiveType;                  //@synthesize primitiveType=_primitiveType - In the implementation block
@property (nonatomic,readonly) int primitiveCount; 
-(unsigned)primitiveType;
-(int)primitiveCount;
-(int)indexCount;
-(SCNMTLBuffer *)indexBuffer;
-(unsigned)indexType;
-(void)setIndexBuffer:(SCNMTLBuffer *)arg1 ;
-(void)setupWithElement:(_C3DMeshElement*)arg1 ;
-(void)setPrimitiveType:(unsigned)arg1 ;
-(void)setIndexCount:(int)arg1 ;
-(void)setIndexType:(unsigned)arg1 ;
-(void)dealloc;
-(void)setOffset:(int)arg1 ;
-(int)offset;
-(void)setInstanceCount:(unsigned)arg1 ;
-(unsigned)instanceCount;
@end


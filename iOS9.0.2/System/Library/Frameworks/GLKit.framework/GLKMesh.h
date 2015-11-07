/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, MDLVertexDescriptor, NSString, NSArray;

@interface GLKMesh : NSObject {

	NSMutableArray* _submeshes;
	NSMutableArray* _vertexBuffers;
	unsigned _vertexCount;
	MDLVertexDescriptor* _vertexDescriptor;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned vertexCount;                                //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) NSArray * vertexBuffers;                             //@synthesize vertexBuffers=_vertexBuffers - In the implementation block
@property (nonatomic,readonly) MDLVertexDescriptor * vertexDescriptor;              //@synthesize vertexDescriptor=_vertexDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * submeshes;                                 //@synthesize submeshes=_submeshes - In the implementation block
@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
+(void)_createMeshesFromObject:(id)arg1 newMeshes:(id)arg2 sourceMeshes:(id)arg3 error:(id*)arg4 ;
+(id)newMeshesFromAsset:(id)arg1 sourceMeshes:(id*)arg2 error:(id*)arg3 ;
-(id)initWithMesh:(id)arg1 error:(id*)arg2 ;
-(MDLVertexDescriptor *)vertexDescriptor;
-(NSArray *)submeshes;
-(NSArray *)vertexBuffers;
-(NSString *)name;
-(unsigned)vertexCount;
@end


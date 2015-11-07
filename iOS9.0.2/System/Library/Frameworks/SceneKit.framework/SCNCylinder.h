/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNCylinder : SCNGeometry {

	float _cylinderradius;
	float _cylinderheight;
	float _cylinderradialSpan;
	int _cylinderheightSegmentCount;
	int _cylinderradialSegmentCount;
	int _cylinderprimitiveType;

}

@property (assign,nonatomic) float radius; 
@property (assign,nonatomic) float height; 
@property (assign,nonatomic) int radialSegmentCount; 
@property (assign,nonatomic) int heightSegmentCount; 
+(char)supportsSecureCoding;
+(id)cylinderWithRadius:(float)arg1 height:(float)arg2 ;
-(int)primitiveType;
-(void)setPrimitiveType:(int)arg1 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(id)presentationGeometry;
-(char)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(float*)arg2 ;
-(_C3DGeometry*)__createCFObject;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(float)radialSpan;
-(void)setRadialSpan:(float)arg1 ;
-(id)presentationCylinder;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)height;
-(void)setHeight:(float)arg1 ;
-(void)setRadius:(float)arg1 ;
-(float)radius;
-(char)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(int)radialSegmentCount;
-(void)setRadialSegmentCount:(int)arg1 ;
-(int)heightSegmentCount;
-(void)setHeightSegmentCount:(int)arg1 ;
@end


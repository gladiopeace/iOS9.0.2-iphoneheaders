/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MobileNotes/MobileNotes-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSString;

@interface TSDGLShader : NSObject {

	NSMutableDictionary* _uniforms;
	NSMutableSet* _uniformsNeedingUpdate;
	NSMutableDictionary* _attributeLocations;
	char _isActive;
	NSString* _name;
	unsigned _programObject;

}

@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned programObject;              //@synthesize programObject=_programObject - In the implementation block
@property (nonatomic,readonly) char isActive;                       //@synthesize isActive=_isActive - In the implementation block
-(void)setGLFloat:(float)arg1 forUniform:(id)arg2 ;
-(void)setMat4WithTransform3D:(CATransform3D)arg1 forUniform:(id)arg2 ;
-(void)setGLint:(int)arg1 forUniform:(id)arg2 ;
-(void)setPoint4D:(SCD_Struct_TS16)arg1 forUniform:(id)arg2 ;
-(void)setCGFloat:(float)arg1 forUniform:(id)arg2 ;
-(void)setMat3WithAffineTransform:(CGAffineTransform)arg1 forUniform:(id)arg2 ;
-(id)initWithDefaultTextureShaderWithMotionBlur:(char)arg1 ignoreTextureOpacity:(char)arg2 ;
-(id)initWithVertexShaderFileName:(id)arg1 fragmentShaderFileName:(id)arg2 bundle:(id)arg3 defines:(id)arg4 ;
-(id)initWithDefaultTextureAndOpacityShaderWithMotionBlur:(char)arg1 ignoreTextureOpacity:(char)arg2 ;
-(id)p_contentsOfShader:(id)arg1 extension:(id)arg2 bundle:(id)arg3 ;
-(id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 defines:(id)arg3 ;
-(char)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 defines:(id)arg3 ;
-(char)p_compileShader:(unsigned*)arg1 withType:(unsigned)arg2 shaderString:(id)arg3 defines:(id)arg4 ;
-(void)p_updateUniformsAndAttributesFromShader;
-(id)shaderQualifierForUniform:(id)arg1 type:(int)arg2 ;
-(int)locationForAttribute:(id)arg1 ;
-(id)p_qualifierForUniform:(id)arg1 class:(Class)arg2 ;
-(void)p_setQualifiersIfNecessary;
-(void)setGLint:(int)arg1 forShaderQualifier:(id)arg2 ;
-(void)setGLFloat:(float)arg1 forShaderQualifier:(id)arg2 ;
-(void)setPoint2D:(CGPoint)arg1 forShaderQualifier:(id)arg2 ;
-(void)setPoint2D:(CGPoint)arg1 forUniform:(id)arg2 ;
-(void)setPoint3D:(SCD_Struct_TS15)arg1 forShaderQualifier:(id)arg2 ;
-(void)setPoint4D:(SCD_Struct_TS16)arg1 forShaderQualifier:(id)arg2 ;
-(void)setMat3WithAffineTransform:(CGAffineTransform)arg1 forShaderQualifier:(id)arg2 ;
-(void)setMat4WithTransform3D:(CATransform3D)arg1 forShaderQualifier:(id)arg2 ;
-(id)initWithDefaultTextureShader;
-(id)initWithDefaultTextureCoordinatesShader;
-(id)initWithDefaultTextureAndOpacityShader;
-(id)initWithDefaultRandomColorShader;
-(id)initWithDefaultRandomColorTextureShader;
-(id)initWithDefaultVelocityShader;
-(id)initWithDefaultVelocityMeshShader;
-(id)initWithDefaultVelocityCollectionShaderWithSampleCount:(unsigned)arg1 isSingleObject:(char)arg2 ;
-(id)initWithDefaultVelocityVisualizerShader;
-(id)initWithDefaultVerticalBlurShader;
-(id)initWithDefaultHorizontalBlurShader;
-(id)initWithDefaultUniformMotionBlurShader;
-(id)initWithShaderFileName:(id)arg1 bundle:(id)arg2 ;
-(void)setInteger:(int)arg1 forShaderQualifier:(id)arg2 ;
-(void)setInteger:(int)arg1 forUniform:(id)arg2 ;
-(void)setLifeSpan:(CGPoint)arg1 forUniform:(id)arg2 ;
-(void)setPoint3D:(SCD_Struct_TS15)arg1 forUniform:(id)arg2 ;
-(void)setColor:(SCD_Struct_TS16)arg1 forUniform:(id)arg2 ;
-(char)validateUniforms;
-(unsigned)programObject;
-(void)dealloc;
-(id)init;
-(id)description;
-(char)isActive;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)deactivate;
-(void)activate;
-(int)locationForUniform:(id)arg1 ;
-(void)teardown;
@end


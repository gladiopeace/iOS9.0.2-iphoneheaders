/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLScatteringFunction.h>

@class MDLMaterialProperty;

@interface MDLPhysicallyPlausibleScatteringFunction : MDLScatteringFunction {

	PhysicallyPlausibleDistribution* _physicalBSDF;
	MDLMaterialProperty* _subsurface;
	MDLMaterialProperty* _metallic;
	MDLMaterialProperty* _specularAmount;
	MDLMaterialProperty* _specularTint;
	MDLMaterialProperty* _roughness;
	MDLMaterialProperty* _anisotropic;
	MDLMaterialProperty* _anisotropicRotation;
	MDLMaterialProperty* _sheen;
	MDLMaterialProperty* _sheenTint;
	MDLMaterialProperty* _clearcoat;
	MDLMaterialProperty* _clearcoatGloss;

}

@property (nonatomic,readonly) int version; 
@property (nonatomic,retain,readonly) MDLMaterialProperty * subsurface;                       //@synthesize subsurface=_subsurface - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * metallic;                         //@synthesize metallic=_metallic - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * specularAmount;                   //@synthesize specularAmount=_specularAmount - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * specularTint;                     //@synthesize specularTint=_specularTint - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * roughness;                        //@synthesize roughness=_roughness - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * anisotropic;                      //@synthesize anisotropic=_anisotropic - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * anisotropicRotation;              //@synthesize anisotropicRotation=_anisotropicRotation - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * sheen;                            //@synthesize sheen=_sheen - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * sheenTint;                        //@synthesize sheenTint=_sheenTint - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * clearcoat;                        //@synthesize clearcoat=_clearcoat - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * clearcoatGloss;                   //@synthesize clearcoatGloss=_clearcoatGloss - In the implementation block
-(void)bindShadowProperties;
-(MDLMaterialProperty *)subsurface;
-(MDLMaterialProperty *)metallic;
-(MDLMaterialProperty *)specularAmount;
-(MDLMaterialProperty *)specularTint;
-(MDLMaterialProperty *)roughness;
-(MDLMaterialProperty *)anisotropic;
-(MDLMaterialProperty *)anisotropicRotation;
-(MDLMaterialProperty *)sheen;
-(MDLMaterialProperty *)sheenTint;
-(MDLMaterialProperty *)clearcoat;
-(MDLMaterialProperty *)clearcoatGloss;
-(id)init;
-(int)version;
@end


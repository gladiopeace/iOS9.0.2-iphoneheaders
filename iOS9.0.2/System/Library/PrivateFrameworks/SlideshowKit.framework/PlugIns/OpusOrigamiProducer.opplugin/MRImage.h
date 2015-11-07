/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRTextureSource, MRImageManager, MRTexture, NSString, NSDictionary, NSMutableDictionary, EAGLContext;

@interface MRImage : NSObject {

	MRTextureSource* _textureSource;
	MRImage* _referenceImage;
	unsigned long _flags;
	MRImageManager* _imageManager;
	MRTexture* _texture;
	float _centerX;
	float _centerY;
	float _scale;
	float _rotationAngle;
	NSString* _filterID;
	NSDictionary* _shader;
	int _clampMode;
	int _retainByUserCount;
	NSString* _label;
	NSMutableDictionary* _userData;
	CGSize _size;
	double _sourceTimestamp;
	double _renderTime;

}

@property (readonly) MRImageManager * imageManager;                               //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,readonly) CGSize size;                                       //@synthesize size=_size - In the implementation block
@property (readonly) float width; 
@property (readonly) float height; 
@property (nonatomic,readonly) EAGLContext * updateGLContext; 
@property (assign,nonatomic) float centerX;                                       //@synthesize centerX=_centerX - In the implementation block
@property (assign,nonatomic) float centerY;                                       //@synthesize centerY=_centerY - In the implementation block
@property (assign,nonatomic) float scale;                                         //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) float rotationAngle;                                 //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (nonatomic,copy) NSString * filterID;                                   //@synthesize filterID=_filterID - In the implementation block
@property (retain) NSDictionary * shader;                                         //@synthesize shader=_shader - In the implementation block
@property (assign,nonatomic) int clampMode;                                       //@synthesize clampMode=_clampMode - In the implementation block
@property (nonatomic,readonly) char hasKBOrShader; 
@property (assign,nonatomic) double sourceTimestamp;                              //@synthesize sourceTimestamp=_sourceTimestamp - In the implementation block
@property (assign,nonatomic) double renderTime;                                   //@synthesize renderTime=_renderTime - In the implementation block
@property (assign,nonatomic) char usesBackgroundColorAsBorderColor; 
@property (assign,nonatomic) char filtersNearest; 
@property (assign,nonatomic) char preservesAspectRatio; 
@property (nonatomic,readonly) char isOpaque; 
@property (nonatomic,copy) NSString * label;                                      //@synthesize label=_label - In the implementation block
@property (readonly) NSMutableDictionary * userData;                              //@synthesize userData=_userData - In the implementation block
@property (nonatomic,readonly) float aspectRatio; 
@property (nonatomic,readonly) char isEmpty; 
@property (assign,nonatomic) char hasKenBurns; 
@property (assign,nonatomic) char scaleWasFixedForTargetAspectRatio; 
@property (readonly) char usesMipmap; 
@property (assign,nonatomic) char mipmapFiltersNearest; 
@property (readonly) MRTexture * texture;                                         //@synthesize texture=_texture - In the implementation block
@property (readonly) int retainByUserCount;                                       //@synthesize retainByUserCount=_retainByUserCount - In the implementation block
-(double)renderTime;
-(id)retainedByUserImageWithShader:(id)arg1 ;
-(char)scaleWasFixedForTargetAspectRatio;
-(char)hasKBOrShader;
-(void)setMipmapFiltersNearest:(char)arg1 ;
-(double)sourceTimestamp;
-(void)setPreservesAspectRatio:(char)arg1 ;
-(char)filtersNearest;
-(int)clampMode;
-(void)setHasKenBurns:(char)arg1 ;
-(EAGLContext *)updateGLContext;
-(id)insertingInCollection;
-(void)releaseByUser;
-(char)usesMipmap;
-(id)retainByUser;
-(void)setClampMode:(int)arg1 ;
-(char)hasKenBurns;
-(void)setRenderTime:(double)arg1 ;
-(void)setSourceTimestamp:(double)arg1 ;
-(void)getMatrix:(float)arg1 forReferenceAspectRatio:(float)arg2 ;
-(void)kenburnsMatrix:(float)arg1 forReferenceAspectRatio:(float)arg2 ;
-(void)setFiltersNearest:(char)arg1 ;
-(void)setUsesBackgroundColorAsBorderColor:(char)arg1 ;
-(id)initWithTextureSource:(id)arg1 andSize:(CGSize)arg2 ;
-(void)setOnContext:(id)arg1 onTextureUnit:(unsigned)arg2 withReferenceAspectRatio:(float)arg3 state:(SCD_Struct_MR10*)arg4 ;
-(void)unsetOnContext:(id)arg1 onTextureUnit:(unsigned)arg2 state:(const SCD_Struct_MR10*)arg3 ;
-(CGSize)relativeSizeInContextPixelSize:(CGSize)arg1 ;
-(id)retainedByUserImage;
-(void)removingFromCollection;
-(void)setScaleWasFixedForTargetAspectRatio:(char)arg1 ;
-(char)preservesAspectRatio;
-(char)usesBackgroundColorAsBorderColor;
-(char)mipmapFiltersNearest;
-(void)uploadCGImage:(CGImageRef)arg1 toTextureRect:(CGRect)arg2 ;
-(int)retainByUserCount;
-(void)setUsesMipmap:(char)arg1 ;
-(float)centerX;
-(float)centerY;
-(float)aspectRatio;
-(void)setShader:(NSDictionary *)arg1 ;
-(NSDictionary *)shader;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(id)initWithImage:(id)arg1 ;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(char)isEmpty;
-(char)isOpaque;
-(float)width;
-(float)height;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSMutableDictionary *)userData;
-(void)cleanup;
-(void)setFilterID:(NSString *)arg1 ;
-(NSString *)filterID;
-(MRImageManager *)imageManager;
-(float)rotationAngle;
-(void)setRotationAngle:(float)arg1 ;
-(void)setCenterX:(float)arg1 ;
-(void)setCenterY:(float)arg1 ;
-(MRTexture *)texture;
@end


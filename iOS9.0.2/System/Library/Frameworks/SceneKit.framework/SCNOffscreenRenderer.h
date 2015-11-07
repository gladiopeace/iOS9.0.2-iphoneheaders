/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNRenderer.h>

@interface SCNOffscreenRenderer : SCNRenderer

@property (nonatomic,readonly) unsigned textureID; 
@property (assign,nonatomic) unsigned antialiasingMode; 
@property (assign,nonatomic) CGSize size; 
+(id)offscreenRendererWithDevice:(id)arg1 size:(CGSize)arg2 ;
+(id)offscreenRendererWithContext:(id)arg1 size:(CGSize)arg2 ;
-(void)_render;
-(void)_deleteFramebuffer;
-(void)_createFramebufferIfNeeded;
-(void)_bindFramebuffer:(char)arg1 ;
-(id)MTLTexture;
-(unsigned)textureID;
-(void)setAntialiasingMode:(unsigned)arg1 ;
-(void)_unbindFramebuffer;
-(void)_resolveAndDiscard;
-(id)_initOffscreenRendererWithOptions:(id)arg1 isPrivateRenderer:(char)arg2 privateRendererOwner:(id)arg3 clearsOnDraw:(char)arg4 size:(CGSize)arg5 context:(void*)arg6 renderingAPI:(unsigned)arg7 ;
-(unsigned)antialiasingMode;
-(CGImageRef)createCGImageSnapshot:(double)arg1 ;
-(id)snapshotAtTime:(double)arg1 ;
-(CGImageRef)copySnapshotWithSize:(CGSize)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)snapshot;
@end


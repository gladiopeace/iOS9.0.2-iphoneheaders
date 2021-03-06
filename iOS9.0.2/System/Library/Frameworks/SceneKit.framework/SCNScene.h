/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNSceneSource, SCNPhysicsWorld, SCNNode, SCNMaterialProperty, NSMutableDictionary, SCNAuthoringEnvironment;

@interface SCNScene : NSObject <NSSecureCoding> {

	C3DSceneRef _scene;
	SCNSceneSource* _sceneSource;
	double _lastEvalTime;
	SCNPhysicsWorld* _physicsWorld;
	SCNNode* _rootNode;
	SCNMaterialProperty* _background;
	NSMutableDictionary* _userAttributes;
	float _fogStartDistance;
	float _fogEndDistance;
	float _fogDensityExponent;
	id _fogColor;
	char _paused;
	char _pausedForEditing;
	SCNAuthoringEnvironment* _authoringEnvironment;

}

@property (nonatomic,readonly) SCNNode * rootNode; 
@property (nonatomic,readonly) SCNPhysicsWorld * physicsWorld; 
@property (nonatomic,readonly) SCNMaterialProperty * background; 
@property (assign,nonatomic) float fogStartDistance; 
@property (assign,nonatomic) float fogEndDistance; 
@property (assign,nonatomic) float fogDensityExponent; 
@property (nonatomic,retain) id fogColor; 
@property (assign,getter=isPaused,nonatomic) char paused; 
+(id)sceneWithMDLAsset:(id)arg1 ;
+(id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3 ;
+(id)sceneWithData:(id)arg1 options:(id)arg2 ;
+(id)sceneNamed:(id)arg1 ;
+(id)sceneNamed:(id)arg1 options:(id)arg2 ;
+(id)sceneWithURL:(id)arg1 options:(id)arg2 ;
+(id)sceneWithURL:(id)arg1 atIndex:(int)arg2 options:(id)arg3 ;
+(id)sceneWithData:(id)arg1 atIndex:(int)arg2 options:(id)arg3 ;
+(id)sceneWithSceneRef:(C3DSceneRef)arg1 ;
+(char)canImportFileUTI:(id)arg1 ;
+(char)canImportFileExtension:(id)arg1 ;
+(id)supportedFileUTIsForImport;
+(id)supportedFileUTIsForExport;
+(SEL)jsConstructor;
+(char)supportsSecureCoding;
+(id)scene;
+(id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(float)playbackSpeed;
-(void)setPlaybackSpeed:(float)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(char)isPaused;
-(void*)__CFObject;
-(SCNPhysicsWorld *)physicsWorld;
-(C3DSceneRef)sceneRef;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(char)isPausedOrPausedByInheritance;
-(id)_physicsWorldCreateIfNeeded:(char)arg1 ;
-(void)_syncObjCModel;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2 ;
-(id)particleSystems;
-(void)removeAllParticleSystems;
-(void)removeParticleSystem:(id)arg1 ;
-(void)_setRootNode:(id)arg1 ;
-(id)initWithSceneRef:(C3DSceneRef)arg1 ;
-(double)frameRate;
-(void)setFrameRate:(double)arg1 ;
-(void)setUpAxis:(SCNVector3)arg1 ;
-(SCNVector3)upAxis;
-(id)initForJavascript:(id)arg1 ;
-(void)_customEncodingOfSCNScene:(id)arg1 ;
-(void)_didEncodeSCNScene:(id)arg1 ;
-(void)_customDecodingOfSCNScene:(id)arg1 ;
-(void)setRootNode:(SCNNode *)arg1 ;
-(void)setFogStartDistance:(float)arg1 ;
-(void)setFogEndDistance:(float)arg1 ;
-(void)setFogDensityExponent:(float)arg1 ;
-(void)setFogColor:(id)arg1 ;
-(void)_didDecodeSCNScene:(id)arg1 ;
-(double)lastEvalTime;
-(void)setLastEvalTime:(double)arg1 ;
-(id)_scenes;
-(void)setSceneSource:(id)arg1 ;
-(id)sceneSource;
-(void)_scaleSceneBy:(float)arg1 ;
-(id)fogColor;
-(float)fogEndDistance;
-(float)fogDensityExponent;
-(float)fogStartDistance;
-(char)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(/*^block*/id)arg4 ;
-(void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 ;
-(void)addParticleSystem:(id)arg1 withTransform:(SCNMatrix4)arg2 ;
-(void)setPausedForEditing:(char)arg1 ;
-(char)isPausedForEditing;
-(char)writeToURL:(id)arg1 options:(id)arg2 ;
-(id)debugQuickLookObjectWithPointOfView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(void)lock;
-(void)unlock;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setPaused:(char)arg1 ;
-(SCNMaterialProperty *)background;
-(double)startTime;
-(id)debugQuickLookObject;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(id)root;
-(SCNNode *)rootNode;
-(id)scene;
@end


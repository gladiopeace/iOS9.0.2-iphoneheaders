/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class AVAudioNode, AVAudioPlayerNode, SCNAudioSource;

@interface SCNAudioPlayer : NSObject {

	AVAudioNode* _audioNode;
	AVAudioPlayerNode* _audioPlayer;
	SCNAudioSource* _audioSource;
	C3DNodeRef _nodeRef;
	C3DSceneRef _scene;
	char _customAudioNode;
	char _completed;
	/*^block*/id willStartPlayback;
	/*^block*/id didFinishPlayback;

}

@property (nonatomic,copy) id willStartPlayback; 
@property (nonatomic,copy) id didFinishPlayback; 
@property (nonatomic,readonly) AVAudioNode * audioNode;                   //@synthesize audioNode=_audioNode - In the implementation block
@property (nonatomic,readonly) SCNAudioSource * audioSource;              //@synthesize audioSource=_audioSource - In the implementation block
@property (readonly) C3DSceneRef scene;                                   //@synthesize scene=_scene - In the implementation block
@property (readonly) char customAudioNode;                                //@synthesize customAudioNode=_customAudioNode - In the implementation block
@property (assign) char completed;                                        //@synthesize completed=_completed - In the implementation block
@property (readonly) AVAudioPlayerNode * audioPlayer;                     //@synthesize audioPlayer=_audioPlayer - In the implementation block
+(id)audioPlayerWithAVAudioNode:(id)arg1 ;
+(id)audioPlayerWithSource:(id)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(char)completed;
-(void)play;
-(id)initWithAVAudioNode:(id)arg1 ;
-(void)setWillStartPlayback:(id)arg1 ;
-(void)setDidFinishPlayback:(id)arg1 ;
-(id)didFinishPlayback;
-(id)willStartPlayback;
-(id)audioBufferFormat;
-(void)setNodeRef:(C3DNodeRef)arg1 ;
-(C3DNodeRef)nodeRef;
-(void*)__CFObject;
-(AVAudioNode *)audioNode;
-(char)customAudioNode;
-(void)dealloc;
-(void)reset;
-(void)setCompleted:(char)arg1 ;
-(AVAudioPlayerNode *)audioPlayer;
-(SCNAudioSource *)audioSource;
-(C3DSceneRef)scene;
-(void)recycle;
@end


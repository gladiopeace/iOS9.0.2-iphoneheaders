/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SKTransition, SCNScene, SCNNode, SCNOffscreenRenderer;

@interface SCNRendererTransitionContext : NSObject {

	double _transitionStartTime;
	SKTransition* _transition;
	SCNScene* _outgoingScene;
	SCNNode* _outgoingPointOfView;
	/*^block*/id completionHandler;
	C3DFXPassRef _transitionPass;
	SCNOffscreenRenderer* _renderers[2];

}

@property (nonatomic,retain) SCNScene * outgoingScene;                   //@synthesize outgoingScene=_outgoingScene - In the implementation block
@property (nonatomic,retain) SKTransition * transition;                  //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) double transitionStartTime;                 //@synthesize transitionStartTime=_transitionStartTime - In the implementation block
@property (nonatomic,retain) SCNNode * outgoingPointOfView;              //@synthesize outgoingPointOfView=_outgoingPointOfView - In the implementation block
-(C3DFXPassRef)transitionPass;
-(id)prepareRendererAtIndex:(int)arg1 withScene:(id)arg2 renderSize:(CGSize)arg3 pointOfView:(id)arg4 parentRenderer:(id)arg5 ;
-(SCNScene *)outgoingScene;
-(void)setOutgoingScene:(SCNScene *)arg1 ;
-(double)transitionStartTime;
-(void)setTransitionStartTime:(double)arg1 ;
-(SCNNode *)outgoingPointOfView;
-(void)setOutgoingPointOfView:(SCNNode *)arg1 ;
-(void)dealloc;
-(void)setTransition:(SKTransition *)arg1 ;
-(SKTransition *)transition;
@end


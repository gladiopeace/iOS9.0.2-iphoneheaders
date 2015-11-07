/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsWorld;

@interface SCNPhysicsCharacter : SCNPhysicsBehavior {

	SCD_Struct_SC24 _definition;
	btCharacterControllerInterface* _characterController;
	btPairCachingGhostObject* _ghostObject;
	btOverlapFilterCallback* _filterCallback;
	btCapsuleShape* _capsuleShape;
	SCNPhysicsWorld* _world;

}

@property (assign,nonatomic) float velocity; 
@property (assign,nonatomic) float jumpSpeed; 
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
-(void)_handleCreateIfNeeded:(char)arg1 ;
-(id)initWithCharacter:(id)arg1 ;
-(char)canJump;
-(void)jump;
-(void)setJumpSpeed:(float)arg1 ;
-(float)jumpSpeed;
-(void)dealloc;
-(void)setVelocity:(float)arg1 ;
-(float)velocity;
-(void)_update;
-(void)setWalkingDirection:(SCNVector3)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class SKNode, NSMutableArray;

@interface SKReach : SKAction {

	SKNode* _ikRoot;
	CGPoint _goalPosition;
	NSMutableArray* _ikChain;
	float _velocity;
	char _timeConstrained;
	float _zRotationSpeed;

}
+(id)reachTo:(CGPoint)arg1 rootNode:(id)arg2 duration:(double)arg3 ;
+(id)reachTo:(CGPoint)arg1 rootNode:(id)arg2 velocity:(float)arg3 ;
+(id)reachTo:(CGPoint)arg1 rootNode:(id)arg2 zRotationSpeed:(float)arg3 maxDuration:(double)arg4 ;
+(id)reachTo:(CGPoint)arg1 rootNode:(id)arg2 duration:(double)arg3 maxZRotationSpeed:(float)arg4 ;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(void)willStartWithTarget:(id)arg1 atTime:(double)arg2 ;
-(void)solveIKWithTarget:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


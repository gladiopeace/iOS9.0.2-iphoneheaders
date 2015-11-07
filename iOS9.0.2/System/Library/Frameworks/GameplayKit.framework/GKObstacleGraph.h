/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraph.h>

@class NSMutableArray, NSArray;

@interface GKObstacleGraph : GKGraph {

	NSMutableArray* _sourceObstacles;
	GKCObstacleGraph* _cObstacleGraph;
	float _bufferRadius;

}

@property (nonatomic,readonly) NSArray * obstacles; 
@property (nonatomic,readonly) float bufferRadius;               //@synthesize bufferRadius=_bufferRadius - In the implementation block
+(id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2 ;
-(GKCGraph*)makeCGraph;
-(id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2 ;
-(GKCObstacleGraph*)cObstacleGraph;
-(NSArray *)obstacles;
-(id)mutObstacles;
-(void)connectNodeUsingObstacles:(id)arg1 ;
-(void)connectNodeUsingObstacles:(id)arg1 ignoringObstacles:(id)arg2 ;
-(void)connectNodeUsingObstacles:(id)arg1 ignoringBufferRadiusOfObstacles:(id)arg2 ;
-(void)addObstacles:(id)arg1 ;
-(void)removeAllObstacles;
-(void)removeObstacles:(id)arg1 ;
-(id)nodesForObstacle:(id)arg1 ;
-(void)lockConnectionFromNode:(id)arg1 toNode:(id)arg2 ;
-(void)unlockConnectionFromNode:(id)arg1 toNode:(id)arg2 ;
-(char)isConnectionLockedFromNode:(id)arg1 toNode:(id)arg2 ;
-(float)bufferRadius;
@end


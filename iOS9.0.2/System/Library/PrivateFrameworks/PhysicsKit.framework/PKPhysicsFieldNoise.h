/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsField.h>

@interface PKPhysicsFieldNoise : PKPhysicsField

@property (assign,nonatomic) float smoothness; 
@property (assign,nonatomic) float animationSpeed; 
+(id)field;
-(id)init;
-(void)setSmoothness:(float)arg1 ;
-(void)setAnimationSpeed:(float)arg1 ;
-(float)smoothness;
-(float)animationSpeed;
-(id)initWithField:(shared_ptr<PKCField>*)arg1 ;
@end


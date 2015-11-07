/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class NSMutableDictionary, NSArray;

@interface UIPushBehavior : UIDynamicBehavior {

	float _angle;
	float _magnitude;
	char _active;
	int _mode;
	CGVector _forceVector;
	double _timeInterval;
	NSMutableDictionary* _targetPoints;
	int _i;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) int mode; 
@property (assign,nonatomic) char active; 
@property (assign,nonatomic) float angle; 
@property (assign,nonatomic) float magnitude; 
@property (assign,nonatomic) CGVector pushDirection; 
+(char)_isPrimitiveBehavior;
-(id)init;
-(id)description;
-(void)removeItem:(id)arg1 ;
-(NSArray *)items;
-(char)active;
-(id)initWithItems:(id)arg1 ;
-(void)setActive:(char)arg1 ;
-(int)mode;
-(void)_associate;
-(void)_dissociate;
-(id)initWithItems:(id)arg1 mode:(int)arg2 ;
-(void)setPushDirection:(CGVector)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(void)_step;
-(void)setXComponent:(float)arg1 yComponent:(float)arg2 ;
-(float)magnitude;
-(void)setAngle:(float)arg1 magnitude:(float)arg2 ;
-(float)yComponent;
-(float)xComponent;
-(void)setMagnitude:(float)arg1 ;
-(void)setXComponent:(float)arg1 ;
-(void)setYComponent:(float)arg1 ;
-(CGPoint)targetPointForItem:(id)arg1 ;
-(void)setTargetPoint:(CGPoint)arg1 forItem:(id)arg2 ;
-(UIOffset)targetOffsetFromCenterForItem:(id)arg1 ;
-(void)setTargetOffsetFromCenter:(UIOffset)arg1 forItem:(id)arg2 ;
-(CGVector)pushDirection;
@end


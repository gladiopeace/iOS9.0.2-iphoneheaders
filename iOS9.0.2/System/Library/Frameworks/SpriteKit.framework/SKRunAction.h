/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class SKAction, NSString;

@interface SKRunAction : SKAction {

	SKAction* _action;
	NSString* _subSpriteKey;
	NSString* _actionKey;
	char _waitForKeyedAction;
	char _runOnSubSprite;
	char _fired;

}
+(id)runAction:(id)arg1 onFirstChildWithName:(id)arg2 ;
+(id)runAction:(id)arg1 afterActionWithKey:(id)arg2 ;
-(id)reversedAction;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(void)willStartWithTarget:(id)arg1 atTime:(double)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


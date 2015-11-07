/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKSpriteNode.h>

@protocol SKButtonNodeSpriteDelegate;
@class NSObject, SKAction;

@interface SKButtonNodeSprite : SKSpriteNode {

	NSObject*<SKButtonNodeSpriteDelegate> _delegate;
	SKAction* _downAction;
	SKAction* _upAction;
	/*^block*/id _downBlock;
	/*^block*/id _upBlock;
	/*^block*/id _upInsideBlock;
	int _touches;

}

@property (assign,nonatomic,__weak) NSObject*<SKButtonNodeSpriteDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKAction * downAction;                                              //@synthesize downAction=_downAction - In the implementation block
@property (nonatomic,retain) SKAction * upAction;                                                //@synthesize upAction=_upAction - In the implementation block
+(id)buttonWithFontNamed:(id)arg1 ;
-(void)setDownAction:(SKAction *)arg1 ;
-(void)setUpAction:(SKAction *)arg1 ;
-(void)touchBegan:(unsigned)arg1 location:(CGPoint)arg2 ;
-(void)touchEnded:(unsigned)arg1 location:(CGPoint)arg2 ;
-(void)touchMoved:(unsigned)arg1 location:(CGPoint)arg2 ;
-(void)onTouchUpInside:(/*^block*/id)arg1 ;
-(void)onTouchUp:(/*^block*/id)arg1 ;
-(void)onTouchDownInside:(/*^block*/id)arg1 ;
-(SKAction *)downAction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(NSObject*<SKButtonNodeSpriteDelegate>)arg1 ;
-(id)init;
-(NSObject*<SKButtonNodeSpriteDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(SKAction *)upAction;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


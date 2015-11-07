/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIScreen;

@interface UIKBScreenTraits : NSObject {

	char _knobInput;
	char _touchInput;
	char _isKeyboardMinorEdgeWidth;
	UIScreen* _screen;
	int _orientation;
	float _keyboardWidth;

}

@property (nonatomic,readonly) UIScreen * screen;                          //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) int idiom; 
@property (nonatomic,readonly) char knobInput;                             //@synthesize knobInput=_knobInput - In the implementation block
@property (nonatomic,readonly) char touchInput;                            //@synthesize touchInput=_touchInput - In the implementation block
@property (assign,nonatomic) int orientation;                              //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) float keyboardWidth;                          //@synthesize keyboardWidth=_keyboardWidth - In the implementation block
@property (nonatomic,readonly) char isKeyboardMinorEdgeWidth;              //@synthesize isKeyboardMinorEdgeWidth=_isKeyboardMinorEdgeWidth - In the implementation block
+(id)traitsWithScreen:(id)arg1 orientation:(int)arg2 ;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(UIScreen *)screen;
-(int)idiom;
-(char)isKeyboardMinorEdgeWidth;
-(float)keyboardWidth;
-(id)initWithScreen:(id)arg1 orientation:(int)arg2 ;
-(void)updateForTextInputTraits:(id)arg1 ;
-(char)knobInput;
-(char)touchInput;
-(void)setKeyboardWidth:(float)arg1 ;
@end


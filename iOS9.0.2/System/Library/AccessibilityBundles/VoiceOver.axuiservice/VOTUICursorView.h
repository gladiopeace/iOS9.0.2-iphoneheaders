/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceOver/VoiceOver-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface VOTUICursorView : UIView {

	CGRect _cursorFrame;
	char _isHidden;
	UIColor* _bgColor;
	float _cachedAlpha;
	CGPathRef _path;
	char largeCursorEnabled;

}

@property (nonatomic,readonly) char largeCursorEnabled; 
@property (assign,nonatomic) CGPathRef path;                         //@synthesize path=_path - In the implementation block
+(CGRect)resizeFrameForDisplay:(CGRect)arg1 ;
-(id)_retrieveFrameBezierPath:(CGRect)arg1 ;
-(id)_retrievePathBezierPaths;
-(void)_orderOut;
-(void)_orderIn;
-(id)_retrieveBezierPaths:(CGRect)arg1 usingRealPaths:(char*)arg2 ;
-(CGRect)resizeFrameForWindow:(CGRect)arg1 ;
-(void)setCursorFrame:(CGRect)arg1 animated:(char)arg2 ;
-(char)largeCursorEnabled;
-(char)userInteractionEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(char)isHidden;
-(CGPathRef)path;
-(float)lineWidth;
-(void)setIsHidden:(char)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
@end


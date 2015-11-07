/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIFont, UIColor, TPLCDTextViewScrollingView, UIFrameAnimation;

@interface TPLCDTextView : UIView {

	NSString* _text;
	UIFont* _font;
	UIColor* _shadowColor;
	UIColor* _textColor;
	TPLCDTextViewScrollingView* _scrollingView;
	float _fontSize;
	CGRect _textRect;
	UIFrameAnimation* _animation;
	id _delegate;
	float _minFontSize;
	unsigned _textRectIsValid : 1;
	unsigned _centerText : 1;
	unsigned _animates : 1;
	unsigned _isAnimating : 1;
	unsigned _leftTruncates : 1;

}
+(float)defaultMinimumFontSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)_automationID;
-(void)setShadowColor:(id)arg1 ;
-(CGSize)sizeToFit;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setMinimumFontSize:(float)arg1 ;
-(void)_tearDownAnimation;
-(char)animates;
-(CGRect)textRect;
-(void)_setupForAnimationIfNecessary;
-(void)setLCDTextFont:(id)arg1 ;
-(void)_drawTextInRect:(CGRect)arg1 verticallyOffset:(char)arg2 ;
-(void)_startScrolling;
-(void)_scheduleStartScrolling;
-(void)_finishedScrolling;
-(void)setCenterText:(char)arg1 ;
-(void)setLeftTruncatesText:(char)arg1 ;
-(void)setAnimatesIfTruncated:(char)arg1 ;
-(void)resetAnimation;
@end


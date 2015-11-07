/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView;

@interface IMQuickScroller : UIControl {

	float _value;
	UIImageView* _background;
	UIImageView* _foreground;

}

@property (assign,nonatomic) float value;              //@synthesize value=_value - In the implementation block
+(id)backgroundForSize:(CGSize)arg1 ;
+(id)foregroundForSize:(CGSize)arg1 ;
-(void)updateValueForTouch:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)value;
-(void)setValue:(float)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end


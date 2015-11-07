/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class UIButton;

@interface UIButtonLabel : UILabel {

	char _reverseShadow;
	UIButton* _button;

}
+(id)_defaultAttributes;
-(void)invalidateIntrinsicContentSize;
-(void)setTextAlignment:(int)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setLineBreakMode:(int)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_setWantsAutolayout;
-(CGSize)shadowOffset;
-(void)setAdjustsFontSizeToFitWidth:(char)arg1 ;
-(void)setMinimumScaleFactor:(float)arg1 ;
-(void)_setMinimumFontSize:(float)arg1 ;
-(id)_defaultAttributes;
-(id)_initWithFrame:(CGRect)arg1 button:(id)arg2 ;
-(void)setReverseShadow:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UITextField, UIView;

@interface AnimatedOverlayView : UIView {

	UITextField* _associatedTextField;
	UIView* _clippingView;
	UITextField* _textField;
	char _isAnimating;

}

@property (nonatomic,retain) UITextField * associatedTextField;              //@synthesize associatedTextField=_associatedTextField - In the implementation block
@property (nonatomic,retain) UIView * clippingView;                          //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) UITextField * textField;                        //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) char isAnimating;                               //@synthesize isAnimating=_isAnimating - In the implementation block
-(void)orientationWillChangeToInterfaceOrientation:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 associatedTextField:(id)arg2 ;
-(UIView *)clippingView;
-(void)setIsAnimating:(char)arg1 ;
-(UITextField *)associatedTextField;
-(void)setAssociatedTextField:(UITextField *)arg1 ;
-(void)setClippingView:(UIView *)arg1 ;
-(char)isAnimating;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
@end


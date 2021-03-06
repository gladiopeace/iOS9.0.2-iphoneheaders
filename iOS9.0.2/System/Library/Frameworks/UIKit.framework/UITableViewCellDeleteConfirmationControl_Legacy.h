/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UITableViewCellDeleteConfirmationGestureRecognizer;

@interface UITableViewCellDeleteConfirmationControl_Legacy : UIControl {

	char _visible;
	UITableViewCellDeleteConfirmationGestureRecognizer* _deleteConfirmationGesture;

}

@property (assign,getter=isVisible,nonatomic) char visible; 
+(CGSize)defaultSizeForTitle:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)defaultSize;
-(void)layoutSubviews;
-(id)initWithTitle:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setVisible:(char)arg1 ;
-(void)_confirmationAnimationDidEnd;
-(char)isVisible;
-(void)touchUpInside:(id)arg1 ;
-(void)touchUpOutside:(id)arg1 ;
-(void)cancelDeleteConfirmationWithGesture:(id)arg1 ;
-(void)setVisible:(char)arg1 animated:(char)arg2 ;
@end


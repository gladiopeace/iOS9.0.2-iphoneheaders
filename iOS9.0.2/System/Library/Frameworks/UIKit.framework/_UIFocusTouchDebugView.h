/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _UIFocusTouchDebugView : UIView {

	UIView* _touchView;
	UIView* _boundaryView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)showCurrentTouchAtNormalizedPoint:(CGPoint)arg1 ;
-(void)showNavigationBoundaryWithinNormalizedRect:(CGRect)arg1 ;
-(void)hideCurrentTouch;
-(void)hideNavigationBoundary;
-(CGPoint)_scaleNormalizedPoint:(CGPoint)arg1 ;
-(CGRect)_scaleNormalizedRect:(CGRect)arg1 ;
@end


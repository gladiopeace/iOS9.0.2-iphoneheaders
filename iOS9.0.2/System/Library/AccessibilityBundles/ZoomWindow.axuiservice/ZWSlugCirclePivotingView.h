/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface ZWSlugCirclePivotingView : UIView {

	CAShapeLayer* _circleLayer;

}

@property (nonatomic,retain) CAShapeLayer * circleLayer;              //@synthesize circleLayer=_circleLayer - In the implementation block
-(void)setCircleLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)circleLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)animationDidStart:(id)arg1 ;
@end


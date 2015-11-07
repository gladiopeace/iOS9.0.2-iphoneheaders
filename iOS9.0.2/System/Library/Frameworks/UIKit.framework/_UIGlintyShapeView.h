/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIBezierPath, UIColor, CAShapeLayer;

@interface _UIGlintyShapeView : UIView {

	UIBezierPath* _path;
	UIColor* _fillColor;
	UIColor* _strokeColor;

}

@property (nonatomic,readonly) CAShapeLayer * shapeLayer; 
@property (nonatomic,readonly) UIBezierPath * path;                    //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,readonly) UIColor * strokeColor;                  //@synthesize strokeColor=_strokeColor - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIBezierPath *)path;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(void)setPath:(UIBezierPath *)arg1 ;
-(CAShapeLayer *)shapeLayer;
@end


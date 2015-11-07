/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Diagnostics/Diagnostics-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface DADrawableView : UIView {

	char _shouldDraw;
	UIColor* _rectangleEdgeColor;
	UIColor* _rectangleFillColor;
	CGPoint _originPoint;
	CGRect _rectangle;

}

@property (assign,nonatomic) CGPoint originPoint;                       //@synthesize originPoint=_originPoint - In the implementation block
@property (assign,nonatomic) CGRect rectangle;                          //@synthesize rectangle=_rectangle - In the implementation block
@property (assign,nonatomic) char shouldDraw;                           //@synthesize shouldDraw=_shouldDraw - In the implementation block
@property (nonatomic,retain) UIColor * rectangleEdgeColor;              //@synthesize rectangleEdgeColor=_rectangleEdgeColor - In the implementation block
@property (nonatomic,retain) UIColor * rectangleFillColor;              //@synthesize rectangleFillColor=_rectangleFillColor - In the implementation block
-(char)shouldDraw;
-(UIColor *)rectangleEdgeColor;
-(CGPoint)originPoint;
-(UIColor *)rectangleFillColor;
-(id)initWithFrame:(CGRect)arg1 rectangleFillColor:(id)arg2 rectangleEdgeColor:(id)arg3 ;
-(void)setOriginPoint:(CGPoint)arg1 ;
-(void)setShouldDraw:(char)arg1 ;
-(void)setRectangleEdgeColor:(UIColor *)arg1 ;
-(void)setRectangleFillColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)rectangle;
-(void)setRectangle:(CGRect)arg1 ;
@end


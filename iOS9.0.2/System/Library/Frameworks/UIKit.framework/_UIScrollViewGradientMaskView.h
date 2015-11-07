/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface _UIScrollViewGradientMaskView : UIView {

	int _gradientDirection;
	UIEdgeInsets _gradientStartInsets;
	UIEdgeInsets _gradientEndInsets;
	UIEdgeInsets _gradientIntensities;

}

@property (assign,nonatomic) UIEdgeInsets gradientStartInsets;              //@synthesize gradientStartInsets=_gradientStartInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gradientEndInsets;                //@synthesize gradientEndInsets=_gradientEndInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gradientIntensities;              //@synthesize gradientIntensities=_gradientIntensities - In the implementation block
@property (assign,nonatomic) int gradientDirection;                         //@synthesize gradientDirection=_gradientDirection - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)gradientStartInsets;
-(UIEdgeInsets)gradientEndInsets;
-(UIEdgeInsets)gradientIntensities;
-(void)setGradientStartInsets:(UIEdgeInsets)arg1 ;
-(void)setGradientEndInsets:(UIEdgeInsets)arg1 ;
-(void)setGradientIntensities:(UIEdgeInsets)arg1 ;
-(int)gradientDirection;
-(id)gradientLayer;
-(void)updateWithFrame:(CGRect)arg1 gradientStartInsets:(UIEdgeInsets)arg2 gradientEndInsets:(UIEdgeInsets)arg3 gradientIntensities:(UIEdgeInsets)arg4 ;
-(void)setGradientDirection:(int)arg1 ;
@end


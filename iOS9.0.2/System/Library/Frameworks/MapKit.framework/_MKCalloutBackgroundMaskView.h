/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView;

@interface _MKCalloutBackgroundMaskView : UIView {

	UIView* _baseView;
	UIImageView* _topArrow;
	UIImageView* _bottomArrow;
	UIImageView* _leftArrow;
	UIImageView* _rightArrow;
	UIView* _currentArrowContainer;

}

@property (nonatomic,readonly) UIView * baseView;                           //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,readonly) UIImageView * topArrow;                      //@synthesize topArrow=_topArrow - In the implementation block
@property (nonatomic,readonly) UIImageView * bottomArrow;                   //@synthesize bottomArrow=_bottomArrow - In the implementation block
@property (nonatomic,readonly) UIImageView * leftArrow;                     //@synthesize leftArrow=_leftArrow - In the implementation block
@property (nonatomic,readonly) UIImageView * rightArrow;                    //@synthesize rightArrow=_rightArrow - In the implementation block
@property (nonatomic,readonly) UIView * currentArrowContainer;              //@synthesize currentArrowContainer=_currentArrowContainer - In the implementation block
-(UIImageView *)rightArrow;
-(UIImageView *)bottomArrow;
-(void)_setupViews;
-(UIImageView *)topArrow;
-(UIView *)currentArrowContainer;
-(UIView *)baseView;
-(UIImageView *)leftArrow;
-(void)_removeArrows;
-(id)initWithFrame:(CGRect)arg1 ;
@end


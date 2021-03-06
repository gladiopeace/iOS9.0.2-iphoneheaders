/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class EKDayOccurrenceView, UIColor;

@interface EKDayOccurrenceResizeHandleView : UIView {

	EKDayOccurrenceView* _occurrenceView;
	UIColor* _baseColor;
	float _radius;

}

@property (nonatomic,retain) UIColor * baseColor;                                        //@synthesize baseColor=_baseColor - In the implementation block
@property (nonatomic,__weak,readonly) EKDayOccurrenceView * occurrenceView;              //@synthesize occurrenceView=_occurrenceView - In the implementation block
@property (assign,nonatomic) float radius;                                               //@synthesize radius=_radius - In the implementation block
-(EKDayOccurrenceView *)occurrenceView;
-(id)initWithFrame:(CGRect)arg1 occurrenceView:(id)arg2 ;
-(void)setBaseColor:(UIColor *)arg1 ;
-(CGRect)_circleRect;
-(void)drawRect:(CGRect)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(UIColor *)baseColor;
-(void)setRadius:(float)arg1 ;
-(float)radius;
@end


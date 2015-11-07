/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatorTransitioning.h>

@class CalendarModel, YearMonthTransitionView, NSString;

@interface YearMonthAnimator : NSObject <UIViewControllerAnimatorTransitioning> {

	char _reverse;
	CalendarModel* _model;
	YearMonthTransitionView* _transitionView;

}

@property (nonatomic,retain) CalendarModel * model;                                 //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) char reverse;                                          //@synthesize reverse=_reverse - In the implementation block
@property (nonatomic,retain) YearMonthTransitionView * transitionView;              //@synthesize transitionView=_transitionView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setReverse:(char)arg1 ;
-(id)initWithModel:(id)arg1 reverse:(char)arg2 ;
-(void)setTransitionView:(YearMonthTransitionView *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(CalendarModel *)model;
-(YearMonthTransitionView *)transitionView;
-(void)setModel:(CalendarModel *)arg1 ;
-(char)reverse;
@end


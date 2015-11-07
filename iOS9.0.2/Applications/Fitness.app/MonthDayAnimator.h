/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatorTransitioning.h>

@class PaletteViewController, FitnessModel, NSString;

@interface MonthDayAnimator : NSObject <UIViewControllerAnimatorTransitioning> {

	PaletteViewController* _paletteVC;
	FitnessModel* _model;
	char _reverse;

}

@property (assign,nonatomic) char reverse;                          //@synthesize reverse=_reverse - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPaletteVC:(id)arg1 model:(id)arg2 ;
-(void)setReverse:(char)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(char)reverse;
@end


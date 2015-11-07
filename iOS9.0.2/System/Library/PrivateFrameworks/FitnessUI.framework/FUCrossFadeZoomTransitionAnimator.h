/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/FUViewControllerAnimatedTransitioning.h>

@class UIView, NSString;

@interface FUCrossFadeZoomTransitionAnimator : NSObject <FUViewControllerAnimatedTransitioning> {

	/*^block*/id _animationCompletionBlock;
	char _transitionCompleted;
	char _zoomingUp;
	id _context;
	UIView* _smallView;
	UIView* _largeView;

}

@property (nonatomic,retain) id context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIView * smallView;                    //@synthesize smallView=_smallView - In the implementation block
@property (nonatomic,retain) UIView * largeView;                    //@synthesize largeView=_largeView - In the implementation block
@property (assign,nonatomic) char zoomingUp;                        //@synthesize zoomingUp=_zoomingUp - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)completeTransitionImmediately;
-(UIView *)smallView;
-(void)setSmallView:(UIView *)arg1 ;
-(UIView *)largeView;
-(void)setLargeView:(UIView *)arg1 ;
-(char)zoomingUp;
-(void)setZoomingUp:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface _UIAlertManager : NSObject
+(void)noteOrientationChangingTo:(int)arg1 ;
+(void)hideAlertsForTermination;
+(void)initialize;
+(void)noteOrientationChangingTo:(int)arg1 animated:(char)arg2 ;
+(id)visibleAlert;
+(void)reorientAlertWindowTo:(int)arg1 animated:(char)arg2 keyboard:(id)arg3 ;
+(void)tellSpringboardShowingAlert:(id)arg1 animated:(char)arg2 forSpringBoardAlertTransition:(char)arg3 ;
+(char)hideTopMostAlertAnimated:(char)arg1 ;
+(char)stackContainsAlert:(id)arg1 ;
+(void)tellSpringboardHidingAlert:(id)arg1 animated:(char)arg2 forSpringBoardAlertTransition:(char)arg3 ;
+(void)sizeAlertWindowForCurrentOrientation;
+(void)addToStack:(id)arg1 dontDimBackground:(char)arg2 ;
+(void)createAlertWindowIfNeeded:(char)arg1 ;
+(id)topMostAlert;
+(void)removeFromStack:(id)arg1 ;
+(char)cancelTopMostAlertAnimated:(char)arg1 ;
+(CGAffineTransform)calculatedAlertTransform;
+(void)_applyAlertTransforms;
+(void)applyInternalWindowTransform:(CGAffineTransform)arg1 ;
+(void)alertWindowAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
+(void)hideDimmingViewAnimated:(char)arg1 ;
+(void)createAlertWindowIfNeeded:(char)arg1 deferDisplay:(char)arg2 ;
+(char)cancelAlertsAnimated:(char)arg1 ;
+(CGAffineTransform)_alertTranslationForInterfaceOrientation:(int)arg1 andTranslation:(float)arg2 ;
+(void)applyClientWindowTransform:(CGAffineTransform)arg1 ;
+(void)showDimmingViewAnimated:(char)arg1 ;
+(void)alertPopoutCompleted;
-(void)_didHideDimmingView:(id)arg1 finished:(id)arg2 ;
@end


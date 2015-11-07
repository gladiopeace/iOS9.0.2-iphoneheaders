/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBTouchTemplateGestureRecognizer.h>

@interface SBTouchTemplatePinchGestureRecognizer : SBTouchTemplateGestureRecognizer
-(char)hasSignificantMotionToBegin;
-(void)_log:(id)arg1 ;
-(float)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2 ;
-(float)_computeNonlinearSpeedGain:(float)arg1 ;
-(float)_computeHandSizeCompensationGain:(float)arg1 ;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end


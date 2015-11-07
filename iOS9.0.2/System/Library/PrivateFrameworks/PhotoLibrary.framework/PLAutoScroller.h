/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class UIScrollView, NSTimer;

@interface PLAutoScroller : NSObject {

	UIScrollView* _targetScrollView;
	CGPoint _targetPoint;
	float _thresholdDistance;
	NSTimer* _autoscrollTimer;

}

@property (assign,nonatomic) CGPoint targetPoint;              //@synthesize targetPoint=_targetPoint - In the implementation block
@property (readonly) float thresholdDistance;                  //@synthesize thresholdDistance=_thresholdDistance - In the implementation block
-(void)stopAndInvalidate;
-(void)dealloc;
-(id)init;
-(void)_stopAutoscrollTimer;
-(CGPoint)targetPoint;
-(void)setTargetPoint:(CGPoint)arg1 ;
-(void)_updateAutoscrollTimer:(id)arg1 ;
-(id)initWithTargetScrollView:(id)arg1 thresholdDistance:(float)arg2 ;
-(float)thresholdDistance;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIControl.h>

@protocol PLSlalomRegionEditorDelegate;
@class UIImageView;

@interface PLSlalomRegionEditor : UIControl {

	UIImageView* _startHandleView;
	UIImageView* _endHandleView;
	UIImageView* _trackImageView;
	UIImageView* _trackSnapshotView;
	char _draggingStart;
	char _draggingEnd;
	float _touchOffset;
	char _zoomed;
	char _trackingZoom;
	CGPoint _touchLocationWhenTrackingZoomBegan;
	char _forceLayout;
	double _zoomMinValue;
	double _zoomMaxValue;
	char _zoomAnimating;
	id<PLSlalomRegionEditorDelegate> _delegate;
	float _trimHandleWidth;
	unsigned _regionEditorStyle;
	float _minValue;
	float _maxValue;
	float _startValue;
	float _endValue;
	double _zoomDelay;
	UIEdgeInsets _trackInsets;

}

@property (assign,nonatomic) id<PLSlalomRegionEditorDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets trackInsets;                                                        //@synthesize trackInsets=_trackInsets - In the implementation block
@property (assign,nonatomic) float trimHandleWidth;                                                           //@synthesize trimHandleWidth=_trimHandleWidth - In the implementation block
@property (assign,nonatomic) unsigned regionEditorStyle;                                                      //@synthesize regionEditorStyle=_regionEditorStyle - In the implementation block
@property (assign,nonatomic) float minValue;                                                                  //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) float maxValue;                                                                  //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) float startValue;                                                                //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) float endValue;                                                                  //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double zoomDelay;                                                                //@synthesize zoomDelay=_zoomDelay - In the implementation block
@property (assign,setter=setZoomAnimating:,getter=isZoomAnimating,nonatomic) char zoomAnimating;              //@synthesize zoomAnimating=_zoomAnimating - In the implementation block
-(float)endValue;
-(float)startValue;
-(float)maxValue;
-(void)setRegionEditorStyle:(unsigned)arg1 ;
-(void)setTrimHandleWidth:(float)arg1 ;
-(void)setZoomAnimating:(char)arg1 ;
-(void)setZoomMinValue:(double)arg1 maxValue:(double)arg2 ;
-(void)setTrackInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PLSlalomRegionEditorDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PLSlalomRegionEditorDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(float)minValue;
-(void)setMaxValue:(float)arg1 ;
-(void)setMinValue:(float)arg1 ;
-(void)setStartValue:(float)arg1 ;
-(void)setEndValue:(float)arg1 ;
-(char)isZoomAnimating;
-(double)zoomDelay;
-(void)setZoomDelay:(double)arg1 ;
-(CGRect)_trackFrame;
-(id)_handleImage;
-(id)_handleTintColor;
-(void)_updateTrack;
-(CGRect)_startHandleFrame;
-(CGRect)_endHandleFrame;
-(void)setStartValue:(float)arg1 notify:(char)arg2 ;
-(void)setEndValue:(float)arg1 notify:(char)arg2 ;
-(double)_zoomMinValue;
-(double)_zoomMaxValue;
-(CGRect)_handleFrameForValue:(float)arg1 isStart:(char)arg2 ;
-(float)_valueFromHandleFrame:(CGRect)arg1 isStart:(char)arg2 ;
-(CGRect)_trackFrameNoZoom;
-(char)_isZoomed;
-(float)_trackScale;
-(float)_trimHandleWidth;
-(char)_isTouch:(id)arg1 inHandleIsStart:(char)arg2 outTouchOffset:(float*)arg3 ;
-(void)_beginTrackingZoomWithTouch:(id)arg1 ;
-(void)_updateSlidersWithTouch:(id)arg1 ;
-(void)_cancelZoomTrackingIfNeccessaryWithTouch:(id)arg1 ;
-(void)_stopTrackingAndSendControlEvents:(unsigned)arg1 ;
-(void)_cancelTrackingZoom;
-(void)_cancelZoom;
-(float)_valueFromStartHandleFrame:(CGRect)arg1 ;
-(float)_valueFromEndHandleFrame:(CGRect)arg1 ;
-(void)_zoomPressWasHeld;
-(id)_trackImageForZoom:(char)arg1 ;
-(id)_trackColor;
-(id)_tickColor;
-(unsigned)regionEditorStyle;
-(void)_drawCurveWithFlatEndsFromX:(float)arg1 fromY:(float)arg2 toX:(float)arg3 toY:(float)arg4 ;
-(UIEdgeInsets)trackInsets;
-(float)trimHandleWidth;
@end


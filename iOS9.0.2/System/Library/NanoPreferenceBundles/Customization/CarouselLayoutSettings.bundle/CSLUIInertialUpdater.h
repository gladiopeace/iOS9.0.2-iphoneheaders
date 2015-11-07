/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CSLUIInertialUpdaterDelegate;
#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
@class CADisplayLink;

@interface CSLUIInertialUpdater : NSObject {

	char _dragging;
	CGPoint _velocity;
	CGPoint _lastVelocity;
	CGPoint _target;
	CGPoint _clientTarget;
	CGPoint _offset;
	double _lastDecelerationUpdate;
	double _lastInteractionTime;
	CADisplayLink* _displayLink;
	id<CSLUIInertialUpdaterDelegate> _delegate;

}

@property (assign,nonatomic) id<CSLUIInertialUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_finalizeOffset;
-(void)_decelerate:(double)arg1 ;
-(void)addDragDelta:(CGPoint)arg1 ;
-(void)endDragging;
-(void)_handleDragDelta:(CGPoint)arg1 ;
-(void)_computeDecelerationTarget;
-(CGPoint)_constrainedOffset:(CGPoint)arg1 ;
-(void)_updateDelegateWithDelta:(CGPoint)arg1 ;
-(void)endUpdating;
-(void)_updateDisplayLink;
-(void)setDelegate:(id<CSLUIInertialUpdaterDelegate>)arg1 ;
-(id<CSLUIInertialUpdaterDelegate>)delegate;
-(void)_displayLinkFired:(id)arg1 ;
-(char)_needsDisplayLink;
-(void)_beginDraggingIfNecessary;
@end


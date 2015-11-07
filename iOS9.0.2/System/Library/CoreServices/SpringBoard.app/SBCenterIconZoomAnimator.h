/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconZoomAnimator.h>
#import <SpringBoard/SBIconListLayoutDelegate.h>

@class UIView, SBCenterZoomSettings, NSString;

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate> {

	UIView* _zoomView;
	float _iconZoomedZ;
	float _centerRow;
	float _centerCol;
	CGPoint _cameraPosition;

}

@property (nonatomic,retain) SBCenterZoomSettings * settings; 
@property (nonatomic,retain,readonly) UIView * zoomView;                   //@synthesize zoomView=_zoomView - In the implementation block
@property (nonatomic,readonly) CGPoint cameraPosition;                     //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_prepareAnimation;
-(void)iconListView:(id)arg1 wouldHaveMovedIcon:(id)arg2 ;
-(void)iconListViewLayoutInvalidated:(id)arg1 ;
-(void)_cleanupAnimation;
-(id)initWithFolderController:(id)arg1 ;
-(void)_setAnimationFraction:(float)arg1 ;
-(unsigned)_numberOfSignificantAnimations;
-(void)_animateToFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(void)_calculateCentersAndCameraPosition;
-(void)_positionView:(id)arg1 forIcon:(id)arg2 ;
-(double)_iconZoomDelay;
-(id)_animationFactoryForIcon:(id)arg1 ;
-(id)_animationFactoryForDock;
-(void)dealloc;
-(UIView *)zoomView;
-(CGPoint)cameraPosition;
@end

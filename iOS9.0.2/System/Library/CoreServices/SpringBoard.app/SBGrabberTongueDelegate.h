/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBGrabberTongueDelegate <NSObject>
@optional
-(float)grabberTongueCenterOnEdge:(id)arg1;
-(float)grabberTongueWidthOfGrabberFreeRegion:(id)arg1;
-(float)grabberTongueWidthOfActiveEdge:(id)arg1;
-(void)grabberTongueBeganPulling:(id)arg1 withDistance:(float)arg2 andVelocity:(float)arg3;
-(void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(float)arg2 andVelocity:(float)arg3;
-(void)grabberTongueEndedPulling:(id)arg1 withDistance:(float)arg2 andVelocity:(float)arg3;
-(void)grabberTongueCanceledPulling:(id)arg1 withDistance:(float)arg2 andVelocity:(float)arg3;
-(void)grabberTongueWillPresent:(id)arg1;

@required
-(char)grabberTongueOrPullEnabled:(id)arg1;
-(char)grabberTongueRequiredOutsideGrabberFreeRegion:(id)arg1;
-(char)grabberTongueRequiredForWholeEdge:(id)arg1;

@end


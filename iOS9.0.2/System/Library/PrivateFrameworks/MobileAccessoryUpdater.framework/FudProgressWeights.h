/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FudProgressWeights : NSObject {

	float prepareWeight;
	float applyWeight;
	float finishWeight;

}

@property (assign) float prepareWeight; 
@property (assign) float applyWeight; 
@property (assign) float finishWeight; 
-(id)description;
-(id)initWithPrepareWeight:(float)arg1 applyWeight:(float)arg2 finishWeight:(float)arg3 ;
-(double)calculateOverallProgressWithStepProgress:(double)arg1 step:(int)arg2 ;
-(float)prepareWeight;
-(void)setPrepareWeight:(float)arg1 ;
-(float)applyWeight;
-(void)setApplyWeight:(float)arg1 ;
-(float)finishWeight;
-(void)setFinishWeight:(float)arg1 ;
@end


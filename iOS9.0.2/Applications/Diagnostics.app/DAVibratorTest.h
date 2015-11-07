/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Diagnostics/Diagnostics-Structs.h>
#import <Diagnostics/DATestOperation.h>
#import <Diagnostics/DAHIDEventMonitorDelegate.h>

@class CMMotionManager, NSArray, NSString;

@interface DAVibratorTest : DATestOperation <DAHIDEventMonitorDelegate> {

	CMMotionManager* _motionManager;
	NSArray* _vibrationStartTime;
	NSArray* _vibrationDuration;
	float _recordDuration;

}

@property (nonatomic,retain) CMMotionManager * motionManager;              //@synthesize motionManager=_motionManager - In the implementation block
@property (nonatomic,retain) NSArray * vibrationStartTime;                 //@synthesize vibrationStartTime=_vibrationStartTime - In the implementation block
@property (nonatomic,retain) NSArray * vibrationDuration;                  //@synthesize vibrationDuration=_vibrationDuration - In the implementation block
@property (assign,nonatomic) float recordDuration;                         //@synthesize recordDuration=_recordDuration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)vibrationStartTime;
-(NSArray *)vibrationDuration;
-(void)vibrate:(id)arg1 ;
-(float)recordDuration;
-(void)printData;
-(void)handleHIDEvent:(IOHIDEventRef)arg1 ;
-(void)setVibrationStartTime:(NSArray *)arg1 ;
-(void)setVibrationDuration:(NSArray *)arg1 ;
-(void)setRecordDuration:(float)arg1 ;
-(void)start;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(CMMotionManager *)motionManager;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class CMMotionManager;

@interface FigCoreMotionDelegate : NSObject {

	opaque_pthread_mutex_t ringMutex;
	CMMotionManager* motionManager;
	char manageFusedMotion;
	char manageAccel;
	char manageGravity;
	int accelRingIndex;
	float accelRingX[256];
	float accelRingY[256];
	float accelRingZ[256];
	double accelRingTime[256];
	int fusedRingIndex;
	double fusedRingTime[256];
	char fusedRingDoingBiasEstimation[256];
	SCD_Struct_Fi53 fusedRingAccel[256];
	SCD_Struct_Fi54 fusedRingQuaternion[256];
	SCD_Struct_Fi53 fusedRingPosition[256];
	OpaqueFigSemaphoreRef dataSemaphore;
	double latestMotionDataTime;
	double latestGravityDataTime;
	char copyingAllData;
	double dLatestFusedMotionCopied;
	double dLatestTimestamp;
	double dGyroUpdateInterval;
	double timestampLatency;
	double dStartOfLogging;
	char gettingAttitudeChange;
	SCD_Struct_Fi54 previousQuaternion;
	SCD_Struct_Fi54 currentQuaternion;
	char computingPosition;
	SCD_Struct_Fi56 position;
	SCD_Struct_Fi56 velocity;

}
-(void)dealloc;
-(id)init;
-(long)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(id)initWithAccelerometer:(char)arg1 gravityZ:(char)arg2 fusedMotion:(char)arg3 accelUpdateInterval:(float)arg4 fusedMotionUpdateInterval:(float)arg5 ;
-(void)didUpdatePositionWithAcceleration:(SCD_Struct_Fi53*)arg1 forTimeStamp:(double)arg2 ;
-(void)didUpdateVelocityWithAcceleration:(SCD_Struct_Fi53*)arg1 forTimeStamp:(double)arg2 ;
-(void)didUpdatePositionWithTimeStamp:(double)arg1 ;
-(void)getCurrentDeltaQuaternion:(SCD_Struct_Fi54*)arg1 ;
-(void)updateDeviceCallback:(char)arg1 fusedMotionUpdateInterval:(float)arg2 ;
-(void)updateGyroInterval:(float)arg1 ;
-(void)didUpdateAcceleration:(SCD_Struct_Fi53)arg1 time:(double)arg2 ;
-(void)didUpdateGravity:(SCD_Struct_Fi53)arg1 time:(double)arg2 ;
-(long)getGravityX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(long)getFusedVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(void)didUpdateFusedMotionWithDeviceMotion:(SCD_Struct_Fi57)arg1 time:(double)arg2 ifsync:(char)arg3 ;
-(id)copyAllFusedMotionData;
-(id)copyNewFusedMotionData;
-(id)copyFusedMotionData:(double)arg1 endTime:(double)arg2 timeoutValue:(double)arg3 errOut:(int*)arg4 ;
-(long)updateCurrentQuaternionForTimeStamp:(double)arg1 ;
-(long)updateCurrentQuaternionForTimeStamps:(double)arg1 withEnd:(double)arg2 ;
-(void)getCurrentQuaternion:(SCD_Struct_Fi54*)arg1 ;
-(void)getCurrentAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3 ;
-(void)getCurrentDeltaAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3 ;
-(void)getPositionX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(long)getLatestMotionDataTime:(double*)arg1 ;
-(char)managingFusedMotion;
-(char)managingAccel;
-(char)managingGravity;
-(char)isCopyingAllData;
@end


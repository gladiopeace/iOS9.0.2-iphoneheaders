/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDate, NSObject, NSTimer, PLEntryNotificationOperatorComposition;

@interface PLTimer : NSObject {

	char _repeats;
	NSDate* _fireDate;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	NSTimer* _timer;
	id _userInfo;
	PLEntryNotificationOperatorComposition* _sleepEntryNotification;
	PLEntryNotificationOperatorComposition* _wakeEntryNotification;
	NSDate* _lastSleepTime;
	double _interval;
	double _tolerance;

}

@property (assign,nonatomic) char timerActive; 
@property (nonatomic,retain) NSDate * fireDate;                                                  //@synthesize fireDate=_fireDate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                           //@synthesize queue=_queue - In the implementation block
@property (copy) id block;                                                                       //@synthesize block=_block - In the implementation block
@property (retain) NSTimer * timer;                                                              //@synthesize timer=_timer - In the implementation block
@property (assign) double interval;                                                              //@synthesize interval=_interval - In the implementation block
@property (assign) double tolerance;                                                             //@synthesize tolerance=_tolerance - In the implementation block
@property (assign) char repeats;                                                                 //@synthesize repeats=_repeats - In the implementation block
@property (retain) id userInfo;                                                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * sleepEntryNotification;              //@synthesize sleepEntryNotification=_sleepEntryNotification - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * wakeEntryNotification;               //@synthesize wakeEntryNotification=_wakeEntryNotification - In the implementation block
@property (retain) NSDate * lastSleepTime;                                                       //@synthesize lastSleepTime=_lastSleepTime - In the implementation block
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(void)fire;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)setUserInfo:(id)arg1 ;
-(void)setFireDate:(NSDate *)arg1 ;
-(id)userInfo;
-(NSDate *)fireDate;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(char)repeats;
-(void)setRepeats:(char)arg1 ;
-(PLEntryNotificationOperatorComposition *)wakeEntryNotification;
-(void)setWakeEntryNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleTimerFire;
-(PLEntryNotificationOperatorComposition *)sleepEntryNotification;
-(void)setSleepEntryNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(NSDate *)lastSleepTime;
-(void)setLastSleepTime:(NSDate *)arg1 ;
-(id)initWithFireDate:(id)arg1 withInterval:(double)arg2 withTolerance:(double)arg3 repeats:(char)arg4 withUserInfo:(id)arg5 withQueue:(id)arg6 withBlock:(/*^block*/id)arg7 ;
-(void)setTimerActive:(char)arg1 ;
-(char)timerActive;
@end


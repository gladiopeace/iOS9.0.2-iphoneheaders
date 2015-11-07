/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OITSUProgress.h>

@protocol OS_dispatch_queue;
@class OITSUScaledProgressStorage, OITSUProgress, NSObject;

@interface OITSUScaledProgress : OITSUProgress {

	OITSUScaledProgressStorage* mStorage;
	OITSUProgress* mProgress;
	id mProgressObserver;
	NSObject*<OS_dispatch_queue> mProgressQueue;

}

@property (retain) OITSUProgress * progress; 
@property (assign) double maxValue; 
-(double)maxValue;
-(void)dealloc;
-(id)init;
-(double)value;
-(void)setProgress:(OITSUProgress *)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(OITSUProgress *)progress;
-(void)removeProgressObserver:(id)arg1 ;
-(char)isIndeterminate;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)p_removeProgressObserverFromProgressInQueue;
-(void)p_addProgressObserverToProgressInQueue;
@end


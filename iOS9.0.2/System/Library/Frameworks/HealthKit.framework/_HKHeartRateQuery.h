/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@interface _HKHeartRateQuery : HKQuery {

	/*^block*/id _updateHandler;

}

@property (nonatomic,copy) id updateHandler;              //@synthesize updateHandler=_updateHandler - In the implementation block
-(void)_queue_cleanupAfterDeactivation;
-(char)_queue_shouldStayAliveAfterInitialResults;
-(void)_queue_validate;
-(/*^block*/id)_queue_errorHandler;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)deliverHeartRate:(id)arg1 forQuery:(id)arg2 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQuery.h>

@interface _HKDateRangeQuery : HKQuery {

	/*^block*/id _handler;

}
-(void)_queue_cleanupAfterDeactivation;
-(char)_queue_shouldStayAliveAfterInitialResults;
-(void)_queue_validate;
-(char)_requiresValidSampleType;
-(/*^block*/id)_queue_errorHandler;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)deliverDateRangeDictionary:(NSDictionary*)arg1 forQuery:(id)arg2 ;
@end


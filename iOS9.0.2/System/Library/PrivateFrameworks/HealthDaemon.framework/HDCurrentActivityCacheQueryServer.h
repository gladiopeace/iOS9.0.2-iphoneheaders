/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDActivityCacheManagerObserver.h>

@class HDActivityCacheManager, NSString;

@interface HDCurrentActivityCacheQueryServer : HDQueryServer <HDActivityCacheManagerObserver> {

	double _createdTime;
	double _firstResultsTime;
	HDActivityCacheManager* _activityCacheManager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_queue_start;
-(char)_shouldListenForUpdates;
-(void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2 updatedFields:(unsigned)arg3 error:(id)arg4 ;
-(void)_queue_stop;
-(char)_shouldExecuteWhenProtectedDataIsUnavailable;
-(id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6 activityCacheManager:(id)arg7 ;
@end


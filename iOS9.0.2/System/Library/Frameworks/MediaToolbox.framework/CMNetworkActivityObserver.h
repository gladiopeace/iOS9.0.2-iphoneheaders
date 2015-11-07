/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CMNetworkActivityMonitor;

@interface CMNetworkActivityObserver : NSObject {

	char _valid;
	char _registered;
	int _cmActivityToken;
	int _cmActivityPollingToken;
	CMNetworkActivityMonitor* _activityMonitor;

}

@property (nonatomic,readonly) CMNetworkActivityMonitor * activityMonitor; 
+(id)registeredObserverForActivityMonitor:(id)arg1 ;
-(void)unregisterObservations;
-(CMNetworkActivityMonitor *)activityMonitor;
-(void)_pollWithInterval:(double)arg1 networkActivityDidCompleteBlock:(/*^block*/id)arg2 ;
-(void)registerObservations;
-(id)initForActivityMonitor:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
@end


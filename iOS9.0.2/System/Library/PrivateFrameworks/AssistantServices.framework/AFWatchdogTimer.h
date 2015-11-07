/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface AFWatchdogTimer : NSObject {

	NSObject*<OS_dispatch_source> _timerSource;

}
-(void)cancel;
-(void)start;
-(id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(/*^block*/id)arg2 ;
@end


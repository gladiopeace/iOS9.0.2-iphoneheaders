/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface SYRetryTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	double _interval;
	double _backoffFactor;
	int _maxRetries;
	int _numRetries;

}
-(void)cancel;
-(id)initWithInterval:(double)arg1 backoffFactor:(double)arg2 maxRetries:(int)arg3 queue:(id)arg4 callout:(/*^block*/id)arg5 ;
-(char)incrementBackoff;
@end


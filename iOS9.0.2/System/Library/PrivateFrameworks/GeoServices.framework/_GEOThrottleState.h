/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _GEOThrottleState : NSObject {

	unsigned _requestCount;
	double _lastResetTime;

}

@property (assign,nonatomic) unsigned requestCount;              //@synthesize requestCount=_requestCount - In the implementation block
@property (assign,nonatomic) double lastResetTime;               //@synthesize lastResetTime=_lastResetTime - In the implementation block
-(unsigned)requestCount;
-(void)setRequestCount:(unsigned)arg1 ;
-(double)lastResetTime;
-(void)setLastResetTime:(double)arg1 ;
@end


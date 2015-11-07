/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHAP/HAPBlockOperation.h>

@interface HAPTimedBlockedOperation : HAPBlockOperation {

	double _timeout;

}

@property (nonatomic,readonly) double timeout;              //@synthesize timeout=_timeout - In the implementation block
-(double)timeout;
-(id)init;
-(unsigned long long)dispatchTimeout;
-(id)initWithTimeout:(double)arg1 ;
@end


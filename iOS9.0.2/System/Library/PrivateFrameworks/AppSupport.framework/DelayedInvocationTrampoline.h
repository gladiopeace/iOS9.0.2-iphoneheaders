/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppSupport/InvocationTrampoline.h>

@interface DelayedInvocationTrampoline : InvocationTrampoline {

	double _delay;

}
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 delay:(double)arg2 ;
@end


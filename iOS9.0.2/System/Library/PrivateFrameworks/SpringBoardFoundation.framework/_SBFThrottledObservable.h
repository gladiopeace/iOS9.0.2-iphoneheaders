/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFObservable.h>

@protocol SBFCancelable, SBFObservable, SBFScheduler;
@interface _SBFThrottledObservable : SBFObservable {

	double _interval;
	id<SBFCancelable> _delayToken;
	id<SBFObservable> _observable;
	id<SBFScheduler> _scheduler;
	id _result;
	char _hasResult;
	unsigned _resultCounter;

}
-(id)subscribe:(id)arg1 ;
-(void)dealloc;
-(void)_cancel;
-(void)_clearResult;
-(void)_setDelayToken:(id)arg1 ;
-(unsigned)_setResult:(id)arg1 ;
-(void)_sendResultToObserver:(id)arg1 withIdentifier:(unsigned)arg2 ;
-(void)_sendCompletionToObsever:(id)arg1 ;
-(id)initWithInterval:(double)arg1 observable:(id)arg2 scheduler:(id)arg3 ;
@end


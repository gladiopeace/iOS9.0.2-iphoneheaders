/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADCallObserverDelegate;
@interface ADCallObserver : NSObject {

	char _isObserving;
	id<ADCallObserverDelegate> _delegate;

}
-(void)startObservingCallStateWithDelegate:(id)arg1 ;
-(void)stopObservingCallStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_callStateChanged:(id)arg1 ;
-(void)dealloc;
@end


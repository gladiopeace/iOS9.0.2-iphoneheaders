/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, ADPeerLocationPolicyDelegate;
@class NSObject;

@interface ADPeerLocationPolicy : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timerSource;
	id<ADPeerLocationPolicyDelegate> _delegate;
	double _allowedTimelimit;

}

@property (assign,nonatomic,__weak) id<ADPeerLocationPolicyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double allowedTimelimit;                                       //@synthesize allowedTimelimit=_allowedTimelimit - In the implementation block
-(void)locationDataWasRecievedFromPeer;
-(void)locationPeerDidChange;
-(double)allowedTimelimit;
-(void)setAllowedTimelimit:(double)arg1 ;
-(void)_resetTimer;
-(void)_cancelTimer;
-(void)setDelegate:(id<ADPeerLocationPolicyDelegate>)arg1 ;
-(id)init;
-(id<ADPeerLocationPolicyDelegate>)delegate;
@end


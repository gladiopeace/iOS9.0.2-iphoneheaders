/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CAMPowerController : NSObject {

	char __isBackgrounded;
	int __assertionIdentifierGenerator;
	NSMutableDictionary* __assertionsByIdentifier;
	NSObject*<OS_dispatch_queue> __assertionsQueue;
	unsigned __backgroundTaskIdentifier;

}

@property (nonatomic,readonly) int _assertionIdentifierGenerator;                                               //@synthesize _assertionIdentifierGenerator=__assertionIdentifierGenerator - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _assertionsByIdentifier;                                   //@synthesize _assertionsByIdentifier=__assertionsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _assertionsQueue;                                   //@synthesize _assertionsQueue=__assertionsQueue - In the implementation block
@property (nonatomic,readonly) unsigned _backgroundTaskIdentifier;                                              //@synthesize _backgroundTaskIdentifier=__backgroundTaskIdentifier - In the implementation block
@property (assign,setter=_setBackgrounded:,getter=_isBackgrounded,nonatomic) char _isBackgrounded;              //@synthesize _isBackgrounded=__isBackgrounded - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(NSMutableDictionary *)_assertionsByIdentifier;
-(unsigned)_backgroundTaskIdentifier;
-(char)_isBackgrounded;
-(NSObject*<OS_dispatch_queue>)_assertionsQueue;
-(void)_setBackgrounded:(char)arg1 ;
-(void)_endBackgroundTaskIfNeeded;
-(void)_startBackgroundTaskIfNeeded;
-(unsigned)generateAssertionIdentifier;
-(void)addAssertionForIndentifier:(unsigned)arg1 withReason:(unsigned short)arg2 ;
-(void)removeAssertionForIdentifier:(unsigned)arg1 withReason:(unsigned short)arg2 ;
-(int)_assertionIdentifierGenerator;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, RMSSessionManagerDelegate;
@class NSMutableDictionary, NSObject;

@interface RMSSessionManager : NSObject {

	NSMutableDictionary* _sessions;
	NSObject*<OS_dispatch_queue> _sessionManagerQueue;
	id<RMSSessionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RMSSessionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<RMSSessionManagerDelegate>)arg1 ;
-(id)init;
-(id<RMSSessionManagerDelegate>)delegate;
-(id)persistedSessionIdentifiers;
-(id)sessionWithIdentifier:(int)arg1 ;
-(void)refreshSessionWithIdentifier:(int)arg1 ;
-(void)beginSession:(id)arg1 timeout:(int)arg2 shouldTakePowerAssertion:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)endSessionWithIdentifier:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)identifierForSession:(id)arg1 ;
-(int)_uniqueSessionIdentifier;
-(void)_updatePersistedSessionIdentifiers;
-(void)_scheduleSessionExpirationWithIdentifier:(int)arg1 timeout:(int)arg2 ;
@end


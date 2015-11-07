/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFPriorityDesignator.h>

@class NSThread, NSString, MFInvocationQueue, MFError, MFMailboxUid, NSMutableSet;

@interface MFActivityMonitor : MFPriorityDesignator {

	NSThread* _runningThread;
	NSString* _taskName;
	NSString* _displayName;
	NSString* _statusMessage;
	NSString* _descriptionString;
	MFInvocationQueue* _ourQueue;
	double _percentDone;
	unsigned _key : 13;
	unsigned _canCancel : 1;
	unsigned _shouldCancel : 1;
	unsigned _isActive : 1;
	unsigned _changeCount : 8;
	id _delegate;
	id _target;
	MFError* _error;
	unsigned _expectedLength;
	unsigned _maxCount;
	unsigned _currentCount;
	double _currentItemPercentDone;
	unsigned _supportsPerItemProgress : 1;
	MFMailboxUid* _mailbox;
	double _lastTime;
	double _startTime;
	unsigned _gotNewMessagesState;
	unsigned _bytesRead;
	unsigned _bytesWritten;
	NSMutableSet* _reasons;
	NSMutableSet* _associatedProgresses;

}

@property (retain) MFMailboxUid * mailbox;                     //@synthesize mailbox=_mailbox - In the implementation block
@property (assign,nonatomic) char canBeCancelled; 
@property (assign,nonatomic) char shouldCancel; 
+(id)currentMonitor;
+(void)destroyMonitor;
-(void)setMaxCount:(unsigned)arg1 ;
-(MFMailboxUid *)mailbox;
-(void)setPercentDone:(double)arg1 ;
-(char)shouldCancel;
-(void)setExpectedLength:(unsigned)arg1 ;
-(id)error;
-(void)_didChange;
-(void)cancel;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(char)isActive;
-(void)reset;
-(int)changeCount;
-(id)displayName;
-(double)startTime;
-(void)setMailbox:(MFMailboxUid *)arg1 ;
-(void)addReason:(id)arg1 ;
-(char)canBeCancelled;
-(void)setCanBeCancelled:(char)arg1 ;
-(void)resetConnectionStats;
-(unsigned)bytesWritten;
-(id)reasons;
-(void)associateProgress:(id)arg1 ;
-(void)dissociateProgress:(id)arg1 ;
-(unsigned)expectedLength;
-(void)setGotNewMessagesState:(unsigned)arg1 ;
-(void)recordBytesWritten:(unsigned)arg1 ;
-(void)recordBytesRead:(unsigned)arg1 ;
-(void)setShouldCancel:(char)arg1 ;
-(void)postActivityStarting;
-(void)postActivityFinished:(id)arg1 ;
-(id)userInfoForNotification;
-(void)postDidChangeWithUserInfo:(id)arg1 ;
-(id)_ntsThrottledUserInfoDict;
-(void)setSupportsPerItemProgress:(char)arg1 ;
-(double)percentDone;
-(void)setStatusMessage:(id)arg1 percentDone:(double)arg2 ;
-(void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3 ;
-(void)setPercentDone:(double)arg1 withKey:(int)arg2 ;
-(void)setDisplayName:(id)arg1 maxCount:(unsigned)arg2 ;
-(void)addActivityTarget:(id)arg1 ;
-(char)_lockedAddActivityTarget:(id)arg1 ;
-(void)removeActivityTarget:(id)arg1 ;
-(id)primaryTarget;
-(void)setPrimaryTarget:(id)arg1 ;
-(void)_cancelAssociatedProgresses;
-(void)cancelMessage;
-(void)setStatusMessage:(id)arg1 withKey:(int)arg2 ;
-(void)startActivity;
-(void)finishedActivity:(id)arg1 ;
-(void)notifyConnectionEstablished;
-(void)setCurrentCount:(unsigned)arg1 ;
-(void)setPercentDoneOfCurrentItem:(double)arg1 ;
-(unsigned)gotNewMessagesState;
-(char)hasReason:(id)arg1 ;
-(void)setStatusMessage:(id)arg1 ;
-(id)statusMessage;
-(id)taskName;
-(void)setTaskName:(id)arg1 ;
-(void)setActivityTarget:(id)arg1 ;
-(id)activityTarget;
-(void)addActivityTargets:(id)arg1 ;
-(id)activityTargets;
-(void)setInvocationQueue:(id)arg1 ;
-(int)acquireExclusiveAccessKey;
-(void)relinquishExclusiveAccessKey:(int)arg1 ;
-(void)setError:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(unsigned)bytesRead;
@end


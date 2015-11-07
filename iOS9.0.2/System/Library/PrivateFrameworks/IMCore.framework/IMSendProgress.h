/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMSendProgressDelegate;
@class NSTimer, NSDictionary;

@interface IMSendProgress : NSObject {

	id<IMSendProgressDelegate> _delegate;
	id _context;
	NSTimer* _sendProgressTimer;
	NSDictionary* _sendingItems;
	float _cachedSendProgress;

}

@property (assign,nonatomic) id<IMSendProgressDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSDictionary * sendingItems;                        //@synthesize sendingItems=_sendingItems - In the implementation block
-(void)setDelegate:(id<IMSendProgressDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<IMSendProgressDelegate>)delegate;
-(void)invalidate;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)updateForItems:(id)arg1 forced:(char)arg2 ;
-(id)initWithDelegate:(id)arg1 context:(id)arg2 ;
-(void)setSendingItems:(NSDictionary *)arg1 ;
-(void)_scheduleSendProgressTimerIfNeeded;
-(char)_hasSendingMessages;
-(void)_updateSendProgress;
-(void)_resetSendProgress;
-(void)_sendProgressTimerFired:(id)arg1 ;
-(NSDictionary *)sendingItems;
@end


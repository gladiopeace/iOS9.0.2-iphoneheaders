/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMReachabilityDelegate, OS_dispatch_queue;
#import <IMFoundation/IMFoundation-Structs.h>
@class NSString, NSObject;

@interface IMReachability : NSObject {

	char _gettingFlags;
	id<IMReachabilityDelegate> _delegate;
	unsigned _flags;
	NSString* _description;
	void* _reachabilityRef;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) unsigned flags;                                   //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) id<IMReachabilityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char connectionRequired; 
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> _queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) void* reachabilityRef;                            //@synthesize reachabilityRef=_reachabilityRef - In the implementation block
@property (nonatomic,retain) NSString * reachabilityDescription;               //@synthesize description=_description - In the implementation block
@property (assign,nonatomic) char gettingFlags;                                //@synthesize gettingFlags=_gettingFlags - In the implementation block
+(id)reachabilityWithRemoteAddress:(id)arg1 ;
+(id)reachabilityWithLocalAddress:(id)arg1 remoteAddress:(id)arg2 ;
+(id)reachabilityWithHostName:(id)arg1 ;
-(void)setDelegate:(id<IMReachabilityDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<IMReachabilityDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)_queue;
-(void)set_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithRemoteHost:(id)arg1 delegate:(id)arg2 ;
-(id)initWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 delegate:(id)arg3 ;
-(void)_handleCallbackForSCNetworkReachability:(SCNetworkReachabilityRef)arg1 ;
-(id)_initWithReachabilityRef:(SCNetworkReachabilityRef)arg1 description:(id)arg2 delegate:(id)arg3 ;
-(void)_forceGetFlagsIfNecessary;
-(char)connectionRequired;
-(char)gettingFlags;
-(void)setGettingFlags:(char)arg1 ;
-(NSString *)reachabilityDescription;
-(void)setReachabilityDescription:(NSString *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
-(void*)reachabilityRef;
-(void)setReachabilityRef:(void*)arg1 ;
@end


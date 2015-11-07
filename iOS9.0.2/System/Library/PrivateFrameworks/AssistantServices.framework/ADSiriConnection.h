/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/ADSiriBackgroundConnectionDelegate.h>
#import <assistantd/ADSiriConnection.h>
@class NSURL, NSError, NSString;


@protocol ADSiriConnection <NSObject>
@property (assign,nonatomic,__weak) id<ADSiriConnectionDelegate> delegate; 
@property (nonatomic,copy) NSURL * url; 
@property (assign,nonatomic) char prefersWWAN; 
@property (assign,nonatomic) char skipPeer; 
@property (nonatomic,copy) NSError * skipPeerError; 
@property (nonatomic,copy) NSString * aceHost; 
@property (nonatomic,copy) NSString * languageCode; 
@property (assign,nonatomic) double timeout; 
@required
-(void)getConnectionMetrics:(/*^block*/id)arg1;
-(void)cancelSynchronously:(char)arg1 completion:(/*^block*/id)arg2;
-(void)setSendPings:(char)arg1;
-(void)sendCommand:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(char)prefersWWAN;
-(void)getAnalysisInfo:(/*^block*/id)arg1;
-(void)setPrefersWWAN:(char)arg1;
-(void)setSkipPeer:(char)arg1;
-(void)setSkipPeerError:(id)arg1;
-(char)skipPeer;
-(NSError *)skipPeerError;
-(double)timeout;
-(void)setDelegate:(id)arg1;
-(id<ADSiriConnectionDelegate>)delegate;
-(NSURL *)url;
-(void)start;
-(void)setUrl:(id)arg1;
-(NSString *)languageCode;
-(void)setAceHost:(id)arg1;
-(NSString *)aceHost;
-(void)setTimeout:(double)arg1;
-(void)setLanguageCode:(id)arg1;

@end


@protocol OS_dispatch_queue, ADSiriConnectionDelegate;
@class NSURL, NSError, NSString, NSObject, NSMutableSet, ADSiriBackgroundConnection, SAConnectionPolicy;

@interface ADSiriConnection : NSObject <ADSiriBackgroundConnectionDelegate, ADSiriConnection> {

	NSObject*<OS_dispatch_queue> _queue;
	char _isCanceled;
	id<ADSiriConnectionDelegate> _delegate;
	NSURL* _url;
	char _prefersWWAN;
	NSString* _aceHost;
	NSString* _languageCode;
	double _timeout;
	char _sendPings;
	char _isCanceledInternal;
	NSMutableSet* _pendingBackgroundConnections;
	NSMutableSet* _deadBackgroundConnections;
	NSMutableSet* _scheduledRoutes;
	ADSiriBackgroundConnection* _activeBackgroundConnection;
	char _skipPeer;
	NSError* _skipPeerError;
	SAConnectionPolicy* _connectionPolicy;

}

@property (nonatomic,copy) SAConnectionPolicy * connectionPolicy;                       //@synthesize connectionPolicy=_connectionPolicy - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ADSiriConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * url;                                                 //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) char prefersWWAN;                                          //@synthesize prefersWWAN=_prefersWWAN - In the implementation block
@property (assign,nonatomic) char skipPeer;                                             //@synthesize skipPeer=_skipPeer - In the implementation block
@property (nonatomic,copy) NSError * skipPeerError;                                     //@synthesize skipPeerError=_skipPeerError - In the implementation block
@property (nonatomic,copy) NSString * aceHost;                                          //@synthesize aceHost=_aceHost - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                                     //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) double timeout;                                            //@synthesize timeout=_timeout - In the implementation block
+(id)_rootQueue;
-(void)getConnectionMetrics:(/*^block*/id)arg1 ;
-(void)cancelSynchronously:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSendPings:(char)arg1 ;
-(void)sendCommand:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(char)prefersWWAN;
-(void)getAnalysisInfo:(/*^block*/id)arg1 ;
-(void)setPrefersWWAN:(char)arg1 ;
-(void)setSkipPeer:(char)arg1 ;
-(void)setSkipPeerError:(NSError *)arg1 ;
-(id)analysisInfo;
-(id)_connectionInfoForRoute:(id)arg1 ;
-(void)_startBackgroundConnectionWithRoute:(id)arg1 ;
-(void)_scheduleBackgroundConnectionWithRoute:(id)arg1 delay:(double)arg2 ;
-(void)_accessPotentiallyActiveConnections:(/*^block*/id)arg1 ;
-(id)_activeOrAnyPendingConnection;
-(void)_handleLastEventFromBackgroundConnection:(id)arg1 pendingConnectionExhaustionHandler:(/*^block*/id)arg2 ;
-(void)siriBackgroundConnection:(id)arg1 willStartWithConnectionType:(id)arg2 ;
-(void)siriBackgroundConnection:(id)arg1 didOpenWithConnectionType:(id)arg2 routeId:(id)arg3 delay:(double)arg4 ;
-(void)siriBackgroundConnection:(id)arg1 didReceiveAceObject:(id)arg2 ;
-(void)siriBackgroundConnectionDidClose:(id)arg1 ;
-(void)siriBackgroundConnection:(id)arg1 didEncounterError:(id)arg2 analysisInfo:(id)arg3 ;
-(char)skipPeer;
-(NSError *)skipPeerError;
-(double)timeout;
-(void)setDelegate:(id<ADSiriConnectionDelegate>)arg1 ;
-(id)init;
-(id<ADSiriConnectionDelegate>)delegate;
-(NSURL *)url;
-(void)start;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)languageCode;
-(void)setAceHost:(NSString *)arg1 ;
-(NSString *)aceHost;
-(void)setTimeout:(double)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(SAConnectionPolicy *)connectionPolicy;
-(void)setConnectionPolicy:(SAConnectionPolicy *)arg1 ;
@end


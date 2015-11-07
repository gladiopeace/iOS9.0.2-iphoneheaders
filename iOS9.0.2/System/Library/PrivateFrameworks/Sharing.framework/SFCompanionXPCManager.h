/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSMutableArray;

@interface SFCompanionXPCManager : NSObject {

	char _invalid;
	char _interrupted;
	NSXPCConnection* _connection;
	NSMutableArray* _observers;

}

@property (getter=isInvalid) char invalid;                    //@synthesize invalid=_invalid - In the implementation block
@property (assign) char interrupted;                          //@synthesize interrupted=_interrupted - In the implementation block
@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSMutableArray * observers;                //@synthesize observers=_observers - In the implementation block
+(id)sharedManager;
+(void)initialize;
+(id)xpcManagerInterface;
+(id)serviceManagerClientInterface;
+(id)serviceManagerInterface;
+(id)advertiserClientInterface;
+(id)advertiserInterface;
+(id)scannerClientInterface;
+(id)scannerInterface;
+(id)unlockInterface;
+(id)hotspotClientInterface;
+(id)hotspotInterface;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(void)setInvalid:(char)arg1 ;
-(char)interrupted;
-(void)setInterrupted:(char)arg1 ;
-(void)airdropTransferDataProviderWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)unlockManagerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)remoteHotspotSessionForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)activityAdvertiserProxyForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)continuityScannerProxyForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setupConnection;
-(void)notifyOfInterruption;
-(void)notifyOfInvalidation;
-(void)notifyOfResume;
-(void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)streamsForMessage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)isInvalid;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CLIndoorXPCProvider.h>
#import <libobjc.A.dylib/CLIndoorXPCProviderImplementation.h>

@class NSString;

@interface CLIndoorMaintenance : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)retrieveLocationRelevancyDurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)numFloors:(/*^block*/id)arg1 ;
-(void)doSynchronousXPC:(/*^block*/id)arg1 description:(const char*)arg2 waitForever:(BOOL)arg3 ;
-(void)prefetch:(id)arg1 ;
-(void)onQueuePrefetch:(id)arg1 callback:(/*^block*/id)arg2 when:(unsigned char)arg3 ;
-(void)prefetchSynchronous:(id)arg1 ;
-(void)eraseEverything;
-(void)onQueueEraseEverything:(/*^block*/id)arg1 ;
-(void)onQueueShutdown;
-(void)onQueueNumFloors:(/*^block*/id)arg1 ;
-(void)withinQueueInvalidateState;
-(id)remoteObjectProtocol;
-(id)endpointName;
-(void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1 ;
-(id)withinQueuePermanentShutdownReason;
-(char)withinQueueCanReinitializeRemoteState;
-(void)withinQueueReinitializeRemoteState;
-(void)shutdown;
@end


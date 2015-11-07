/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitExtensions.framework/HealthKitExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKExtendedClientInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, _HKExtendedHealthStoreProxy, NSString;

@interface HKExtendedHealthStore : NSObject <HKExtendedClientInterface> {

	/*^block*/id _achievementsAddedHandler;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSXPCConnection* _connection;
	_HKExtendedHealthStoreProxy* _connectionProxy;

}

@property (nonatomic,copy) id achievementsAddedHandler; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                 //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) _HKExtendedHealthStoreProxy * connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)serverInterface;
-(void)setAchievementsAddedHandler:(id)arg1 ;
-(void)runAchievementsFixupAsDryRun:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)achievementsWereAdded;
-(void)fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchUnalertedAchievementsWithCompletion:(/*^block*/id)arg1 ;
-(void)markAchievementsAlerted:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchNumberOfUnviewedAchievementsWithCompletion:(/*^block*/id)arg1 ;
-(void)markAchievementAsViewed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addAchievement:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)achievementsAddedHandler;
-(void)daemonDidStart;
-(void)fetchAchievementsWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setConnectionProxy:(_HKExtendedHealthStoreProxy *)arg1 ;
-(_HKExtendedHealthStoreProxy *)connectionProxy;
-(id)clientInterface;
@end


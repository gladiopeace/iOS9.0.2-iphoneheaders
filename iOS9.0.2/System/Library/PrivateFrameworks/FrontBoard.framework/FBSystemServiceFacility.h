/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSystemServiceServer.h>

@class NSString, FBServiceClientAuthenticator, NSMutableSet, FBSSerialQueue, NSSet;

@interface FBSystemServiceFacility : NSObject <FBSystemServiceServer> {

	NSString* _identifier;
	FBServiceClientAuthenticator* _authenticator;
	NSMutableSet* _clients;
	FBSSerialQueue* _queue;
	char _invalidated;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) FBSSerialQueue * queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain,readonly) FBServiceClientAuthenticator * authenticator;              //@synthesize authenticator=_authenticator - In the implementation block
@property (nonatomic,retain,readonly) NSSet * clients;                                           //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain,readonly) NSSet * prerequisiteMilestones; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBServiceClientAuthenticator *)authenticator;
-(FBSSerialQueue *)queue;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 clientAuthenticator:(id)arg3 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 toClients:(id)arg3 ;
-(NSSet *)prerequisiteMilestones;
-(void)_clientDidDisconnect:(id)arg1 ;
-(void)_handleMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(void)_clientDidConnect:(id)arg1 withMessage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(Class)classForClient:(id)arg1 ;
-(char)_queue_clientIsAuthenticated:(id)arg1 ;
-(id)_facilityClientForClient:(id)arg1 ;
-(NSSet *)clients;
@end


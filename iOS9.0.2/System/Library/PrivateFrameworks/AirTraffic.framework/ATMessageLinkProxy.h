/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/ATMessageLink.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>

@class NSXPCConnection, NSXPCListenerEndpoint, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;

@interface ATMessageLinkProxy : ATMessageLink <NSSecureCoding, ATMessageLinkObserver, ATMessageLinkRequestHandler> {

	NSXPCConnection* _connection;
	NSXPCListenerEndpoint* _endpoint;
	NSHashTable* _observers;
	NSMutableDictionary* _requestHandlers;
	NSMutableSet* _streams;
	char _open;
	char _initialized;
	NSString* _identifier;
	int _endpointType;

}

@property (assign,getter=isInitialized,nonatomic) char initialized;              //@synthesize initialized=_initialized - In the implementation block
@property (assign,getter=isOpen,nonatomic) char open;                            //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) int endpointType;                                   //@synthesize endpointType=_endpointType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)initWithEndpoint:(id)arg1 ;
-(int)endpointType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeRequestHandlerForDataClass:(id)arg1 ;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setInitialized:(char)arg1 ;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 ;
-(void)setEndpointType:(int)arg1 ;
-(char)isInitialized;
-(char)isOpen;
-(void)setOpen:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/RMSServiceProviderDelegate.h>
#import <libobjc.A.dylib/RMSDiscoverySession.h>

@protocol RMSDiscoverySessionDelegate;
@class Reachability, NSMutableSet, NSArray, NSString;

@interface RMSDiscoverySession : NSObject <RMSServiceProviderDelegate, RMSDiscoverySession> {

	int _discoveryTypes;
	Reachability* _reachability;
	NSMutableSet* _availableServices;
	NSArray* _providers;
	char _networkAvailable;
	id<RMSDiscoverySessionDelegate> _delegate;
	NSArray* _pairedNetworkNames;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<RMSDiscoverySessionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int discoveryTypes;                                             //@synthesize discoveryTypes=_discoveryTypes - In the implementation block
@property (nonatomic,readonly) NSArray * availableServices; 
@property (getter=isNetworkAvailable,nonatomic,readonly) char networkAvailable;              //@synthesize networkAvailable=_networkAvailable - In the implementation block
@property (nonatomic,retain) NSArray * pairedNetworkNames;                                   //@synthesize pairedNetworkNames=_pairedNetworkNames - In the implementation block
+(id)localDiscoverySession;
+(id)proxyDiscoverySession;
-(void)setDelegate:(id<RMSDiscoverySessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<RMSDiscoverySessionDelegate>)delegate;
-(void)beginDiscovery;
-(void)endDiscovery;
-(int)discoveryTypes;
-(void)setDiscoveryTypes:(int)arg1 ;
-(NSArray *)availableServices;
-(char)isNetworkAvailable;
-(NSArray *)pairedNetworkNames;
-(void)setPairedNetworkNames:(NSArray *)arg1 ;
-(void)serviceProvider:(id)arg1 serviceDidBecomeAvailable:(id)arg2 ;
-(void)serviceProvider:(id)arg1 serviceDidBecomeUnavailable:(id)arg2 ;
-(void)_handleHSGroupIDDidChangeNotification:(id)arg1 ;
-(void)_handleReachabilityChangedNotification:(id)arg1 ;
-(void)_enableProviders;
-(void)_updateWifiAvailability;
-(id)_providerForDiscoveryType:(int)arg1 ;
@end


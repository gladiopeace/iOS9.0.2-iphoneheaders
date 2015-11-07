/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADSession_RPC.h>
#import <libobjc.A.dylib/ADAdSheetProxyDelegate.h>
#import <libobjc.A.dylib/ADAdSheetConnectionDelegate.h>

@class NSMutableArray, ADAdSheetConnection, NSString;

@interface ADSession : NSObject <ADSession_RPC, ADAdSheetProxyDelegate, ADAdSheetConnectionDelegate> {

	char _applicationCanReceiveBackgroundAds;
	NSMutableArray* _adSpaces;
	int _classicUnavailableToken;
	ADAdSheetConnection* _connection;

}

@property (assign,nonatomic) char applicationCanReceiveBackgroundAds;              //@synthesize applicationCanReceiveBackgroundAds=_applicationCanReceiveBackgroundAds - In the implementation block
@property (nonatomic,readonly) id<ADSSession_RPC> rpcProxy; 
@property (nonatomic,retain) NSMutableArray * adSpaces;                            //@synthesize adSpaces=_adSpaces - In the implementation block
@property (assign,nonatomic) int classicUnavailableToken;                          //@synthesize classicUnavailableToken=_classicUnavailableToken - In the implementation block
@property (nonatomic,retain) ADAdSheetConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(ADAdSheetConnection *)connection;
-(void)setConnection:(ADAdSheetConnection *)arg1 ;
-(void)_appDidBecomeActive;
-(id<ADSSession_RPC>)rpcProxy;
-(char)applicationCanReceiveBackgroundAds;
-(char)shouldLaunchAdSheet;
-(void)performWhenConnected:(/*^block*/id)arg1 ;
-(id)rpcProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_remote_heartbeatTokenDidChange:(id)arg1 expirationDate:(double)arg2 error:(id)arg3 ;
-(void)_remote_policyEngineDidIdleDisable;
-(id)_linkedOnVersion;
-(NSMutableArray *)adSpaces;
-(void)addClientToSegments:(id)arg1 replaceExisting:(char)arg2 privateSegment:(char)arg3 ;
-(void)requestAdsForContext:(id)arg1 serverURL:(id)arg2 creativeTypes:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)additionalAdSheetLaunchOptions;
-(id)adSheetMachServiceName;
-(void)configureConnection:(id)arg1 ;
-(char)shouldConnectToAdSheet;
-(void)adSheetConnectionEstablished;
-(void)adSheetConnectionLost;
-(void)registerAdSpace:(id)arg1 ;
-(void)unregisterAdSpace:(id)arg1 ;
-(void)determineAppInstallAttributionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)lookupAdConversionDetails:(/*^block*/id)arg1 ;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)addClientToSegments:(id)arg1 replaceExisting:(char)arg2 ;
-(void)reportPrerollRequest;
-(void)requestAdsForContext:(id)arg1 creativeTypes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setApplicationCanReceiveBackgroundAds:(char)arg1 ;
-(void)setAdSpaces:(NSMutableArray *)arg1 ;
-(int)classicUnavailableToken;
-(void)setClassicUnavailableToken:(int)arg1 ;
@end


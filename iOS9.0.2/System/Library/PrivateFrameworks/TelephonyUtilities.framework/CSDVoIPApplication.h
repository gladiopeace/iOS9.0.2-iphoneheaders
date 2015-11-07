/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData, CSDClient, NSMutableArray;

@interface CSDVoIPApplication : NSObject {

	NSString* _bundleIdentifier;
	NSData* _token;
	NSString* _environment;
	CSDClient* _client;
	NSMutableArray* _pendingPayloads;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSData * token;                                  //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * environment;                          //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) CSDClient * client;                            //@synthesize client=_client - In the implementation block
@property (getter=isRunning,nonatomic,readonly) char running; 
@property (nonatomic,readonly) char hasVoIPEntitlement; 
@property (nonatomic,retain) NSMutableArray * pendingPayloads;              //@synthesize pendingPayloads=_pendingPayloads - In the implementation block
-(void)setPendingPayloads:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pendingPayloads;
-(void)_deliverTokenToApplication;
-(void)_deliverPendingPayloadsToApplication;
-(char)hasVoIPEntitlement;
-(void)deliverToken:(id)arg1 ;
-(void)deliverPayload:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSString *)environment;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(char)isRunning;
-(void)setEnvironment:(NSString *)arg1 ;
-(NSData *)token;
-(void)setToken:(NSData *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(CSDClient *)client;
-(void)setClient:(CSDClient *)arg1 ;
@end


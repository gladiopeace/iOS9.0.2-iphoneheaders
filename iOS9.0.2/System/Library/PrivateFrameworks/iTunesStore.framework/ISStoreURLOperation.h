/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISURLOperation.h>

@class NSNumber, SSVFairPlaySAPSession, SSURLBagContext;

@interface ISStoreURLOperation : ISURLOperation {

	int _activeMachineDataStyle;
	NSNumber* _authenticatedDSID;
	char _canSendGUIDParameter;
	char _ignorePreexistingSecureToken;
	char _isURLBagRequest;
	int _machineDataStyle;
	char _needsAuthentication;
	char _needsURLBag;
	SSVFairPlaySAPSession* _sapSession;
	char _shouldSendXTokenHeader;
	char _urlKnownToBeTrusted;
	char _useUserSpecificURLBag;

}

@property (assign) id<ISStoreURLOperationDelegate> delegate; 
@property (assign) char canSendGUIDParameter; 
@property (assign) int machineDataStyle;                                             //@synthesize machineDataStyle=_machineDataStyle - In the implementation block
@property (assign) char needsURLBag;                                                 //@synthesize needsURLBag=_needsURLBag - In the implementation block
@property (assign) char needsAuthentication;                                         //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (assign) char performsMachineDataActions; 
@property (retain) SSVFairPlaySAPSession * SAPSession; 
@property (assign) char shouldSendXTokenHeader; 
@property (assign) char useUserSpecificURLBag;                                       //@synthesize useUserSpecificURLBag=_useUserSpecificURLBag - In the implementation block
@property (assign) char urlKnownToBeTrusted;                                         //@synthesize urlKnownToBeTrusted=_urlKnownToBeTrusted - In the implementation block
@property (readonly) SSURLBagContext * URLBagContext; 
@property (assign,nonatomic) char ignorePreexistingSecureToken; 
@property (assign,getter=isURLBagRequest,nonatomic) char URLBagRequest;              //@synthesize isURLBagRequest=_isURLBagRequest - In the implementation block
@property (retain) NSNumber * authenticatedDSID;                                     //@synthesize authenticatedDSID=_authenticatedDSID - In the implementation block
+(void)_addITunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 accountIdentifier:(id)arg3 ;
+(void)_addITunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 account:(id)arg3 ;
+(id)_restrictionsHeaderValue;
+(id)_authKitSession;
+(id)propertyListOperationWithURLBagKey:(id)arg1 ;
+(id)pingOperationWithUrl:(id)arg1 ;
+(void)addITunesStoreHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2 ;
+(void)handleITunesStoreResponseHeaders:(id)arg1 request:(id)arg2 withAccountIdentifier:(id)arg3 shouldRetry:(char*)arg4 ;
+(id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)handleResponse:(id)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
-(void)setNeedsURLBag:(char)arg1 ;
-(void)setNeedsAuthentication:(char)arg1 ;
-(SSURLBagContext *)URLBagContext;
-(void)setMachineDataStyle:(int)arg1 ;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(int)machineDataStyle;
-(void)_setStoreFrontIdentifier:(id)arg1 isTransient:(char)arg2 ;
-(id)_copyAuthenticationContext;
-(char)_processResponseData:(id)arg1 error:(id*)arg2 ;
-(char)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2 ;
-(void)_willSendRequest:(id)arg1 ;
-(char)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2 ;
-(void)setURLBagRequest:(char)arg1 ;
-(char)useUserSpecificURLBag;
-(id)_account;
-(char)_canSendTokenToURL:(id)arg1 ;
-(id)_urlBagForContext:(id)arg1 ;
-(char)canSendGUIDParameter;
-(char)shouldSendXTokenHeader;
-(id)_loadURLBagInterpreterWithRequest:(id)arg1 requestProperties:(id)arg2 ;
-(char)ignorePreexistingSecureToken;
-(id)_copyAuthenticationContextForAttemptNumber:(int)arg1 ;
-(char)_authenticateWithContext:(id)arg1 error:(id*)arg2 ;
-(void)_runURLOperation;
-(char)_performMachineDataRequest:(id)arg1 ;
-(char)_isErrorTokenError:(id)arg1 ;
-(void)setIgnorePreexistingSecureToken:(char)arg1 ;
-(char)urlKnownToBeTrusted;
-(char)needsURLBag;
-(id)_resolvedURLInBagContext:(id)arg1 URLBag:(id*)arg2 ;
-(void)_addStandardQueryParametersForURL:(id)arg1 ;
-(char)isURLBagRequest;
-(char)performsMachineDataActions;
-(void)setCanSendGUIDParameter:(char)arg1 ;
-(void)setPerformsMachineDataActions:(char)arg1 ;
-(void)setShouldSendXTokenHeader:(char)arg1 ;
-(void)setUseUserSpecificURLBag:(char)arg1 ;
-(id)authenticatedAccountDSID;
-(char)needsAuthentication;
-(void)setUrlKnownToBeTrusted:(char)arg1 ;
-(id)newRequestWithURL:(id)arg1 ;
-(NSNumber *)authenticatedDSID;
-(void)setAuthenticatedDSID:(NSNumber *)arg1 ;
@end


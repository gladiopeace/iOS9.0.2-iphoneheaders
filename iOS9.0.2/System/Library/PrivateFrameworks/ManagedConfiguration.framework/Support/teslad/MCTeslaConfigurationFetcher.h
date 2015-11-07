/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/teslad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <teslad/teslad-Structs.h>
#import <libobjc.A.dylib/MCTeslaConfigurationFetchInterface.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSXPCConnection, NSTimer, NSURLConnection, NSError, NSMutableData, NSData, NSString, NSURL;

@interface MCTeslaConfigurationFetcher : NSObject <MCTeslaConfigurationFetchInterface, NSURLConnectionDataDelegate, NSURLConnectionDelegate> {

	NSXPCConnection* _remoteProcessConnection;
	/*^block*/id _completionBlock;
	int _state;
	int _certFetchCount;
	int _sessionKeyFetchCount;
	int _configFetchCount;
	NACContextOpaque_Ref _context;
	NSTimer* _timeoutTimer;
	NSURLConnection* _urlConnection;
	int _httpResponseCode;
	int _expectedLength;
	NSError* _fatalError;
	NSMutableData* _certificate;
	NSData* _sessionRequestInfo;
	NSMutableData* _sessionInfo;
	NSMutableData* _configurationData;
	NSError* _error;
	double _retryAfterInterval;

}

@property (nonatomic,retain) NSXPCConnection * remoteProcessConnection;              //@synthesize remoteProcessConnection=_remoteProcessConnection - In the implementation block
@property (nonatomic,copy) id completionBlock;                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) NSString * userAgentString; 
@property (readonly) NSURL * certificateURL; 
@property (readonly) NSURL * sessionURL; 
@property (readonly) NSURL * profileURL; 
@property (assign,nonatomic) int state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int certFetchCount;                                     //@synthesize certFetchCount=_certFetchCount - In the implementation block
@property (assign,nonatomic) int sessionKeyFetchCount;                               //@synthesize sessionKeyFetchCount=_sessionKeyFetchCount - In the implementation block
@property (assign,nonatomic) int configFetchCount;                                   //@synthesize configFetchCount=_configFetchCount - In the implementation block
@property (assign,nonatomic) NACContextOpaque_Ref context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutTimer;                                 //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (nonatomic,retain) NSURLConnection * urlConnection;                        //@synthesize urlConnection=_urlConnection - In the implementation block
@property (assign,nonatomic) int httpResponseCode;                                   //@synthesize httpResponseCode=_httpResponseCode - In the implementation block
@property (assign,nonatomic) int expectedLength;                                     //@synthesize expectedLength=_expectedLength - In the implementation block
@property (assign,nonatomic) double retryAfterInterval;                              //@synthesize retryAfterInterval=_retryAfterInterval - In the implementation block
@property (nonatomic,retain) NSError * fatalError;                                   //@synthesize fatalError=_fatalError - In the implementation block
@property (nonatomic,retain) NSMutableData * certificate;                            //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,retain) NSData * sessionRequestInfo;                            //@synthesize sessionRequestInfo=_sessionRequestInfo - In the implementation block
@property (nonatomic,retain) NSMutableData * sessionInfo;                            //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,retain) NSMutableData * configurationData;                      //@synthesize configurationData=_configurationData - In the implementation block
@property (nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudValidationRules;
-(id)internalError;
-(void)setRemoteProcessConnection:(NSXPCConnection *)arg1 ;
-(void)setConfigurationData:(NSMutableData *)arg1 ;
-(id)daemonBusyError;
-(void)setFatalError:(NSError *)arg1 ;
-(void)setHttpResponseCode:(int)arg1 ;
-(double)retryIntervalForState:(int)arg1 ;
-(void)setRetryAfterInterval:(double)arg1 ;
-(int)certFetchCount;
-(void)setCertFetchCount:(int)arg1 ;
-(id)maxRetriesExceededError;
-(int)sessionKeyFetchCount;
-(void)setSessionKeyFetchCount:(int)arg1 ;
-(int)configFetchCount;
-(void)setConfigFetchCount:(int)arg1 ;
-(void)startCertificateFetch;
-(void)initializeAbsinthe;
-(void)startSessionKeyFetch;
-(void)establishAbsintheSession;
-(void)startConfigurationFetch;
-(void)sendConfigurationInfoToRemote;
-(double)retryAfterInterval;
-(void)startRetryTimerWithInterval:(double)arg1 ;
-(void)sendFailureNoticeToRemote;
-(void)setSessionRequestInfo:(NSData *)arg1 ;
-(id)absintheErrorWithOSStatus:(long)arg1 ;
-(void)retrySessionKeyFetchIfAllowedAfterDelay:(char)arg1 orFailWithError:(id)arg2 ;
-(void)startURLRequest;
-(NSURL *)sessionURL;
-(NSData *)sessionRequestInfo;
-(id)profileRequestDictionary;
-(NSURL *)profileURL;
-(id)badFormatError;
-(char)convertCloudConfigDictionary:(id)arg1 toManagedConfiguration:(id*)arg2 ;
-(int)httpResponseCode;
-(id)serverTrustError;
-(id)teslaServiceDownError;
-(id)invalidDeviceError;
-(id)teslaServiceBusyError;
-(void)retryConfigurationFetchIfAllowedAfterDelay:(char)arg1 orFailWithError:(id)arg2 ;
-(NSError *)fatalError;
-(void)retryCertificateFetchIfAllowedAfterDelay:(char)arg1 orFailWithError:(id)arg2 ;
-(void)timeoutTimerDidFire:(id)arg1 ;
-(NSXPCConnection *)remoteProcessConnection;
-(void)enterState:(int)arg1 ;
-(void)setExpectedLength:(int)arg1 ;
-(NSMutableData *)sessionInfo;
-(void)setSessionInfo:(NSMutableData *)arg1 ;
-(NSError *)error;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NACContextOpaque_Ref)context;
-(void)setContext:(NACContextOpaque_Ref)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setCertificate:(NSMutableData *)arg1 ;
-(NSMutableData *)certificate;
-(id)descriptionForState:(int)arg1 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)timeoutTimer;
-(NSString *)userAgentString;
-(NSURLConnection *)urlConnection;
-(void)setUrlConnection:(NSURLConnection *)arg1 ;
-(void)fetchConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(int)expectedLength;
-(void)setError:(NSError *)arg1 ;
-(NSMutableData *)configurationData;
-(NSURL *)certificateURL;
@end


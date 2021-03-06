/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DADisplayNetworkDisconnectDelegate;
@class NSURL;

@interface DAConnectionManager : NSObject {

	id<DADisplayNetworkDisconnectDelegate> _networkDisconnectDelegate;

}

@property (nonatomic,readonly) NSURL * serverURL; 
@property (assign,nonatomic,__weak) id<DADisplayNetworkDisconnectDelegate> networkDisconnectDelegate;              //@synthesize networkDisconnectDelegate=_networkDisconnectDelegate - In the implementation block
+(id)sharedInstance;
-(void)downloadLocalizationBundle;
-(id)MD5ForFilePath:(id)arg1 ;
-(id)uuidHashFromString:(id)arg1 ;
-(char)validateServerResponse:(id)arg1 ;
-(void)sendToEndpoint:(id)arg1 JSONObject:(id)arg2 sessionId:(id)arg3 retry:(char)arg4 response:(/*^block*/id)arg5 ;
-(void)sendUnenrollClientStatus:(id)arg1 sessionId:(id)arg2 ;
-(void)sendRequest:(id)arg1 sessionId:(id)arg2 retry:(char)arg3 response:(/*^block*/id)arg4 ;
-(void)addAcceptLanuageHeaderToRequest:(id)arg1 ;
-(id)getLoggingSelection;
-(id<DADisplayNetworkDisconnectDelegate>)networkDisconnectDelegate;
-(char)isSuccessResponse:(id)arg1 ;
-(unsigned)serverSelection;
-(id)customServerEntry;
-(id)getDiagnosticsVersion;
-(char)sessionExistsForSerialNumbers:(id)arg1 ticket:(id)arg2 timeout:(double)arg3 ;
-(id)enrollWithSerialNumber:(id)arg1 ;
-(char)sendProfile:(id)arg1 sessionId:(id)arg2 ;
-(id)sendClientStatus:(id)arg1 sessionId:(id)arg2 ;
-(char)sendTestResults:(id)arg1 sessionId:(id)arg2 ;
-(void)sendFileNamed:(id)arg1 fileSequence:(id)arg2 totalFiles:(id)arg3 testId:(id)arg4 dataId:(id)arg5 sessionId:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)MD5ForData:(id)arg1 ;
-(char)relaxTimeouts;
-(id)getDiagnosticsPlatform;
-(void)setNetworkDisconnectDelegate:(id<DADisplayNetworkDisconnectDelegate>)arg1 ;
-(void)dealloc;
-(void)cancelConnection;
-(void)invalidateConnection;
-(id)userAgent;
-(NSURL *)serverURL;
@end


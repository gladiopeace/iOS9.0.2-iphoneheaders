/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/assistantd-Structs.h>
#import <assistantd/ADStreamProviderDelegate.h>

@protocol ADSiriBackgroundConnectionDelegate, OS_dispatch_queue, ADStreamProvider, OS_dispatch_source;
@class NSObject, ADSiriConnectionInfo, NSMutableData, AFDataDecompressor, AFDataCompressor, NSMutableDictionary, ADPingInfo, NSString;

@interface ADSiriBackgroundConnection : NSObject <ADStreamProviderDelegate> {

	id<ADSiriBackgroundConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	id<ADStreamProvider> _streamProvider;
	CFReadStreamRef _readStream;
	CFWriteStreamRef _writeStream;
	ADSiriConnectionInfo* _connectionInfo;
	NSMutableData* _bufferedInputData;
	NSMutableData* _bufferedProviderHeaderOutputData;
	NSMutableData* _bufferedGeneralOutputData;
	unsigned char _readBuffer[10240];
	AFDataDecompressor* _inputDecompressor;
	AFDataCompressor* _outputCompressor;
	CFHTTPMessageRef _httpResponseHeader;
	char _isOpened;
	char _isCanceled;
	char _hasFoundTrust;
	NSMutableDictionary* _errorsForConnectionMethods;
	NSObject*<OS_dispatch_source> _aceHeaderTimerSource;
	unsigned _aceHeaderTimerFireCount;
	NSObject*<OS_dispatch_source> _pingTimerSource;
	unsigned _currentPingIndex;
	ADPingInfo* _pingInfo;
	int _connectionMethod;
	NSMutableData* _safetyNetBuffer;
	double _firstStartTime;
	double _currentStartTime;
	double _currentOpenTime;
	double _firstByteReadTime;
	unsigned _startCount;
	unsigned _metricsCount;

}

@property (assign,nonatomic,__weak) id<ADSiriBackgroundConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getConnectionMetrics:(/*^block*/id)arg1 ;
-(void)setSendPings:(char)arg1 ;
-(void)sendCommand:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_handleAceObject:(id)arg1 ;
-(void)streamProvider:(id)arg1 receivedError:(id)arg2 ;
-(id)analysisInfo;
-(id)_connectionMetrics;
-(void)startWithConnectionInfo:(id)arg1 ;
-(void)_closeConnection;
-(void)_startWithConnectionInfo:(id)arg1 allowFallbackToNewConnectionMethod:(char)arg2 ;
-(int)_nextConnectionMethod;
-(char)_usingPeer;
-(char)_usingLedBelly;
-(void)_didEncounterError:(id)arg1 ;
-(void)_fallBackToNextConnectionMethodWithError:(id)arg1 orElse:(/*^block*/id)arg2 ;
-(void)_sendProviderHeader;
-(void)_initializeAndSendBufferedGeneralOutputData;
-(void)_scheduleAceHeaderTimeoutTimerWithInterval:(double)arg1 ;
-(void)_writeStreamDidOpen;
-(void)_writeStreamEndEncountered;
-(void)_writeStreamErrorOccurred;
-(id)_headerDataForURL:(id)arg1 aceHost:(id)arg2 languageCode:(id)arg3 ;
-(void)_sendGeneralData:(id)arg1 ;
-(void)_closeConnectionAndPrepareForReconnect:(char)arg1 ;
-(id)_bestErrorBetweenError:(id)arg1 peerError:(id)arg2 ;
-(char)_shouldTrySameConnectionMethodForMethod:(int)arg1 error:(id)arg2 ;
-(char)_canFallBackFromError:(id)arg1 ;
-(void)_fallBackToNextConnectionMethodWithError:(id)arg1 ;
-(char)_tcpInfoIndicatesPoorLinkQuality;
-(char)_wifiIsAvailable;
-(void)_aceHeaderTimeoutFired:(id)arg1 afterTimeout:(double)arg2 ;
-(char)_hasReadACEHeader;
-(char)_wifiMayBeBetterThanCurrentStream;
-(void)_pingTimerFired;
-(void)_resumePingTimer;
-(char)_shouldDeferAcePingTimer;
-(void)_sendAcePingWithId:(unsigned)arg1 ;
-(char)_hasReadHTTPHeader;
-(char)_hasBufferedDataOrOutstandingPings;
-(char)_tryReadingHTTPHeaderData:(id)arg1 withMessage:(CFHTTPMessageRef)arg2 remainingData:(id*)arg3 error:(id*)arg4 ;
-(id)_tryReadingAceHeaderFromData:(id)arg1 bytesParsed:(unsigned*)arg2 error:(id*)arg3 ;
-(id)_tryReadingParsedDataFromData:(id)arg1 bytesParsed:(unsigned*)arg2 error:(id*)arg3 ;
-(void)_handleParsedData:(id)arg1 ;
-(id)_readDataFromReadStream:(CFReadStreamRef)arg1 ;
-(char)_handleHTTPHeaderWithData:(id)arg1 remainingData:(id*)arg2 error:(id*)arg3 ;
-(char)_handleAceHeaderWithData:(id)arg1 remainingData:(id*)arg2 error:(id*)arg3 ;
-(char)_handleAceDataWithData:(id)arg1 remainingData:(id*)arg2 error:(id*)arg3 ;
-(void)_tryToWriteBufferedOutputData;
-(id)_activeBufferedOutputData;
-(void)_sendData:(id)arg1 bufferedOutputData:(id)arg2 ;
-(char)_tryParsingHTTPHeaderData:(id)arg1 partialMessage:(CFHTTPMessageRef)arg2 statusCode:(int*)arg3 remainingBody:(id*)arg4 error:(id*)arg5 ;
-(void)_handleAceNop;
-(void)_handleAcePing:(unsigned)arg1 ;
-(void)_handleAcePong:(unsigned)arg1 ;
-(void)_handleAceEnd;
-(void)_sendAcePongWithId:(unsigned)arg1 ;
-(void)_acknowledgePing:(unsigned)arg1 ;
-(void)_cancelForExtendedValidationFailureWithTrustInfo:(id)arg1 ;
-(void)_validateTrustInfo:(id)arg1 ;
-(char)_usingNetwork;
-(void)_readStreamErrorOccurred;
-(void)_readStreamEndEncountered;
-(void)_readStreamHasBytesAvailable;
-(void)_writeStreamHasSpaceAvailable;
-(void)_validateTrustForStream:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<ADSiriBackgroundConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<ADSiriBackgroundConnectionDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(id)_userAgent;
-(id)_connectionType;
@end


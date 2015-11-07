/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/PTPTransport.h>

@class NSString, PTPTCPIPConnection, NSMutableData;

@interface PTPTCPIPTransport : PTPTransport {

	CFSocketRef _socket;
	NSString* _hostName;
	unsigned short _hostPort;
	NSString* _hostGUID;
	NSString* _targetName;
	NSString* _targetAddress;
	unsigned long _targetPort;
	NSString* _targetGUID;
	id _connectionRequestResponse;
	unsigned long _connectionNumber;
	PTPTCPIPConnection* _tempConnection;
	NSMutableData* _tempData;
	PTPTCPIPConnection* _cdConnection;
	PTPTCPIPConnection* _eventConnection;
	NSMutableData* _cdData;
	NSMutableData* _eventData;
	char _delegateNeedsData;

}
-(id)targetName;
-(void)dealloc;
-(id)description;
-(char)sendResponse:(id)arg1 ;
-(char)sendEvent:(id)arg1 ;
-(void)stop;
-(void)handleData:(id)arg1 from:(id)arg2 ;
-(void)didCloseConnection:(id)arg1 withError:(SCD_Struct_PT2)arg2 ;
-(char)startInitiator;
-(int)waitForCallbackThreadConditionSignalWithTimeoutForConnection:(long)arg1 ;
-(void)releaseConnections;
-(int)waitForCallbackThreadConditionSignalWithTimeout:(long)arg1 ;
-(void)sendDataPackets:(id)arg1 ;
-(id)initWithHostPort:(unsigned long)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5 delegate:(id)arg6 ;
-(id)initForAcceptedSocketWithDelegate:(id)arg1 andHostGUID:(id)arg2 andHostName:(id)arg3 ;
-(id)initWithTargetAddress:(id)arg1 targetPort:(unsigned long)arg2 targetGUID:(id)arg3 targetName:(id)arg4 hostGUID:(id)arg5 hostName:(id)arg6 delegate:(id)arg7 ;
-(id)targetAddress;
-(unsigned long)targetPort;
-(id)targetGUID;
-(char)startResponder;
-(char)waitForConnectionWithTimeout:(double)arg1 ;
-(char)sendStartData:(id)arg1 ;
-(char)sendCancel:(id)arg1 ;
-(id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned long)arg3 ;
-(id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned long)arg3 ;
-(void)cancelTransaction:(id)arg1 ;
-(void)acceptConnectionFromSocket:(int)arg1 ;
-(void)sendData:(id)arg1 ;
-(char)connected;
@end


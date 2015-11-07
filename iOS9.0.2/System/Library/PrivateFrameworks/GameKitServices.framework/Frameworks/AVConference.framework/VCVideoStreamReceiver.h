/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VCVideoStreamReceiverDelegate, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCVideoStreamReceiver : NSObject {

	tagHANDLE* _hRTP;
	OpaqueVTDecompressionSessionRef _decompressionSession;
	char _receivedFirstPacket;
	unsigned short _lastSequenceNumber;
	int _sequenceNumberOutOfOrder;
	unsigned _mostRecentTimestamp;
	unsigned _lastVideoTimestamp;
	unsigned _videoTimestampWrapCount;
	opaqueCMFormatDescriptionRef _formatDescription;
	id<VCVideoStreamReceiverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _videoStreamReceiverQueue;
	OpaqueFigThreadRef _networkReceiveThread;
	char _runNetworkReceiveThread;
	int _sRecvReset;
	VideoPacketBuffer_tRef _videoPacketBuffer;

}

@property (assign,nonatomic) id<VCVideoStreamReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<VCVideoStreamReceiverDelegate>)arg1 ;
-(void)dealloc;
-(id<VCVideoStreamReceiverDelegate>)delegate;
-(void)startVideo;
-(void)stopVideo;
-(long)startNetworkReceiveThread;
-(long)stopNetworkReceiveThread;
-(long)processVideoRTP;
-(long)decodeBuffer:(char*)arg1 size:(unsigned long)arg2 timestamp:(unsigned)arg3 hostTime:(double)arg4 ;
-(void)scheduleVideoDecode:(unsigned*)arg1 schedule_n:(int)arg2 ;
-(void)updateSequenceNumber:(unsigned short)arg1 ;
-(long)decodeFrame:(opaqueCMSampleBufferRef)arg1 showFrame:(char)arg2 ;
-(id)initWithRTP:(tagHANDLE*)arg1 delegate:(id)arg2 ;
-(void)pauseVideo;
-(void*)networkReceivePackets;
-(long)showDecodedFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_VC12)arg2 ;
@end


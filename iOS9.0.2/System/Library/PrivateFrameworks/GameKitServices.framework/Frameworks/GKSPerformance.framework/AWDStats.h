/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/GKSPerformance.framework/GKSPerformance
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GKSPerformance/GKSPerformance-Structs.h>
@class NSDictionary, NSMutableDictionary, NSString, AudioTierHistogram, NSObject;

@interface AWDStats : NSObject {

	NSDictionary* histogramDict;
	NSMutableDictionary* timingDict;
	unsigned txWidth;
	unsigned txHeight;
	unsigned rxWidth;
	unsigned rxHeight;
	unsigned txFrameRateAvg;
	unsigned txFrameRateAvgCount;
	unsigned txFrameRateMax;
	unsigned txFrameRateMin;
	unsigned rxFrameRateAvg;
	unsigned rxFrameRateAvgCount;
	unsigned rxFrameRateMax;
	unsigned rxFrameRateMin;
	NSString* interfaceName;
	NSString* remoteInterfaceName;
	unsigned connectionType;
	unsigned avgLossRate;
	unsigned avgLossRateCount;
	unsigned avgJitterBufferSize;
	unsigned avgJitterBufferSizeCount;
	unsigned avgInterarrivalTime;
	unsigned avgInterarrivalTimeCount;
	unsigned targetJitterBufferSize;
	unsigned targetJitterBufferSizeCount;
	unsigned downlinkEstimateAvg;
	unsigned downlinkEstimateAvgCount;
	unsigned uplinkEstimateAvg;
	unsigned uplinkEstimateAvgCount;
	unsigned avgRate;
	unsigned avgRateCount;
	float localVideoDegradeTime;
	float remoteVideoDegradeTime;
	unsigned audioPauseTime;
	unsigned videoPauseTime;
	unsigned audioFlush;
	unsigned videoFlush;
	unsigned basebandCount;
	double pipDuration;
	double pipRunningSince;
	unsigned targetFramerate;
	double timeSinceLastVRA;
	unsigned lastVRAWidth;
	NSString* currentInterface;
	NSString* previousInterface;
	double timeSinceLastCellTech;
	double previousCellTechDuration;
	double currentCellTechDuration;
	unsigned terminationReason;
	unsigned callNonce;
	char isSender;
	long startTime;
	NSString* currentInterfaceOUI;
	AudioTierHistogram* audioTiers;
	unsigned operatingMode;
	unsigned relayType;
	unsigned callAvgTxRate;
	unsigned callAvgTxRateCount;
	unsigned callAvgRxRate;
	unsigned callAvgRxRateCount;
	long callDuration;
	char initialPrimaryInterfaceFound;
	char currentPrimaryInterfaceIsCell;
	unsigned handoverCellCount;
	unsigned handoverWifiCount;
	char currentDuplicationStateOn;
	char handoverDuringDuplication;
	unsigned handoverWithDuplicationCount;
	unsigned handoverWithoutDuplicationCount;
	unsigned duplicationWithoutHandoverCount;
	unsigned duplicationPercent;
	unsigned rxExcessICEBytes;
	unsigned txExcessICEBytes;
	unsigned rxExcessRTPBytes;
	unsigned txExcessRTPBytes;
	char isRoaming;
	NSObject*<OS_dispatch_queue> submitQueue;

}

@property (assign) float localVideoDegradeTime; 
@property (assign) float remoteVideoDegradeTime; 
@property (readonly) unsigned callNonce; 
+(void)initialize;
+(id)statsSingleton;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)setInterface:(id)arg1 ;
-(void)setTerminationReason:(unsigned)arg1 ;
-(void)setCallReportProtobuf:(unsigned long)arg1 withProtobufData:(id)arg2 forMetricID:(int)arg3 ;
-(void)addValue:(unsigned)arg1 toHistogram:(id)arg2 ;
-(void)addFloatValue:(float)arg1 toHistogram:(id)arg2 ;
-(void)accumulateAverageRate:(unsigned)arg1 ;
-(void)accumulateAvgLossRate:(unsigned)arg1 ;
-(void)accumulateDownlinkEstimate:(unsigned)arg1 ;
-(void)accumulateJitterBufferSize:(unsigned)arg1 ;
-(void)accumulateRxFrameRate:(unsigned)arg1 min:(unsigned)arg2 max:(unsigned)arg3 ;
-(void)accumulateTxFrameRate:(unsigned)arg1 min:(unsigned)arg2 max:(unsigned)arg3 ;
-(void)accumulateUplinkEstimate:(unsigned)arg1 ;
-(void)accumulateAverageInterarrivalTime:(unsigned)arg1 ;
-(void)accumulateAudioFlush:(unsigned)arg1 ;
-(void)accumulateVideoFlush:(unsigned)arg1 ;
-(void)accumulateAudioPauseTime:(unsigned)arg1 ;
-(void)accumulateVideoPauseTime:(unsigned)arg1 ;
-(void)incrementBasebandCount;
-(void)accumulateAverageTransmitRate:(unsigned)arg1 ;
-(void)accumulateAverageReceiveRate:(unsigned)arg1 ;
-(void)accumulateTargetJitterBufferSize:(unsigned)arg1 ;
-(void)addVRAWidth:(unsigned)arg1 ;
-(void)finishVRA;
-(void)finishCellTech;
-(void)stopPIPState;
-(int)sendConnectivityTimingToAWD;
-(int)sendRTStatsToAWD;
-(int)sendHistogramsToAWD;
-(int)sendVideoQualityStatsToAWD;
-(int)sendBasebandStatsToAWD;
-(int)sendVideoStatusToAWD;
-(int)sendInterfaceStatusToAWD;
-(int)sendAudioTierHistogramToAWD;
-(int)sendRTCSessionEndMetricToAWD;
-(void)addRTStatsDictionary:(id)arg1 ;
-(void)addConnectivityTimingDictionary:(id)arg1 ;
-(void)addConnectivityTiming:(tagConnectivityTiming)arg1 ;
-(void)setFirstRemoteFrameTiming:(unsigned)arg1 ;
-(void)setLocalWidth:(unsigned)arg1 height:(unsigned)arg2 framerate:(unsigned)arg3 ;
-(void)setRemoteWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)setRemoteInterface:(id)arg1 ;
-(void)setInterfaceOUI:(id)arg1 ;
-(void)setRXExcessICEBytes:(unsigned)arg1 TXExcessICEBytes:(unsigned)arg2 RXExcessRTPBytes:(unsigned)arg3 TXExcessRTPBytes:(unsigned)arg4 ;
-(void)setRoaming:(char)arg1 ;
-(void)updateCellTech:(id)arg1 ;
-(void)startPIPState;
-(void)callStartIsSender:(BOOL)arg1 forTime:(long)arg2 mode:(unsigned)arg3 ;
-(void)updateAudioTier:(unsigned)arg1 mode:(unsigned)arg2 duplication:(unsigned)arg3 codecPayload:(unsigned)arg4 codecBitrate:(unsigned)arg5 bundling:(unsigned)arg6 ;
-(void)callEnd;
-(void)printHistograms;
-(void)updateLocalPrimaryInterface:(id)arg1 ;
-(void)duplicationStartEvent;
-(void)duplicationStopEvent;
-(void)setDuplicationPercent:(unsigned)arg1 ;
-(float)localVideoDegradeTime;
-(void)setLocalVideoDegradeTime:(float)arg1 ;
-(float)remoteVideoDegradeTime;
-(void)setRemoteVideoDegradeTime:(float)arg1 ;
-(unsigned)callNonce;
-(void)setConnectionType:(unsigned)arg1 ;
@end


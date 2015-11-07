/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWStatisticsSource.h>

@class NSString, NSUUID, NSData;

@interface NWStatisticsUDPSource : NWStatisticsSource {

	nstat_udp_descriptor _descriptor;
	NSString* _processName;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;

}

@property (readonly) int interface; 
@property (readonly) int receiveBufferSize; 
@property (readonly) int receiveBufferUsed; 
@property (readonly) int trafficClass; 
@property (readonly) unsigned long long uniqueProcessID; 
@property (readonly) int processID; 
@property (retain) NSString * processName;                            //@synthesize processName=_processName - In the implementation block
@property (readonly) unsigned long long eupid; 
@property (readonly) int epid; 
@property (retain) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSUUID * euuid;                                    //@synthesize euuid=_euuid - In the implementation block
@property (retain) NSUUID * vuuid;                                    //@synthesize vuuid=_vuuid - In the implementation block
@property (retain) NSData * localAddress;                             //@synthesize localAddress=_localAddress - In the implementation block
@property (retain) NSData * remoteAddress;                            //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (readonly) BOOL interfaceUnknown; 
@property (readonly) BOOL interfaceLoopback; 
@property (readonly) BOOL interfaceCellular; 
@property (readonly) BOOL interfaceWifi; 
@property (readonly) BOOL interfaceWired; 
@property (readonly) BOOL interfaceAWDL; 
@property (readonly) BOOL interfaceExpensive; 
-(int)epid;
-(id)description;
-(NSString *)processName;
-(NSUUID *)uuid;
-(int)interface;
-(int)processID;
-(NSData *)remoteAddress;
-(NSData *)localAddress;
-(void)setLocalAddress:(NSData *)arg1 ;
-(void)setRemoteAddress:(NSData *)arg1 ;
-(id)initWithManager:(id)arg1 local:(const sockaddr*)arg2 remote:(const sockaddr*)arg3 ;
-(id)createCounts;
-(char)handleDescriptor:(void*)arg1 length:(unsigned long)arg2 ;
-(NSUUID *)euuid;
-(NSUUID *)vuuid;
-(id)createNSUUIDForBytes:(unsigned char)arg1 ;
-(void)setEuuid:(NSUUID *)arg1 ;
-(void)setVuuid:(NSUUID *)arg1 ;
-(int)receiveBufferSize;
-(int)receiveBufferUsed;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceCellular;
-(BOOL)interfaceWifi;
-(BOOL)interfaceWired;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceExpensive;
-(void)setUuid:(NSUUID *)arg1 ;
-(int)trafficClass;
-(void)setProcessName:(NSString *)arg1 ;
@end


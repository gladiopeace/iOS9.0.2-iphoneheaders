/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iOSDiagnosticsSupport.framework/iOSDiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSData, NSString;

@interface MBSDevice : NSObject {

	NSMutableDictionary* _deviceInfoDictionary;
	NSData* _logData;
	NSString* _logFileName;

}

@property (retain) NSMutableDictionary * deviceInfoDictionary;              //@synthesize deviceInfoDictionary=_deviceInfoDictionary - In the implementation block
@property (retain) NSData * logData;                                        //@synthesize logData=_logData - In the implementation block
@property (retain) NSString * logFileName;                                  //@synthesize logFileName=_logFileName - In the implementation block
-(void)dealloc;
-(NSMutableDictionary *)deviceInfoDictionary;
-(id)collectBasicDeviceData;
-(id)collectGasGaugeData;
-(id)collectAggdData;
-(void)setDeviceInfoDictionary:(NSMutableDictionary *)arg1 ;
-(char)deviceHasStockholmChip;
-(id)getMaxMinAvgCapacityOfPowerLog;
-(char)createTempDirectory:(unsigned)arg1 ;
-(char)copyLogsToTempDirectory:(unsigned)arg1 ;
-(void)setLogFileName:(NSString *)arg1 ;
-(NSString *)logFileName;
-(void)setLogData:(NSData *)arg1 ;
-(char)archiveLogFile:(id)arg1 toFile:(id)arg2 atDir:(id)arg3 ;
-(char)copyPowerLogsToDir:(id)arg1 ;
-(char)collectAllDeviceInformation;
-(char)collectLogs:(unsigned)arg1 ;
-(NSData *)logData;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/Audio/MIDI Drivers/AppleMIDIBluetoothDriver.plugin/AppleMIDIBluetoothDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface BLEMIDITimeStamper : NSObject {

	NSMutableArray* offsetHistory;
	unsigned long long receivedTime;
	unsigned long long lastReceivedTime;
	unsigned long long lastGeneratedTimestamp;
	unsigned long long lastReceivedOffsetTimestamp;
	unsigned long long averageWaitTime_ns;
	unsigned long long connectionInterval_ns;
	long firstOffset;
	unsigned short lastReceivedOffset;
	char hasBeenReset;

}
-(char)offsetIsUsable:(unsigned short)arg1 numberOfWraps:(unsigned short*)arg2 ;
-(long)modsignWithTimeDifference:(long long)arg1 range:(unsigned short)arg2 ;
-(void)setReceiveTime:(unsigned long long)arg1 ;
-(void)setConnectionIntervalNanos:(unsigned long long)arg1 ;
-(unsigned long long)generateTimeStampForOffset:(unsigned short)arg1 ;
-(void)addOffset:(unsigned short)arg1 ;
-(id)init;
-(void)reset;
@end


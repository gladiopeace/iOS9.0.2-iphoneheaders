/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSString, NSArray, AVAudioFormat, NSData;

@interface AVAudioConverter : NSObject {

	void* _impl;

}

@property (assign,nonatomic) int bitRate; 
@property (nonatomic,retain) NSString * bitRateStrategy; 
@property (nonatomic,readonly) int maximumOutputPacketSize; 
@property (nonatomic,readonly) NSArray * availableEncodeBitRates; 
@property (nonatomic,readonly) NSArray * applicableEncodeBitRates; 
@property (nonatomic,readonly) NSArray * availableEncodeSampleRates; 
@property (nonatomic,readonly) NSArray * applicableEncodeSampleRates; 
@property (nonatomic,readonly) NSArray * availableEncodeChannelLayoutTags; 
@property (nonatomic,readonly) AVAudioFormat * inputFormat; 
@property (nonatomic,readonly) AVAudioFormat * outputFormat; 
@property (nonatomic,retain) NSArray * channelMap; 
@property (nonatomic,retain) NSData * magicCookie; 
@property (assign,nonatomic) char downmix; 
@property (assign,nonatomic) char dither; 
@property (assign,nonatomic) int sampleRateConverterQuality; 
@property (nonatomic,retain) NSString * sampleRateConverterAlgorithm; 
@property (assign,nonatomic) int primeMethod; 
@property (assign,nonatomic) AVAudioConverterPrimeInfo primeInfo; 
-(id)initFromFormat:(id)arg1 toFormat:(id)arg2 ;
-(AVAudioFormat *)inputFormat;
-(char)dither;
-(char)downmix;
-(void)setDither:(char)arg1 ;
-(void)setDownmix:(char)arg1 ;
-(int)sampleRateConverterQuality;
-(void)setSampleRateConverterQuality:(int)arg1 ;
-(NSString *)sampleRateConverterAlgorithm;
-(void)setSampleRateConverterAlgorithm:(NSString *)arg1 ;
-(NSData *)magicCookie;
-(void)setMagicCookie:(NSData *)arg1 ;
-(NSArray *)channelMap;
-(void)setChannelMap:(NSArray *)arg1 ;
-(int)maximumOutputPacketSize;
-(int)primeMethod;
-(void)setPrimeMethod:(int)arg1 ;
-(AVAudioConverterPrimeInfo)primeInfo;
-(void)setPrimeInfo:(AVAudioConverterPrimeInfo)arg1 ;
-(char)convertToBuffer:(id)arg1 fromBuffer:(id)arg2 error:(id*)arg3 ;
-(int)convertToBuffer:(id)arg1 error:(id*)arg2 withInputFromBlock:(/*^block*/id)arg3 ;
-(NSString *)bitRateStrategy;
-(void)setBitRateStrategy:(NSString *)arg1 ;
-(NSArray *)availableEncodeBitRates;
-(NSArray *)applicableEncodeBitRates;
-(NSArray *)availableEncodeSampleRates;
-(NSArray *)applicableEncodeSampleRates;
-(NSArray *)availableEncodeChannelLayoutTags;
-(AVAudioFormat *)outputFormat;
-(void)dealloc;
-(void)reset;
-(void)setBitRate:(int)arg1 ;
-(int)bitRate;
@end


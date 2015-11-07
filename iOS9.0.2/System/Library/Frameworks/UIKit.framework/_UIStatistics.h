/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface _UIStatistics : NSObject {

	NSString* _key;
	double _sampleValue;
	NSMutableSet* _children;
	double _sampleRate;

}

@property (assign,nonatomic) double sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
+(id)tapCount;
+(id)peekCount;
+(id)peekDuration;
+(id)popCount;
+(id)scrubberUsageCount;
+(id)scrubberUsageTime;
-(id)init;
-(id)description;
-(void)setSampleRate:(double)arg1 ;
-(id)initWithDomain:(id)arg1 identifierReporting:(int)arg2 ;
-(void)_resetDistribution;
-(char)_shouldSample;
-(void)_resetDistributionToValue:(double)arg1 ;
-(void)_resetValue;
-(void)_recordDistributionValue:(double)arg1 ;
-(void)_recordDistributionTime:(unsigned long long)arg1 ;
-(void)_setValue:(long long)arg1 ;
-(void)_incrementValueBy:(long long)arg1 ;
-(id)initWithDomain:(id)arg1 ;
-(void)_addChildStatistic:(id)arg1 ;
-(void)_removeChildStatistic:(id)arg1 ;
-(double)sampleRate;
@end


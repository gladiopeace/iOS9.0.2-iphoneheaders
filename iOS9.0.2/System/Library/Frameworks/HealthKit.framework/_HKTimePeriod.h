/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface _HKTimePeriod : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(char)supportsSecureCoding;
+(id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(char)containsDate:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(char)containsTimePeriod:(id)arg1 ;
-(char)overlapsTimePeriod:(id)arg1 ;
-(int)compareByStartDate:(id)arg1 ;
-(int)compareByEndDate:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)startsAfterDate:(id)arg1 ;
-(char)endsBeforeDate:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end


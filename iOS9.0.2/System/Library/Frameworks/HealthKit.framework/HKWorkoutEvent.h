/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface HKWorkoutEvent : NSObject <NSSecureCoding> {

	int _type;
	NSDate* _date;

}

@property (readonly) int type; 
@property (copy,readonly) NSDate * date; 
+(id)_newWorkoutEventWithType:(int)arg1 date:(id)arg2 ;
+(char)supportsSecureCoding;
+(id)_workoutEventWithType:(int)arg1 date:(id)arg2 ;
+(id)workoutEventWithType:(int)arg1 date:(id)arg2 ;
-(id)_validateConfiguration;
-(void)_assertPropertiesValid;
-(void)_setDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)_init;
-(int)type;
-(NSDate *)date;
-(void)_setType:(int)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
@end


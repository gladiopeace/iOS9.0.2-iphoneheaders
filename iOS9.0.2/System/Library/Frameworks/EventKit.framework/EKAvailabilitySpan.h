/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface EKAvailabilitySpan : NSObject {

	int _type;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) int type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(int)arg3 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)init;
-(id)description;
-(int)type;
@end


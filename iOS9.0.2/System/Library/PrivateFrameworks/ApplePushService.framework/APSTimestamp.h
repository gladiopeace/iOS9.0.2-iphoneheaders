/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface APSTimestamp : NSObject {

	NSDate* _date;
	id _value;

}

@property (nonatomic,retain,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
@property (nonatomic,retain,readonly) id value;                   //@synthesize value=_value - In the implementation block
-(void)dealloc;
-(NSDate *)date;
-(id)value;
-(id)initWithValue:(id)arg1 ;
@end


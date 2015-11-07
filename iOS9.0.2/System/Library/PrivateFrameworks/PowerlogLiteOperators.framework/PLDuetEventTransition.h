/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSString;

@interface PLDuetEventTransition : NSObject {

	char _isStart;
	NSDate* _date;
	NSString* _bundleID;

}

@property (retain) NSDate * date;                    //@synthesize date=_date - In the implementation block
@property (retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (assign) char isStart;                     //@synthesize isStart=_isStart - In the implementation block
-(NSString *)bundleID;
-(id)description;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(char)isStart;
-(void)setIsStart:(char)arg1 ;
@end


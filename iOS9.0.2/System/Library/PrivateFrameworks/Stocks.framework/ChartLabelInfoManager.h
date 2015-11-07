/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Stocks/Stocks-Structs.h>
@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject {

	ChartLabelInfo* _yAxisLabelInfo;
	NSMutableArray* _monthLabelInfoArrays;
	NSMutableArray* _integerLabelInfoArray;
	char _use24hrTime;

}
+(id)sharedLabelInfoManager;
+(CFStringRef)_CFDateFormatterPropertyForMonthLabelLength:(int)arg1 ;
+(void)clearSharedManager;
+(id)chartLabelFont;
-(void)dealloc;
-(id)init;
-(void)resetLocale;
-(id)labelInfoForYAxis;
-(id)monthLabelInfoArrayForLabelLength:(int)arg1 ;
-(id)labelInfoWithUnsignedInteger:(unsigned)arg1 ;
-(char)use24hrTime;
-(id)labelInfoWithString:(id)arg1 ;
@end


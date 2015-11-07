/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@class HKValueRange;

@interface WDDateLabel : UILabel {

	int _formatTemplate;
	char _useUppercase;
	HKValueRange* _dateRange;

}

@property (nonatomic,readonly) HKValueRange * dateRange;              //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,readonly) int formatTemplate;                    //@synthesize formatTemplate=_formatTemplate - In the implementation block
@property (assign,nonatomic) char useUppercase;                       //@synthesize useUppercase=_useUppercase - In the implementation block
-(void)setDate:(id)arg1 formatTemplate:(int)arg2 ;
-(void)setUseUppercase:(char)arg1 ;
-(void)setDateRange:(id)arg1 formatTemplate:(int)arg2 ;
-(char)_setFormatTemplate:(int)arg1 ;
-(char)_setDateRange:(id)arg1 ;
-(id)_formattedText;
-(id)_formattedTextFromDate:(id)arg1 ;
-(char)useUppercase;
-(id)init;
-(HKValueRange *)dateRange;
-(int)formatTemplate;
@end


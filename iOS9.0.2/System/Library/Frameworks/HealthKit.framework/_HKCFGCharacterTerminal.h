/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/_HKCFGTerminal.h>

@class NSCharacterSet;

@interface _HKCFGCharacterTerminal : _HKCFGTerminal {

	NSCharacterSet* _characterSet;

}

@property (nonatomic,copy) NSCharacterSet * characterSet;              //@synthesize characterSet=_characterSet - In the implementation block
-(unsigned)_minimumLength;
-(char)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
-(id)_label;
-(void)setCharacterSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)characterSet;
@end


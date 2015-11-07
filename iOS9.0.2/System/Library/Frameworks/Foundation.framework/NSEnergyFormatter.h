/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSString, NSNumberFormatter;

@interface NSEnergyFormatter : NSFormatter <NSObservable, NSObserver> {

	void* _formatter;
	char _isForFoodEnergyUse;
	void** _reserved[2];

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSNumberFormatter * numberFormatter; 
@property (assign) int unitStyle; 
@property (getter=isForFoodEnergyUse) char forFoodEnergyUse;              //@synthesize isForFoodEnergyUse=_isForFoodEnergyUse - In the implementation block
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(id)unitStringFromValue:(double)arg1 unit:(int)arg2 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)stringFromValue:(double)arg1 unit:(int)arg2 ;
-(char)isForFoodEnergyUse;
-(int)targetUnitFromJoules:(double)arg1 ;
-(id)stringFromJoules:(double)arg1 ;
-(id)unitStringFromJoules:(double)arg1 usedUnit:(int*)arg2 ;
-(void)setForFoodEnergyUse:(char)arg1 ;
-(int)unitStyle;
-(void)setUnitStyle:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)receiveObservedValue:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
@end


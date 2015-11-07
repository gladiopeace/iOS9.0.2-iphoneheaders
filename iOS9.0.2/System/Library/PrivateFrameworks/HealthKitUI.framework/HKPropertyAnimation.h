/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CAMediaTimingFunction, NSDate;

@interface HKPropertyAnimation : NSObject <NSCopying> {

	NSString* _property;
	id _fromValue;
	id _toValue;
	CAMediaTimingFunction* _timingFunction;
	int _secondaryAnimationCurve;
	/*^block*/id _completion;
	/*^block*/id _propertyApplicationFunction;
	NSDate* _appliedDate;
	double _duration;

}

@property (nonatomic,retain) NSString * property;                                 //@synthesize property=_property - In the implementation block
@property (nonatomic,retain) id fromValue;                                        //@synthesize fromValue=_fromValue - In the implementation block
@property (nonatomic,retain) id toValue;                                          //@synthesize toValue=_toValue - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) int secondaryAnimationCurve;                         //@synthesize secondaryAnimationCurve=_secondaryAnimationCurve - In the implementation block
@property (nonatomic,copy) id completion;                                         //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id propertyApplicationFunction;                        //@synthesize propertyApplicationFunction=_propertyApplicationFunction - In the implementation block
@property (nonatomic,retain) NSDate * appliedDate;                                //@synthesize appliedDate=_appliedDate - In the implementation block
-(void)setProperty:(NSString *)arg1 ;
-(id)init;
-(double)duration;
-(CAMediaTimingFunction *)timingFunction;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fromValue;
-(void)setFromValue:(id)arg1 ;
-(void)setToValue:(id)arg1 ;
-(id)toValue;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)_validate;
-(void)setPropertyApplicationFunction:(id)arg1 ;
-(void)setSecondaryAnimationCurve:(int)arg1 ;
-(void)_applyWithCurrentDate:(id)arg1 ;
-(char)_isCompleted;
-(void)_finish;
-(int)secondaryAnimationCurve;
-(id)propertyApplicationFunction;
-(NSDate *)appliedDate;
-(void)setAppliedDate:(NSDate *)arg1 ;
-(NSString *)property;
@end


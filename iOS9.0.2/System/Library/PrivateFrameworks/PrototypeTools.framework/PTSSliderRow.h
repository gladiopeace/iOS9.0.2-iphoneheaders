/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PTSRow.h>

@interface PTSSliderRow : PTSRow {

	float _minValue;
	float _maxValue;

}

@property (assign,nonatomic) float minValue;              //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) float maxValue;              //@synthesize maxValue=_maxValue - In the implementation block
-(float)maxValue;
-(id)init;
-(float)minValue;
-(void)setMaxValue:(float)arg1 ;
-(void)setMinValue:(float)arg1 ;
-(id)minValue:(float)arg1 maxValue:(float)arg2 ;
-(void)updateWithRow:(id)arg1 ;
-(Class)rowTableViewCellClass;
@end


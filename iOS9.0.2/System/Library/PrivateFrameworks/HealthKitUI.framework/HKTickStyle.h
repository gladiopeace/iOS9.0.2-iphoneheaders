/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKStrokeStyle.h>

@interface HKTickStyle : HKStrokeStyle {

	char _shouldRenderMajorTickMarks;
	float _tickLength;
	int _tickDirection;

}

@property (assign,nonatomic) float tickLength;                             //@synthesize tickLength=_tickLength - In the implementation block
@property (assign,nonatomic) int tickDirection;                            //@synthesize tickDirection=_tickDirection - In the implementation block
@property (assign,nonatomic) char shouldRenderMajorTickMarks;              //@synthesize shouldRenderMajorTickMarks=_shouldRenderMajorTickMarks - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)tickLength;
-(int)tickDirection;
-(char)shouldRenderMajorTickMarks;
-(void)setTickLength:(float)arg1 ;
-(void)setTickDirection:(int)arg1 ;
-(void)setShouldRenderMajorTickMarks:(char)arg1 ;
@end


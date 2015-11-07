/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <libobjc.A.dylib/HKZoomScale.h>

@class HKValueRange, NSString;

@interface HKDateZoomScale : NSObject <HKZoomScale> {

	float _previousZoomScale;
	int _previousZoom;
	HKValueRange* _valueRange;

}

@property (nonatomic,copy) HKValueRange * valueRange;               //@synthesize valueRange=_valueRange - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)zoomForZoomScale:(float)arg1 ;
-(HKValueRange *)valueRange;
-(id)minDate;
-(id)maxDate;
-(float)zoomScaleForRange:(HKRange)arg1 ;
-(void)setValueRange:(HKValueRange *)arg1 ;
@end


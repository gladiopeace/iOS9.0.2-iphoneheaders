/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKUserLocationAnnotation.h>

@protocol MKUserLocationAnnotation <MKAnnotation>
@required
-(void)setAccuracy:(double)arg1;

@end


@class NSString;

@interface MKUserLocationAnnotation : NSObject <MKUserLocationAnnotation> {

	SCD_Struct_MK1 _coordinate;
	double _accuracy;

}

@property (assign,nonatomic) double accuracy;                          //@synthesize accuracy=_accuracy - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(void)setAccuracy:(double)arg1 ;
-(void)setCoordinate:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK1)coordinate;
-(double)accuracy;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPAddressLocation.h>
@class CLPlacemark;


@protocol RAPAddressLocation <NSObject>
@property (nonatomic,readonly) SCD_Struct_MN1 coordinate; 
@property (nonatomic,readonly) CLPlacemark * placemark; 
@required
-(void)cancelProcessing;
-(void)processWithGeocoderIfNeededWithCompletion:(/*^block*/id)arg1;
-(CLPlacemark *)placemark;
-(SCD_Struct_MN1)coordinate;

@end


@class CLPlacemark, CLGeocoder, NSMutableArray, NSString;

@interface RAPAddressLocation : NSObject <RAPAddressLocation> {

	CLGeocoder* _geocoder;
	NSMutableArray* _completionBlocks;
	CLPlacemark* _placemark;
	SCD_Struct_RA7 _coordinate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_RA7 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) CLPlacemark * placemark;                //@synthesize placemark=_placemark - In the implementation block
-(void)_invokeCompletionBlocksWithFinishedFlag:(char)arg1 ;
-(void)cancelProcessing;
-(void)processWithGeocoderIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(CLPlacemark *)placemark;
-(SCD_Struct_RA7)coordinate;
-(id)initWithCoordinate:(SCD_Struct_RA7)arg1 ;
@end


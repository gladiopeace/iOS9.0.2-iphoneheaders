/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iap2d/iAP2IdentificationParameter.h>

@class NSNumber;

@interface iAP2CameraFormat : iAP2IdentificationParameter {

	NSNumber* _horizontalResolution;
	NSNumber* _verticalResolution;
	NSNumber* _bitDepth;
	int _codec;
	NSNumber* _minimumISO;
	NSNumber* _maximumISO;

}

@property (assign) NSNumber * horizontalResolution;              //@synthesize horizontalResolution=_horizontalResolution - In the implementation block
@property (assign) NSNumber * verticalResolution;                //@synthesize verticalResolution=_verticalResolution - In the implementation block
@property (assign) NSNumber * bitDepth;                          //@synthesize bitDepth=_bitDepth - In the implementation block
@property (assign) int codec;                                    //@synthesize codec=_codec - In the implementation block
@property (assign) NSNumber * minimumISO;                        //@synthesize minimumISO=_minimumISO - In the implementation block
@property (assign) NSNumber * maximumISO;                        //@synthesize maximumISO=_maximumISO - In the implementation block
-(NSNumber *)horizontalResolution;
-(void)setHorizontalResolution:(NSNumber *)arg1 ;
-(NSNumber *)verticalResolution;
-(void)setVerticalResolution:(NSNumber *)arg1 ;
-(NSNumber *)bitDepth;
-(void)setBitDepth:(NSNumber *)arg1 ;
-(NSNumber *)minimumISO;
-(void)setMinimumISO:(NSNumber *)arg1 ;
-(NSNumber *)maximumISO;
-(void)setMaximumISO:(NSNumber *)arg1 ;
-(id)init;
-(int)codec;
-(void)setCodec:(int)arg1 ;
@end


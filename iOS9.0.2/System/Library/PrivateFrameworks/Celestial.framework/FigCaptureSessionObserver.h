/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FigCaptureSessionObserver <NSObject>
@property (readonly) int photoThumbnailMaxDimension; 
@property (readonly) char photoThumbnailQualitySpecified; 
@property (readonly) float photoThumbnailQuality; 
@required
-(void)captureSessionDidStop:(long long)arg1;
-(void)captureSessionDidStart:(id)arg1;
-(int)photoThumbnailMaxDimension;
-(char)photoThumbnailQualitySpecified;
-(float)photoThumbnailQuality;
-(void)captureSession:(long long)arg1 didCapturePhotoWithStatus:(long)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4;

@end


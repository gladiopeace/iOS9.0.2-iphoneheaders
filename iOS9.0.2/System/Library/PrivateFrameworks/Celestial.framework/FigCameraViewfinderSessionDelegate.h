/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FigCameraViewfinderSessionDelegate <NSObject>
@optional
-(void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(long)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4;
-(void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1;
-(void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(long)arg2;

@end

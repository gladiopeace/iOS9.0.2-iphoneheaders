/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, FigCaptureStillImageSettings, FigCaptureRecordingSettings;

@interface BWNodeError : NSObject {

	int _uniqueID;
	long _errorCode;
	NSString* _sourceNodeDescription;
	FigCaptureStillImageSettings* _stillImageSettings;
	FigCaptureRecordingSettings* _recordingSettings;

}

@property (readonly) long errorCode; 
@property (readonly) NSString * sourceNodeDescription; 
@property (readonly) FigCaptureStillImageSettings * stillImageSettings; 
@property (readonly) FigCaptureRecordingSettings * recordingSettings; 
+(id)newError:(long)arg1 sourceNode:(id)arg2 stillImageSettings:(id)arg3 ;
+(id)newError:(long)arg1 sourceNode:(id)arg2 ;
+(id)newError:(long)arg1 sourceNode:(id)arg2 recordingSettings:(id)arg3 ;
-(void)dealloc;
-(unsigned)hash;
-(FigCaptureStillImageSettings *)stillImageSettings;
-(FigCaptureRecordingSettings *)recordingSettings;
-(id)_initWithError:(long)arg1 sourceNode:(id)arg2 stillImageSettings:(id)arg3 recordingSettings:(id)arg4 ;
-(NSString *)sourceNodeDescription;
-(long)errorCode;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BWNodeFileWriterStatusDelegate <NSObject>
@required
-(void)fileWriter:(id)arg1 startedRecordingForSettingsID:(unsigned long long)arg2;
-(void)fileWriter:(id)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2;
-(void)fileWriter:(id)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2;
-(void)fileWriter:(id)arg1 stoppedRecordingForSettings:(id)arg2 withError:(long)arg3 thumbnailSurface:(IOSurfaceRef)arg4 irisMovieInfo:(id)arg5 recordingSucceeded:(char)arg6;

@end


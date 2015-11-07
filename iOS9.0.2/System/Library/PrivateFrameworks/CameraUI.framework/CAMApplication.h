/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIApplication.h>

@class CAMPerformanceTestHarness;

@interface CAMApplication : UIApplication {

	CAMPerformanceTestHarness* _currentTestHarness;

}

@property (nonatomic,retain) CAMPerformanceTestHarness * currentTestHarness;              //@synthesize currentTestHarness=_currentTestHarness - In the implementation block
-(id)_extendLaunchTest;
-(unsigned)supportedInterfaceOrientationsForWindow:(id)arg1 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(char)runTest:(id)arg1 options:(id)arg2 ;
-(void)_registerPreviewStartBlock:(/*^block*/id)arg1 ;
-(CAMPerformanceTestHarness *)currentTestHarness;
-(void)didChangeToMode:(int)arg1 device:(int)arg2 ;
-(void)setCurrentTestHarness:(CAMPerformanceTestHarness *)arg1 ;
-(char)runTakePictureTestWithTestName:(id)arg1 options:(id)arg2 prototype:(id)arg3 ;
-(char)runTakePictureTestWithFrontCamera:(id)arg1 options:(id)arg2 prototype:(id)arg3 ;
-(char)runSwitchCamerasTestWithName:(id)arg1 options:(id)arg2 ;
-(char)runSwitchModesTestWithName:(id)arg1 options:(id)arg2 ;
-(void)_configureExtendedLaunchTestIfNeeded;
@end


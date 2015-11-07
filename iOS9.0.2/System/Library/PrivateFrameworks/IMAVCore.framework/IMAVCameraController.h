/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray, IMAVCamera;

@interface IMAVCameraController : NSObject {

	NSMutableArray* _cameras;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain,readonly) NSArray * cameras; 
@property (nonatomic,retain) IMAVCamera * currentCamera; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSArray *)cameras;
-(void)setCurrentCamera:(IMAVCamera *)arg1 ;
-(id)cameraWithDeviceID:(unsigned)arg1 ;
-(void)_rebuildCameraList;
-(void)_loadSavedCamera;
-(IMAVCamera *)currentCamera;
@end


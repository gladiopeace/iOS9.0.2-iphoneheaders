/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IMAVCamera : NSObject {

	id _internalDevice;

}

@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) int cameraStyle; 
@property (nonatomic,readonly) char isWideScreen; 
@property (nonatomic,readonly) char hasShutter; 
@property (nonatomic,readonly) char isShutterOpen; 
@property (nonatomic,readonly) char isSuspended; 
-(char)isSuspended;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)name;
-(NSString *)uniqueID;
-(int)cameraStyle;
-(id)_initWithAVCamera:(id)arg1 ;
-(char)isWideScreen;
-(char)hasShutter;
-(char)isShutterOpen;
-(id)_AVCamera;
@end


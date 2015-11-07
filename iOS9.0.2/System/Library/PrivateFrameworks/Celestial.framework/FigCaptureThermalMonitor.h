/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FigCaptureThermalMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _registrationToken;
	/*^block*/id _torchHandler;
	float _maxTorchLevel;

}

@property (nonatomic,readonly) float maxTorchLevel;              //@synthesize maxTorchLevel=_maxTorchLevel - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)initWithThermalHandler:(/*^block*/id)arg1 ;
-(float)maxTorchLevel;
-(void)_thermalNotification:(int)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSensorRecorderInternal : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	CLConnectionClient* fLocationdConnection;

}
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(id)newAccelMetaSinceID:(unsigned long long)arg1 ;
-(id)newAccelMetaFrom:(double)arg1 to:(double)arg2 ;
-(id)newAccelMetaByID:(unsigned long long)arg1 ;
-(id)newAccelDataByID:(unsigned long long)arg1 ;
-(id)_newAccelMetaUsingMessage:(const char*)arg1 withIdentifier:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
@end


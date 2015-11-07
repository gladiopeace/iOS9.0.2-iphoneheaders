/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSMutableSet;

@interface _NACAudioRoutesRecord : NSObject {

	NSArray* _audioRoutes;
	NSArray* _deferredAudioRoutes;
	NSMutableSet* _observers;
	double _timestamp;

}

@property (nonatomic,retain) NSArray * audioRoutes;                      //@synthesize audioRoutes=_audioRoutes - In the implementation block
@property (nonatomic,retain) NSArray * deferredAudioRoutes;              //@synthesize deferredAudioRoutes=_deferredAudioRoutes - In the implementation block
@property (nonatomic,retain) NSMutableSet * observers;                   //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) double timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(NSArray *)deferredAudioRoutes;
-(void)setDeferredAudioRoutes:(NSArray *)arg1 ;
-(NSArray *)audioRoutes;
-(void)setAudioRoutes:(NSArray *)arg1 ;
@end

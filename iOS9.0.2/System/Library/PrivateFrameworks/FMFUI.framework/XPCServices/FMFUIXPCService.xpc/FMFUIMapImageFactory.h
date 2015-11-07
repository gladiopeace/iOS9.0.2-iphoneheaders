/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/XPCServices/FMFUIXPCService.xpc/FMFUIXPCService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MKMapSnapshotter;

@interface FMFUIMapImageFactory : NSObject {

	MKMapSnapshotter* _snapshotter;

}

@property (nonatomic,retain) MKMapSnapshotter * snapshotter;              //@synthesize snapshotter=_snapshotter - In the implementation block
+(id)sharedInstance;
-(MKMapSnapshotter *)snapshotter;
-(void)setSnapshotter:(MKMapSnapshotter *)arg1 ;
-(id)init;
-(void)mapImageForFMFLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


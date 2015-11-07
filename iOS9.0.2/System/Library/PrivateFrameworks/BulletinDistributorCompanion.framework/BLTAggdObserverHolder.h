/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>

@class BBObserver, NSString;

@interface BLTAggdObserverHolder : NSObject <BBObserverDelegate> {

	BBObserver* _observer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 playLightsAndSirens:(char)arg4 withReply:(/*^block*/id)arg5 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(char)arg2 ;
-(void)_reconnectObserver;
@end


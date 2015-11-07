/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPClientRadioController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface MPRadioController : NSObject <MPClientRadioController> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSXPCConnection* _connection;
	char _isRadioAvailable;

}

@property (getter=isRadioAvailable,nonatomic,readonly) char radioAvailable; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setRadioAvailable:(char)arg1 ;
-(void)clientRadioControllerRadioAvailabilityDidChange:(char)arg1 ;
-(void)clientRadioControllerRecentStationsDidChange;
-(char)isRadioAvailable;
-(void)getRecentStationGroupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_connection;
@end


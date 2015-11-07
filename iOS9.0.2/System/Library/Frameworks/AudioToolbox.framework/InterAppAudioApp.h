/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AudioToolbox/AudioToolbox-Structs.h>
@class BKSApplicationStateMonitor, NSString, UIImage, NSURL;

@interface InterAppAudioApp : NSObject {

	BKSApplicationStateMonitor* appMonitor;
	char _isHost;
	char _isCurrentApp;
	char _isForeground;
	int _key;
	NSString* _name;
	UIImage* _icon;
	NSURL* _url;

}

@property (nonatomic,readonly) int key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSURL * url;                    //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) char isHost;                    //@synthesize isHost=_isHost - In the implementation block
@property (nonatomic,readonly) char isCurrentApp;              //@synthesize isCurrentApp=_isCurrentApp - In the implementation block
@property (nonatomic,readonly) char isForeground;              //@synthesize isForeground=_isForeground - In the implementation block
-(char)processRunningOnForeground:(int)arg1 ;
-(id)init:(const InterAppAudioAppInfo*)arg1 iconSize:(float)arg2 ;
-(char)isHost;
-(char)isCurrentApp;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(int)key;
-(NSURL *)url;
-(UIImage *)icon;
-(char)isForeground;
@end


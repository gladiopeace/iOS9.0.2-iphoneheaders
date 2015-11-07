/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface IMCallMonitor : NSObject {

	id _callCenter;
	char _wasOnCall;
	NSDate* _lastCallDate;

}

@property (nonatomic,readonly) char isOnCall; 
@property (nonatomic,retain,readonly) NSDate * dateLastCallEnded;              //@synthesize lastCallDate=_lastCallDate - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(char)isOnCall;
-(NSDate *)dateLastCallEnded;
@end


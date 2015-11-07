/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSDate;

@interface IMTimer : NSObject {

	id _timer;
	id _target;
	NSDictionary* _userInfo;
	NSString* _name;
	double _timeInterval;
	SEL _selector;
	char _wakeDevice;

}

@property (nonatomic,retain,readonly) id userInfo;                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain,readonly) NSDate * fireDate; 
-(void)dealloc;
-(void)invalidate;
-(id)userInfo;
-(NSDate *)fireDate;
-(id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(char)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 ;
-(id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(char)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(char)arg7 ;
-(void)setFireTimeInterval:(double)arg1 ;
@end


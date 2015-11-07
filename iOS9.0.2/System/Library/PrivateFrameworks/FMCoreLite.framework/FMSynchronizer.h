/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSString, NSObject;

@interface FMSynchronizer : NSObject {

	char _timeoutOccurred;
	NSString* _info;
	NSObject*<OS_dispatch_semaphore> _sem;
	double _timeout;

}

@property (assign,nonatomic) char timeoutOccurred;                              //@synthesize timeoutOccurred=_timeoutOccurred - In the implementation block
@property (assign,nonatomic) double timeout;                                    //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * info;                                   //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sem;              //@synthesize sem=_sem - In the implementation block
-(double)timeout;
-(NSString *)info;
-(void)signal;
-(void)setInfo:(NSString *)arg1 ;
-(id)initWithDescription:(id)arg1 andTimeout:(double)arg2 ;
-(id)loggingID;
-(char)timeoutOccurred;
-(void)setTimeoutOccurred:(char)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)wait;
-(NSObject*<OS_dispatch_semaphore>)sem;
-(void)setSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <libobjc.A.dylib/PCConnectionManagerDelegate.h>

@class PCConnectionManager, NSString;

@interface TechKeepAliveScheduler : NSObject <PCConnectionManagerDelegate> {

	PCConnectionManager* _manager;
	int _contextID;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopKeepAlive;
-(void)startKeepAlive;
-(void)growKeepAliveInterval;
-(void)shrinkKeepAliveInterval;
-(id)initWithContextID:(int)arg1 delegateQueue:(dispatch_queue_sRef)arg2 maxInterval:(double)arg3 ;
-(void)dealloc;
-(void)connectionManager:(id)arg1 handleEvent:(int)arg2 ;
@end


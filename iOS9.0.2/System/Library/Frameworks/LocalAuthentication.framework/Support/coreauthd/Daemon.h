/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <coreauthd/coreauthd-Structs.h>
#import <libobjc.A.dylib/LAContextManager.h>

@interface Daemon : NSObject <LAContextManager>
+(void)logLiveContexts;
+(id)_contextMap;
+(id)_contextForACMContext:(id)arg1 ;
+(void)_addContext:(id)arg1 ;
+(void)connectToContext:(id)arg1 uiDelegate:(id)arg2 callback:(id)arg3 auditToken:(SCD_Struct_Ca0)arg4 pid:(int)arg5 invalidationBlock:(/*^block*/id)arg6 reply:(/*^block*/id)arg7 ;
+(void)_cleanup;
+(id)serialQueue;
-(void)connectToContext:(id)arg1 uiDelegate:(id)arg2 callback:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)prearmTouchIdWithReply:(/*^block*/id)arg1 ;
@end


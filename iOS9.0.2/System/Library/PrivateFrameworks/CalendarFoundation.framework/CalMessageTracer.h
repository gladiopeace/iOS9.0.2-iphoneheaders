/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CalMessageTracer : NSObject
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 signature2:(id)arg4 summarize:(char)arg5 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 summarize:(char)arg6 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 signature2:(id)arg4 result:(int)arg5 value:(id)arg6 value2:(id)arg7 value3:(id)arg8 uid:(id)arg9 uid2:(id)arg10 wakeState:(id)arg11 summarize:(char)arg12 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 value2:(id)arg6 uid:(id)arg7 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 ;
+(void)logError:(id)arg1 message:(id)arg2 domain:(id)arg3 uid:(id)arg4 ;
+(void)traceWithDomain:(id)arg1 signature:(id)arg2 signature2:(id)arg3 summarize:(char)arg4 ;
+(void)traceWithDomain:(id)arg1 signature:(id)arg2 result:(int)arg3 ;
+(void)traceWithDomain:(id)arg1 signature:(id)arg2 summarize:(char)arg3 ;
+(void)traceWithDomain:(id)arg1 value:(id)arg2 summarize:(char)arg3 ;
+(void)log:(id)arg1 domain:(id)arg2 summarize:(char)arg3 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 summarize:(char)arg4 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 value2:(id)arg6 value3:(id)arg7 uid:(id)arg8 uid2:(id)arg9 wakeState:(id)arg10 ;
+(void)logException:(id)arg1 message:(id)arg2 domain:(id)arg3 ;
+(void)logError:(id)arg1 message:(id)arg2 domain:(id)arg3 ;
@end


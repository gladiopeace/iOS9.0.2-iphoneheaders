/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ServerDocsProtocol/ServerDocsProtocol-Structs.h>
@interface SDFTimeUtils : NSObject
+(void)setTimeVal:(timeval*)arg1 withDate:(id)arg2 ;
+(void)setTimeSpec:(timespec*)arg1 withDate:(id)arg2 ;
+(void)setTimeVal:(timeval*)arg1 withTimeSpec:(timespec*)arg2 ;
+(void)setTimeSpec:(timespec*)arg1 withTimeVal:(timeval*)arg2 ;
+(double)timeIntervalWithTimeSpec:(timespec*)arg1 ;
+(double)timeIntervalWithTimeVal:(timeval*)arg1 ;
@end


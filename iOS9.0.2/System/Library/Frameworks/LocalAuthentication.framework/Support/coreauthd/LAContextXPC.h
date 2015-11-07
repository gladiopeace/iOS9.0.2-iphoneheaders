/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol LAContextXPC
@required
-(void)evaluateACL:(id)arg1 operation:(int)arg2 options:(id)arg3 reply:(/*^block*/id)arg4;
-(void)enterPassword:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setCredential:(id)arg1 type:(int)arg2 onlyGet:(char)arg3 reply:(/*^block*/id)arg4;
-(void)serverPropertyForOption:(int)arg1 reply:(/*^block*/id)arg2;
-(void)setServerPropertyForOption:(int)arg1 value:(id)arg2 reply:(/*^block*/id)arg3;
-(void)evaluatePolicy:(int)arg1 options:(id)arg2 reply:(/*^block*/id)arg3;
-(void)failProcessedEvent:(int)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3;

@end


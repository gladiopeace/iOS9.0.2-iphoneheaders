/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BiometricKitDelegate <NSObject>
@optional
-(void)enrollResult:(id)arg1;
-(void)matchResult:(id)arg1;
-(void)matchResult:(id)arg1 withDetails:(id)arg2;
-(void)statusMessage:(unsigned)arg1;
-(void)enrollProgress:(id)arg1;
-(void)homeButtonPressed;
-(void)templateUpdate:(id)arg1 withDetails:(id)arg2;
-(void)taskResumeStatus:(long)arg1;

@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SGDeviceState : NSObject
+(void)blockUntilFirstUnlock;
+(void)registerBlockForFirstUnlock:(/*^block*/id)arg1 ;
+(char)isClassCLocked;
+(char)isDeviceFormattedForProtection;
+(char)isConstrainedDevice;
+(void)registerForLockStateChangeNotifications:(/*^block*/id)arg1 ;
+(int)lockState;
+(id)currentOsBuild;
+(char)isUnlocked;
@end


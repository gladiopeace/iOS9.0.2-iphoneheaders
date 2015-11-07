/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FMSystemInfo : NSObject
+(id)sharedInstance;
-(id)deviceClass;
-(id)deviceName;
-(id)deviceUDID;
-(id)deviceModelName;
-(id)imei;
-(id)meid;
-(char)isDeviceSecured;
-(id)ownerAccount;
-(void)authTokenOfType:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)isInternalBuild;
-(id)osVersion;
-(id)productType;
-(id)osBuildVersion;
-(id)serialNumber;
-(id)productName;
@end


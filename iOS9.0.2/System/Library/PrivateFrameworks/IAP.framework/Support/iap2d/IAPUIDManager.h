/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IAPUIDManager : NSObject
+(id)sharedIAPUIDManager;
-(unsigned)iapUID:(id)arg1 ;
-(BOOL)removeIAPUID:(unsigned)arg1 ;
-(id)objectForIAPUID:(unsigned)arg1 ;
-(BOOL)isIAPUIDPresent:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
@end


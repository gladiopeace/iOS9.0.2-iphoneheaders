/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IDSSocketPairConnectionDelegate <NSObject>
@optional
-(void)connectionDidReachInFlightMessageLowWaterMark:(id)arg1;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 withIdentifier:(unsigned)arg3;
-(void)connection:(id)arg1 didReceiveDataMessage:(id)arg2;
-(void)connectionDidReceiveBytes:(id)arg1;
-(void)connectionBecameEmpty:(id)arg1;
-(void)connectionDidClose:(id)arg1;

@end


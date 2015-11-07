/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface COSReachabilityMonitor : NSObject {

	char _isNetworkReachable;
	char _isConnectedOverWifi;

}

@property (assign,nonatomic) char isNetworkReachable;               //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (assign,nonatomic) char isConnectedOverWifi;              //@synthesize isConnectedOverWifi=_isConnectedOverWifi - In the implementation block
+(id)sharedMonitor;
-(char)isConnectedOverWifi;
-(void)setIsConnectedOverWifi:(char)arg1 ;
-(void)startMonitoring;
-(char)isNetworkReachable;
-(id)init;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)stopMonitoring;
-(void)setIsNetworkReachable:(char)arg1 ;
@end

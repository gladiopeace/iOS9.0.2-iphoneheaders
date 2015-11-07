/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/GKDaemonProxyNetworkActivityIndicatorDelegate.h>

@class NSString;

@interface GKNetworkActivityIndicatorDelegate : NSObject <GKDaemonProxyNetworkActivityIndicatorDelegate> {

	int _networkIndicatorCount;

}

@property (assign,nonatomic) int networkIndicatorCount;              //@synthesize networkIndicatorCount=_networkIndicatorCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)networkIndicatorCount;
-(void)setNetworkIndicatorCount:(int)arg1 ;
-(void)beginNetworkActivity;
-(void)endNetworkActivity;
-(void)resetNetworkActivity;
@end


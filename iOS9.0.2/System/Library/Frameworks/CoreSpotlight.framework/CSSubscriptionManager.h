/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PSSSSubscriptionManager;

@interface CSSubscriptionManager : NSObject {

	PSSSSubscriptionManager* _internal;

}
+(id)sharedManager;
-(void)registerSubscriptionWithInfo:(id)arg1 expirationDate:(id)arg2 ;
-(void)unregisterSubscriptionWithInfo:(id)arg1 ;
-(void)unregisterAllSubscriptions;
-(id)init;
@end


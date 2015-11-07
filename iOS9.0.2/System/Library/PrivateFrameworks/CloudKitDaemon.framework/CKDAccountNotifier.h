/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSOperationQueue;

@interface CKDAccountNotifier : NSObject {

	int _accountChangedToken;
	NSMapTable* _notificationHandlers;
	NSOperationQueue* _accountChangeHandlerQueue;

}

@property (assign,nonatomic) int accountChangedToken;                                   //@synthesize accountChangedToken=_accountChangedToken - In the implementation block
@property (nonatomic,retain) NSMapTable * notificationHandlers;                         //@synthesize notificationHandlers=_notificationHandlers - In the implementation block
@property (nonatomic,retain) NSOperationQueue * accountChangeHandlerQueue;              //@synthesize accountChangeHandlerQueue=_accountChangeHandlerQueue - In the implementation block
+(id)sharedNotifier;
-(void)dealloc;
-(id)init;
-(void)postAccountChangedNotification:(id)arg1 ;
-(void)registerObserver:(id)arg1 forAccountChangeNotification:(/*^block*/id)arg2 ;
-(void)unregisterObserverForAccountChangeNotification:(id)arg1 ;
-(NSMapTable *)notificationHandlers;
-(NSOperationQueue *)accountChangeHandlerQueue;
-(int)accountChangedToken;
-(void)setAccountChangedToken:(int)arg1 ;
-(void)setNotificationHandlers:(NSMapTable *)arg1 ;
-(void)setAccountChangeHandlerQueue:(NSOperationQueue *)arg1 ;
@end


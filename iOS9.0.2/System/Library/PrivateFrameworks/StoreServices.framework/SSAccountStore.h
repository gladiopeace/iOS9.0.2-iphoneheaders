/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSKeyValueStore, NSMutableArray, SSAccount, NSArray;

@interface SSAccountStore : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSKeyValueStore* _keyValueStore;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSMutableArray* _notifyTokens;

}

@property (readonly) SSAccount * activeAccount; 
@property (readonly) SSAccount * activeLockerAccount; 
@property (copy,readonly) NSArray * accounts; 
@property (getter=isExpired,readonly) char expired; 
@property (getter=isAuthenticationActive,readonly) char authenticationActive; 
+(id)defaultStore;
+(char)isExpiredForTokenType:(int)arg1 ;
+(void)resetExpirationForTokenType:(int)arg1 ;
+(double)tokenExpirationInterval;
+(void)setDefaultStore:(id)arg1 ;
+(char)isExpired;
+(void)resetExpiration;
+(id)existingDefaultStore;
-(SSAccount *)activeLockerAccount;
-(void)dealloc;
-(id)init;
-(SSAccount *)activeAccount;
-(id)addAccount:(id)arg1 ;
-(void)signOutAccount:(id)arg1 ;
-(void)reloadAccounts;
-(id)_keyValueStore;
-(char)isExpiredForTokenType:(int)arg1 ;
-(void)resetExpirationForTokenType:(int)arg1 ;
-(id)accountWithUniqueIdentifier:(id)arg1 scope:(int)arg2 ;
-(id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(char)arg2 ;
-(void)getDefaultAccountNameUsingBlock:(/*^block*/id)arg1 ;
-(char)isAuthenticationActive;
-(void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2 ;
-(void)setDefaultAccountName:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_dispatchAsync:(/*^block*/id)arg1 ;
-(void)_dispatchSync:(/*^block*/id)arg1 ;
-(void)_postAccountStoreChangeNotification;
-(void)signOutAllAccounts;
-(id)accountWithUniqueIdentifier:(id)arg1 ;
-(char)isExpired;
-(NSArray *)accounts;
-(id)setActiveAccount:(SSAccount *)arg1 ;
-(id)setActiveLockerAccount:(SSAccount *)arg1 ;
-(void)resetExpiration;
@end


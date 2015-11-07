/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, ACAccountStore, NSArray;

@interface CalAccountsProvider : NSObject {

	char _runningUnitTests;
	NSMutableArray* _accountsWhenRunningUnitTests;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) NSMutableArray * accountsWhenRunningUnitTests;              //@synthesize accountsWhenRunningUnitTests=_accountsWhenRunningUnitTests - In the implementation block
@property (nonatomic,readonly) NSArray * allAccounts; 
@property (nonatomic,readonly) NSArray * enabledAccounts; 
@property (assign,nonatomic) char runningUnitTests;                                      //@synthesize runningUnitTests=_runningUnitTests - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                              //@synthesize accountStore=_accountStore - In the implementation block
+(id)uniqueStringsForHostname:(id)arg1 ;
+(char)accountIsDuplicate:(id)arg1 inStore:(id)arg2 ;
+(id)_uniqueStringsForUsername:(id)arg1 ;
+(id)_accountTypeWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(id)_accountsWithAccountType:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
+(id)_existingAccountForAccount:(id)arg1 inStore:(id)arg2 ;
+(id)defaultProvider;
+(id)uniqueStringsForPrincipalPath:(id)arg1 ;
+(id)calDAVChildForParentAccount:(id)arg1 ;
+(id)verboseDescriptionForAccount:(id)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)init;
-(id)_accountWithIdentifier:(id)arg1 ;
-(id)allAccountsWithError:(id*)arg1 ;
-(id)_supportedDataclassesForMainBundleID;
-(id)accountsWithServerURL:(id)arg1 ;
-(id)accountsWithUsername:(id)arg1 ;
-(id)accountWithIdentifier:(id)arg1 returnCachedVersion:(char)arg2 ;
-(char)runningUnitTests;
-(NSMutableArray *)accountsWhenRunningUnitTests;
-(id)_cachedAccountWithIdentifier:(id)arg1 ;
-(id)_providerForCalDAVAccount:(id)arg1 ;
-(char)renewCredentialsForAccount:(id)arg1 forceRenewal:(char)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 forceRenewal:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)saveAccount:(id)arg1 verify:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)saveAccount:(id)arg1 verify:(char)arg2 withError:(id*)arg3 ;
-(id)_supportedDataclassesForBundleID:(id)arg1 ;
-(char)account:(id)arg1 hasServerURL:(id)arg2 ;
-(char)accountIsDuplicate:(id)arg1 ;
-(id)accountsWithServerURL:(id)arg1 username:(id)arg2 returnCachedVersions:(char)arg3 ;
-(id)clientTokenForAccountWithIdentifier:(id)arg1 ;
-(id)delegatePrincipalUIDsForAccount:(id)arg1 ;
-(id)existingAccountForAccount:(id)arg1 ;
-(void)messageTraceCurrentAccounts;
-(id)oauthTokenForAccount:(id)arg1 tokenType:(id)arg2 ;
-(char)removeAccount:(id)arg1 withError:(id*)arg2 ;
-(char)renewCredentialsForAccount:(id)arg1 ;
-(char)saveAccount:(id)arg1 withError:(id*)arg2 ;
-(void)setAccountsWhenRunningUnitTests:(NSMutableArray *)arg1 ;
-(void)setRunningUnitTests:(char)arg1 ;
-(void)removeAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSArray *)enabledAccounts;
-(NSArray *)allAccounts;
-(void)saveAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)accountTypeWithIdentifier:(id)arg1 ;
@end

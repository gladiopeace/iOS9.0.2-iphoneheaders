/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AAAccountManager, AAAccount, NSDictionary, NSURL;

@interface SYDAccount : NSObject {

	AAAccountManager* _accountManager;
	AAAccount* _account;
	char _allowsCellular;
	NSDictionary* _accountProperties;
	char _needsToReloadAccount;

}

@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,readonly) NSURL * serverURL; 
@property (nonatomic,readonly) char allowsCellular;                    //@synthesize allowsCellular=_allowsCellular - In the implementation block
+(id)enabledAccountForManager:(id)arg1 ;
-(char)allowsCellular;
-(void)_loadAccountIfNecessary;
-(void)_accountsChangedNotification;
-(void)dealloc;
-(id)init;
-(id)description;
-(char)isValid;
-(void)shutdown;
-(id)credentials;
-(NSURL *)serverURL;
@end


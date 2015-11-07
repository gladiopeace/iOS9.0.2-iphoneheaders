/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSMutableSet, ACAccount, NSSet, NSDate;

@interface ACAccountCredential : NSObject <NSSecureCoding> {

	NSMutableDictionary* _credentialItems;
	NSString* _credentialType;
	NSMutableSet* _dirtyProperties;
	ACAccount* _owningAccount;
	char _dirty;
	char _empty;

}

@property (nonatomic,copy) NSString * oauthToken; 
@property (nonatomic,copy) NSString * token; 
@property (nonatomic,copy) NSString * oauthTokenSecret; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * credentialType; 
@property (nonatomic,readonly) NSSet * dirtyProperties;               //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (assign,getter=isDirty,nonatomic) char dirty;               //@synthesize dirty=_dirty - In the implementation block
@property (assign,getter=isEmpty,nonatomic) char empty;               //@synthesize empty=_empty - In the implementation block
@property (nonatomic,copy) NSString * oauthTokenNoSync; 
@property (nonatomic,copy) NSString * oauthRefreshToken; 
@property (nonatomic,retain) NSDate * expiryDate; 
@property (nonatomic,copy) NSString * findMyiPhoneToken; 
@property (nonatomic,copy) NSString * mapsToken; 
@property (nonatomic,copy) NSString * hsaToken; 
@property (nonatomic,copy) NSDate * tokenExpiryDate; 
+(id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2 ;
+(char)supportsSecureCoding;
+(id)supportedKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2 ;
+(id)nonPersistentKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2 ;
+(id)credentialPolicyForAccountType:(id)arg1 key:(id)arg2 clientID:(id)arg3 ;
+(id)credentialWithPassword:(id)arg1 ;
-(void)_clearDirtyProperties;
-(void)_setOwningAccount:(id)arg1 ;
-(void)_markPropertyDirty:(id)arg1 ;
-(id)credentialItems;
-(id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2 ;
-(void)setOauthTokenNoSync:(NSString *)arg1 ;
-(NSString *)oauthTokenNoSync;
-(NSDate *)tokenExpiryDate;
-(void)setTokenExpiryDate:(NSDate *)arg1 ;
-(void)setEmpty:(char)arg1 ;
-(NSSet *)dirtyProperties;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setOauthTokenSecret:(NSString *)arg1 ;
-(NSString *)oauthTokenSecret;
-(void)setOauthToken:(NSString *)arg1 ;
-(NSString *)oauthToken;
-(NSString *)credentialType;
-(NSString *)oauthRefreshToken;
-(id)initWithOAuth2Token:(id)arg1 refreshToken:(id)arg2 expiryDate:(id)arg3 ;
-(NSDate *)expiryDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isEmpty;
-(void)setDirty:(char)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(id)keysForCredentialItems;
-(NSString *)hsaToken;
-(NSString *)findMyiPhoneToken;
-(void)setMapsToken:(NSString *)arg1 ;
-(void)setHsaToken:(NSString *)arg1 ;
-(void)setFindMyiPhoneToken:(NSString *)arg1 ;
-(id)initWithPassword:(id)arg1 ;
-(NSString *)mapsToken;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(id)credentialItemForKey:(id)arg1 ;
-(void)setCredentialItem:(id)arg1 forKey:(id)arg2 ;
-(void)setOauthRefreshToken:(NSString *)arg1 ;
-(void)setCredentialType:(NSString *)arg1 ;
-(char)isDirty;
@end


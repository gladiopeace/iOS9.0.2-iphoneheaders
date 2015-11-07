/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerCredential, NSURL;

@interface GKAuthenticateResponse : GKInternalRepresentation {

	char _loginDisabled;
	char _passwordChangeRequired;
	char _shouldShowLinkAccountsUI;
	GKPlayerCredential* _credential;
	NSURL* _passwordChangeURL;

}

@property (nonatomic,retain) GKPlayerCredential * credential;              //@synthesize credential=_credential - In the implementation block
@property (assign,nonatomic) char loginDisabled;                           //@synthesize loginDisabled=_loginDisabled - In the implementation block
@property (assign,nonatomic) char passwordChangeRequired;                  //@synthesize passwordChangeRequired=_passwordChangeRequired - In the implementation block
@property (nonatomic,retain) NSURL * passwordChangeURL;                    //@synthesize passwordChangeURL=_passwordChangeURL - In the implementation block
@property (assign,nonatomic) char shouldShowLinkAccountsUI;                //@synthesize shouldShowLinkAccountsUI=_shouldShowLinkAccountsUI - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)setCredential:(GKPlayerCredential *)arg1 ;
-(void)dealloc;
-(void)setLoginDisabled:(char)arg1 ;
-(char)passwordChangeRequired;
-(void)setPasswordChangeRequired:(char)arg1 ;
-(NSURL *)passwordChangeURL;
-(void)setPasswordChangeURL:(NSURL *)arg1 ;
-(char)shouldShowLinkAccountsUI;
-(void)setShouldShowLinkAccountsUI:(char)arg1 ;
-(GKPlayerCredential *)credential;
-(char)loginDisabled;
@end


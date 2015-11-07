/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURLAuthenticationChallenge, NSString;

@interface ISAuthenticationChallenge : NSObject {

	NSURLAuthenticationChallenge* _challenge;
	NSString* _localizedMessage;
	NSString* _localizedTitle;

}

@property (retain) NSString * localizedMessage;                                  //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (retain) NSString * localizedTitle;                                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (readonly) char hasPassword; 
@property (retain,readonly) NSString * password; 
@property (retain,readonly) NSString * user; 
@property (readonly) int failureCount; 
@property (readonly) char userNameIsEditable; 
@property (readonly) char userNameIsEmail; 
@property (readonly) id<NSURLAuthenticationChallengeSender> sender; 
-(NSString *)user;
-(NSString *)password;
-(void)setLocalizedMessage:(NSString *)arg1 ;
-(NSString *)localizedMessage;
-(void)dealloc;
-(id<NSURLAuthenticationChallengeSender>)sender;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)cancelAuthentication;
-(int)failureCount;
-(char)hasPassword;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 ;
-(char)userNameIsEditable;
-(char)userNameIsEmail;
@end


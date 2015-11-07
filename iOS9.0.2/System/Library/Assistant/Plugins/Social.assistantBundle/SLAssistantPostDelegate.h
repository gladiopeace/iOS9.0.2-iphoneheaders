/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/Plugins/Social.assistantBundle/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSBundle;


@protocol SLAssistantPostDelegate <NSObject>
@property (readonly) NSString * accountTypeIdentifier; 
@property (retain) NSString * lastAccountIdentifier; 
@property (readonly) NSBundle * locationPermissionBundle; 
@required
-(void)playPostSound;
-(id)requestForPostWithStatus:(id)arg1 latitude:(id)arg2 longitude:(id)arg3;
-(void)verifyCredentialsForAccount:(id)arg1 completion:(/*^block*/id)arg2;
-(void)verifyGeotagSettingsForAccount:(id)arg1 defaultSetting:(char)arg2 completion:(/*^block*/id)arg3;
-(id)extractErrorDetailsFromResponseData:(id)arg1 urlResponse:(id)arg2;
-(NSString *)lastAccountIdentifier;
-(void)setLastAccountIdentifier:(id)arg1;
-(char)responseDataIndicatesDuplicatePost:(id)arg1 urlResponse:(id)arg2;
-(NSBundle *)locationPermissionBundle;
-(NSString *)accountTypeIdentifier;

@end


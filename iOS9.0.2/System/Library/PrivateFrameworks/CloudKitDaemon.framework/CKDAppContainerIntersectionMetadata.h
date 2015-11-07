/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CKDAppContainerIntersectionMetadata : NSObject {

	int _tokenRegistered;
	int _usesAPSPublicToken;
	int _darkWakeEnabled;

}

@property (assign,nonatomic) int tokenRegistered;                 //@synthesize tokenRegistered=_tokenRegistered - In the implementation block
@property (assign,nonatomic) int usesAPSPublicToken;              //@synthesize usesAPSPublicToken=_usesAPSPublicToken - In the implementation block
@property (assign,nonatomic) int darkWakeEnabled;                 //@synthesize darkWakeEnabled=_darkWakeEnabled - In the implementation block
-(id)init;
-(void)setUsesAPSPublicToken:(int)arg1 ;
-(void)setDarkWakeEnabled:(int)arg1 ;
-(int)usesAPSPublicToken;
-(int)darkWakeEnabled;
-(int)tokenRegistered;
-(void)setTokenRegistered:(int)arg1 ;
@end

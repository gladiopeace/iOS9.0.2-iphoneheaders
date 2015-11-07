/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSTermsAndConditions : NSObject <NSCopying> {

	char _requiresAuthentication;
	NSString* _text;
	char _userAccepted;
	long long _versionID;

}

@property (assign,getter=isUserAccepted,nonatomic) char userAccepted;              //@synthesize userAccepted=_userAccepted - In the implementation block
@property (assign,nonatomic) NSString * currentText;                               //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long currentVersionIdentifier;                   //@synthesize versionID=_versionID - In the implementation block
@property (nonatomic,readonly) char requiresAuthentication;                        //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
-(char)requiresAuthentication;
-(id)initWithResponseData:(id)arg1 error:(id*)arg2 ;
-(char)isUserAccepted;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)currentText;
-(void)setCurrentText:(NSString *)arg1 ;
-(long long)currentVersionIdentifier;
-(void)setCurrentVersionIdentifier:(long long)arg1 ;
-(void)setUserAccepted:(char)arg1 ;
@end


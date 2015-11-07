/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKAccountInfo : NSObject <NSCopying, NSSecureCoding> {

	char _isUnitTestingAccount;
	char _accountWantsPushRegistration;
	NSString* _email;
	NSString* _password;

}

@property (nonatomic,readonly) NSString * email;                             //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * password;                          //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) char isUnitTestingAccount;                      //@synthesize isUnitTestingAccount=_isUnitTestingAccount - In the implementation block
@property (assign,nonatomic) char accountWantsPushRegistration;              //@synthesize accountWantsPushRegistration=_accountWantsPushRegistration - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithEmail:(id)arg1 password:(id)arg2 ;
-(NSString *)password;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isUnitTestingAccount;
-(id)CKPropertiesDescription;
-(void)setIsUnitTestingAccount:(char)arg1 ;
-(char)accountWantsPushRegistration;
-(void)setAccountWantsPushRegistration:(char)arg1 ;
-(NSString *)email;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNSocialProfile : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {

	NSString* _urlString;
	NSString* _username;
	NSString* _userIdentifier;
	NSString* _service;
	NSString* _displayname;

}

@property (nonatomic,copy) NSString * urlString;                    //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier;               //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * service;                      //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * displayname;                  //@synthesize displayname=_displayname - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedStringForService:(id)arg1 ;
+(id)localizedStringForKey:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5 ;
-(void)setDisplayname:(NSString *)arg1 ;
-(id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 ;
-(NSString *)displayname;
-(NSString *)userIdentifier;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)service;
-(char)isValid:(id*)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(void)setService:(NSString *)arg1 ;
@end


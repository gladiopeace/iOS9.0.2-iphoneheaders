/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSNumber;

@interface SASource : SADomainObject

@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) NSString * accountName; 
@property (nonatomic,copy) NSString * domainIdentifier; 
@property (nonatomic,copy) NSNumber * remote; 
+(id)source;
+(id)sourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)domainIdentifier;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSNumber *)remote;
-(void)setRemote:(NSNumber *)arg1 ;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
@end


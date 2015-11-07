/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAUserActivity : SADomainObject

@property (nonatomic,copy) NSString * internalGUID; 
@property (assign,nonatomic) char isEligibleForReminders; 
+(id)userActivity;
+(id)userActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)internalGUID;
-(void)setInternalGUID:(NSString *)arg1 ;
-(char)isEligibleForReminders;
-(void)setIsEligibleForReminders:(char)arg1 ;
@end


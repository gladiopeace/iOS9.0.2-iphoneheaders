/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, SAPersonAttribute, NSNumber;

@interface SAPhoneCallSearchResult : SADomainObject

@property (nonatomic,copy) NSDate * callTime; 
@property (nonatomic,retain) SAPersonAttribute * contact; 
@property (nonatomic,copy) NSNumber * isNew; 
+(id)callSearchResult;
+(id)callSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)isNew;
-(void)setContact:(SAPersonAttribute *)arg1 ;
-(SAPersonAttribute *)contact;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setIsNew:(NSNumber *)arg1 ;
-(NSDate *)callTime;
-(void)setCallTime:(NSDate *)arg1 ;
@end


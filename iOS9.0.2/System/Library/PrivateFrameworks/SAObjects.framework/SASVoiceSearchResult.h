/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSData, NSString, NSNumber;

@interface SASVoiceSearchResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * headers; 
@property (nonatomic,copy) NSData * result; 
@property (nonatomic,copy) NSString * searchType; 
@property (nonatomic,copy) NSNumber * statusCode; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)voiceSearchResult;
+(id)voiceSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDictionary *)headers;
-(void)setSearchType:(NSString *)arg1 ;
-(NSNumber *)statusCode;
-(NSData *)result;
-(void)setStatusCode:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSString *)searchType;
-(void)setResult:(NSData *)arg1 ;
@end


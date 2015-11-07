/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SALocalSearchAttribution : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * attributionId; 
@property (nonatomic,copy) NSArray * urls; 
@property (assign,nonatomic) int version; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attribution;
+(id)attributionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(NSString *)attributionId;
-(void)setAttributionId:(NSString *)arg1 ;
@end


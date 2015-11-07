/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SALocalSearchOfferList : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * offers; 
@property (nonatomic,copy) NSString * providerId; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)offerList;
+(id)offerListWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)providerId;
-(void)setProviderId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setOffers:(NSArray *)arg1 ;
-(NSArray *)offers;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSData, NSDictionary;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {

	id _internal;

}

@property (nonatomic,copy,readonly) NSString * productIdentifier; 
@property (nonatomic,copy,readonly) NSData * requestData; 
@property (nonatomic,readonly) int quantity; 
@property (nonatomic,copy,readonly) NSString * applicationUsername; 
@property (nonatomic,readonly) char simulatesAskToBuyInSandbox; 
@property (nonatomic,copy,readonly) NSString * partnerIdentifier; 
@property (nonatomic,copy,readonly) NSString * partnerTransactionIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * requestParameters; 
+(id)paymentWithProduct:(id)arg1 ;
+(id)paymentWithProductIdentifier:(id)arg1 ;
-(NSString *)productIdentifier;
-(NSString *)applicationUsername;
-(char)simulatesAskToBuyInSandbox;
-(NSString *)partnerTransactionIdentifier;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSData *)requestData;
-(int)quantity;
-(NSString *)partnerIdentifier;
-(NSDictionary *)requestParameters;
@end


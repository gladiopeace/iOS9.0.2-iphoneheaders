/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentAvailableProductsRequest : PKPaymentWebServiceRequest {

	NSString* _type;

}

@property (nonatomic,copy) NSString * type;              //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)initWithType:(id)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData;

@interface PKPaymentMerchantData : NSObject {

	NSString* _merchantIdentifier;
	NSData* _applicationData;

}

@property (nonatomic,retain) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,retain) NSData * applicationData;                   //@synthesize applicationData=_applicationData - In the implementation block
-(NSString *)merchantIdentifier;
-(NSData *)applicationData;
-(void)dealloc;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(void)setApplicationData:(NSData *)arg1 ;
-(id)encode;
@end


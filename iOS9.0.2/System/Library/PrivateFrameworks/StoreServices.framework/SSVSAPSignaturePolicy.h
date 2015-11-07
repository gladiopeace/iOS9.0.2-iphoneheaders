/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SSVSAPSignaturePolicy : NSObject <NSCopying> {

	int _policyType;
	NSArray* _signatureComponents;

}

@property (nonatomic,readonly) int policyType;                                  //@synthesize policyType=_policyType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * signatureComponents;              //@synthesize signatureComponents=_signatureComponents - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPolicyType:(int)arg1 ;
-(id)initWithSignedActionsDictionary:(id)arg1 ;
-(id)initWithPolicyType:(int)arg1 signatureComponents:(id)arg2 ;
-(id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2 ;
-(int)policyType;
-(id)dataToSignWithURLRequest:(id)arg1 ;
-(id)_dataToSignWithDataSource:(id)arg1 ;
-(id)dataToSignWithRequestProperties:(id)arg1 ;
-(NSArray *)signatureComponents;
@end


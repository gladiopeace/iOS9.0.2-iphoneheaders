/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSNumber, NSString;

@interface PKPaymentForbiddenResponse : PKPaymentWebServiceResponse {

	NSNumber* _errorCode;
	NSString* _localizedTitle;
	NSString* _localizedDescription;

}

@property (nonatomic,retain) NSNumber * errorCode;                         //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
-(void)dealloc;
-(NSString *)localizedDescription;
-(id)initWithData:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSNumber *)errorCode;
-(void)setErrorCode:(NSNumber *)arg1 ;
@end

